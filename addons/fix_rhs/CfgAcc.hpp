class UnderBarrelSlot;
class UnderBarrelSlot_rail: UnderBarrelSlot {
    class compatibleItems {
        rhs_acc_harris_swivel = 1;
        rhsusf_acc_harris_bipod = 1;
    };
};
class nia_rifle_grips_slot: UnderBarrelSlot {
    displayName = "Gripod slot";
    class compatibleItems {
        rhsusf_acc_grip1 = 1;
        rhsusf_acc_grip2 = 1;
        rhsusf_acc_grip2_tan = 1;
        rhsusf_acc_grip2_wd = 1;
        rhsusf_acc_grip3 = 1;
        rhsusf_acc_grip3_tan = 1;
        rhs_acc_grip_rk2 = 1;
        rhs_acc_grip_rk6 = 1;
        rhs_acc_grip_ffg2 = 1;
        rhsusf_acc_rvg_blk = 1;
        rhsusf_acc_rvg_de = 1;
        rhsusf_acc_tacsac_blk = 1;
        rhsusf_acc_tacsac_tan = 1;
        rhsusf_acc_tacsac_blue = 1;
        rhsusf_acc_tdstubby_blk = 1;
        rhsusf_acc_tdstubby_tan = 1;
        rhsusf_acc_kac_grip = 1;
        rhsusf_acc_harris_bipod = 1;
        rhs_acc_harris_swivel = 1;
    };
};

class asdg_SlotInfo;
class asdg_UnderSlot: asdg_SlotInfo {
    class compatibleItems {};
};
class nia_rifle_bipodsgrips_slot: asdg_UnderSlot {
    class compatibleItems: compatibleItems {
        rhsusf_acc_grip1 = 1;
        rhsusf_acc_grip2 = 1;
        rhsusf_acc_grip2_tan = 1;
        rhsusf_acc_grip2_wd = 1;
        rhsusf_acc_grip3 = 1;
        rhsusf_acc_grip3_tan = 1;
        rhs_acc_grip_rk2 = 1;
        rhs_acc_grip_rk6 = 1;
        rhs_acc_grip_ffg2 = 1;
        rhsusf_acc_rvg_blk = 1;
        rhsusf_acc_rvg_de = 1;
        rhsusf_acc_tacsac_blk = 1;
        rhsusf_acc_tacsac_tan = 1;
        rhsusf_acc_tacsac_blue = 1;
        rhsusf_acc_tdstubby_blk = 1;
        rhsusf_acc_tdstubby_tan = 1;
        rhsusf_acc_kac_grip = 1;
    };
};
class WB_rifle_grips_slot: asdg_SlotInfo {
    iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
    iconPinpoint = "Bottom";
    linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
    class compatibleItems {
        rhs_acc_grip_ffg2 = 1;
        rhs_acc_grip_rk2 = 1;
        rhs_acc_grip_rk6 = 1;
        rhsusf_acc_grip1 = 1;
        rhsusf_acc_grip2 = 1;
        rhsusf_acc_grip2_tan = 1;
        rhsusf_acc_grip2_wd = 1;
        rhsusf_acc_grip3 = 1;
        rhsusf_acc_grip3_tan = 1;
        rhsusf_acc_kac_grip = 1;
        rhsusf_acc_rvg_blk = 1;
        rhsusf_acc_rvg_de = 1;
        rhsusf_acc_tacsac_blk = 1;
        rhsusf_acc_tacsac_blue = 1;
        rhsusf_acc_tacsac_tan = 1;
        rhsusf_acc_tdstubby_blk = 1;
        rhsusf_acc_tdstubby_tan = 1;
    };
};

class rhs_rifle_gripod_slot: UnderBarrelSlot {
    class compatibleItems {};
};

class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        rhsusf_acc_harris_bipod = 1;
        rhs_acc_harris_swivel = 1;
    };
};

class rhs_western_mg_gripod_slot: rhs_western_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        rhsusf_acc_grip2 = 1;
        rhsusf_acc_grip2_tan = 1;
        rhsusf_acc_grip2_wd = 1;
    };
};

class rhs_western_m14_underbarrel_slot: UnderBarrelSlot {
    class compatibleItems {
        rhs_acc_harris_swivel = 1;
    };
};

