//RHS
class rhs_weap_m14ebrri;
class rhs_weap_pya;
class InventoryOpticsItem_Base_F;
class rhs_acc_scope_base;
class HeadgearItem;
class H_HelmetB;
class Uniform_Base;

class rhs_6b27m: H_HelmetB {
    class ItemInfo: HeadgearItem {};
};
class rhs_6b27m_ess_bala: rhs_6b27m {
    class ItemInfo: ItemInfo {
        mass = 40;
    };
};

class Rifle_Long_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};

class rhs_weap_m84: Rifle_Long_Base_F {
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
};

class rhs_weap_mg42_base: Rifle_Base_F {
    magazineWell[] = {"CBA_792x57_LINKS"};
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
};

class rhs_weap_M590_5RD: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 67.5;
    };
};
class rhs_weap_M590_8RD: rhs_weap_M590_5RD {
    magazineWell[] = {"CBA_12g_8rnds"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 71.7;
    };
};

class rhs_weap_XM2010_Base_F: Rifle_Base_F {
    magazineWell[] = {"CBA_300WM_AI"};
};
class rhs_weap_m24sws: rhs_weap_XM2010_Base_F {
    magazineWell[] = {};
};
class rhs_weap_m40a5: rhs_weap_XM2010_Base_F {
    magazineWell[] = {"CBA_762x51_AICS"};
};

class rhs_weap_g36_base: Rifle_Base_F {
    magazineWell[] += {"CBA_556x45_STANAG_2D_XL"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};

class rhs_weap_sr25: rhs_weap_m14ebrri {
    magazineWell[] += {"CBA_762x51_SR25"};
};

class rhs_weap_type94_new: rhs_weap_pya {
    magazineWell[] = {"CBA_8x22_Type14"};
};

class rhs_weap_m70_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m70ab2: rhs_weap_m70_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m70ab2_fold: rhs_weap_m70ab2 {
    displayName = "M70AB2 (Folded)";
    recoil = "rhs_recoil_akms_folded";
    scopeArsenal = 1;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87.3;
    };
};
class rhs_weap_m70b1n: rhs_weap_m70ab2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92.7;
    };
};
class rhs_weap_m76: rhs_weap_m70_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.4;
    };
};
class rhs_weap_m92: rhs_weap_m70_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m92_fold: rhs_weap_m92 {
    displayName = "M92 (Folded)";
    recoil = "rhs_recoil_akms_folded";
    scopeArsenal = 1;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.5;
    };
};

class rhs_weap_m21_base: rhs_weap_m70_base  {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
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

class rhs_weap_m21a;
class rhs_weap_m21a_fold: rhs_weap_m21a {
    recoil = "rhs_recoil_ak74m_folded";
};
class rhs_weap_m21a_pbg40;
class rhs_weap_m21a_pbg40_fold: rhs_weap_m21a_pbg40 {
    recoil = "rhs_recoil_ak74m_folded";
};
class rhs_weap_m21s;
class rhs_weap_m21s_fold: rhs_weap_m21s {
    recoil = "rhs_recoil_ak74m_folded";
};

class rhs_weap_m3a1_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m3a1_specops: rhs_weap_m3a1_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 84;
    };
};

class Rifle_Short_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class SMG_02_base_F: Rifle_Short_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhsusf_weap_MP7A1_base_f: SMG_02_base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhsusf_weap_MP7A2: rhsusf_weap_MP7A1_base_f {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 43.2;
    };
};
class rhsusf_weap_MP7A2_aor1: rhsusf_weap_MP7A2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 43.2;
    };
};
class rhsusf_weap_MP7A2_desert: rhsusf_weap_MP7A2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 43.2;
    };
};
class rhsusf_weap_MP7A2_winter: rhsusf_weap_MP7A2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 43.2;
    };
};

class rhs_weap_m38_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m38_rail: rhs_weap_m38_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};
class rhs_weap_mosin_sbr: rhs_weap_m38_rail {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 66.8;
    };
};

class rhs_weap_savz58v;
class rhs_weap_savz58v_fold: rhs_weap_savz58v {
    recoil = "rhs_recoil_akms_folded";
    scopeArsenal = 1;
};
class rhs_weap_savz58v_rail;
class rhs_weap_savz58v_rail_fold: rhs_weap_savz58v_rail {
    recoil = "rhs_recoil_akms_folded";
    scopeArsenal = 1;
};
class rhs_weap_savz58v_ris;
class rhs_weap_savz58v_ris_fold: rhs_weap_savz58v_ris {
    recoil = "rhs_recoil_akms_folded";
    scopeArsenal = 1;
};

class rhsgref_acc_l2a2: rhs_acc_scope_base {
    class ItemInfo: InventoryOpticsItem_Base_F {};
};
class rhsgref_acc_l1a1_l2a2: rhsgref_acc_l2a2 {
    class ItemInfo: ItemInfo {
        mass = 7;
    };
};

class rhs_acc_mtz: rhs_acc_scope_base {
    descriptionShort = "Dovetail to Picatinny rail adapter";
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 4;
    };
};

class rhs_acc_ekp1;
class rhs_acc_npz: rhs_acc_ekp1 {
    descriptionShort = "Dovetail to Picatinny rail adapter";
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 4;
    };
};

//PO
class EBR_base_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class LOP_Weap_LeeEnfield: EBR_base_F {
    scope = 2;
    magazineWell[] = {"CBA_303B_LeeEn"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87;
    };
};
class LOP_Weap_LeeEnfield_railed: LOP_Weap_LeeEnfield {
    displayName = "Lee Enfield (Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 89;
    };
};

class LOP_U_Fatigue_BDU_FLEC_01: Uniform_Base {
    displayName = "Battle Dress Uniform (Flecktarn/Dark)";
};
class LOP_U_Fatigue_BDU_FLEC_02: Uniform_Base {
    displayName = "Battle Dress Uniform (Flecktarn/Light)";
};
