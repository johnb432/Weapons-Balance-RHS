#include "..\script_component.hpp"
/*
 * Author: reyhard, johnb43
 * Gripod system
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon <STRING>
 * 2: New grip <STRING>
 * 3: Old grip <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_weapon", "_newGrip", "_oldGrip"];

_unit setVariable ["rhs_gripod_acc", _newGrip];

private _cfgWeapons = configFile >> "CfgWeapons";
private _newGripType = "";

// Check first if there's a new grip (to account switching between grips)
// Otherwise it would first replace with baseWeapon, then switch to new weapon
// If the new grip type is using the RHS system, switch weapon regardless of what the unit had before
if (_newGrip != "" && {_newGripType = getText (_cfgWeapons >> _newGrip >> "rhs_grip_type"); _newGripType != ""}) exitWith {
    [_unit, [_weapon, getText (_cfgWeapons >> _weapon >> _newGripType)], {}, [], [false, false]] call FUNC(switchWeaponVariant);
};

// Only replace weapon type if the old grip type was using the RHS system
if (_oldGrip != "" && {getText (_cfgWeapons >> _oldGrip >> "rhs_grip_type") != ""}) exitWith {
    [_unit, [_weapon, getText (_cfgWeapons >> _weapon >> "baseWeapon")], {}, [], [false, false]] call FUNC(switchWeaponVariant);
};
