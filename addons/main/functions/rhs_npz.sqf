/*
 * Author: RHS, johnb43
 * NPZ mounting handler: Switches out non-NPZ variant for NPZ variant.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

private _unit = call rhs_fnc_findPlayer;
private _weapon = primaryWeapon _unit;
private _newWeapon = getText (configFile >> "CfgWeapons" >> _weapon >> "rhs_npz");

if (_newWeapon isEqualTo "") exitWith {
    diag_log format ["[ERROR] RHS: No NPZ compatible weapon was found for %1", getText (configFile >> "CfgWeapons" >> _weapon >> "displayName")];
};

// Only do if player is on foot
if (isNull objectParent _unit) then {
    _unit removePrimaryWeaponItem "rhs_acc_npz";

    primaryWeaponItems _unit params ["_silencer", "_laserpointer", "", "_bipod"];
    private _magazineUGL = (primaryWeaponMagazine _unit) select 1;

    // Need to check if UGL ammo is empty, otherwise it will give extra one
    private _muzzleUGL = ((_weapon call CBA_fnc_getMuzzles) select {_x isNotEqualTo _weapon && {_x isNotEqualTo "SAFE"} && {_x isNotEqualTo "FOLD"}}) select 0;
    private _ammoCountUGL = [_unit ammo _muzzleUGL, 0] select (isNil "_magazineUGL" || {_magazineUGL isEqualTo ""});

    private _weaponState = weaponState _unit;

    // If the UGL is currently selected, get information on the main muzzle
    if (toLower currentMuzzle _unit isEqualTo toLower _muzzleUGL) then {
        // This syntax does not get the firemode correctly
        _weaponState = _unit weaponState _weapon;
    };

    // Add new weapon with nothing, so it avoids eating mags
    [_unit, _newWeapon] call CBA_fnc_addWeaponWithoutItems;

    // Apply saved firemode
    [_unit, _newWeapon, _weaponState select 2] call CBA_fnc_selectWeapon;

    // Give old mags back
    _unit addWeaponItem [_newWeapon, [_weaponState select 3, _weaponState select 4], true];

    if (!isNil "_muzzleUGL") then {
        _unit addWeaponItem [_newWeapon, [_magazineUGL, _ammoCountUGL], true];
    };

    _unit playMoveNow "MountOptic";

    // Add attachments back if any were present
    if (_silencer isNotEqualTo "") then {
        _unit addPrimaryWeaponItem _silencer;
    };

    if (_laserpointer isNotEqualTo "") then {
        _unit addPrimaryWeaponItem _laserpointer;
    };

    // Add bipod back if present; will change model again
    _unit addPrimaryWeaponItem _bipod;
} else {
    hint "Mounting of NPZ rails is not available in vehicles!";
    _unit removePrimaryWeaponItem "rhs_acc_npz";

    // Add item to ground if player is outside
    private _outside = isNull objectParent _unit;
    [_unit, "rhs_acc_npz", _outside] call CBA_fnc_addItem;

    // In case player takes item from vehicle and doesn't have space inside his inventory we assign item back to vehicle
    if (!_outside && {!("rhs_acc_npz" in (items _unit))}) then {
        (objectParent _unit) addItemCargo "rhs_acc_npz";
    };
};
