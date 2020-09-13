class rhs_weap_saw_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_lmg_minimipara: rhs_weap_saw_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_minimi_para_railed: rhs_weap_lmg_minimipara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 159.5;
    };
};

class rhs_weap_lmg_minimi_railed: rhs_weap_lmg_minimipara {
    displayName = "FN Minimi Para (Short/RIS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_m249: rhs_weap_lmg_minimi_railed {
    class WeaponSlotsInfo {
        mass = 165;
    };
};

class rhs_weap_m249_pip: rhs_weap_lmg_minimi_railed {
    class WeaponSlotsInfo {
        mass = 168;
    };
};
class rhs_weap_m249_pip_ris: rhs_weap_m249_pip {
    displayName = "M249 PIP (Long/RIS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 170;
    };
};

class rhs_weap_m249_pip_L: rhs_weap_lmg_minimi_railed {
    class WeaponSlotsInfo {
        mass = 167.5;
    };
};
class rhs_weap_m249_light_L: rhs_weap_m249_pip_L {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 167.5;
    };
};
class rhs_weap_m249_pip_L_para: rhs_weap_m249_pip_L {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 166.5;
    };
};

class rhs_weap_m249_pip_S: rhs_weap_lmg_minimi_railed {
    class WeaponSlotsInfo {
        mass = 162.5;
    };
};
class rhs_weap_m249_light_S: rhs_weap_m249_pip_S {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 162.5;
    };
};
class rhs_weap_m249_pip_S_para: rhs_weap_m249_pip_S {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 161.5;
    };
};

class rhs_weap_M249_base;
class rhs_weap_m240_base: rhs_weap_M249_base {
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
};