class PointerSlot;
class PointerSlot_rail: PointerSlot {
    class compatibleItems {
        rhs_acc_2dpzenit_ris = 1;
        rhs_acc_perst1ik_ris = 1;
        rhs_acc_perst3 = 1;
        rhsusf_acc_anpeq15side = 1;
        rhsusf_acc_anpeq15_top = 1;
        rhsusf_acc_anpeq15_wmx = 1;
        rhsusf_acc_anpeq15_wmx_light = 1;
        rhsusf_acc_anpeq15side_bk = 1;
        rhsusf_acc_anpeq15_bk_top = 1;
        rhsusf_acc_anpeq15 = 1;
        rhsusf_acc_anpeq15_light = 1;
        rhsusf_acc_anpeq15_bk = 1;
        rhsusf_acc_anpeq15_bk_light = 1;
        rhsusf_acc_anpeq15a = 1;
        rhsusf_acc_anpeq16a = 1;
        rhsusf_acc_anpeq16a_light = 1;
        rhsusf_acc_anpeq16a_top = 1;
        rhsusf_acc_anpeq16a_light_top = 1;
        rhsusf_acc_m952v = 1;
        rhsusf_acc_wmx = 1;
        rhsusf_acc_wmx_bk = 1;
    };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        rhs_acc_rakurspm = 1;
        rhs_acc_1p87 = 1;
        rhs_acc_dh520x56 = 1;
        rhs_acc_ekp8_18 = 1;
        rhs_acc_okp7_picatinny = 1;
        rhsusf_acc_anpas13gv1 = 1;
        rhsusf_acc_acog2_usmc = 1;
        rhsusf_acc_acog3_usmc = 1;
        rhsusf_acc_acog_usmc = 1;
        rhsusf_acc_anpvs27 = 1;
        rhsusf_acc_eotech = 1;
        rhsusf_acc_g33_t1 = 1;
        rhsusf_acc_g33_xps3 = 1;
        rhsusf_acc_g33_xps3_tan = 1;
        rhsusf_acc_elcan = 1;
        rhsusf_acc_elcan_ard = 1;
        rhsusf_acc_acog = 1;
        rhsusf_acc_acog2 = 1;
        rhsusf_acc_acog3 = 1;
        rhsusf_acc_m2a1 = 1;
        rhsusf_acc_eotech_552 = 1;
        rhsusf_acc_eotech_552_d = 1;
        rhsusf_acc_eotech_552_wd = 1;
        rhsusf_acc_compm4 = 1;
        rhsusf_acc_m8541 = 1;
        rhsusf_acc_m8541_low = 1;
        rhsusf_acc_m8541_low_d = 1;
        rhsusf_acc_m8541_low_wd = 1;
        rhsusf_acc_m8541_mrds = 1;
        rhsusf_acc_premier_low = 1;
        rhsusf_acc_premier = 1;
        rhsusf_acc_premier_mrds = 1;
        rhsusf_acc_leupoldmk4 = 1;
        rhsusf_acc_leupoldmk4_2 = 1;
        rhsusf_acc_leupoldmk4_d = 1;
        rhsusf_acc_leupoldmk4_wd = 1;
        rhsusf_acc_leupoldmk4_2_d = 1;
        rhsusf_acc_leupoldmk4_2_mrds = 1;
        rhsusf_acc_mrds = 1;
        rhsusf_acc_mrds_c = 1;
        rhsusf_acc_rm05 = 1;
        rhsusf_acc_rx01_nofilter = 1;
        rhsusf_acc_rx01 = 1;
        rhsusf_acc_rx01_nofilter_tan = 1;
        rhsusf_acc_rx01_tan = 1;
        rhsusf_acc_su230 = 1;
        rhsusf_acc_su230_c = 1;
        rhsusf_acc_su230_mrds = 1;
        rhsusf_acc_su230_mrds_c = 1;
        rhsusf_acc_su230a = 1;
        rhsusf_acc_su230a_c = 1;
        rhsusf_acc_su230a_mrds = 1;
        rhsusf_acc_su230a_mrds_c = 1;
        rhsusf_acc_acog_mdo = 1;
        rhsusf_acc_t1_high = 1;
        rhsusf_acc_t1_low = 1;
        rhsusf_acc_acog_rmr = 1;
        rhsusf_acc_acog_d = 1;
        rhsusf_acc_acog_wd = 1;
        rhsusf_acc_eotech_xps3 = 1;
        rhsgref_acc_rx01_nofilter_camo = 1;
        rhsgref_acc_rx01_camo = 1;
    };
};

class asdg_MuzzleSlot: asdg_SlotInfo {
    class compatibleItems {};
};

class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems {
        rhsusf_acc_aac_m14dcqd_silencer = 1;
        rhsusf_acc_aac_m14dcqd_silencer_d = 1;
        rhsusf_acc_aac_m14dcqd_silencer_wd = 1;
        rhsusf_acc_m14_flashsuppresor = 1;
    };
};

class asdg_MuzzleSlot_762R: asdg_MuzzleSlot {
    class compatibleItems {
        rhs_acc_dtkakm = 1;
        rhs_acc_dtk1l = 1;
    };
};

class asdg_MuzzleSlot_556_3CB_HK33: asdg_MuzzleSlot {
    class compatibleItems {
        rhsusf_acc_nt4_black = 1;
        rhsusf_acc_nt4_tan = 1;
        rhsusf_acc_rotex5_grey = 1;
        rhsusf_acc_rotex5_tan = 1;
        rhsusf_acc_sf3p556 = 1;
        rhsusf_acc_sfmb556 = 1;
    };
};

class asdg_MuzzleSlot_762_3CB_G3: asdg_MuzzleSlot {
    class compatibleItems {
        rhsusf_acc_aac_762sd_silencer = 1;
        rhsusf_acc_aac_762sdn6_silencer = 1;
        rhsusf_acc_aac_scarh_silencer = 1;
        rhsusf_acc_aac_m14dcqd_silencer = 1;
        rhsusf_acc_aac_m14dcqd_silencer_d = 1;
        rhsusf_acc_aac_m14dcqd_silencer_wd = 1;
        rhsusf_acc_m14_flashsuppresor = 1;
        rhsgref_sdn6_suppressor = 1;
    };
};
class asdg_MuzzleSlot_762_3CB_M14: asdg_MuzzleSlot {
    class compatibleItems {
        rhsusf_acc_aac_762sd_silencer = 1;
        rhsusf_acc_aac_762sdn6_silencer = 1;
        rhsusf_acc_aac_scarh_silencer = 1;
        rhsusf_acc_aac_m14dcqd_silencer = 1;
        rhsusf_acc_aac_m14dcqd_silencer_d = 1;
        rhsusf_acc_aac_m14dcqd_silencer_wd = 1;
        rhsusf_acc_m14_flashsuppresor = 1;
        rhsgref_sdn6_suppressor = 1;
    };
};
