#include "..\script_component.hpp"
/*
 * Author: johnb43
 * Switches weapon variants.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Args <ARRAY>
 * - 0: Old Weapon <STRING>
 * - 1: New Weapon <STRING>
 * - 2: Delay until switch happens <NUMBER> (default: 0)
 * 2: Function to execute <CODE> (default: {})
 * 3: Arguments to pass to functon <ARRAY> (default: [])
 * 4: Condition <ARRAY> (default: [true, true])
 * - 0: Check if in vehicle <BOOLEAN> (default: Action isn't exectuted if unit is in a vehicle)
 * - 1: Check if rhs_fold_checkOptic should be checked <BOOLEAN> (default: Action isn't exectuted if unit has optic mounted)
 *
 * Return Value:
 * None
 *
 * Public: No
 *
 * Example:
 * [player, ["rhs_weap_ak74m", "rhs_weap_ak74m_npz", 3], {hint _this}] call wb_rhs_main_fnc_switchWeaponVariant;
 */

params [["_unit", objNull, [objNull]], ["_args", ["", "", "", true], [[]], [0, 1, 2, 3, 4]], ["_function", {}, [{}]], ["_params", []], ["_condition", [true, true], [[], true], [0, 1, 2]]];
_args params [["_weapon", "", [""]], ["_newWeapon", "", [""]], ["_delay", 0, [0]]];

// If invalid, exit
if (isNull _unit || {_weapon == ""} || {_newWeapon == ""} || {_weapon == _newWeapon}) exitWith {false};

// Check if local
if (!local _unit) exitWith {
    _this remoteExecCall [QFUNC(switchWeaponVariant), _unit];

    false
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

if (_weaponType == -1 || {_newWeaponType == -1}) exitWith {
    // Call function that is added as a parameter
    if (_function isNotEqualTo {}) then {
        [[_unit, _loadout select 0, _newWeapon, _weaponState, false], _params] call _function;
    };

    false
};

// Current weapon
private _weaponInfo = _loadout select _weaponType;

_condition params [["_checkVehicle", true, [true]], ["_checkOptic", true, [true]]];

// If in vehicle, don't do action; Check if weapon can be folded when optic is attached to weapon. Default value: 1
if ((_checkVehicle && {!isNull objectParent _unit}) || {_checkOptic && {([_cfgWeapons >> _weapon, "rhs_fold_checkOptic", 1] call BIS_fnc_returnConfigEntry) == 1} && {(_weaponInfo select 3) != ""}}) exitWith {
    // Call function that is added as a parameter
    if (_function isNotEqualTo {}) then {
        [[_unit, _weaponInfo, _newWeapon, _weaponState, false], _params] call _function;
    };

    false
};

private _removeWeapon = _weaponType isNotEqualTo _newWeaponType;

// Check if weapon can be swapped out properly
if (_removeWeapon && {(_loadout select _newWeaponType) isNotEqualTo []}) exitWith {
    hint format ["Your %1 slot must be empty to do this action.", ["rifle", "launcher", "pistol"] select _newWeaponType];

    // Call function that is added as a parameter
    if (_function isNotEqualTo {}) then {
        [[_unit, _weaponInfo, _newWeapon, _weaponState, false], _params] call _function;
    };

    false
};

// Call function that is added as a parameter
if (_function isNotEqualTo {}) then {
    private _return = [[_unit, _weaponInfo, _newWeapon, _weaponState, true], _params] call _function;

    if (isNil "_return" || {!(_return isEqualType true)} || {!_return}) exitWith {};

    // Refresh loadout if _function returns true
    _weaponInfo = (getUnitLoadout _unit) select _weaponType;
};

// Lock any further input, until action is finished
wb_interactionWeaponInProgress = true;

[{
    params ["_unit", "_weaponInfo", "_newWeapon", "_weaponState", "_zeroingIndex", "_removeWeapon"];
    _weaponInfo params ["_weapon", "_muzzle", "_siderail", "_scope", "_primaryMuzzleMagInfo", "_secondaryMuzzleMagInfo", "_underbarrel"];

    private _flashlight = _unit isFlashlightOn _weapon;
    private _IR = _unit isIRLaserOn _weapon;

    if (_removeWeapon) then {
        _unit removeWeapon (_weaponState select 0);
    };

    // Add new weapon with nothing, so it avoids eating mags
    [_unit, _newWeapon] call CBA_fnc_addWeaponWithoutItems;

    // Give old mags & attachments back if possible
    {
        if (_x isEqualTo [] || {_x isEqualTo ""}) then {
            continue;
        };

        if (
            if (_x isEqualType []) then {
                _newWeapon canAdd (_x select 0)
            } else {
                _newWeapon canAdd _x
            }
        ) then {
            _unit addWeaponItem [_newWeapon, _x, true];
        } else {
            // Drop on ground if no space in player's inventory
            if (_x isEqualType []) then {
                [_unit, _x select 0, _x select 1, true] call CBA_fnc_addMagazine;
            } else {
                [_unit, _x, true] call CBA_fnc_addItem;
            };
        };
    } forEach [_primaryMuzzleMagInfo, _secondaryMuzzleMagInfo, _muzzle, _siderail, _scope, _underbarrel];

    _weaponState params ["", "_oldMuzzle", "_firemode"];

    // Apply saved firemode; Try secondary muzzle first, then try normal muzzle
    if !(_unit selectWeapon [_newWeapon, _oldMuzzle, _firemode]) then {
        _unit selectWeapon [_newWeapon, _newWeapon, _firemode];
    };

    // Set weapon zeroing; Try secondary muzzle first, then try normal muzzle
    if !(_unit setWeaponZeroing [_newWeapon, _oldMuzzle, _zeroingIndex]) then {
        _unit setWeaponZeroing [_newWeapon, _newWeapon, _zeroingIndex];
    };

    if (_flashlight) then {
        _unit action ["GunLightOn", _unit]
    };

    if (_IR) then {
        _unit action ["IRLaserOn", _unit];
    };

    wb_interactionWeaponInProgress = false;
}, [_unit, _weaponInfo, _newWeapon, _weaponState, (_unit currentZeroing [_weaponState select 0, _weaponState select 1]) select 1, _removeWeapon], _delay] call CBA_fnc_waitAndExecute;

true
