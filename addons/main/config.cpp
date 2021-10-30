#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "rhs_weap_m16a3_carryhandle", "rhs_weap_m16a3_carryhandle_grip", "rhs_weap_m16a3_carryhandle_grip2", "rhs_weap_m16a3_carryhandle_grip3",
            "rhs_weap_m16a3_carryhandle_M203", "rhs_weap_m16a3_carryhandle_M203_grip",
            "rhs_weap_ak101", "rhs_weap_ak101_folded", "rhs_weap_ak101_npz",
            "rhs_weap_ak101_zenitco01", "rhs_weap_ak101_zenitco01_afg", "rhs_weap_ak101_zenitco01_grip1",
            "rhs_weap_ak101_zenitco01_b33", "rhs_weap_ak101_zenitco01_b33_afg", "rhs_weap_ak101_zenitco01_b33_grip1",
            "rhs_weap_ak101_zenitco01_npz", "rhs_weap_ak101_zenitco01_npz_afg", "rhs_weap_ak101_zenitco01_npz_grip1",
            "rhs_weap_ak102", "rhs_weap_ak102_folded", "rhs_weap_ak102_npz",
            "rhs_weap_ak102_zenitco01", "rhs_weap_ak102_zenitco01_b33", "rhs_weap_ak102_zenitco01_afg",
            "rhs_weap_ak102_zenitco01_grip1", "rhs_weap_ak102_zenitco01_b33_afg", "rhs_weap_ak102_zenitco01_b33_grip1",
            "rhs_weap_ak102_zenitco01_npz", "rhs_weap_ak102_zenitco01_npz_afg", "rhs_weap_ak102_zenitco01_npz_grip1"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "rhs_main_loadorder",
            "rhsgref_main_loadorder",
            "rhssaf_main_loadorder",
            "rhsusf_main_loadorder"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-RHS";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - RHS";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - RHS";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-RHS";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_rhs\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_rhs\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_rhs\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgAmmoBelts.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"

class CfgFunctions {
    class RHS {
        class functions {
            class acc_mtz {
                file = "z\wb_rhs\addons\main\functions\rhs_mtz.sqf";
            };
            class acc_mtz_handler {
                file = "z\wb_rhs\addons\main\functions\rhs_mtz_dismount.sqf";
            };

            class acc_npz {
                file = "z\wb_rhs\addons\main\functions\rhs_npz.sqf";
            };
            class acc_npz_handler {
                file = "z\wb_rhs\addons\main\functions\rhs_npz_dismount.sqf";
            };

            class fold_ak {
                file = "z\wb_rhs\addons\main\functions\rhs_fold.sqf";
            };
            class fold_weapon {
                file = "z\wb_rhs\addons\main\functions\rhs_fold.sqf";
            };
        };
    };
};

class asdg_OpticRail1913;
class asdg_OpticRail1913_long;
class asdg_UnderSlot;
class rhs_russian_ak_barrel_slot;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    class arifle_MX_Base_F: Rifle_Base_F {
       class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    #include "weapons\CfgWeapAK.hpp"
    #include "weapons\CfgWeapAK556.hpp"
    #include "weapons\CfgWeapAKMisc.hpp"
    #include "weapons\CfgWeapAR15.hpp"
    #include "weapons\CfgWeapDMR.hpp"
    #include "weapons\CfgWeapM14.hpp"
    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapMisc556.hpp"
    #include "weapons\CfgWeapSAW.hpp"
    #include "weapons\CfgWeapSCAR.hpp"
    #include "weapons\CfgLaunchers.hpp"
};

class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_556x45_Stanag;
    class rhs_mag_30Rnd_556x45_M855_Stanag;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag;
    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red;
    class rhs_mag_30Rnd_556x45_Mk262_Stanag;
    class rhs_mag_30Rnd_556x45_Mk318_Stanag;

    #include "magazines\CfgMagAK.hpp"
    #include "magazines\CfgMagNATO556.hpp"
    #include "magazines\CfgMagAK556.hpp"
    #include "magazines\CfgMagMisc.hpp"
    #include "magazines\CfgMagRifleMisc.hpp"
};

class BettIR_Config {
    class CompatibleAttachments {
        class rhs_acc_perst1ik {
            offset[] = {0.15, 0.22, 0.25};
        };
        class rhs_acc_perst1ik_ris {
            offset[] = {0.15, 0.22, 0.25};
        };
        class rhs_acc_perst3_2dp {
            offset[] = {0.15, 0.22, 0.25};
        };
        class rhs_acc_perst3_2dp_h {
            offset[] = {0.15, 0.22, 0.25};
        };
    };
};