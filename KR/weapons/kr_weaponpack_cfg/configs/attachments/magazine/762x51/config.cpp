class CfgPatches
{
	class kr_magazine_762x51_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_magazine_762x51"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_762x51_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer","KR_Ammo_308Win_AP"};
		weightPerQuantityUnit = 4;
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_dsarms_10Rnd: kr_magazine_762x51_Base{};
	class Mag_762x51_kac_steel_10Rnd: kr_magazine_762x51_Base{};
	class Mag_762x51_kac_steel_20Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_m240_150Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_pmag_20Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_dsarms_20Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_dsarms_30Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_mmw_20Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_sarco_30Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_xproduct_50Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 5;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_mcmillan_cs5_10Rnd: kr_magazine_762x51_Base{};
	class Mag_762x51_mcmillan_cs5_20Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_g28_10Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_g28_20Rnd: kr_magazine_762x51_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
	};
};
