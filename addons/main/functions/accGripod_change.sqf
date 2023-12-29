#include "..\script_component.hpp"
/*
 * Author: reyhard, johnb43
 * Gripod system
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Grip <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_grip"];

_unit setVariable ["rhs_gripod_acc", _grip];

private _cfgWeapons = configFile >> "CfgWeapons";

private _weapon = primaryWeapon _unit;

_grip = if (_grip != "") then {
    getText (_cfgWeapons >> _weapon >> getText (_cfgWeapons >> _grip >> "rhs_grip_type"))
} else {
    getText (_cfgWeapons >> _weapon >> "baseWeapon")
};

[_unit, [_weapon, _grip], {}, [], [false, false]] call FUNC(switchWeaponVariant);
