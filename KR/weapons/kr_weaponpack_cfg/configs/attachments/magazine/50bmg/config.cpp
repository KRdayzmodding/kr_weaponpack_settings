class CfgPatches
{
	class kr_magazine_50bmg_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_magazine_50bmg"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_50bmg_base: kr_magazine_Base
	{
		weightPerQuantityUnit = 50;
		ammo = "Bullet_50BMG";
		ammoItems[] = {"kr_Ammo_50bmg","kr_Ammo_50bmg_AP","kr_Ammo_50bmg_E","kr_Ammo_50bmg_ET","kr_Ammo_50bmg_Tracer"};
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = ".50BMG";
		};
	};
	class mag_50bmg_AX50_5Rnd: kr_magazine_50bmg_base{};
};
