class rhs_weap_g36_base: Rifle_Base_F {
    magazineWell[] += {"CBA_556x45_STANAG_2D_XL"};
};
class rhs_weap_g36c: rhs_weap_g36_base {
    class WeaponSlotsInfo;
};
class rhs_weap_g36c_Folded: rhs_weap_g36c {
    displayName = "HK G36C (Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65.7;
    };
};

class rhs_weap_g36kv: rhs_weap_g36_base {
    class WeaponSlotsInfo;
};
class rhs_weap_g36kv_Folded: rhs_weap_g36kv {
    baseweapon = "rhs_weap_g36kv_Folded";
    displayName = "HK G36KV (Folded)";
    scope = 1;
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 74.1;
    };
};

class rhs_weap_g36kv_ag36: rhs_weap_g36kv {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: asdg_MuzzleSlot_556 {};
    };
};
class rhs_weap_g36kv_ag36_Folded: rhs_weap_g36kv_ag36 {
    baseweapon = "rhs_weap_g36kv_ag36_Folded";
    displayName = "HK G36KV (AG36/Folded)";
    scope = 1;
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 107.1;
    };
};

class rhs_weap_m21_base: rhs_weap_m70_base {
    rhs_1p29_type = "rhs_acc_1p29";
    rhs_pgo7v_type = "rhs_acc_pgo7v_ak";
    rhs_pgo7v2_type = "rhs_acc_pgo7v2_ak";
    rhs_pgo7v3_type = "rhs_acc_pgo7v3_ak";
    rhs_pkas_type = "rhs_acc_pkas";
    rhs_pso1m2_type = "rhs_acc_pso1m2_ak";
    rhs_pso1m21_type = "rhs_acc_pso1m21_ak";
    rhs_fold_anim = "RHS_GestureFoldSCAR";
    class WeaponSlotsInfo;
};
class rhs_weap_m21a: rhs_weap_m21_base {
    class WeaponSlotsInfo;
};
class rhs_weap_m21a_fold: rhs_weap_m21a {
    displayName = "M21A (Folded)";
    recoil = "rhs_recoil_ak74m_folded";
    rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 91.3;
    };
};
class rhs_weap_m21a_pbg40: rhs_weap_m21a {
    class WeaponSlotsInfo;
};
class rhs_weap_m21a_pbg40_fold: rhs_weap_m21a_pbg40 {
    displayName = "M21A (PBG/Folded)";
    recoil = "rhs_recoil_ak74m_folded";
    rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 124.3;
    };
};
class rhs_weap_m21s: rhs_weap_m21_base {
    class WeaponSlotsInfo;
};
class rhs_weap_m21s_fold: rhs_weap_m21s {
    displayName = "M21S (Folded)";
    recoil = "rhs_recoil_ak74m_folded";
    rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 89.5;
    };
};

class rhs_weap_m21a_pr: rhs_weap_m21_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 95.3;
    };
};
class rhs_weap_m21a_pr_pbg40: rhs_weap_m21_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 128.3;
    };
};
class rhs_weap_m21s_pr: rhs_weap_m21a_pr {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 93.5;
    };
};
