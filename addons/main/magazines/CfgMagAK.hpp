class rhs_30Rnd_545x39_7N6_AK;
class rhs_30Rnd_545x39_7N10_AK;
class rhs_30Rnd_545x39_7N22_AK;
class rhs_30Rnd_545x39_7U1_AK;
class rhs_30Rnd_545x39_AK_green;
class rhs_30Rnd_762x39mm_tracer;
class rhssaf_30Rnd_762x39_M82_api;
class rhssaf_30Rnd_762x39_M82_api_green: rhssaf_30Rnd_762x39_M82_api {
    ammo = "rhssaf_ammo_762x39_m82_api_green";
    author = "Red Hammer Studios & johnb43";
    descriptionShort = "Caliber: 7.62x39mm M82<br/>Type: API<br/>Rounds: 30<br/>Used in: AK-47, RPK";
    displayName = "30Rnd 7.62x39 M82 Mag (Green Tracer)";
    displayNameShort = "API";
};

class rhs_30Rnd_545x39_7N10_2mag_AK: rhs_30Rnd_545x39_7N10_AK {
    mass = 9.1;
};

class rhs_60Rnd_545X39_7N10_AK: rhs_30Rnd_545x39_7N10_AK {
    mass = 18;
};
class rhs_60Rnd_545X39_7N22_AK: rhs_30Rnd_545x39_7N22_AK {
    mass = 18;
};
class rhs_60Rnd_545X39_7U1_AK: rhs_30Rnd_545x39_7U1_AK {
    mass = 18;
};
class rhs_60Rnd_545X39_AK_Green: rhs_30Rnd_545x39_AK_green {
    mass = 18;
};

class rhs_10Rnd_762x54mmR_7N1: rhs_30Rnd_545x39_7N6_AK {
    modelSpecial = "";
};
class rhs_10Rnd_762x54mmR_7N14: rhs_10Rnd_762x54mmR_7N1 {
    mass = 5.1;
};

class rhs_100Rnd_762x54mmR: rhs_30Rnd_545x39_7N6_AK {
    mass = 43;
    modelSpecial = "";
};
class rhssaf_250Rnd_762x54R: rhs_100Rnd_762x54mmR {
    mass = 91;
};

class rhs_30Rnd_762x39mm_Savz58_tracer: rhs_30Rnd_762x39mm_tracer {
    picture = "\rhsafrf\addons\rhs_weapons\gear_mags\rhs_gear_mag_762x39_ak_ca.paa";
};
