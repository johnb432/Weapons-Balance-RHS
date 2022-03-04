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

class rhs_weap_rpk_base: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_rpk74_base: rhs_weap_rpk_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_rpk74: rhs_weap_rpk74_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_rpk74n: rhs_weap_rpk74 {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_rpk74m: rhs_weap_rpk74n {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_rpk74m_npz: rhs_weap_rpk74m {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 108.4;
    };
};
class rhs_weap_rpk74m_folded: rhs_weap_rpk74m {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 104.4;
    };
};

class GM6_base_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_M107_Base_F: GM6_base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_M107: rhs_weap_M107_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 327;
    };
};

class rhs_weap_mg42_base: Rifle_Base_F {
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
};
class rhs_weap_mg42: rhs_weap_mg42_base {
    displayName = "MG 42";
};

class rhs_weap_orsis_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_t5000: rhs_weap_orsis_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRail1913_long {};
    };
};

class rhs_weap_XM2010_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m40a5: rhs_weap_XM2010_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRail1913_long {};
    };
};

class rhs_weap_MP44_base;
class rhs_weap_MP44: rhs_weap_MP44_base {
    displayName = "StG 44";
};

class rhs_weap_m38_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m38: rhs_weap_m38_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m38_rail: rhs_weap_m38 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};
class rhs_weap_mosin_sbr: rhs_weap_m38_rail {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 66.8;
    };
};

class rhs_weap_kar98k_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_kar98k: rhs_weap_kar98k_Base_F {
    displayName = "Kar98k";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};

class rhs_weap_sr25: rhs_weap_m14ebrri {
    magazineWell[] += {"CBA_762x51_SR25"};
};

class rhs_weap_m3a1_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m3a1_specops: rhs_weap_m3a1_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 84;
    };
};

class hgun_PDW2000_F;
class rhs_weap_pp2000: hgun_PDW2000_F {
    rhs_fold_checkOptic = 0;
    rhs_pistol_conversion = 1;
};

class SMG_01_F;
class rhs_weap_savz61: SMG_01_F {
    rhs_pistol_conversion = 1;
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
    rhs_fold_checkOptic = 0;
    rhs_pistol_conversion = 1;
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

class rhsusf_weap_MP7A2_folded: rhsusf_weap_MP7A2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 43.2;
    };
};
class rhsusf_weap_MP7A2_folded_aor1: rhsusf_weap_MP7A2_folded {
    displayName = "MP7A2 (AOR1/Folded)";
};
class rhsusf_weap_MP7A2_folded_desert: rhsusf_weap_MP7A2_folded {
    displayName = "MP7A2 (Desert/Folded)";
};
class rhsusf_weap_MP7A2_folded_winter: rhsusf_weap_MP7A2_folded {
    displayName = "MP7A2 (Winter/Folded)";
};

class rhs_weap_M590_5RD: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 67.5;
    };
};
class rhs_weap_M590_8RD: rhs_weap_M590_5RD {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 71.7;
    };
};

class rhs_weap_type94_new: rhs_weap_pya {
    magazineWell[] = {"CBA_8x22_Type14"};
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
    scopeArsenal = 2;
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 4;
        modelOptics = "\A3\Weapons_F\empty";
    };
};

class rhs_acc_ekp1;
class rhs_acc_npz: rhs_acc_ekp1 {
    descriptionShort = "Dovetail to Picatinny rail adapter";
    scopeArsenal = 2;
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 4;
        modelOptics = "\A3\Weapons_F\empty";
    };
};
