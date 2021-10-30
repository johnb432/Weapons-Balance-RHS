class rhs_weap_SCAR_Base: arifle_MX_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCAR_H_Base: rhs_weap_SCAR_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCAR_H_CQC_Base: rhs_weap_SCAR_H_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_CQC: rhs_weap_SCAR_H_CQC_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_CQC_Folded: rhs_weap_SCARH_CQC {
    displayName = "SCAR-H (CQC/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};
class rhs_weap_SCARH_FDE_CQC: rhs_weap_SCARH_CQC {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_FDE_CQC_Folded: rhs_weap_SCARH_FDE_CQC {
    displayName = "SCAR-H (CQC/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};

class rhs_weap_SCAR_H_LB_Base: rhs_weap_SCAR_H_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_LB: rhs_weap_SCAR_H_LB_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_LB_Folded: rhs_weap_SCARH_LB {
    displayName = "SCAR-H (LB/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.8;
    };
};
class rhs_weap_SCARH_FDE_LB: rhs_weap_SCARH_LB {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_FDE_LB_Folded: rhs_weap_SCARH_FDE_LB {
    displayName = "SCAR-H (LB/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.8;
    };
};

class rhs_weap_SCAR_H_STD_Base: rhs_weap_SCAR_H_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_STD: rhs_weap_SCAR_H_STD_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_STD_Folded: rhs_weap_SCARH_STD {
    displayName = "SCAR-H (STD/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};
class rhs_weap_SCARH_FDE_STD: rhs_weap_SCARH_STD {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_FDE_STD_Folded: rhs_weap_SCARH_FDE_STD {
    displayName = "SCAR-H (STD/Folded)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};

class rhs_weap_mk17_CQC: rhs_weap_SCAR_H_CQC_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_mk17_CQC_Folded: rhs_weap_mk17_CQC {
    baseWeapon = "rhs_weap_mk17_CQC_Folded";
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};
class rhs_weap_SCARH_USA_CQC: rhs_weap_mk17_CQC {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_USA_CQC_Folded: rhs_weap_SCARH_USA_CQC {
    baseWeapon = "rhs_weap_SCARH_USA_CQC_Folded";
    displayName = "SCAR-H (USA/CQC/Folded)";
    scope = 1;
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.8;
    };
};

class rhs_weap_mk17_LB: rhs_weap_SCAR_H_LB_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_mk17_LB_Folded: rhs_weap_mk17_LB {
    baseWeapon = "rhs_weap_mk17_LB_Folded";
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.8;
    };
};
class rhs_weap_SCARH_USA_LB: rhs_weap_mk17_LB {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_USA_LB_Folded: rhs_weap_SCARH_USA_LB {
    baseWeapon = "rhs_weap_SCARH_USA_LB_Folded";
    displayName = "SCAR-H (USA/LB/Folded)";
    scope = 1;
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.8;
    };
};

class rhs_weap_mk17_STD: rhs_weap_SCAR_H_STD_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_mk17_STD_Folded: rhs_weap_mk17_STD {
    baseWeapon = "rhs_weap_mk17_STD_Folded";
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};
class rhs_weap_SCARH_USA_STD: rhs_weap_mk17_STD {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_SCARH_USA_STD_Folded: rhs_weap_SCARH_USA_STD {
    baseWeapon = "rhs_weap_SCARH_USA_STD_Folded";
    displayName = "SCAR-H (USA/STD/Folded)";
    scope = 1;
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};
