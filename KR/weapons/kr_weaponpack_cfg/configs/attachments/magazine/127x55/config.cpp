class CfgPatches
{
	class kr_weapons_ASH12_magazine_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_ASH12_magazine"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_127x55_ash12_base: Magazine_Base
	{
		ammo="Bullet_127x55_PS12";
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "12.7x55";
		};
	};
	class Mag_127x55_ash12_10Rnd: Mag_127x55_ash12_base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "12.7x55";
		};
	};
	class Mag_127x55_ash12_20Rnd: Mag_127x55_ash12_base
	{
		class kr_discription
		{
			kr_tier = 4;
			kr_caliber = "12.7x55";
		};
	};
};
