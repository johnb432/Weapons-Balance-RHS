#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "rhs_main_loadorder",
            "rhsgref_main_loadorder",
            "rhssaf_main_loadorder",
            "rhsusf_main_loadorder"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-RHS";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class Rifle_Base_F;
    class rhs_weap_XM2010_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class rhs_weap_m40a5: rhs_weap_XM2010_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete UnderBarrelSlot;
        };
    };
    class rhs_weap_m24sws: rhs_weap_XM2010_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete UnderBarrelSlot;
        };
    };
};
