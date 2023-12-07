class CfgPatches
{
	class kr_magazine_Base_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Magazines","kr_magazine_Base"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class kr_magazine_Base: Magazine_Base
	{
		scope = 0;
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		inventorySlot[] += {"magazine"};
		soundImpactType = "metal";
	};
};
