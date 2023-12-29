#include "..\script_component.hpp"
/*
 * Author: reyhard, johnb43
 * Gripod system
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

if (!isNil "rhs_grip_deinitialize") exitWith {};

rhs_grip_deinitialize = compileFinal {};

["loadout", {
    params ["_unit", "_new", "_old"];

    // Only works on primary weapons
    private _grip = _new select 0 param [6, ""];

    if ((_grip == _old select 0 param [6, ""]) && {getText (_cfgWeapons >> _new select 0 param [0, ""] >> "baseWeapon") == getText (_cfgWeapons >> _old select 0 param [0, ""] >> "baseWeapon")}) exitWith {};

    [_unit, _grip] call RHS_fnc_accGripod_change;
}, true] call CBA_fnc_addPlayerEventHandler;
