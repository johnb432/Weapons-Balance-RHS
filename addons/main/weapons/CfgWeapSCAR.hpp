class rhs_weap_SCAR_H_CQC_Base;
class rhs_weap_SCARH_CQC: rhs_weap_SCAR_H_CQC_Base {
    displayName = "SCAR-H CQC (Black)";
    class WeaponSlotsInfo;
};
class rhs_weap_SCARH_CQC_Folded: rhs_weap_SCARH_CQC {
    displayName = "SCAR-H CQC (Black/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};
class rhs_weap_SCARH_FDE_CQC: rhs_weap_SCARH_CQC {
    displayName = "SCAR-H CQC (FDE)";
    class WeaponSlotsInfo;
};
class rhs_weap_SCARH_FDE_CQC_Folded: rhs_weap_SCARH_FDE_CQC {
    displayName = "SCAR-H CQC (FDE/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};

class rhs_weap_SCAR_H_LB_Base;
class rhs_weap_SCARH_LB: rhs_weap_SCAR_H_LB_Base {
    displayName = "SCAR-H LB (Black)";
    class WeaponSlotsInfo;
};
class rhs_weap_SCARH_LB_Folded: rhs_weap_SCARH_LB {
    displayName = "SCAR-H LB (Black/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.8;
    };
};
class rhs_weap_SCARH_FDE_LB: rhs_weap_SCARH_LB {
    displayName = "SCAR-H LB (FDE)";
    class WeaponSlotsInfo;
};
class rhs_weap_SCARH_FDE_LB_Folded: rhs_weap_SCARH_FDE_LB {
    displayName = "SCAR-H LB (FDE/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.8;
    };
};

class rhs_weap_SCAR_H_STD_Base;
class rhs_weap_SCARH_STD: rhs_weap_SCAR_H_STD_Base {
    displayName = "SCAR-H STD (Black)";
    class WeaponSlotsInfo;
};
class rhs_weap_SCARH_STD_Folded: rhs_weap_SCARH_STD {
    displayName = "SCAR-H STD (Black/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};
class rhs_weap_SCARH_FDE_STD: rhs_weap_SCARH_STD {
    displayName = "SCAR-H STD (FDE)";
    class WeaponSlotsInfo;
};
class rhs_weap_SCARH_FDE_STD_Folded: rhs_weap_SCARH_FDE_STD {
    displayName = "SCAR-H STD (FDE/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};

class rhs_weap_mk17_CQC: rhs_weap_SCAR_H_CQC_Base {
    displayName = "Mk 17 Mod 0 CQC (FDE)";
    class WeaponSlotsInfo;
};
class rhs_weap_mk17_CQC_Folded: rhs_weap_mk17_CQC {
    baseWeapon = "rhs_weap_mk17_CQC_Folded";
    displayName = "Mk 17 Mod 0 CQC (FDE/Folded)";
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};
class rhs_weap_SCARH_USA_CQC: rhs_weap_mk17_CQC {
    displayName = "SCAR-H CQC (USA)";
    class WeaponSlotsInfo;
};
class rhs_weap_SCARH_USA_CQC_Folded: rhs_weap_SCARH_USA_CQC {
    baseWeapon = "rhs_weap_SCARH_USA_CQC_Folded";
    displayName = "SCAR-H CQC (USA/Folded)";
    scope = 1;
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};

class rhs_weap_mk17_LB: rhs_weap_SCAR_H_LB_Base {
    displayName = "Mk 17 Mod 0 LB (FDE)";
    class WeaponSlotsInfo;
};
class rhs_weap_mk17_LB_Folded: rhs_weap_mk17_LB {
    baseWeapon = "rhs_weap_mk17_LB_Folded";
    displayName = "Mk 17 Mod 0 LB (FDE/Folded)";
    picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_LB_folded_ca.paa";
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.8;
    };
};
class rhs_weap_SCARH_USA_LB: rhs_weap_mk17_LB {
    displayName = "SCAR-H LB (USA)";
    class WeaponSlotsInfo;
};
class rhs_weap_SCARH_USA_LB_Folded: rhs_weap_SCARH_USA_LB {
    baseWeapon = "rhs_weap_SCARH_USA_LB_Folded";
    displayName = "SCAR-H LB (USA/Folded)";
    scope = 1;
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.8;
    };
};

class rhs_weap_mk17_STD: rhs_weap_SCAR_H_STD_Base {
    displayName = "Mk 17 Mod 0 STD (FDE)";
    class WeaponSlotsInfo;
};
class rhs_weap_mk17_STD_Folded: rhs_weap_mk17_STD {
    baseWeapon = "rhs_weap_mk17_STD_Folded";
    displayName = "Mk 17 Mod 0 STD (FDE/Folded)";
    picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_STD_folded_ca.paa";
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};
class rhs_weap_SCARH_USA_STD: rhs_weap_mk17_STD {
    displayName = "SCAR-H STD (USA)";
    class WeaponSlotsInfo;
};
class rhs_weap_SCARH_USA_STD_Folded: rhs_weap_SCARH_USA_STD {
    baseWeapon = "rhs_weap_SCARH_USA_STD_Folded";
    displayName = "SCAR-H STD (USA/Folded)";
    scope = 1;
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};
