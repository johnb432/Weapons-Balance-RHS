#include "..\script_component.hpp"
/*
 * Author: reyhard, johnb43
 * MTZ dismounting handler: Switches out MTZ variant for non-MTZ variant.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

rhs_key_wpn_int_glb = profileNamespace getVariable ["rhs_key_wpn_int", "nextCM"];

private _unit = call CBA_fnc_currentUnit;
private _weapon = currentWeapon _unit;

// Remove additional handler if it's present
if ((uiNamespace getVariable ["rhs_handler_fold_pp", -1]) isNotEqualTo -1) then {
    (findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNamespace getVariable "rhs_handler_fold_pp"];
    _unit setVariable ["rhs_mtz_ak_mode", nil];
};

// We can reuse current assigned EHs and change only variable responsible for weapon and then exit
if (_unit getVariable ["rhs_mtz_ak_mode", ""] isNotEqualTo "") exitWith {
    _unit setVariable ["rhs_mtz_ak_mode", _weapon];
};

_unit setVariable ["rhs_mtz_ak_mode", _weapon];
uiNamespace setVariable ["rhs_mtz_rail_ctrl", _this select 0];

private _id = (findDisplay 46) displayAddEventHandler ["KeyUp", {
    private _unit = call CBA_fnc_currentUnit;

    // Remove EH
    if (isNull ((uiNamespace getVariable "rhs_mtz_rail_ctrl") displayCtrl 9897)) exitWith {
        (findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNamespace getVariable "rhs_handler_mtz_ak"];
        uiNamespace setVariable ["rhs_handler_mtz_ak", nil];
        _unit setVariable ["rhs_mtz_ak_mode", nil];
    };

    // Trigger only if proper key detected
    if (inputAction rhs_key_wpn_int_glb > 0) then {
        private _weapon = _unit getVariable ["rhs_mtz_ak_mode", ""];

        [_unit, [_weapon, getText (configFile >> "CfgWeapons" >> _weapon >> "rhs_mtz")], {
            (_this select 0) params ["_unit", "", "", "", "_isSuccess"];

            if (!_isSuccess) exitWith {};

            _unit playActionNow "MountOptic";

            // Drop on ground if no space in player's inventory
            [_unit, "rhs_acc_mtz", true] call CBA_fnc_addItem;

            (findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNamespace getVariable "rhs_handler_mtz_ak"];
            uiNamespace setVariable ["rhs_handler_mtz_ak", nil];
            _unit setVariable ["rhs_mtz_ak_mode", nil];
        }] call FUNC(switchWeaponVariant);
    };
}];

uiNamespace setVariable ["rhs_handler_mtz_ak", _id];
