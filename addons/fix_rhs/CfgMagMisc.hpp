class 1Rnd_HE_Grenade_shell;
class rhs_mag_20Rnd_762x51_m80_fnfal;
class rhsusf_50Rnd_762x51;
class Laserbatteries;
class CA_LauncherMagazine;
class Titan_AA;

class rhs_mag_M441_HE: 1Rnd_HE_Grenade_shell {
    mass = 4;
};
class rhs_VOG25: 1Rnd_HE_Grenade_shell {
    mass = 4;
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
