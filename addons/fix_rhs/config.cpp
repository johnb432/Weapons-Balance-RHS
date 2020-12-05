class CfgPatches {
    class WB_fix_RHS {
        name = "Weapons balance - Fix RHS";
        units[] = {};
        weapons[] = {
            "rhs_weap_m16a3_carryhandle",
            "rhs_weap_m16a3_carryhandle_grip",
            "rhs_weap_m16a3_carryhandle_grip2",
            "rhs_weap_m16a3_carryhandle_grip3",
            "rhs_weap_m16a3_carryhandle_M203"
        };
        requiredVersion = 1.96;
        requiredAddons[] = {
            "rhsusf_main",
            "rhs_main",
            "rhs_c_weapons",
            "rhsusf_c_weapons",
            "rhsgref_c_weapons",
            "rhssaf_c_weapons"
        };
        author = "johnb43";
    };
};

#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"

class rhs_russian_ak_barrel_slot;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    #include "CfgWeapons.hpp"
    #include "CfgAK.hpp"
    #include "CfgAR15.hpp"
    #include "CfgM14.hpp"
    #include "CfgM249.hpp"
};
