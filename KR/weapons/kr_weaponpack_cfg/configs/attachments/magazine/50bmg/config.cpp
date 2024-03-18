class CfgPatches
{
	class kr_magazine_50bmg_cfg
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_magazine_Base","kr_magazine_50bmg"};
	};
};

class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_50bmg_base: kr_magazine_Base
	{
		weightPerQuantityUnit = 50;
        ammo="Bullet_50BMG";
		ammoItems[] = {"kr_Ammo_50BMG","kr_Ammo_50BMG_AP","kr_Ammo_50BMG_E","kr_Ammo_50BMG_ET","kr_Ammo_50BMG_T"};

		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = ".50BMG";
		};
	};
	class Mag_50bmg_AX50_5Rnd: kr_magazine_50bmg_base 
	{
	};
};
