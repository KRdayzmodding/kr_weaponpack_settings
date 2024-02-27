class CfgPatches
{
	class kr_magazine_545x39_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_magazine_545x39"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_545x39_Base: kr_magazine_Base
	{
		ammoItems[] = {"Ammo_545x39","Ammo_545x39Tracer","kr_Ammo_545x39_BS","kr_Ammo_545x39_US","kr_Ammo_545x39_T","kr_Ammo_545x39_PS","kr_Ammo_545x39_PRS","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_BT","kr_Ammo_545x39_AP"};
		ammo = "Bullet_545x39";
		recoilModifier[] = {1.0,1.0,0.95};
		weightPerQuantityUnit = 4.0;
		tracersEvery = 0;
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
		};
	};
	class Mag_545x39_6L18_45Rnd: kr_magazine_545x39_Base{};
	class Mag_545x39_6L20_30Rnd: kr_magazine_545x39_Base{};
	class Mag_545x39_6L23_30Rnd: kr_magazine_545x39_Base{};
	class Mag_545x39_6L23_plum_30Rnd: Mag_545x39_6L23_30Rnd{};
	class Mag_545x39_6L26_45Rnd: kr_magazine_545x39_Base
	{
		class kr_discription
		{
			kr_tier = 2;
		};
	};
	class Mag_545x39_6L31_60Rnd: kr_magazine_545x39_Base
	{
		class kr_discription
		{
			kr_tier = 3;
		};
	};
	class Mag_545x39_ak12_std_30Rnd: kr_magazine_545x39_Base
	{
		class kr_discription
		{
			kr_tier = 2;
		};
	};
	class Mag_545x39_magpul_pmag_30Rnd: kr_magazine_545x39_Base
	{
		class kr_discription
		{
			kr_tier = 3;
		};
	};
	class Mag_545x39_rpk16_drum_95Rnd: kr_magazine_545x39_Base
	{
		class kr_discription
		{
			kr_tier = 4;
		};
	};
	class Mag_545x39_saiga_545_10Rnd: kr_magazine_545x39_Base{};
};
