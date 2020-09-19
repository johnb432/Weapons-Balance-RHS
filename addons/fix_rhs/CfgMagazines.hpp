class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_556x45_Stanag;
    class 1Rnd_HE_Grenade_shell;
    class rhs_10Rnd_762x54mmR_7N1;
    class rhs_mag_20Rnd_556x45_M193_Stanag;
    class rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag;
    class rhs_200rnd_556x45_M_SAW;
    class rhsusf_50Rnd_762x51;
    class rhs_30Rnd_545x39_7N6_AK;
    class rhs_30Rnd_545x39_7N10_AK;
    class rhs_mag_20Rnd_762x51_m80_fnfal;
    class rhs_30Rnd_762x39mm_tracer;
    class rhssaf_30Rnd_762x39_M82_api;
    class CA_LauncherMagazine;

    class rhssaf_30Rnd_762x39_M82_api_green: rhssaf_30Rnd_762x39_M82_api {
        ammo = "rhssaf_ammo_762x39_m82_api_green";
        author = "Red Hammer Studios & johnb43";
        displayname = "30rnd M70 7.62x39mm M82 API (Green Tracers)";
    };

    class rhs_10Rnd_762x54mmR_7N14: rhs_10Rnd_762x54mmR_7N1 {
        mass = 5.1;
    };

    class rhs_mag_M441_HE: 1Rnd_HE_Grenade_shell {
        mass = 4;
    };

    class rhs_VOG25: 1Rnd_HE_Grenade_shell {
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

    class rhsgref_30rnd_556x45_m21: CA_Magazine {
        mass = 9.35;
    };

    class rhsgref_30rnd_556x45_vhs2: CA_Magazine {
        mass = 8
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
    class rhssaf_250Rnd_762x54R: rhs_100Rnd_762x54mmR {
        mass = 91;
    };

    class rhsgref_25Rnd_792x33_SmE_StG: CA_Magazine {
        mass = 10;
    };

    class rhsgref_24rnd_75x55_Stgw57: CA_Magazine {
        mass = 20;
    };

    class rhsgref_50Rnd_792x57_SmE_drum: CA_Magazine {
        mass = 31;
    };

    class rhs_30Rnd_545x39_7N10_2mag_AK: rhs_30Rnd_545x39_7N10_AK {
        mass = 9.1;
    };

    class rhs_mag_20Rnd_556x45_M193_2MAG_Stanag: rhs_mag_20Rnd_556x45_M193_Stanag {
        mass = 6.25;
    };
    class rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red: rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red {
        mass = 6.25;
    };

    class rhs_mag_30Rnd_762x51_m80_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
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

    class rhs_mag_100Rnd_556x45_M855A1_cmag: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        descriptionShort = "Caliber: 5.56x45mm NATO<br/>Rounds: 100<br/>Used in: M4, M16, M27, M249";
    };

    class Laserbatteries;
    class rhs_LaserFCSMag: Laserbatteries {
        descriptionShort = "Batteries for Laser Designator<br/>Does not fit into NVG<br/>Recycle after use.";
        displayName = "Designator Batteries (RHS)";
    };
    class rhs_LaserMag: Laserbatteries {
        descriptionShort = "Batteries for Laser Designator<br/>Does not fit into NVG<br/>Recycle after use.";
        displayName = "Designator Batteries (RHS)";
    };
    class rhs_LaserMag_ai: Laserbatteries {
        descriptionShort = "Batteries for Laser Designator<br >Does not fit into NVG<br/>Recycle after use.";
        displayName = "Designator Batteries (RHS)";
    };
};
