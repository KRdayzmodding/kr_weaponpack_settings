class CfgPatches
{
	class kr_magazine_556x45_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_magazine_556x45"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_556x45_Base;
//АК
    class Mag_556x45_6L29_30Rnd : kr_magazine_556x45_Base {};

    class Mag_556x45_CWP_30Rnd : kr_magazine_556x45_Base
    {
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
    };

//M4
    class Mag_556x45_colt_ar15_std_30Rnd : kr_magazine_556x45_Base {};

    class Mag_556x45_fn_mk16_std_30Rnd : kr_magazine_556x45_Base
    {
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
    };

    class Mag_556x45_hk_polymer_30Rnd : kr_magazine_556x45_Base
    {
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
    };
    class Mag_556x45_hk_gen_2_pm_30Rnd : kr_magazine_556x45_Base
    {
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
    };

    class Mag_556x45_magpulm3_10Rnd : kr_magazine_556x45_Base
    {};

    class Mag_556x45_magpulm3_20Rnd : kr_magazine_556x45_Base
    {
        
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
    };

    class Mag_556x45_magpulm3_30Rnd_Base : kr_magazine_556x45_Base
    {
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
    };

    class Mag_556x45_magpulm3_30Rnd_blck : mag_556x45_magpulm3_30Rnd_Base
    {};
    class Mag_556x45_magpulm3_30Rnd_tan : mag_556x45_magpulm3_30Rnd_Base
    {};

    class Mag_556x45_magpulm3_40Rnd_Base : kr_magazine_556x45_Base
    {
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
    };
    class Mag_556x45_magpulm3_40Rnd_blck : mag_556x45_magpulm3_40Rnd_Base
    {};
    class Mag_556x45_magpulm3_40Rnd_tan : mag_556x45_magpulm3_40Rnd_Base
    {};
    
    class Mag_556x45_magpulp_60Rnd : kr_magazine_556x45_Base
    {
		class kr_discription
		{
			kr_tier = 4;
			kr_caliber = "5.56x45";
		};
    };

    class Mag_556x45_steel_maritime_30Rnd : kr_magazine_556x45_Base
    {};

    class Mag_556x45_srfr_mag5_60Rnd : kr_magazine_556x45_Base
    {
		class kr_discription
		{
			kr_tier = 5;
			kr_caliber = "5.56x45";
		};
    };
    
    class Mag_556x45_srfr_mag5_100Rnd : kr_magazine_556x45_Base
    {
		class kr_discription
		{
			kr_tier = 4;
			kr_caliber = "5.56x45";
		};
    };

    class Mag_556x45_troy_battlemag_30Rnd : kr_magazine_556x45_Base
    {
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
    };
};
