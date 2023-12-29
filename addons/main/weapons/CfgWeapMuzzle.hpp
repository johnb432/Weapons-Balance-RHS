class ItemCore;
class muzzle_snds_H: ItemCore {
    class ItemInfo;
};
class rhssaf_silencer_base: muzzle_snds_H {
    class ItemInfo: ItemInfo {
        class AmmoCoef;
    };
};
class rhssaf_acc_G36_Rotex: rhssaf_silencer_base {
    class ItemInfo: ItemInfo {
        class AmmoCoef: AmmoCoef {
            audibleFire = 1;
            visibleFire = 0.5;
        };
    };
};

class rhsusf_silencer_base: muzzle_snds_H {
    class ItemInfo;
};
class rhsusf_m4muzzlebreak_base: rhsusf_silencer_base {
    class ItemInfo: ItemInfo {
        class AmmoCoef;
    };
};
class rhsusf_acc_SF3P556: rhsusf_m4muzzlebreak_base {
    class ItemInfo: ItemInfo {
        class AmmoCoef: AmmoCoef {
            audibleFire = 1;
            visibleFire = 0.5;
        };
    };
};
