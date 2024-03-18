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
	class kr_magazine_408_base: kr_magazine_Base
	{
		weightPerQuantityUnit = 10;
		ammo = "Bullet_408CheyTac";
		ammoItems[] = {"kr_Ammo_408CheyTac"};
		hiddenSelections[] = {"camo"};
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = ".408";
		};
	};
	class Mag_408_m200_7Rnd: kr_magazine_408_base{};
};
