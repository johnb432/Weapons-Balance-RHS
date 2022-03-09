#define WEAPON(type)\
    author = "Red Hammer Studios & johnb43";\
    baseWeapon = QUOTE(type);\
    descriptionShort = "Assault Rifle<br />Caliber: 5.56x45mm";\
    magazines[] = {"rhs_30Rnd_556x45_M855A1_AK"};\
    magazineWell[] = {"CBA_556x45_AK"};\
    rhs_grip1_change = QUOTE(DOUBLES(type,grip1));\
    rhs_grip2_change = QUOTE(DOUBLES(type,afg));\
    rhs_grip3_change = QUOTE(DOUBLES(type,grip1))

class rhs_weap_ak101: rhs_weap_ak74m {
    author = "Red Hammer Studios & johnb43";
    baseWeapon = "rhs_weap_ak101";
    descriptionShort = "Assault Rifle<br />Caliber: 5.56x45mm";
    displayName = "AK-101";
    magazines[] = {"rhs_30Rnd_556x45_M855A1_AK"};
    magazineWell[] = {"CBA_556x45_AK"};
    rhs_fold = "rhs_weap_ak101_folded";
    rhs_npz = "rhs_weap_ak101_npz";
};

class rhs_weap_ak101_folded: rhs_weap_ak74m_folded {
    author = "Red Hammer Studios & johnb43";
    baseWeapon = "rhs_weap_ak101_folded";
    descriptionShort = "Assault Rifle<br />Caliber: 5.56x45mm";
    displayName = "AK-101 (Folded)";
    magazines[] = {"rhs_30Rnd_556x45_M855A1_AK"};
    magazineWell[] = {"CBA_556x45_AK"};
    rhs_fold = "rhs_weap_ak101";
};

class rhs_weap_ak101_npz: rhs_weap_ak74m_npz {
    author = "Red Hammer Studios & johnb43";
    baseWeapon = "rhs_weap_ak101_npz";
    descriptionShort = "Assault Rifle<br />Caliber: 5.56x45mm";
    displayName = "AK-101 (B-13)";
    magazines[] = {"rhs_30Rnd_556x45_M855A1_AK"};
    magazineWell[] = {"CBA_556x45_AK"};
    rhs_fold = "rhs_weap_ak101_folded";
    rhs_npz = "rhs_weap_ak101";
};

class rhs_weap_ak74m_zenitco01_afg;
class rhs_weap_ak74m_zenitco01_grip1;
class rhs_weap_ak101_zenitco01: rhs_weap_ak74m_zenitco01 {
    displayName = "AK-101 (Zenitco)";
    rhs_npz = "rhs_weap_ak101_zenitco01_npz";
    WEAPON(rhs_weap_ak101_zenitco01);
};
class rhs_weap_ak101_zenitco01_afg: rhs_weap_ak74m_zenitco01_afg {
    displayName = "AK-101 (Zenitco)";
    rhs_npz = "rhs_weap_ak101_zenitco01_npz";
    WEAPON(rhs_weap_ak101_zenitco01);
};
class rhs_weap_ak101_zenitco01_grip1: rhs_weap_ak74m_zenitco01_grip1 {
    displayName = "AK-101 (Zenitco)";
    rhs_npz = "rhs_weap_ak101_zenitco01_npz";
    WEAPON(rhs_weap_ak101_zenitco01);
};

class rhs_weap_ak74m_zenitco01_npz_afg;
class rhs_weap_ak74m_zenitco01_npz_grip1;
class rhs_weap_ak101_zenitco01_npz: rhs_weap_ak74m_zenitco01_npz {
    displayName = "AK-101 (Zenitco/B-13)";
    rhs_npz = "rhs_weap_ak101_zenitco01";
    WEAPON(rhs_weap_ak101_zenitco01_npz);
};
class rhs_weap_ak101_zenitco01_npz_afg: rhs_weap_ak74m_zenitco01_npz_afg {
    displayName = "AK-101 (Zenitco/B-13)";
    rhs_npz = "rhs_weap_ak101_zenitco01";
    WEAPON(rhs_weap_ak101_zenitco01_npz);
};
class rhs_weap_ak101_zenitco01_npz_grip1: rhs_weap_ak74m_zenitco01_npz_grip1 {
    displayName = "AK-101 (Zenitco/B-13)";
    rhs_npz = "rhs_weap_ak101_zenitco01";
    WEAPON(rhs_weap_ak101_zenitco01_npz);
};

class rhs_weap_ak74m_zenitco01_b33_afg;
class rhs_weap_ak74m_zenitco01_b33_grip1;
class rhs_weap_ak101_zenitco01_b33: rhs_weap_ak74m_zenitco01_b33 {
    displayName = "AK-101 (Zenitco/B-33)";
    WEAPON(rhs_weap_ak101_zenitco01_b33);
};
class rhs_weap_ak101_zenitco01_b33_afg: rhs_weap_ak74m_zenitco01_b33_afg {
    displayName = "AK-101 (Zenitco/B-33)";
    WEAPON(rhs_weap_ak101_zenitco01_b33);
};
class rhs_weap_ak101_zenitco01_b33_grip1: rhs_weap_ak74m_zenitco01_b33_grip1 {
    displayName = "AK-101 (Zenitco/B-33)";
    WEAPON(rhs_weap_ak101_zenitco01_b33);
};


