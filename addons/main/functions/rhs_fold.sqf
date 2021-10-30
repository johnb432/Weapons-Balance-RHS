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

private _player = call rhs_fnc_findPlayer;
private _weapon = currentWeapon _player;

// Remove additional handler if it's present
if (uiNameSpace getVariable ["rhs_handler_fold_weapon", -1] isNotEqualTo -1) then {
    (findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_fold_weapon"];
    _player setVariable ["rhs_fold_weapon_mode", nil];
};

// We can reuse current assigned EHs & change only variable responsible for weapon and then exit
if (_player getVariable ["rhs_fold_weapon_mode", ""] isNotEqualTo "") exitWith {
    _player setVariable ["rhs_fold_weapon_mode", _weapon];
};

_player setVariable ["rhs_fold_weapon_mode", _weapon];
uiNameSpace setVariable ["rhs_weapon_fold_ctrl", _this # 0];

private _id = (findDisplay 46) displayAddEventHandler ["KeyUp", {
    private _player = call rhs_fnc_findPlayer;

    // Remove EH
    if (isNull (uiNamespace getVariable "rhs_weapon_fold_ctrl" displayCtrl 9899)) exitWith {
        (findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_fold_weapon"];
        _player setVariable ["rhs_fold_weapon_mode", nil];
        uiNameSpace setVariable ["rhs_handler_fold_weapon", nil];
        uiNameSpace setVariable ["rhs_weapon_fold_ctrl", displayNull];
    };

    // Proper key detected
    if (inputAction rhs_key_wpn_int_glb > 0) then {
        private _weapon	= _player getVariable ["rhs_fold_weapon_mode", ""];

        // detect type of weapon - pistol or rifle?
        if ((currentWeapon _player isEqualTo _weapon) && {isNull objectParent _player}) then {
            private _items = primaryWeaponItems _player;
            private _weaponConfig = configFile >> "CfgWeapons" >> _weapon;

            // Check if weapon can be folded when optic is attached to weapon. Default value: 1
            private _checkOptics = [_weaponConfig, "rhs_fold_checkOptic", 1] call BIS_fnc_returnConfigEntry;
            if ((_checkOptics isEqualTo 1) && {(_items select 2) isNotEqualTo ""}) exitWith {};

            private _weaponFolded = getText (_weaponConfig >> "rhs_fold");
            private _weaponSound = [_weaponConfig, "rhs_fold_sound", []] call BIS_fnc_returnConfigEntry;
            private _ammoCountMain = _player ammo _weapon;
            primaryWeaponMagazine _player params ["_magazine", "_magazineUGL"];

            // Need to check if UGL ammo is empty, otherwise it will give extra one
            private _UGLmuzzle = ((_weapon call CBA_fnc_getMuzzles) select {_x isNotEqualTo _weapon && {_x isNotEqualTo "SAFE"} && {_x isNotEqualTo "FOLD"}}) select 0;
            private _ammoCountUGL = [_player ammo _UGLmuzzle, 0] select (isNil "_magazineUGL" || {_magazineUGL isEqualTo ""});

            _player addWeaponItem [_weapon, ["rhs_mag_fold_stock", 1, "FOLD"]];
            _player playAction ([_weaponConfig, "rhs_fold_anim", "MountOptic"] call BIS_fnc_returnConfigEntry);

            if (_weaponSound isNotEqualTo []) then {
                playSound3D [_weaponSound select 0, _player, false, ATLToASL (_player modelToWorldVisual (_player selectionPosition "leftHand")), _weaponSound select 1, _weaponSound select 2, _weaponSound select 3]
            };

            _player selectWeapon "fold";
            _player setVariable ["rhs_fold_weapon_mode", _weaponFolded];

            [{
                params ["_player", "_weaponFolded", "_magazine", "_ammoCountMain", "_UGLmuzzle", "_magazineUGL", "_ammoCountUGL", "_items"];

                // Add new weapon with nothing, so it avoids eating mags
                [_player, _weaponFolded] call CBA_fnc_addWeaponWithoutItems;

                // Give old mags back
                _player addWeaponItem [_weaponFolded, [_magazine, _ammoCountMain], true];

                if (!isNil "_UGLmuzzle") then {
                    _player addWeaponItem [_weaponFolded, [_magazineUGL, _ammoCountUGL], true];
                };

                _player selectWeapon _weaponFolded;

                // Give old attachments back
                {
                    if (_x isNotEqualTo "") then {
                        _player addPrimaryWeaponItem _x;
                    };
                } foreach _items;
            }, [_player, _weaponFolded, _magazine, _ammoCountMain, _UGLmuzzle, _magazineUGL, _ammoCountUGL, _items], 2] call CBA_fnc_waitAndExecute;
        };
    };
}];

uiNameSpace setVariable ["rhs_handler_fold_weapon" ,_id];
