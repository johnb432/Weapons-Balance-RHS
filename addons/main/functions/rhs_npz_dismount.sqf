/*
 * Author: reyhard, johnb43
 * NPZ dismounting handler: Switches out NPZ variant for non-NPZ variant.
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
if ((uiNameSpace getVariable ["rhs_handler_fold_pp", -1]) isNotEqualTo -1) then {
    (findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_fold_pp"];
    _player setVariable ["rhs_npz_ak_mode", nil];
};

// We can reuse current assigned EHs and change only variable responsible for weapon and then exit
if (_player getVariable ["rhs_npz_ak_mode", ""] isNotEqualTo "") exitWith {
    _player setVariable ["rhs_npz_ak_mode", _weapon];
};

_player setVariable ["rhs_npz_ak_mode", _weapon];
uiNameSpace setVariable ["rhs_npz_rail_ctrl", _this select 0];

private _id = (findDisplay 46) displayAddEventHandler ["KeyUp", {
    private _player = call rhs_fnc_findPlayer;

    // Remove EH
    if (isNull ((uiNamespace getVariable "rhs_npz_rail_ctrl") displayCtrl 9897)) exitWith {
        (findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_npz_ak"];
        uiNameSpace setVariable ["rhs_handler_npz_ak", nil];
        _player setVariable ["rhs_npz_ak_mode", nil];
    };

    // Trigger only if proper key detected
    if (inputAction rhs_key_wpn_int_glb > 0) then {
        private _weapon = _player getVariable ["rhs_npz_ak_mode", ""];
        // Detect type of weapon - pistol or rifle?
        if ((currentWeapon _player isEqualTo _weapon) && {isNull objectParent _player}) then {
            primaryWeaponItems _player params ["_silencer", "_laserpointer", "_optics", "_bipod"];

            // If weapon has an optic, don't do action
            if (_optics isNotEqualTo "") exitWith {};

            private _newWeapon = getText (configFile >> "CfgWeapons" >> _weapon >> "rhs_npz");
            private _ammoCountMain = _player ammo _weapon;
            primaryWeaponMagazine _player params ["_magazine", "_magazineUGL"];

            // Need to check if UGL ammo is empty, otherwise it will give extra one
            private _UGLmuzzle = ((_weapon call CBA_fnc_getMuzzles) select {_x isNotEqualTo _weapon && {_x isNotEqualTo "SAFE"} && {_x isNotEqualTo "FOLD"}}) select 0;
            private _ammoCountUGL = [_player ammo _UGLmuzzle, 0] select (isNil "_magazineUGL" || {_magazineUGL isEqualTo ""});

            // Add new weapon with nothing, so it avoids eating mags
            [_player, _newWeapon] call CBA_fnc_addWeaponWithoutItems;

            // Give old mags back
            _player addPrimaryWeaponItem _magazine;
            _player setAmmo [_newWeapon, _ammoCountMain];

            if (!isNil "_UGLmuzzle") then {
                _player addPrimaryWeaponItem _magazineUGL;
                _player setAmmo [_UGLmuzzle, _ammoCountUGL];
            };

            _player selectWeapon _newWeapon;

            _player playMoveNow "MountOptic";

            _player setVariable ["rhs_npz_ak_mode", _newWeapon];

            // Add attachments back if any were present
            if (_silencer isNotEqualTo "") then {
                _player addPrimaryWeaponItem _silencer;
            };

            if (_laserpointer isNotEqualTo "") then {
                _player addPrimaryWeaponItem _laserpointer;
            };

            _player addItem "rhs_acc_npz";

            (findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_npz_ak"];
            uiNameSpace setVariable ["rhs_handler_npz_ak", nil];
            _player setVariable ["rhs_npz_ak_mode", nil];

            // Add bipod back if present; will change model again
            _player addPrimaryWeaponItem _bipod;
        };
    };
}];

uiNameSpace setVariable ["rhs_handler_npz_ak", _id];
