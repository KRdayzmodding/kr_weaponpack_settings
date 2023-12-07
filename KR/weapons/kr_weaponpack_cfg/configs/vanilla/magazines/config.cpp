class CfgPatches
{
	class kr_dz_magazines
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines"};
		magazines[] = {};
	};
};
class kr_discription_Base
{
	kr_tier = 1;
	kr_caliber = "не указано";
};
class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		class kr_discription: kr_discription_Base{};
	};
	class Mag_FNX45_15Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = ".45ACP";
		};
	};
	class Mag_Deagle_9rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = ".357";
		};
	};
	class Mag_1911_7Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = ".45ACP";
		};
	};
	class Mag_CZ75_15Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "9x19";
		};
	};
	class Mag_Glock_15Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "9x19";
		};
	};
	class Mag_P1_8Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "9x19";
		};
	};
	class Mag_IJ70_8Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = ".380";
		};
	};
	class Mag_MP5_15Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "9x19";
		};
	};
	class Mag_MP5_30Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = "9x19";
		};
	};
	class Mag_PM73_15Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = ".380";
		};
	};
	class Mag_PM73_25Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = ".380";
		};
	};
	class Mag_CZ61_20Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = ".380";
		};
	};
	class Mag_FAMAS_25Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "5.56x46";
		};
	};
	class Mag_MKII_10Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = ".22";
		};
	};
	class Mag_Ruger1022_10Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = ".22";
		};
	};
	class Mag_Ruger1022_15Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = ".22";
		};
	};
	class Mag_Ruger1022_30Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 3;
			kr_caliber = ".22";
		};
	};
	class Mag_AKM_30Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "7.62x39";
		};
	};
	class Mag_AKM_Drum75Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
		};
	};
	class Mag_AKM_Palm30Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "7.62x39";
		};
	};
	class Mag_CZ527_5rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "7.62x39";
		};
	};
	class Mag_STANAG_30Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "5.56x45";
		};
	};
	class Mag_STANAGCoupled_30Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_STANAG_60Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_CMAG_10Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 0;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_CMAG_20Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 0;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_CMAG_30Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "5.56x45";
		};
	};
	class Mag_CMAG_40Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_AK101_30Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "5.56x45";
		};
	};
	class Mag_Aug_30Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "5.56x45";
		};
	};
	class Mag_AK74_30Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "5.45x39";
		};
	};
	class Mag_AK74_45Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "5.45x39";
		};
	};
	class Mag_SVD_10Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "7.62x54";
			kr_tier = 3;
		};
	};
	class Mag_FAL_20Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = ".308";
			kr_tier = 2;
		};
	};
	class Mag_Scout_5Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "5.56x45";
		};
	};
	class Mag_UMP_25Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = ".45ACP";
		};
	};
	class Mag_VSS_10Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = "9x39";
		};
	};
	class Mag_VAL_20Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 3;
			kr_caliber = "9x39";
		};
	};
	class Mag_PP19_64Rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = ".380";
		};
	};
	class Mag_CZ550_4rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 2;
			kr_caliber = ".308";
		};
	};
	class Mag_CZ550_10rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_tier = 3;
			kr_caliber = ".308";
		};
	};
	class Mag_SSG82_5rnd: Magazine_Base
	{
		class kr_discription: kr_discription_Base
		{
			kr_caliber = "5.45x39";
		};
	};
};
