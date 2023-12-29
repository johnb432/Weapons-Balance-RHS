#pragma hemtt flag pe23_ignore_has_include

class rhsgref_25Rnd_792x33_SmE_StG: CA_Magazine {
    mass = 11.36;
};
class rhsgref_30Rnd_792x33_SmE_StG: CA_Magazine {
    mass = 13.6;
};

class rhsgref_24rnd_75x55_Stgw57: CA_Magazine {
    mass = 20;

    #if __has_include("\hlc_wp_sigamt\config.bin")
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_stgw.p3d";
        modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\24rnd_GP11_STGW57";
        modelSpecialIsProxy = 1;
    #endif
};

class rhsgref_50Rnd_792x57_SmE_drum: CA_Magazine {
    mass = 31;
};

class rhsgref_5Rnd_762x54_m38: CA_Magazine {
    mass = 2.7;
};

class rhsgref_5Rnd_792x57_kar98k: CA_Magazine {
    mass = 2.9;
};

class rhsgref_8Rnd_762x63_M2B_M1rifle: CA_Magazine {
    mass = 4.5;
};
class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle: rhsgref_8Rnd_762x63_M2B_M1rifle {
    mass = 4.5;
};

class rhsgref_10Rnd_792x57_m76: CA_Magazine {
    displayName = "10Rnd 7.92x57mm M75 M76";
    mass = 6;
};
class rhssaf_10Rnd_792x57_m76_tracer: CA_Magazine {
    displayName = "10Rnd 7.92x57mm M70 M76 (Tracer)";
    mass = 6;
};
