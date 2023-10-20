class CfgAmmo {
    class BulletBase;
    class rhssaf_ammo_762x39_m82_api;
    class rhssaf_ammo_762x39_m82_api_green: rhssaf_ammo_762x39_m82_api {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };

    class rhs_ammo_762x63_M1T_tracer: BulletBase { //HLC_3006_FMJ, https://en.wikipedia.org/wiki/.30-06_Springfield, 254mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3,5.2};
        ACE_ballisticCoefficients[] = {0.25};
        ACE_barrelLengths[] = {305,660.4};
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 13;
        ACE_caliber = 7.823;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {690,990};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class rhs_ammo_762x63_M2B_ball: BulletBase { //HLC_3006_FMJ, https://en.wikipedia.org/wiki/.30-06_Springfield, 254mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3,5.2};
        ACE_ballisticCoefficients[] = {0.25};
        ACE_barrelLengths[] = {305,660.4};
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 13;
        ACE_caliber = 7.823;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {690,990};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class rhs_ammo_75x55_Ball: BulletBase { //HLC_GP11_FMJ, https://en.wikipedia.org/wiki/7.5%C3%9754mm_French, 270mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.505};
        ACE_barrelLengths[] = {254, 583};
        ACE_bulletLength = 35.0012;
        ACE_bulletMass = 11.275;
        ACE_caliber = 7.7724;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {730, 780};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class rhs_ammo_792x33_SmE_ball: BulletBase { //B_762x39_Ball_F, https://en.wikipedia.org/wiki/7.92%C3%9733mm_Kurz, 240mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.275};
        ACE_barrelLengths[] = {419};
        ACE_bulletLength = 21.6;
        ACE_bulletMass = 8.1;
        ACE_caliber = 8.22;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {685};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class MissileBase;
    class M_Titan_AT: MissileBase {
        submunitionAmmo = "rhs_ammo_M_fgm148_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        warheadName = "TandemHEAT";
    };

    class ammo_Penetrator_base;
    class ammo_Penetrator_Titan_AT: ammo_Penetrator_base {
        warheadName = "TandemHEAT";
    };
};
