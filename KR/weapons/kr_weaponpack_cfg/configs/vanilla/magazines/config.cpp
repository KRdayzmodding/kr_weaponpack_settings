class CfgPatches
{
	class kr_dz_magazines
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","kr_data","DZ_Weapons_Magazines"};
		magazines[] = {};
	};
};
class kr_description_Base
{
	kr_tier = 1;
	kr_caliber = "не указано";
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		class kr_description: kr_description_Base{};
	};
	class Mag_FNX45_15Rnd: Magazine_Base
	{
		class kr_description: kr_description_Base
		{
			kr_caliber = ".45ACP";
		};
	};
	class Mag_Deagle_9rnd: Magazine_Base
	{
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = ".357";
		};
	};
	class Mag_1911_7Rnd: Magazine_Base
	{
		class kr_description: kr_description_Base
		{
			kr_caliber = ".45ACP";
		};
	};
	class Mag_CZ75_15Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_quakemaker","kr_Ammo_9x19_rip"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "9x19";
		};
	};
	class Mag_Glock_15Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_quakemaker","kr_Ammo_9x19_rip"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "9x19";
		};
	};
	class Mag_P1_8Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_quakemaker","kr_Ammo_9x19_rip"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "9x19";
		};
	};
	class Mag_IJ70_8Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "9x18";
		};
	};
	class Mag_MP5_15Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_quakemaker","kr_Ammo_9x19_rip"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "9x19";
		};
	};
	class Mag_MP5_30Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_quakemaker","kr_Ammo_9x19_rip"};
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = "9x19";
		};
	};
	class Mag_PM73_15Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz"};
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = "9x18";
		};
	};
	class Mag_PM73_25Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz"};
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = "9x18";
		};
	};
	class Mag_CZ61_20Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz"};
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = "9x18";
		};
	};
	class Mag_FAMAS_25Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "5.56x46";
		};
	};
	class Mag_MKII_10Rnd: Magazine_Base
	{
		class kr_description: kr_description_Base
		{
			kr_caliber = ".22";
		};
	};
	class Mag_Ruger1022_10Rnd: Magazine_Base
	{
		class kr_description: kr_description_Base
		{
			kr_caliber = ".22";
		};
	};
	class Mag_Ruger1022_15Rnd: Magazine_Base
	{
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = ".22";
		};
	};
	class Mag_Ruger1022_30Rnd: Magazine_Base
	{
		class kr_description: kr_description_Base
		{
			kr_tier = 3;
			kr_caliber = ".22";
		};
	};
	class Mag_AKM_30Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_762x39_t45m","kr_Ammo_762x39_fmj","kr_Ammo_762x39_us","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_bp","kr_Ammo_762x39_HP","kr_Ammo_762x39_mai_ap","kr_Ammo_366TKM_custom_ap","Ammo_762x39","Ammo_762x39Tracer"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "7.62x39";
		};
	};
	class Mag_AKM_Drum75Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_762x39_t45m","kr_Ammo_762x39_fmj","kr_Ammo_762x39_us","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_bp","kr_Ammo_762x39_HP","kr_Ammo_762x39_mai_ap","kr_Ammo_366TKM_custom_ap","Ammo_762x39","Ammo_762x39Tracer"};
		class kr_description: kr_description_Base
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
		};
	};
	class Mag_AKM_Palm30Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_762x39_t45m","kr_Ammo_762x39_fmj","kr_Ammo_762x39_us","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_bp","kr_Ammo_762x39_HP","kr_Ammo_762x39_mai_ap","kr_Ammo_366TKM_custom_ap","Ammo_762x39","Ammo_762x39Tracer"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "7.62x39";
		};
	};
	class Mag_CZ527_5rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_762x39_t45m","kr_Ammo_762x39_fmj","kr_Ammo_762x39_us","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_bp","kr_Ammo_762x39_HP","kr_Ammo_762x39_mai_ap","kr_Ammo_366TKM_custom_ap","Ammo_762x39","Ammo_762x39Tracer"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "7.62x39";
		};
	};
	class Mag_STANAG_30Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "5.56x45";
		};
	};
	class Mag_STANAGCoupled_30Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_STANAG_60Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_CMAG_10Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_tier = 0;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_CMAG_20Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_tier = 0;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_CMAG_30Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "5.56x45";
		};
	};
	class Mag_CMAG_40Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_AK101_30Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "5.56x45";
		};
	};
	class Mag_Aug_30Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "5.56x45";
		};
	};
	class Mag_AK74_30Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_545x39_T","kr_Ammo_545x39_PRS","kr_Ammo_545x39_US","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_PS","kr_Ammo_545x39_BT","kr_Ammo_545x39_HP","kr_Ammo_545x39_BS","Ammo_545x39Tracer","Ammo_545x39"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "5.45x39";
		};
	};
	class Mag_AK74_45Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_545x39_T","kr_Ammo_545x39_PRS","kr_Ammo_545x39_US","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_PS","kr_Ammo_545x39_BT","kr_Ammo_545x39_HP","kr_Ammo_545x39_BS","Ammo_545x39Tracer","Ammo_545x39"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "5.45x39";
		};
	};
	class Mag_SVD_10Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_762x54r_bs","kr_Ammo_762x54r_bthp","kr_Ammo_762x54r_fmj","kr_Ammo_762x54r_lps","kr_Ammo_762x54r_ps","kr_Ammo_762x54r_snb","kr_Ammo_762x54r_t46m"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "7.62x54";
			kr_tier = 3;
		};
	};
	class Mag_SV98_10Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_762x54r_bs","kr_Ammo_762x54r_bthp","kr_Ammo_762x54r_fmj","kr_Ammo_762x54r_lps","kr_Ammo_762x54r_ps","kr_Ammo_762x54r_snb","kr_Ammo_762x54r_t46m"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "7.62x54";
			kr_tier = 3;
		};
	};
	class Mag_FAL_20Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};
		class kr_description: kr_description_Base
		{
			kr_caliber = ".308";
			kr_tier = 2;
		};
	};
	class Mag_Scout_5Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "5.56x45";
		};
	};
	class Mag_UMP_25Rnd: Magazine_Base
	{
		class kr_description: kr_description_Base
		{
			kr_caliber = ".45ACP";
		};
	};
	class Mag_VSS_10Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x39_sp5","kr_Ammo_9x39_pab9","kr_Ammo_9x39_sp6","kr_Ammo_9x39_bp","kr_Ammo_9x39_HP","Ammo_9x39","Ammo_9x39AP"};
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = "9x39";
		};
	};
	class Mag_VAL_20Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x39_sp5","kr_Ammo_9x39_pab9","kr_Ammo_9x39_sp6","kr_Ammo_9x39_bp","kr_Ammo_9x39_HP","Ammo_9x39","Ammo_9x39AP"};
		class kr_description: kr_description_Base
		{
			kr_tier = 3;
			kr_caliber = "9x39";
		};
	};
	class Mag_PP19_64Rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz"};
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = "9x18";
		};
	};
	class Mag_CZ550_4rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
			kr_caliber = ".308";
		};
	};
	class Mag_CZ550_10rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};
		class kr_description: kr_description_Base
		{
			kr_tier = 3;
			kr_caliber = ".308";
		};
	};
	class Mag_SSG82_5rnd: Magazine_Base
	{
		ammoItems[] += {"kr_Ammo_545x39_T","kr_Ammo_545x39_PRS","kr_Ammo_545x39_US","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_PS","kr_Ammo_545x39_BT","kr_Ammo_545x39_HP","kr_Ammo_545x39_BS","Ammo_545x39Tracer","Ammo_545x39"};
		class kr_description: kr_description_Base
		{
			kr_caliber = "5.45x39";
		};
	};
};
