class Launcher;
class Launcher_Base_F: Launcher {
    class WeaponSlotsInfo {};
};
class rhs_weap_rpg26: Launcher_Base_F {
    baseWeapon = "rhs_weap_rpg26";
    magazineReloadTime = 0;
};
class rhs_weap_rpg26_ready: rhs_weap_rpg26 {
    scope = 1;
    scopeArsenal = 1;

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };
};
class rhs_weap_rpg26_used: rhs_weap_rpg26 {
    baseWeapon = "rhs_weap_rpg26_used";
};

class rhs_weap_rshg2: rhs_weap_rpg26 {
    baseWeapon = "rhs_weap_rshg2";
};
class rhs_weap_rshg2_ready: rhs_weap_rshg2 {
    scope = 1;
    scopeArsenal = 1;

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };
};
class rhs_weap_rshg2_used: rhs_weap_rshg2 {
    baseWeapon = "rhs_weap_rshg2_used";
};

class rhs_weap_rpg75: Launcher_Base_F {
    baseWeapon = "rhs_weap_rpg75";
    magazineReloadTime = 0;
};
class rhs_weap_rpg75_ready: rhs_weap_rpg75 {
    scope = 1;
    scopeArsenal = 1;

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };
};
class rhs_weap_rpg75_used: rhs_weap_rpg75 {
    baseWeapon = "rhs_weap_rpg75_used";
};

class rhs_weap_m80: Launcher_Base_F {
    baseWeapon = "rhs_weap_m80";
    magazineReloadTime = 0;
};
class rhs_weap_m80_ready: rhs_weap_m80 {
    scope = 1;
    scopeArsenal = 1;

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };
};
class rhs_weap_m80_used: rhs_weap_m80 {
    baseWeapon = "rhs_weap_m80_used";
};

class rhs_weap_M136: Launcher_Base_F {
    baseWeapon = "rhs_weap_M136";
    magazineReloadTime = 0;
};
class rhs_weap_M136_ready: rhs_weap_M136 {
    scope = 1;
    scopeArsenal = 1;

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };
};
class rhs_weap_M136_used: rhs_weap_M136 {
    baseWeapon = "rhs_weap_M136_used";
};

class rhs_weap_M136_hedp: rhs_weap_M136 {
    baseWeapon = "rhs_weap_M136_hedp";
};
class rhs_weap_M136_hedp_ready: rhs_weap_M136_hedp {
    scope = 1;
    scopeArsenal = 1;

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };
};
class rhs_weap_M136_hedp_used: rhs_weap_M136_used {
    baseWeapon = "rhs_weap_M136_hedp_used";
};

class rhs_weap_M136_hp: rhs_weap_M136 {
    baseWeapon = "rhs_weap_M136_hp";
};
class rhs_weap_M136_hp_ready: rhs_weap_M136_hp {
    scope = 1;
    scopeArsenal = 1;

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };
};
class rhs_weap_M136_hp_used: rhs_weap_M136_used {
    baseWeapon = "rhs_weap_M136_hp_used";
};

class rhs_weap_m72a7: rhs_weap_M136 {
    baseWeapon = "rhs_weap_m72a7";
};
class rhs_weap_m72a7_ready: rhs_weap_m72a7 {
    scope = 1;
    scopeArsenal = 1;

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };
};
class rhs_weap_m72a7_used: rhs_weap_m72a7 {
    baseWeapon = "rhs_weap_m72a7_used";
};

class rhs_weap_panzerfaust60: Launcher_Base_F {
    magazineReloadTime = 0;
    class WeaponSlotsInfo {
        allowedSlots[] = {901};
        mass = 138;
    };
};
class rhs_weap_panzerfaust60_ready: rhs_weap_panzerfaust60 {
    scope = 1;
    scopeArsenal = 1;

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };
};
class rhs_weap_panzerfaust60_used: rhs_weap_panzerfaust60 {
    baseWeapon = "rhs_weap_panzerfaust60_used";
};

class launch_Titan_base: Launcher_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class launch_O_Titan_F: launch_Titan_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_fim92: launch_O_Titan_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 114.4;
    };
};
class rhs_weap_fgm148: launch_O_Titan_F {
    ace_reloadlaunchers_enabled = 0;
    magazineReloadTime = 0;
};
