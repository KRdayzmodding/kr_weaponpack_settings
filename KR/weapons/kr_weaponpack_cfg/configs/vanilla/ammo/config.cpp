class CfgPatches
{
	class KR_DZ_Ammunition_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines","DZ_Weapons_Ammunition"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base;
	class Ammo_45ACP: Ammunition_Base
	{
		weight = 15;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".45 ACP";
			kr_bullettype = 0;
			kr_range = 100;
		};
	};
	class Ammo_308Win: Ammunition_Base
	{
		weight = 18;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x54 NATO";
			kr_bullettype = 0;
			kr_range = 400;
		};
	};
	class Ammo_308WinTracer: Ammunition_Base
	{
		weight = 18;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x54 NATO";
			kr_bullettype = 3;
			kr_range = 400;
		};
	};
	class Ammo_9x19: Ammunition_Base
	{
		weight = 11;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19";
			kr_bullettype = 0;
			kr_range = 100;
		};
	};
	class Ammo_380: Ammunition_Base
	{
		weight = 9;
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = ".380";
			kr_bullettype = 0;
			kr_range = 50;
		};
	};
	class Ammo_556x45: Ammunition_Base
	{
		weight = 12;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
			kr_bullettype = 0;
			kr_range = 300;
		};
	};
	class Ammo_556x45Tracer: Ammunition_Base
	{
		weight = 10;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
			kr_bullettype = 3;
			kr_range = 300;
		};
	};
	class Ammo_762x54: Ammunition_Base
	{
		weight = 23;
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x54";
			kr_bullettype = 0;
			kr_range = 500;
		};
	};
	class Ammo_762x54Tracer: Ammunition_Base
	{
		weight = 23;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x54";
			kr_bullettype = 3;
			kr_range = 500;
		};
	};
	class Ammo_762x39: Ammunition_Base
	{
		weight = 18;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
			kr_bullettype = 0;
			kr_range = 400;
		};
	};
	class Ammo_762x39Tracer: Ammunition_Base
	{
		weight = 18;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x39";
			kr_bullettype = 3;
			kr_range = 400;
		};
	};
	class Ammo_9x39AP: Ammunition_Base
	{
		weight = 21;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x39";
			kr_bullettype = 1;
			kr_range = 300;
		};
	};
	class Ammo_9x39: Ammunition_Base
	{
		weight = 21;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x39";
			kr_bullettype = 0;
			kr_range = 300;
		};
	};
	class Ammo_22: Ammunition_Base
	{
		weight = 8;
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = ".22";
			kr_bullettype = 0;
			kr_range = 100;
		};
	};
	class Ammo_12gaPellets: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
	};
	class Ammo_12gaSlug: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
	};
	class Ammo_12gaRubberSlug: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 5;
			kr_range = 100;
		};
	};
	class Ammo_12gaBeanbag: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 5;
			kr_range = 100;
		};
	};
	class Ammo_357: Ammunition_Base
	{
		weight = 13;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".357";
			kr_bullettype = 0;
			kr_range = 100;
		};
	};
	class Ammo_545x39: Ammunition_Base
	{
		weight = 10;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
			kr_range = 300;
		};
	};
	class Ammo_545x39Tracer: Ammunition_Base
	{
		weight = 10;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
			kr_bullettype = 3;
			kr_range = 300;
		};
	};
	class Ammo_HuntingBolt: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "-";
			kr_bullettype = 11;
			kr_range = 1;
		};
	};
	class Ammo_ImprovisedBolt_1: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "-";
			kr_bullettype = 11;
			kr_range = 1;
		};
	};
	class Ammo_ImprovisedBolt_2: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "-";
			kr_bullettype = 11;
			kr_range = 1;
		};
	};
	class Ammo_Flare: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "-";
			kr_bullettype = 8;
			kr_range = 1;
		};
	};
	class Ammo_FlareRed: Ammo_Flare
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "-";
			kr_bullettype = 8;
			kr_range = 1;
		};
	};
	class Ammo_FlareGreen: Ammo_Flare
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "-";
			kr_bullettype = 8;
			kr_range = 1;
		};
	};
	class Ammo_FlareBlue: Ammo_Flare
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "-";
			kr_bullettype = 8;
			kr_range = 1;
		};
	};
	class Ammo_RPG7_HE: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "-";
			kr_bullettype = 6;
			kr_range = 1;
		};
	};
	class Ammo_RPG7_AP: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "-";
			kr_bullettype = 1;
			kr_range = 1;
		};
	};
	class Ammo_LAW_HE: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "-";
			kr_bullettype = 6;
			kr_range = 1;
		};
	};
	class Ammo_GrenadeM4: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "-";
			kr_bullettype = 6;
			kr_range = 1;
		};
	};
	class Ammo_40mm_Base: Ammunition_Base
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "40 mm";
			kr_bullettype = 6;
			kr_range = 1;
		};
	};
	class Ammo_40mm_Explosive: Ammo_40mm_Base
	{
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "40 mm";
			kr_bullettype = 6;
			kr_range = 1;
		};
	};
	class Ammo_40mm_ChemGas: Ammo_40mm_Base
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "40 mm";
			kr_bullettype = 9;
			kr_range = 1;
		};
	};
	class Ammo_40mm_Smoke_ColorBase: Ammo_40mm_Base
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "40 mm";
			kr_bullettype = 10;
			kr_range = 1;
		};
	};
	class Ammo_40mm_Smoke_Red: Ammo_40mm_Smoke_ColorBase
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "40 mm";
			kr_bullettype = 10;
			kr_range = 1;
		};
	};
	class Ammo_40mm_Smoke_Green: Ammo_40mm_Smoke_ColorBase
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "40 mm";
			kr_bullettype = 10;
			kr_range = 1;
		};
	};
	class Ammo_40mm_Smoke_White: Ammo_40mm_Smoke_ColorBase
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "40 mm";
			kr_bullettype = 10;
			kr_range = 1;
		};
	};
	class Ammo_40mm_Smoke_Black: Ammo_40mm_Smoke_ColorBase
	{
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "40 mm";
			kr_bullettype = 10;
			kr_range = 1;
		};
	};
};
