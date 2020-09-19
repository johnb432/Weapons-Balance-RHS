class CfgPatches {
    class WB_fix_RHS {
        name = "Weapons balance - Fix RHS";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "rhsusf_main",
            "rhs_main",
            "rhsusf_c_weapons",
            "rhsgref_c_weapons",
            "rhssaf_c_weapons"
        };
        author = "johnb43";
    };
};

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"

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
