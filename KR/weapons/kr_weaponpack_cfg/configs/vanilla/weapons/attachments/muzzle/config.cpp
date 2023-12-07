class CfgPatches
{
	class DZ_Weapons_Muzzles_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Muzzles"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemSuppressor: Inventory_Base
	{
		adsModiefer[] = {0,1,0};
	};
	// class ImprovisedSuppressor: ItemSuppressor
	// {
	// 	inventorySlot[] += {"kr_muzzle308","kr_muzzle762_39","kr_muzzle762_54","kr_muzzle338"};
	// };
};
