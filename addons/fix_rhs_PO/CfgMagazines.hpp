class CfgMagazines {
    //RHS
    class CA_Magazine;
    class 30Rnd_556x45_Stanag;
    class 1Rnd_HE_Grenade_shell;
    class rhs_10Rnd_762x54mmR_7N1;
    class rhs_mag_20Rnd_556x45_M193_Stanag;
    class rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red;
    class rhs_200rnd_556x45_M_SAW;
    class rhsusf_50Rnd_762x51;
    class rhs_30Rnd_545x39_7N6_AK;
    class rhs_30Rnd_545x39_7N10_AK;
    class rhs_mag_20Rnd_762x51_m80_fnfal;
    class rhs_30Rnd_762x39mm_tracer;
    class CA_LauncherMagazine;

    class rhs_10Rnd_762x54mmR_7N14: rhs_10Rnd_762x54mmR_7N1 {
        mass = 5.1;
    };

    class rhs_mag_M441_HE: 1Rnd_HE_Grenade_shell {
        mass = 4;
    };
    class rhs_mag_M397_HET: rhs_mag_M441_HE {
        mass = 4;
    };
    class rhs_mag_m4009: rhs_mag_M441_HE {
        mass = 4;
    };
    class rhs_mag_M433_HEDP: rhs_mag_M441_HE {
        mass = 4;
    };
    class rhs_mag_m576: rhs_mag_M441_HE {
        mass = 4;
    };
    class rhs_mag_M585_white: rhs_mag_M441_HE {
         mass = 4;
    };
    class rhs_mag_m661_green: rhs_mag_M585_white {
        mass = 4;
    };
    class rhs_mag_m662_red: rhs_mag_M585_white {
        mass = 4;
    };
    class rhs_mag_m713_Red: rhs_mag_M441_HE {
        mass = 4;
    };
    class rhs_mag_m714_White: rhs_mag_m713_Red {
        mass = 4;
    };
    class rhs_mag_m715_Green: rhs_mag_m713_Red {
        mass = 4;
    };
    class rhs_mag_m716_yellow: rhs_mag_m713_Red {
        mass = 4;
    };
    class rhs_mag_M781_Practice: rhs_mag_M433_HEDP {
        mass = 4;
    };

    class rhs_VOG25: 1Rnd_HE_Grenade_shell {
        mass = 4;
    };
    class rhs_VOG25P: rhs_VOG25 {
        mass = 4;
    };
    class rhs_VG40SZ: rhs_VOG25 {
        mass = 4;
    };
    class rhs_VG40TB: rhs_VOG25 {
        mass = 4;
    };
    class rhs_GRD40_White: rhs_VOG25 {
        mass = 4;
    };
    class rhs_GDM40: rhs_GRD40_White {
        mass = 4;
    };
    class rhs_GRD40_Green: rhs_GRD40_White {
        mass = 4;
    };
    class rhs_GRD40_Red: rhs_GRD40_White {
        mass = 4;
    };
    class rhs_VG40MD: rhs_GRD40_White {
        mass = 4;
    };
    class rhs_VG40OP_white: rhs_VOG25 {
        mass = 4;
    };
    class rhs_VG40OP_green: rhs_VG40OP_white {
        mass = 4;
    };
    class rhs_VG40OP_red: rhs_VG40OP_white {
        mass = 4;
    };

    class rhssaf_30rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class rhssaf_30rnd_556x45_MDIM_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class rhssaf_30rnd_556x45_SOST_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class rhssaf_30rnd_556x45_SPR_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class rhssaf_30rnd_556x45_TDIM_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class rhssaf_30rnd_556x45_Tracers_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };

    class rhs_200rnd_556x45_T_SAW: rhs_200rnd_556x45_M_SAW {
        scope = 2;
        scopeArsenal = 2;
    };

    class rhsusf_50Rnd_762x51_m993: rhsusf_50Rnd_762x51 {
        mass = 25.41;
        scope = 2;
    };
    class rhsusf_100Rnd_762x51_m993: rhsusf_50Rnd_762x51_m993 {
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        picture = "\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_m61_ap_ca.paa";
        scope = 2;
    };

    class rhs_100Rnd_762x54mmR: rhs_30Rnd_545x39_7N6_AK {
        mass = 43;
    };
    class rhs_100Rnd_762x54mmR_7N13: rhs_100Rnd_762x54mmR {
        mass = 43;
    };
    class rhs_100Rnd_762x54mmR_7BZ3: rhs_100Rnd_762x54mmR_7N13 {
        mass = 43;
    };
    class rhs_100Rnd_762x54mmR_7N26: rhs_100Rnd_762x54mmR {
        mass = 43;
    };
    class rhs_100Rnd_762x54mmR_green: rhs_100Rnd_762x54mmR {
        mass = 43;
    };
    class rhssaf_250Rnd_762x54R: rhs_100Rnd_762x54mmR {
        mass = 91;
    };

    class rhsgref_25Rnd_792x33_SmE_StG: CA_Magazine {
        mass = 10;
    };

    class rhsgref_24rnd_75x55_Stgw57: CA_Magazine {
        mass = 20;
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_stgw.p3d";
        modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\24rnd_GP11_STGW57";
        modelSpecialIsProxy = 1;
    };

    class rhsgref_50Rnd_792x57_SmE_drum: CA_Magazine {
        mass = 31;
    };
    class rhsgref_50Rnd_792x57_SmE_notracers_drum: rhsgref_50Rnd_792x57_SmE_drum {
        mass = 31;
    };
    class rhsgref_50Rnd_792x57_SmK_drum: rhsgref_50Rnd_792x57_SmE_drum {
        mass = 31;
    };
    class rhsgref_50Rnd_792x57_SmK_alltracers_drum: rhsgref_50Rnd_792x57_SmK_drum {
        mass = 31;
    };

    class rhs_30Rnd_545x39_7N10_2mag_AK: rhs_30Rnd_545x39_7N10_AK {
        mass = 9.1;
    };
    class rhs_30Rnd_545x39_7N10_2mag_camo_AK: rhs_30Rnd_545x39_7N10_2mag_AK {
        mass = 9.1;
    };
    class rhs_30Rnd_545x39_7N10_2mag_desert_AK: rhs_30Rnd_545x39_7N10_2mag_AK {
        mass = 9.1;
    };
    class rhs_30Rnd_545x39_7N10_2mag_plum_AK: rhs_30Rnd_545x39_7N10_2mag_AK {
        mass = 9.1;
    };

    class rhs_mag_20Rnd_556x45_M193_2MAG_Stanag: rhs_mag_20Rnd_556x45_M193_Stanag {
        mass = 6.25;
    };
    class rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red: rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red {
        mass = 6.25;
    };

    class rhs_mag_30Rnd_762x51_m80_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
        modelSpecial = "\hlc_core\mesh\magazines\proxies\20rnd_762NATO_FAL";
        scope = 2;
    };
    class rhs_mag_30Rnd_762x51_m61_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal {
        modelSpecial = "\hlc_core\mesh\magazines\proxies\20rnd_762NATO_FAL";
        scope = 2;
    };
    class rhs_mag_30Rnd_762x51_m62_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal {
        modelSpecial = "\hlc_core\mesh\magazines\proxies\20rnd_762NATO_FAL";
        scope = 2;
    };
    class rhs_mag_30Rnd_762x51_m80a1_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal {
        modelSpecial = "\hlc_core\mesh\magazines\proxies\20rnd_762NATO_FAL";
        scope = 2;
    };

    class rhs_30Rnd_762x39mm_Savz58_tracer: rhs_30Rnd_762x39mm_tracer {
        picture = "\rhsafrf\addons\rhs_weapons\gear_mags\rhs_gear_mag_762x39_ak_ca.paa";
    };

    class rhs_mag_smaw_HEAA: CA_LauncherMagazine {
        mass = 100;
    };
    class rhs_mag_smaw_HEDP: CA_LauncherMagazine {
        mass = 100;
    };

    //PO
    class 20Rnd_762x51_Mag;
    class LOP_10rnd_77mm_mag: 20Rnd_762x51_Mag {
        mass = 4.4;
    };
};
