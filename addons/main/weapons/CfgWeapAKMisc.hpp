class rhs_weap_m70_base: Rifle_Base_F {
    rhs_1p29_type = "rhs_acc_1p29";
    rhs_pgo7v_type = "rhs_acc_pgo7v_ak";
    rhs_pgo7v2_type = "rhs_acc_pgo7v2_ak";
    rhs_pgo7v3_type = "rhs_acc_pgo7v3_ak";
    rhs_pkas_type = "rhs_acc_pkas";
    rhs_pso1m2_type = "rhs_acc_pso1m2_ak";
    rhs_pso1m21_type = "rhs_acc_pso1m21_ak";
    rhs_fold_anim = "RHS_GestureFoldAKMS";
    rhs_fold_sound[] = {"rhsafrf\addons\rhs_c_weapons\sounds\stock_folding.wss",1.42,1,20};
    class WeaponSlotsInfo;
};
class rhs_weap_m70ab2: rhs_weap_m70_base {
    class WeaponSlotsInfo;
};
class rhs_weap_m70ab2_fold: rhs_weap_m70ab2 {
    baseWeapon = "rhs_weap_m70ab2_fold";
    displayName = "M70AB2 (Folded)";
    recoil = "rhs_recoil_akms_folded";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87.3;
    };
};
class rhs_weap_m70b1: rhs_weap_m70ab2 {
    rhs_fold = "";
};
class rhs_weap_m70b1n: rhs_weap_m70ab2 {
    rhs_fold = "";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92.7;
    };
};
class rhs_weap_m70b3n: rhs_weap_m70ab2 {
    rhs_fold = "";
};
class rhs_weap_m70b3n_pbg40: rhs_weap_m70ab2 {
    rhs_fold = "";
};

class rhs_weap_m76: rhs_weap_m70_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.4;
    };
};
class rhs_weap_m92: rhs_weap_m70_base {
    class WeaponSlotsInfo;
};
class rhs_weap_m92_fold: rhs_weap_m92 {
    baseWeapon = "rhs_weap_m92_fold";
    displayName = "M92 (Folded)";
    recoil = "rhs_recoil_akms_folded";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.5;
    };
};

class rhs_weap_savz58_base: Rifle_Base_F {
    rhs_fold_anim = "RHS_GestureFoldSCAR";
    rhs_fold_sound[] = {"rhsafrf\addons\rhs_c_weapons\sounds\stock_folding.wss",1.42,1,20};
};
class rhs_weap_savz58v: rhs_weap_savz58_base {
    displayName = "Sa vz. 58 V";
};
class rhs_weap_savz58v_fold: rhs_weap_savz58v {
    displayName = "Sa vz. 58 V (Folded)";
    recoil = "rhs_recoil_akms_folded";
    rhs_fold_anim = "RHS_GestureUnfoldSCAR";
};
class rhs_weap_savz58v_black: rhs_weap_savz58v {
    displayName = "Sa vz. 58 V (Black)";
};
class rhs_weap_savz58v_fold_black: rhs_weap_savz58v_fold {
    baseWeapon = "rhs_weap_savz58v_fold_black";
    displayName = "Sa vz. 58 V (Black/Folded)";
};
class rhs_weap_savz58_rail_base: rhs_weap_savz58_base {
    rhs_fold_checkOptic = 0;
};
class rhs_weap_savz58v_rail: rhs_weap_savz58_rail_base {
    displayName = "Sa vz. 58 V (Rail)";
};
class rhs_weap_savz58v_rail_black: rhs_weap_savz58v_rail {
    displayName = "Sa vz. 58 V (Rail/Black)";
};
class rhs_weap_savz58_ris_base: rhs_weap_savz58_base {
    rhs_fold_checkOptic = 0;
};
class rhs_weap_savz58v_rail_fold: rhs_weap_savz58v_rail {
    displayName = "Sa vz. 58 V (Rail/Folded)";
    recoil = "rhs_recoil_akms_folded";
    rhs_fold_anim = "RHS_GestureUnfoldSCAR";
};
class rhs_weap_savz58v_rail_fold_black: rhs_weap_savz58v_rail_fold {
    baseWeapon = "rhs_weap_savz58v_rail_fold_black";
    displayName = "Sa vz. 58 V (Rail/Black/Folded)";
};
class rhs_weap_savz58v_ris: rhs_weap_savz58_ris_base {
    displayName = "Sa vz. 58 V (RIS)";
};
class rhs_weap_savz58v_ris_fold: rhs_weap_savz58v_ris {
    displayName = "Sa vz. 58 V (RIS/Folded)";
    recoil = "rhs_recoil_akms_folded";
    rhs_fold_anim = "RHS_GestureUnfoldSCAR";
};

class rhs_weap_savz58p: rhs_weap_savz58_base {
    displayName = "Sa vz. 58 P";
};
class rhs_weap_savz58p_black: rhs_weap_savz58p {
    displayName = "Sa vz. 58 P (Black)";
};

class rhs_weap_savz58p_rail: rhs_weap_savz58_rail_base {
    displayName = "Sa vz. 58 P (Rail)";
};
class rhs_weap_savz58p_rail_black: rhs_weap_savz58p_rail {
    displayName = "Sa vz. 58 P (Rail/Black)";
};
