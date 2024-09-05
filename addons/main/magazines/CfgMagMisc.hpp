#pragma hemtt flag pe23_ignore_has_include

class 1Rnd_HE_Grenade_shell;
class rhsusf_50Rnd_762x51;
class Laserbatteries;
class CA_LauncherMagazine;
class Titan_AA;

class rhs_mag_M441_HE: 1Rnd_HE_Grenade_shell {
    mass = 4;
};
class rhs_VOG25: 1Rnd_HE_Grenade_shell {
    displayName = "VOG25 (HE)";
    mass = 4;
};
class rhs_VOG25P: rhs_VOG25 {
    displayName = "VOG25P (HE)";
};

class rhs_mag_M433_HEDP;
class rhs_VOG25_HEDP: rhs_mag_M433_HEDP {
    descriptionShort = "Type: High Explosive Dual Purpose Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP-25";
    displayName = "VOG25 (HEDP)";
    initspeed = 76.5;
};

class rhs_GRD40_White: rhs_VOG25 {
    displayName = "GRD-40 (White Smoke)";
};
class rhs_GRD40_Green: rhs_GRD40_White {
    displayName = "GRD-40 (Green Smoke)";
};
class rhs_GRD40_Red: rhs_GRD40_White {
    displayName = "GRD-40 (Red Smoke)";
};
class rhs_GDM40: rhs_GRD40_White {
    displayName = "GDM-40 (White Smoke)";
};

class rhs_VG40MD: rhs_GRD40_White {
    displayName = "VG-40MD (White Smoke)";
};

class rhs_VG40OP_white: rhs_VOG25 {
    displayName = "VG-40OP (White Flare)";
};
class rhs_VG40OP_green: rhs_VG40OP_white {
    displayName = "VG-40OP (Green Flare)";
};
class rhs_VG40OP_red: rhs_VG40OP_white {
    displayName = "VG-40OP (Red Flare)";
};

class rhs_VG40SZ: rhs_VOG25 {
    displayName = "VG-40SZ (Stun)";
};
class rhs_VG40TB: rhs_VOG25 {
    displayName = "VG-40TB (Thermobaric)";
};

class rhs_mag_20Rnd_762x51_m80_fnfal: CA_Magazine {
    mass = 16.24;
};
class rhs_mag_30Rnd_762x51_m80_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
    modelSpecial = "rhsgref\addons\rhsgref_weapons3\mag_proxies\rhs_mag_762x51_fnfal_20rnd";
    scope = 2;
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

class rhsgref_30rnd_1143x23_M1911B_SMG: CA_Magazine {
    mass = 15.8;
};

class rhsgref_20rnd_765x17_vz61: CA_Magazine {
    mass = 5.1;
};

class 10Rnd_RHS_50BMG_Box;
class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box {
    mass = 28;
};

class rhs_LaserFCSMag: Laserbatteries {
    descriptionShort = "$STR_a3_cfgmagazines_laserbatteries1";
    displayName = "Designator Batteries (RHS)";
};
class rhs_LaserMag: Laserbatteries {
    descriptionShort = "$STR_a3_cfgmagazines_laserbatteries1";
    displayName = "Designator Batteries (RHS)";
};
class rhs_LaserMag_ai: Laserbatteries {
    descriptionShort = "$STR_a3_cfgmagazines_laserbatteries1";
    displayName = "Designator Batteries (RHS)";
};

class rhs_mag_smaw_HEAA: CA_LauncherMagazine {
    mass = 100;
};
class rhs_mag_smaw_HEDP: CA_LauncherMagazine {
    mass = 100;
};
class rhs_mag_smaw_SR: CA_LauncherMagazine {
    allowedSlots[] = {701,801,901};
};

class rhs_fim92_mag: Titan_AA {
    mass = 100;
};

class rhs_rpg26_mag;
class rhs_m80_mag: rhs_rpg26_mag {
    mass = 0;
};

#if __has_include("\bwa3_common\config.bin")
    class rhsusf_mag_40Rnd_46x30_AP: CA_Magazine {
        modelSpecial = "\bwa3_mp7\bwa3_mp7_40rnd.p3d";
        modelSpecialIsProxy = 1;
    };
    class rhsusf_mag_40Rnd_46x30_FMJ: CA_Magazine {
        modelSpecial = "\bwa3_mp7\bwa3_mp7_40rnd.p3d";
        modelSpecialIsProxy = 1;
    };
    class rhsusf_mag_40Rnd_46x30_JHP: CA_Magazine {
        modelSpecial = "\bwa3_mp7\bwa3_mp7_40rnd.p3d";
        modelSpecialIsProxy = 1;
    };
#endif
