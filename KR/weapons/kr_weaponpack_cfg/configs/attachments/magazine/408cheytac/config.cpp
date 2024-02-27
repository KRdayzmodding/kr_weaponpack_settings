class CfgPatches
{
	class kr_magazine_408_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_magazine_408"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class kr_magazine_Base;
	class mag_408_base: kr_magazine_Base
	{
		weightPerQuantityUnit = 10;
		ammo = "Bullet_408cheytac";
		ammoItems[] = {"kr_Ammo_408cheytac"};
		hiddenSelections[] = {"camo"};
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = ".408";
		};
	};
	class mag_408_m200_7Rnd: mag_408_base{};
};
