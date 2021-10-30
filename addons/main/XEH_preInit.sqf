#include "script_component.hpp"

if (!hasInterface) exitWith {};

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[COMPONENT_NAME, QGVAR(weaponInteraction), "Interact with Weapon", {
    if (GVAR(interactionWeaponInProgress)) exitWith {};

    private _player = call rhs_fnc_findPlayer;
    private _weapon	= currentWeapon _player;

    if (
        (if (getText (configFile >> "CfgWeapons" >> _weapon >> "rhs_mtz") isNotEqualTo "" && {"_mtz" in (toLower _weapon) || "_pr" in (toLower _weapon)}) then {
            [_player, _weapon, false] call FUNC(rhsDismountNew);
        } else {
            if !(getText (configFile >> "CfgWeapons" >> _weapon >> "rhs_npz") isNotEqualTo "" && {"_npz" in (toLower _weapon)}) exitWith {false};
            [_player, _weapon, true] call FUNC(rhsDismountNew);
        })
    || {getText (configFile >> "CfgWeapons" >> _weapon >> "rhs_fold") isEqualTo ""}) exitWith {
        true;
    };

    [_player, _weapon] call FUNC(rhsFoldNew);
    true
}, {}] call CBA_fnc_addKeybind;

ADDON = true;
