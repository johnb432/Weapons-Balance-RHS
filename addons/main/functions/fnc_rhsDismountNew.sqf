#include "script_component.hpp"
/*
 * Author: johnb43, reyhard
 * Dovetail to picatinny converter dismounting handler
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon <STRING>
 * 2: is NPZ or MTZ <BOOLEAN>
 *
 * Return Value:
 * If successful or not.
 *
 * Public: No
 */

params ["_unit", "_weapon", "_isNPZ"];

//detect type of weapon - pistol or rifle?
if !(isNull objectParent _unit && {currentWeapon _unit isEqualTo _weapon}) exitWith {false};

private _items = primaryWeaponItems _unit;

// If weapon has an optic, don't do action
if (_items select 2 isNotEqualTo "") exitWith {false};

GVAR(interactionWeaponInProgress) = true;

// Need to check if UGL ammo is empty, otherwise it will give extra one
private _magazineUGL = (primaryWeaponMagazine _unit) param [1, ""];
private _muzzleUGL = ((_weapon call CBA_fnc_getMuzzles) select {_x != _weapon && {_x != "SAFE"} && {_x != "FOLD"}}) select 0;

private _weaponState = weaponState _unit;

// If the UGL is currently selected, get information on the main muzzle
if (!isNil "_muzzleUGL" && {currentMuzzle _unit == _muzzleUGL}) then {
    // This syntax does not get the firemode correctly
    _weaponState = _unit weaponState _weapon;
};

// variable time length; need to do waitUntil animation finished
_unit playMoveNow "MountOptic";

_unit setVariable [QGVAR(dismountDovetailRailAdapter), [_weaponState, getText (configFile >> "CfgWeapons" >> _weapon >> ["rhs_mtz", "rhs_npz"] select _isNPZ), _muzzleUGL, _magazineUGL, [_unit ammo _muzzleUGL, 0] select (_magazineUGL isEqualTo ""), _items, ["rhs_acc_mtz", "rhs_acc_npz"] select _isNPZ]];

_unit addEventHandler ["AnimDone", {
    params ["_unit", "_anim"];

    if (toLower _anim isNotEqualTo "mountoptic") exitWith {};

    _unit removeEventHandler ["AnimDone", _thisEventHandler];

    // Get information for new weapon
    private _array = _unit getVariable [QGVAR(dismountDovetailRailAdapter), nil];

    if (isNil "_array") exitWith {};

    // The needed parameters for giving the unit a non-dovetail-adapter variant
    _array params ["_weaponState", "_newWeapon", "_muzzleUGL", "_magazineUGL", "_ammoCountUGL", "_items", "_dovetailType"];

    // Add new weapon with nothing, so it avoids eating mags
    [_unit, _newWeapon] call CBA_fnc_addWeaponWithoutItems;

    // Apply saved firemode
    [_unit, _newWeapon, _weaponState select 2] call CBA_fnc_selectWeapon;

    /*
    2.08
    _unit selectWeapon [_newWeapon, _newWeapon, _weaponState select 2];
    */

    // Give old mags back if possible
    private _magazine = _weaponState select 3;

    if (_magazine isNotEqualTo "") then {
        _unit addWeaponItem [_newWeapon, [_magazine, _weaponState select 4], true];
    };

    if (!isNil "_muzzleUGL" && {_magazineUGL isNotEqualTo ""}) then {
        _unit addWeaponItem [_newWeapon, [_magazineUGL, _ammoCountUGL], true];
    };

    // Give old attachments back
    {
        if (_x isNotEqualTo "") then {
            _unit addPrimaryWeaponItem _x;
        };
    } foreach _items;

    // Add rail converter to player's inventory; drop on ground if inventory is full
    [_unit, _dovetailType, true] call CBA_fnc_addItem;

    _unit setVariable [QGVAR(dismountDovetailRailAdapter), nil];
    GVAR(interactionWeaponInProgress) = false;
}];

// If animation gets stopped for some reason, reset
[{
    GVAR(interactionWeaponInProgress) = false;
}, [], 6] call CBA_fnc_waitAndExecute;

true;
