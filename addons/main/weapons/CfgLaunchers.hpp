class Launcher;
class Launcher_Base_F: Launcher {
    class WeaponSlotsInfo;
};

class rhs_weap_m80: Launcher_Base_F {
    baseWeapon = "rhs_weap_m80";
    class WeaponSlotsInfo;
};
class rhs_weap_m80_used: rhs_weap_m80 {
    baseWeapon = "rhs_weap_m80_used";
    displayName = "RBR-M80 (used)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 66;
    };
};

class rhs_weap_panzerfaust60: Launcher_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        allowedSlots[] = {901};
        mass = 138;
    };
};

class launch_Titan_base;
class launch_O_Titan_F: launch_Titan_base {
    class WeaponSlotsInfo;
};
class rhs_weap_fim92: launch_O_Titan_F {
    magazineWell[] += {"CBA_FIM"};
    class WeaponSlotsInfo {
        mass = 114.4;
    };
};

class rhs_weap_strela: launch_O_Titan_F {
    magazineWell[] += {"CBA_STRELA"};
};
