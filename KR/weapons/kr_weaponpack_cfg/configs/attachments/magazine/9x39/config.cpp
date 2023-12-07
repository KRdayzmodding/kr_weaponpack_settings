class CfgPatches
{
	class kr_magazine_9x39_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_magazine_9x39"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_9x39_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_9x39";
		ammoItems[] = {"Ammo_9x39","Ammo_9x39AP"};
		weightPerQuantityUnit = 4;
	};
	class Mag_9x39_6l24_10Rnd: kr_magazine_9x39_Base
	{
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "9x39";
		};
	};
	class Mag_9x39_6l25_20Rnd: kr_magazine_9x39_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "9x39";
		};
	};
	class Mag_9x39_sr3m_30Rnd: kr_magazine_9x39_Base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "9x39";
		};
	};
	class Mag_9x39_9a91_20Rnd: kr_magazine_9x39_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "9x39";
		};
	};
};