class rhs_weap_ak102: rhs_weap_ak105 {
    author = "Red Hammer Studios & johnb43";
    baseWeapon = "rhs_weap_ak102";
    descriptionShort = "Assault Rifle<br />Caliber: 5.56x45mm";
    displayName = "AK-102";
    magazines[] = {"rhs_30Rnd_556x45_M855A1_AK"};
    magazineWell[] = {"CBA_556x45_AK"};
    rhs_fold = "rhs_weap_ak102_folded";
    rhs_npz = "rhs_weap_ak102_npz";
};

class rhs_weap_ak102_folded: rhs_weap_ak105_folded {
    author = "Red Hammer Studios & johnb43";
    baseWeapon = "rhs_weap_ak102_folded";
    descriptionShort = "Assault Rifle<br />Caliber: 5.56x45mm";
    displayName = "AK-102 (Folded)";
    magazines[] = {"rhs_30Rnd_556x45_M855A1_AK"};
    magazineWell[] = {"CBA_556x45_AK"};
    rhs_fold = "rhs_weap_ak102";
};

class rhs_weap_ak102_npz: rhs_weap_ak105_npz {
    author = "Red Hammer Studios & johnb43";
    baseWeapon = "rhs_weap_ak102_npz";
    descriptionShort = "Assault Rifle<br />Caliber: 5.56x45mm";
    displayName = "AK-102 (B-13)";
    magazines[] = {"rhs_30Rnd_556x45_M855A1_AK"};
    magazineWell[] = {"CBA_556x45_AK"};
    rhs_fold = "rhs_weap_ak102_folded";
    rhs_npz = "rhs_weap_ak102";
};

class rhs_weap_ak105_zenitco01_afg;
class rhs_weap_ak105_zenitco01_grip1;
class rhs_weap_ak102_zenitco01: rhs_weap_ak105_zenitco01 {
    displayName = "AK-102 (Zenitco)";
    rhs_npz = "rhs_weap_ak102_zenitco01_npz";
    WEAPON(rhs_weap_ak102_zenitco01);
};
class rhs_weap_ak102_zenitco01_afg: rhs_weap_ak105_zenitco01_afg {
    displayName = "AK-102 (Zenitco)";
    rhs_npz = "rhs_weap_ak102_zenitco01_npz";
    WEAPON(rhs_weap_ak102_zenitco01);
};
class rhs_weap_ak102_zenitco01_grip1: rhs_weap_ak105_zenitco01_grip1 {
    displayName = "AK-102 (Zenitco)";
    rhs_npz = "rhs_weap_ak102_zenitco01_npz";
    WEAPON(rhs_weap_ak102_zenitco01);
};

class rhs_weap_ak105_zenitco01_npz_afg;
class rhs_weap_ak105_zenitco01_npz_grip1;
class rhs_weap_ak102_zenitco01_npz: rhs_weap_ak105_zenitco01_npz {
    displayName = "AK-102 (Zenitco/B-13)";
    rhs_npz = "rhs_weap_ak102_zenitco01";
    WEAPON(rhs_weap_ak102_zenitco01_npz);

};
class rhs_weap_ak102_zenitco01_npz_afg: rhs_weap_ak105_zenitco01_npz_afg {
    displayName = "AK-102 (Zenitco/B-13)";
    rhs_npz = "rhs_weap_ak102_zenitco01";
    WEAPON(rhs_weap_ak102_zenitco01_npz);
};
class rhs_weap_ak102_zenitco01_npz_grip1: rhs_weap_ak105_zenitco01_npz_grip1 {
    displayName = "AK-102 (Zenitco/B-13)";
    rhs_npz = "rhs_weap_ak102_zenitco01";
    WEAPON(rhs_weap_ak102_zenitco01_npz);
};

class rhs_weap_ak105_zenitco01_b33_afg;
class rhs_weap_ak105_zenitco01_b33_grip1;
class rhs_weap_ak102_zenitco01_b33: rhs_weap_ak105_zenitco01_b33 {
    displayName = "AK-102 (Zenitco/B-33)";
    WEAPON(rhs_weap_ak102_zenitco01_b33);
};
class rhs_weap_ak102_zenitco01_b33_afg: rhs_weap_ak105_zenitco01_b33_afg {
    displayName = "AK-102 (Zenitco/B-33)";
    WEAPON(rhs_weap_ak102_zenitco01_b33);
};
class rhs_weap_ak102_zenitco01_b33_grip1: rhs_weap_ak105_zenitco01_b33_grip1 {
    displayName = "AK-102 (Zenitco/B-33)";
    WEAPON(rhs_weap_ak102_zenitco01_b33);
};
