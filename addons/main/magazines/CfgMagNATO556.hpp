class rhs_mag_20Rnd_556x45_M193_Stanag;
class rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red;
class rhsusf_100Rnd_556x45_M995_soft_pouch;
class rhsusf_100Rnd_556x45_M995_soft_pouch_coyote;
class rhsusf_100Rnd_556x45_M995_soft_pouch_ucp;
class rhsusf_200rnd_556x45_M855_box;
class rhs_200rnd_556x45_M_SAW;

class rhs_mag_20Rnd_556x45_M193_2MAG_Stanag: rhs_mag_20Rnd_556x45_M193_Stanag {
    mass = 6.25;
};
class rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red: rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red {
    mass = 6.25;
};

class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange: rhs_mag_30Rnd_556x45_M855_Stanag {
    scope = 2;
};
class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green: rhs_mag_30Rnd_556x45_M855_Stanag {
    scope = 2;
};
class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow: rhs_mag_30Rnd_556x45_M855_Stanag {
    scope = 2;
};

class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green: rhs_mag_30Rnd_556x45_M855A1_Stanag {
    scope = 2;
};
class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange: rhs_mag_30Rnd_556x45_M855A1_Stanag {
    scope = 2;
};
class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow: rhs_mag_30Rnd_556x45_M855A1_Stanag {
    scope = 2;
};

class rhssaf_30rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag {
    mass = 9.35;
};
class rhssaf_30rnd_556x45_MDIM_G36: 30Rnd_556x45_Stanag {
    mass = 9.35;
};
class rhssaf_30rnd_556x45_SOST_G36: 30Rnd_556x45_Stanag {
    mass = 9.35;
};
class rhssaf_30rnd_556x45_SPR_G36: 30Rnd_556x45_Stanag {
    mass = 9.35;
};
class rhssaf_30rnd_556x45_TDIM_G36: 30Rnd_556x45_Stanag {
    mass = 9.35;
};
class rhssaf_30rnd_556x45_Tracers_G36: 30Rnd_556x45_Stanag {
    mass = 9.35;
};

class rhsgref_30rnd_556x45_vhs2: CA_Magazine {
    mass = 9.35;
};

class rhsgref_30rnd_556x45_m21: CA_Magazine {
    mass = 9.35;
};
class rhsgref_30rnd_556x45_m21_t: rhsgref_30rnd_556x45_m21 {
    displayName = "30rnd M21 M856 (Tracer)";
};

class rhsusf_200Rnd_556x45_M995_soft_pouch: rhsusf_100Rnd_556x45_M995_soft_pouch {
    author = "Red Hammer Studios & johnb43";
    count = 200;
    descriptionShort = "Caliber: 5.56x45mm AP NATO<br />Rounds: 200<br />Used in: M249";
    displayname = "200rnd M249 Softpack M995 AP";
    mass = 45.87;
    model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag";
    modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_200rnd";
};
class rhsusf_200Rnd_556x45_M995_soft_pouch_coyote: rhsusf_100Rnd_556x45_M995_soft_pouch_coyote {
    author = "Red Hammer Studios & johnb43";
    count = 200;
    descriptionShort = "Caliber: 5.56x45mm AP NATO<br />Rounds: 200<br />Used in: M249";
    displayname = "200rnd M249 Softpack M995 AP";
    mass = 45.87;
    model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag";
    modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_200rnd";
};
class rhsusf_200Rnd_556x45_M995_soft_pouch_ucp: rhsusf_100Rnd_556x45_M995_soft_pouch_ucp {
    author = "Red Hammer Studios & johnb43";
    count = 200;
    descriptionShort = "Caliber: 5.56x45mm AP NATO<br />Rounds: 200<br />Used in: M249";
    displayname = "200rnd M249 Softpack M995 AP";
    mass = 45.87;
    model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag";
    modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_200rnd";
};

class rhs_200rnd_556x45_T_SAW: rhs_200rnd_556x45_M_SAW {
    scope = 2;
    scopeArsenal = 2;
};

class rhs_mag_100Rnd_556x45_M855A1_cmag: rhs_mag_30Rnd_556x45_M855A1_Stanag {
    descriptionShort = "Caliber: 5.56x45mm NATO<br/>Rounds: 100<br/>Used in: M4, M16, M27, M249";
};

class rhsusf_200rnd_556x45_M855_mixed_box: rhsusf_200rnd_556x45_M855_box {
    ammo = "rhs_ammo_556x45_M855_Ball_Red";
};
