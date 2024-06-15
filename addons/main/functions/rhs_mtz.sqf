#include "..\script_component.hpp"
/*
 * Author: RHS, johnb43
 * MTZ mounting handler: Switches out non-MTZ variant for MTZ variant.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

private _unit = call CBA_fnc_currentUnit;
private _weapon = currentWeapon _unit;

[_unit, [_weapon, getText (configFile >> "CfgWeapons" >> _weapon >> "rhs_mtz")], {
    (_this select 0) params ["_unit", "", "", "", "_isSuccess"];

    // Remove MTZ
    switch (toLower (_this select 1)) do {
        case (toLower primaryWeapon _unit): {
            _unit removePrimaryWeaponItem "rhs_acc_mtz";
        };
        case (toLower handgunWeapon _unit): {
            _unit removeHandgunItem "rhs_acc_mtz";
        };
        case (toLower secondaryWeapon _unit): {
            _unit removeSecondaryWeaponItem "rhs_acc_mtz";
        };
    };

    // If successful, don't execute code below
    if (_isSuccess) exitWith {
        _unit playActionNow "MountOptic";
        true;
    };

    // Add item to ground if player is outside
    private _outside = isNull objectParent _unit;
    [_unit, "rhs_acc_mtz", _outside] call CBA_fnc_addItem;

    // In case player takes item from vehicle and doesn't have space inside his inventory we assign item back to vehicle
    if (_outside) exitWith {};

    hint "Mounting of MTZ rails is not available in vehicles!";

    if ("rhs_acc_mtz" in (items _unit)) exitWith {};

    (objectParent _unit) addItemCargoGlobal ["rhs_acc_mtz", 1];
}, _weapon, [true, false]] call FUNC(switchWeaponVariant);
