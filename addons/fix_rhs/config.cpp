class CfgPatches {
    class WB_fix_RHS {
        name = "Weapons balance - Fix RHS";
        units[] = {};
        weapons[] = {
            "rhs_weap_m16a3_carryhandle",
            "rhs_weap_m16a3_carryhandle_grip",
            "rhs_weap_m16a3_carryhandle_grip2",
            "rhs_weap_m16a3_carryhandle_grip3",
            "rhs_weap_m16a3_carryhandle_M203",
            "rhs_weap_ak101", "rhs_weap_ak101_folded", "rhs_weap_ak101_npz",
            "rhs_weap_ak101_zenitco01", "rhs_weap_ak101_zenitco01_afg", "rhs_weap_ak101_zenitco01_grip1",
            "rhs_weap_ak101_zenitco01_b33", "rhs_weap_ak101_zenitco01_b33_afg", "rhs_weap_ak101_zenitco01_b33_grip1",
            "rhs_weap_ak101_zenitco01_npz", "rhs_weap_ak101_zenitco01_npz_afg", "rhs_weap_ak101_zenitco01_npz_grip1",
            "rhs_weap_ak102", "rhs_weap_ak102_folded", "rhs_weap_ak102_npz",
            "rhs_weap_ak102_zenitco01", "rhs_weap_ak102_zenitco01_b33", "rhs_weap_ak102_zenitco01_afg",
            "rhs_weap_ak102_zenitco01_grip1", "rhs_weap_ak102_zenitco01_b33_afg", "rhs_weap_ak102_zenitco01_b33_grip1",
            "rhs_weap_ak102_zenitco01_npz", "rhs_weap_ak102_zenitco01_npz_afg", "rhs_weap_ak102_zenitco01_npz_grip1"
        };
        requiredVersion = 1.96;
        requiredAddons[] = {
            "cba_main",
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
#include "CfgAmmoBelts.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"

class rhs_russian_ak_barrel_slot;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    class arifle_MX_Base_F: Rifle_Base_F {
       class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    #include "CfgWeapAK.hpp"
    #include "CfgWeapAK556.hpp"
    #include "CfgWeapAKMisc.hpp"
    #include "CfgWeapAR15.hpp"
    #include "CfgWeapDMR.hpp"
    #include "CfgWeapM14.hpp"
    #include "CfgWeapMisc.hpp"
    #include "CfgWeapMisc556.hpp"
    #include "CfgWeapSAW.hpp"
    #include "CfgWeapSCAR.hpp"
    #include "CfgLaunchers.hpp"
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

    #include "CfgMagAK.hpp"
    #include "CfgMagNATO556.hpp"
    #include "CfgMagAK556.hpp"
    #include "CfgMagMisc.hpp"
    #include "CfgMagRifleMisc.hpp"
};

class CBA_DisposableLaunchers {
    rhs_weap_rpg26_ready[] = {"rhs_weap_rpg26","rhs_weap_rpg26_used"};
    rhs_weap_rshg2_ready[] = {"rhs_weap_rshg2","rhs_weap_rshg2_used"};
    rhs_weap_rpg75_ready[] = {"rhs_weap_rpg75","rhs_weap_rpg75_used"};
    rhs_weap_m80_ready[] = {"rhs_weap_m80","rhs_weap_m80_used"};
    rhs_weap_M136_ready[] = {"rhs_weap_M136","rhs_weap_M136_used"};
    rhs_weap_M136_hedp_ready[] = {"rhs_weap_M136_hedp","rhs_weap_M136_hedp_used"};
    rhs_weap_M136_hp_ready[] = {"rhs_weap_M136_hp","rhs_weap_M136_hp_used"};
    rhs_weap_m72a7_ready[] = {"rhs_weap_m72a7","rhs_weap_m72a7_used"};
    rhs_weap_panzerfaust60_ready[] = {"rhs_weap_panzerfaust60","rhs_weap_panzerfaust60_used"};
};
