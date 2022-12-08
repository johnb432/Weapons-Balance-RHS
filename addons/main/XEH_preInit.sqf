#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if (hasInterface) then {
    wb_interactionWeaponInProgress = false;

    [COMPONENT_NAME, QGVAR(weaponInteraction), "Interact with Weapon", {
        if (wb_interactionWeaponInProgress) exitWith {};

        private _unit = call CBA_fnc_currentUnit;
        private _weapon = currentWeapon _unit;

        if (_weapon isEqualTo "") exitWith {};

        private _weaponConfig = configFile >> "CfgWeapons" >> _weapon;

        private _items = _unit weaponAccessories _weapon;

        // MTZ rail handler
        private _rhsMTZ = getText (_weaponConfig >> "rhs_mtz");

        if (_rhsMTZ isNotEqualTo "" && {"_mtz" in (toLower _weapon) || "_pr" in (toLower _weapon)}) exitWith {
            // If weapon has an optic, don't do action
            if ((_items select 2) isNotEqualTo "") exitWith {false};

            [_unit, [_weapon, _rhsMTZ], {
                (_this select 0) params ["_unit", "", "", "", "_isSuccess"];

                if (!_isSuccess) exitWith {};

                // Variable time length
                _unit playActionNow "MountOptic";

                // Add rail converter to player's inventory; drop on ground if inventory is full
                [_unit, "rhs_acc_mtz", true] call CBA_fnc_addItem;
            }] call FUNC(switchWeaponVariant);
        };

        // NPZ rail handler
        private _rhsNPZ = getText (_weaponConfig >> "rhs_npz");

        if (_rhsNPZ isNotEqualTo "" && {"_npz" in (toLower _weapon)}) exitWith {
            // If weapon has an optic, don't do action
            if ((_items select 2) isNotEqualTo "") exitWith {false};

            [_unit, [_weapon, _rhsNPZ], {
                (_this select 0) params ["_unit", "", "", "", "_isSuccess"];

                if (!_isSuccess) exitWith {};

                // Variable time length
                _unit playActionNow "MountOptic";

                // Add rail converter to player's inventory; drop on ground if inventory is full
                [_unit, "rhs_acc_npz", true] call CBA_fnc_addItem;
            }] call FUNC(switchWeaponVariant);
        };

        private _weaponFold = getText (_weaponConfig >> "rhs_fold");

        if (_weaponFold isEqualTo "") exitWith {false};

        [_unit, [_weapon, _weaponFold, 2], {
            (_this select 0) params ["_unit", "", "", "", "_isSuccess"];
            (_this select 1) params ["_weapon", "_weaponConfig"];

            if (!_isSuccess) exitWith {};

            // Do fold animation and play folding sound
            _unit addWeaponItem [_weapon, ["rhs_mag_fold_stock", 1, "FOLD"]];
            _unit playActionNow ([_weaponConfig, "rhs_fold_anim", "MountOptic"] call BIS_fnc_returnConfigEntry);
            _unit selectWeapon "fold";

            private _weaponSound = [_weaponConfig, "rhs_fold_sound", []] call BIS_fnc_returnConfigEntry;

            if (_weaponSound isNotEqualTo []) then {
                playSound3D [_weaponSound select 0, _unit, false, _unit modelToWorldVisualWorld (_unit selectionPosition "leftHand"), _weaponSound select 1, _weaponSound select 2, _weaponSound select 3];
            };
        }, [_weapon, _weaponConfig]] call FUNC(switchWeaponVariant);
    }, {}] call CBA_fnc_addKeybind;
};

ADDON = true;
