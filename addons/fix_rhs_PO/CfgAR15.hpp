class arifle_MX_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m4_Base: arifle_MX_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m4: rhs_weap_m4_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m4_m320: rhs_weap_m4 {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m4_m203: rhs_weap_m4_m320 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 106;
    };
};
class rhs_weap_m4_carryhandle_m203: rhs_weap_m4_m203 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 106;
    };
};
class rhs_weap_m4_carryhandle_m203S: rhs_weap_m4_carryhandle_m203 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 103;
    };
};

class rhs_weap_m4a1: rhs_weap_m4_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};

class rhs_weap_m4a1_m203: rhs_weap_m4a1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.8;
    };
};
class rhs_weap_m4a1_carryhandle_m203: rhs_weap_m4a1_m203 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.8;
    };
};
class rhs_weap_m4a1_carryhandle_m203S: rhs_weap_m4a1_carryhandle_m203 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 93.8;
    };
};

class rhs_weap_m4a1_blockII: rhs_weap_m4a1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};

class rhs_weap_m4a1_blockII_M203: rhs_weap_m4a1_blockII {
    displayName = "M4A1 Block II (M203S)";
};
class rhs_weap_m4a1_blockII_M203_bk: rhs_weap_m4a1_blockII_M203 {
    displayName = "M4A1 Block II (Black Rail/M203S)";
};
class rhs_weap_m4a1_blockII_M203_d: rhs_weap_m4a1_blockII_M203 {
    displayName = "M4A1 Block II (Desert/M203S)";
};
class rhs_weap_m4a1_blockII_M203_wd: rhs_weap_m4a1_blockII_M203 {
    displayName = "M4A1 Block II (Woodland/M203S)";
};

class rhs_weap_mk18: rhs_weap_m4a1_blockII {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 61;
    };
};
class rhs_weap_mk18_bk: rhs_weap_mk18 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 61;
    };
};
class rhs_weap_mk18_d: rhs_weap_mk18 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 61;
    };
};
class rhs_weap_mk18_wd: rhs_weap_mk18 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 61;
    };
};

class rhs_weap_mk18_m320: rhs_weap_mk18 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94;
    };
};

class rhs_weap_mk18_KAC: rhs_weap_mk18 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 61;
    };
};
class rhs_weap_mk18_KAC_bk: rhs_weap_mk18_KAC {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 61;
    };
};
class rhs_weap_mk18_KAC_d: rhs_weap_mk18_KAC {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 61;
    };
};
class rhs_weap_mk18_KAC_wd: rhs_weap_mk18_KAC {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 61;
    };
};

class rhs_weap_m16a4: rhs_weap_m4_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.5;
    };
};
class rhs_weap_m16a4_carryhandle: rhs_weap_m16a4 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.5;
    };
};
class rhs_weap_m16a4_carryhandle_M203: rhs_weap_m16a4 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 111.5;
    };
};
class rhs_weap_m16a4_imod_M203: rhs_weap_m16a4_carryhandle_M203 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 111.5;
    };
};

class rhs_weap_m27iar_grip: rhs_weap_m4a1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82.2;
        class GripodSlot: asdg_UnderSlot {};
    };
};
class rhs_weap_hk416d10: rhs_weap_m4a1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.8;
    };
};
class rhs_weap_hk416d10_LMT: rhs_weap_hk416d10 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.8;
    };
};
class rhs_weap_hk416d10_LMT_d: rhs_weap_hk416d10_LMT {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.8;
    };
};
class rhs_weap_hk416d10_LMT_wd: rhs_weap_hk416d10_LMT {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.8;
    };
};
class rhs_weap_hk416d10_m320: rhs_weap_hk416d10 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.8;
    };
};