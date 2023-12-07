class CfgPatches
{
	class kr_weapatt_9a91_parts_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports","kr_weapatt_9a91_parts"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class kr_9a91_stock_std: Inventory_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.7,0.7,0.7};
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "9A-91";
		};
	};
};
