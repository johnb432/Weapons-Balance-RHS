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
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
};
class rhs_weap_mg42: rhs_weap_mg42_base {
    displayName = "MG 42";
};

class rhs_weap_MP44_base;
class rhs_weap_MP44: rhs_weap_MP44_base {
    displayName = "MP 44";
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
