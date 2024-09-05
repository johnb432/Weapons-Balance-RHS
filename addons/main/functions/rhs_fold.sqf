#include "..\script_component.hpp"
/*
 * Author: reyhard, johnb43
 * Folding & unfolding stock handler. Allows RHS weapons to fold and unfold.
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
if (uiNamespace getVariable ["rhs_handler_fold_weapon", -1] isNotEqualTo -1) then {
    (findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNamespace getVariable "rhs_handler_fold_weapon"];
    _unit setVariable ["rhs_fold_weapon_mode", nil];
};

// We can reuse current assigned EHs & change only variable responsible for weapon and then exit
if (_unit getVariable ["rhs_fold_weapon_mode", ""] isNotEqualTo "") exitWith {
    _unit setVariable ["rhs_fold_weapon_mode", _weapon];
};

_unit setVariable ["rhs_fold_weapon_mode", _weapon];
uiNamespace setVariable ["rhs_weapon_fold_ctrl", _this # 0];

private _id = (findDisplay 46) displayAddEventHandler ["KeyUp", {
    private _unit = call CBA_fnc_currentUnit;

    // Remove EH
    if (isNull (uiNamespace getVariable "rhs_weapon_fold_ctrl" displayCtrl 9899)) exitWith {
        (findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNamespace getVariable "rhs_handler_fold_weapon"];
        _unit setVariable ["rhs_fold_weapon_mode", nil];
        uiNamespace setVariable ["rhs_handler_fold_weapon", nil];
        uiNamespace setVariable ["rhs_weapon_fold_ctrl", displayNull];
    };

    // Proper key detected
    if (inputAction rhs_key_wpn_int_glb > 0) then {
        private _weapon = _unit getVariable ["rhs_fold_weapon_mode", ""];

        [_unit, [_weapon, getText (configFile >> "CfgWeapons" >> _weapon >> "rhs_fold"), 2.5], {
            (_this select 0) params ["_unit", "", "", "", "_isSuccess"];

            if (!_isSuccess) exitWith {};

            private _weapon = _this select 1;
            private _weaponConfig = configFile >> "CfgWeapons" >> _weapon;

            // Do fold animation and play folding sound
            _unit addWeaponItem [_weapon, ["rhs_mag_fold_stock", 1, "FOLD"]];
            _unit playActionNow ([_weaponConfig, "rhs_fold_anim", "MountOptic"] call BIS_fnc_returnConfigEntry);
            _unit selectWeapon "fold";

            private _weaponSound = [_weaponConfig, "rhs_fold_sound", []] call BIS_fnc_returnConfigEntry;

            if (_weaponSound isNotEqualTo []) then {
                playSound3D [_weaponSound select 0, _unit, false, _unit modelToWorldVisualWorld (_unit selectionPosition "leftHand"), _weaponSound select 1, _weaponSound select 2, _weaponSound select 3];
            };
        }, _weapon] call FUNC(switchWeaponVariant);
    };
}];

uiNamespace setVariable ["rhs_handler_fold_weapon" ,_id];
