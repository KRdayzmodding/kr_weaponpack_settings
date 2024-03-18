class CfgPatches
{
	class kr_magazine_762x39_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_magazine_762x39"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_762x39_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_762x39";
		ammoItems[] = {"Ammo_762x39", "Ammo_762x39Tracer", "kr_Ammo_762x39_AP","kr_Ammo_762x39_fmj","kr_Ammo_762x39_t45m","kr_Ammo_762x39_mai_ap","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_us","kr_Ammo_762x39_bp","kr_Ammo_366TKM_custom_ap","kr_Ammo_366TKM_FMJ","kr_Ammo_366TKM_EKO","kr_Ammo_366TKM_Geksa"};
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "7.62x39, .366TKM";
		};
	};
	class Mag_762x39_sawed_off_10Rnd: kr_magazine_762x39_Base
	{
		class kr_discription
		{
			kr_tier = 0;
			kr_caliber = "7.62x39, .366TKM";
		};
	};
	class Mag_762x39_6L10_30Rnd: kr_magazine_762x39_Base{};
	class Mag_762x39_ak103_std_30Rnd: kr_magazine_762x39_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x39, .366TKM";
		};
	};
	class Mag_762x39_akms_aluminium_30Rnd: kr_magazine_762x39_Base{};
	class Mag_762x39_fab_defense_ultimag_30Rnd: kr_magazine_762x39_Base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "7.62x39, .366TKM";
		};
	};
	class Mag_762x39_magpul_pmag_30Rnd: kr_magazine_762x39_Base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "7.62x39, .366TKM";
		};
	};
	class Mag_762x39_us_palm_30Rnd: kr_magazine_762x39_Base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "7.62x39, .366TKM";
		};
	};
	class Mag_762x39_rpk_std_40Rnd: kr_magazine_762x39_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x39, .366TKM";
		};
	};
	class Mag_762x39_rpk_std_bakelite_40Rnd: kr_magazine_762x39_Base{};
	class Mag_762x39_x_products_drum_50Rnd: kr_magazine_762x39_Base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "7.62x39, .366TKM";
		};
	};
	class Mag_762x39_promag_drum_73Rnd: kr_magazine_762x39_Base
	{
		class kr_discription
		{
			kr_tier = 4;
			kr_caliber = "7.62x39, .366TKM";
		};
	};
	class Mag_762x39_molot_rpk_drum_75Rnd: kr_magazine_762x39_Base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "7.62x39, .366TKM";
		};
	};
};
