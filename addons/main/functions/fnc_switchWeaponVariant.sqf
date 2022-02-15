#include "script_component.hpp"

/*
 * Author: johnb43
 * Switches weapon variants.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Args <ARRAY>
 *      0: Current Weapon <STRING>
 *      1: New Weapon <STRING>
 *      2: Delay until switch happens <NUMBER> (optional)
 *      3: Select weapon after change has happened <BOOL> (optional)
 * 4: Function to execute <CODE> (optional)
 * 5: Condition <ARRAY> (optional)
 *      0: Check if in vehicle <BOOLEAN> Action isn't exectuted by default if unit is in a vehicle
 *      1: Check if rhs_fold_checkOptic should be checked <BOOLEAN> Action isn't exectuted by default if unit has optic mounted
 *
 * Return Value:
 * None
 *
 * Public: No
 *
 * Example:
 * [player, ["rhs_weap_ak74m", "rhs_weap_ak74m_npz", 3], {hint _this}] call wb_rhs_main_fnc_switchWeaponVariant;
 */

params [["_unit", objNull, [objNull]], ["_args", ["", "", "", true], [[]], [0, 1, 2, 3, 4]], ["_function", {}, [{}]], ["_condition", [true, true], [[], true], [0, 1, 2]]];
_args params [["_weapon", "", [""]], ["_newWeapon", "", [""]], ["_delay", 0, [0]], ["_selectWeapon", true, [true]]];

// If invalid, exit
if (isNull _unit || _weapon isEqualTo "" || _newWeapon isEqualTo "" || _weapon == _newWeapon) exitWith {false};

// Check if local
if (!local _unit) exitWith {
    _this remoteExecCall ["wb_rhs_main_fnc_switchWeaponVariant", _unit];
    false;
};

// Get weapon info
private _loadout = getUnitLoadout _unit;
private _weaponState = weaponState _unit;
private _cfgWeapons = configFile >> "CfgWeapons";
([_weapon, _newWeapon] apply {
    switch (getNumber (_cfgWeapons >> _x >> "type")) do {
        case 1: {0}; // primaryWeapon
        case 2: {2}; // handgunWeapon
        case 4: {1}; // secondaryWeapon
        default {-1}; // invalid
    };
}) params ["_weaponType", "_newWeaponType"];

if (_weaponType isEqualTo -1 || _newWeaponType isEqualTo -1) exitWith {
    // Call function that is added as a parameter
    if (_function isNotEqualTo {}) then {
        [_unit, _loadout select 0, _newWeapon, _weaponState, false] call _function;
    };

    false;
};

// Current weapon
private _weaponInfo = _loadout select _weaponType;

_condition params [["_checkVehicle", true, [true]], ["_checkOptic", true, [true]]];

// If in vehicle, don't do action; Check if weapon can be folded when optic is attached to weapon. Default value: 1
if ((_checkVehicle && {!isNull objectParent _unit}) || (_checkOptic && {([_cfgWeapons >> _weapon, "rhs_fold_checkOptic", 1] call BIS_fnc_returnConfigEntry) isEqualTo 1} && {(_weaponInfo select 3) isNotEqualTo ""})) exitWith {
    // Call function that is added as a parameter
    if (_function isNotEqualTo {}) then {
        [_unit, _weaponInfo, _newWeapon, _weaponState, false] call _function;
    };

    false;
};

// Check if weapon can be swapped out properly
if (_weaponType isNotEqualTo _newWeaponType && {(_loadout select _newWeaponType) isNotEqualTo []}) exitWith {
    hint format ["Your %1 slot must be empty to do this action.", ["rifle", "launcher", "pistol"] select _newWeaponType];

    // Call function that is added as a parameter
    if (_function isNotEqualTo {}) then {
        [_unit, _weaponInfo, _newWeapon, _weaponState, false] call _function;
    };

    false;
};

// Call function that is added as a parameter
if (_function isNotEqualTo {}) then {
    private _return = [_unit, _weaponInfo, _newWeapon, _weaponState, true] call _function;

    if (isNil "_return" || {!(_return isEqualType true)} || {!_return}) exitWith {};

    // Refresh loadout if _function returns true
    _weaponInfo = (getUnitLoadout _unit) select _weaponType;
};

// Lock any further input, until action is finished
GVAR(interactionWeaponInProgress) = true;

[{
    params ["_unit", "_weaponInfo", "_newWeapon", "_weaponState", "_selectWeapon"];
    _weaponInfo params ["_weapon", "_muzzle", "_siderail", "_scope", "_primaryMuzzleMagInfo", "_secondaryMuzzleMagInfo", "_underbarrel"];

    // Add new weapon with nothing, so it avoids eating mags
    [_unit, _newWeapon] call CBA_fnc_addWeaponWithoutItems;

    private _compatibleMags = [_newWeapon, true] call CBA_fnc_compatibleMagazines;
    private _compatibleItems = _newWeapon call CBA_fnc_compatibleItems;

    // Give old mags back if possible
    {
        if (_x isEqualTo []) then {
            continue;
        };

        _x params ["_magazine", "_ammoCount"];

        if (_magazine in _compatibleMags) then {
            _unit addWeaponItem [_newWeapon, _x, true];
        } else {
            // Drop on ground if no space in player's inventory
            [_unit, _magazine, _ammoCount, true] call CBA_fnc_addMagazine;
        };
    } forEach [_primaryMuzzleMagInfo, _secondaryMuzzleMagInfo];

    // Give old attachments back if possible
    {
        if (_x isEqualTo "") then {
            continue;
        };

        if (_x in _compatibleItems) then {
            _unit addWeaponItem [_newWeapon, _x, true];
        } else {
            // Drop on ground if no space in player's inventory
            [_unit, _x, true] call CBA_fnc_addItem;
        };
    } foreach [_muzzle, _siderail, _scope, _underbarrel];

    // Apply saved firemode
    if (_selectWeapon) then {
        if !([_unit, _weaponState select 1, _weaponState select 2] call CBA_fnc_selectWeapon) then {
            [_unit, _newWeapon, _weaponState select 2] call CBA_fnc_selectWeapon;
        };
    } else {
        [_unit, _newWeapon, _weaponState select 2] call CBA_fnc_selectWeapon;
    };

    /*
    2.08
    if !(_unit selectWeapon [_newWeapon, _weaponState select 1, _weaponState select 2]) then {
        _unit selectWeapon [_newWeapon, _newWeapon, _weaponState select 2];
    };
    */

    GVAR(interactionWeaponInProgress) = false;
}, [_unit, _weaponInfo, _newWeapon, _weaponState, _weaponType isEqualTo _newWeaponType], _delay + 0.1] call CBA_fnc_waitAndExecute;

true;
