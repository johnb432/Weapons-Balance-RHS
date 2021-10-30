#include "script_component.hpp"
/*
 * Author: johnb43, RHS
 * folding & unfolding stock handler. Allows RHS weapons to fold and unfold.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Weapon <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_player", "_weapon"];

// If in vehicle, don't do action
if !(isNull objectParent _player) exitWith {};

// Detect type of weapon - pistol or rifle?
private _isPrimary = primaryWeapon _player isEqualTo _weapon;

// Get weapon items
private _items = [handgunItems _player, primaryWeaponItems _player] select _isPrimary;
private _weaponConfig = configFile >> "CfgWeapons" >> _weapon;

// Check if weapon can be folded when optic is attached to weapon. Default value: 1
private _checkOptics = [_weaponConfig, "rhs_fold_checkOptic", 1] call BIS_fnc_returnConfigEntry;
if ((_checkOptics isEqualTo 1) && {(_items select 2) isNotEqualTo ""}) exitWith {};

// Check if converting from primary to pistol or vice versa, so we know what weapon to delete if necessary
private _isConversion = ([_weaponConfig, "rhs_pistol_conversion", 0] call BIS_fnc_returnConfigEntry) isEqualTo 1;

if (_isConversion && {_isPrimary} && {handgunWeapon _player isNotEqualTo ""}) exitWith {
    hint "Your pistol slot needs to be empty to fold this weapon.";
};
if (_isConversion && {!_isPrimary} && {primaryWeapon _player isNotEqualTo ""}) exitWith {
    hint "Your primary weapon slot must be empty to unfold this weapon.";
};

// Lock any further input, until action is finished
GVAR(interactionWeaponInProgress) = true;

private _fireMode = (weaponState _player) select 2;

// Get magazines and store them for later reinsertion
([handgunMagazine _player, primaryWeaponMagazine _player] select _isPrimary) params ["_magazine", "_magazineUGL"];

// Need to check if UGL ammo is empty, otherwise it will give extra one
private _UGLmuzzle = ((_weapon call CBA_fnc_getMuzzles) select {_x isNotEqualTo _weapon && {_x isNotEqualTo "SAFE"} && {_x isNotEqualTo "FOLD"}}) select 0;

// Do fold animation and play folding sound
_player addWeaponItem [_weapon, ["rhs_mag_fold_stock", 1, "FOLD"]];
_player playAction ([_weaponConfig, "rhs_fold_anim", "MountOptic"] call BIS_fnc_returnConfigEntry);

private _weaponSound = [_weaponConfig, "rhs_fold_sound", []] call BIS_fnc_returnConfigEntry;

if (_weaponSound isNotEqualTo []) then {
    playSound3D [_weaponSound select 0, _player, false, ATLToASL (_player modelToWorldVisual (_player selectionPosition "leftHand")), _weaponSound select 1, _weaponSound select 2, _weaponSound select 3]
};

_player selectWeapon "fold";

[{
    params ["_player", "_weapon", "_weaponFolded", "_magazine", "_ammoCountMain", "_UGLmuzzle", "_magazineUGL", "_ammoCountUGL", "_items", "_isConversion", "_fireMode"];

    // If converting from primary to pistol version, remove primary weapon
    if (_isConversion) then {
        // If the weapon has a grip/bipod, give it back
        if ((_items select 3) isNotEqualTo "") then {
            // Drop on ground if no space in player's inventory
            [_player, _items select 3, true] call CBA_fnc_addItem;
        };

        _player removeWeapon _weapon;
    };

    // Add new weapon with nothing, so it avoids eating mags
    [_player, _weaponFolded] call CBA_fnc_addWeaponWithoutItems;

    // Try to apply saved firemode (doesn't always work)
    _player selectWeapon _weaponFolded;
    _player forceWeaponFire [_weaponFolded, _fireMode];

    // Give old mags back
    _player addWeaponItem [_weaponFolded, [_magazine, _ammoCountMain], true];

    if (!isNil "_UGLmuzzle") then {
        _player addWeaponItem [_weaponFolded, [_magazineUGL, _ammoCountUGL], true];
    };

    // Give old attachments back
    {
        if (_x isNotEqualTo "") then {
            _player addWeaponItem [_weaponFolded, _x, true];
        };
    } foreach _items;

    GVAR(interactionWeaponInProgress) = false;
}, [_player, _weapon, getText (_weaponConfig >> "rhs_fold"), _magazine, _player ammo _weapon, _UGLmuzzle, _magazineUGL, [_player ammo _UGLmuzzle, 0] select (isNil "_magazineUGL" || {_magazineUGL isEqualTo ""}), _items, _isConversion, _fireMode], 2] call CBA_fnc_waitAndExecute;
