class CfgPatches
{
	class kr_attachmetns_optics_picatinny_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_attachmetns_optics_picatinny"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics;
	class ItemOptics_Base;
	class kr_ItemOpticsPicatinny_base;
	class kr_optics_sb_om2: kr_ItemOpticsPicatinny_base
	{
		class kr_discription
		{
			kr_tier = 3;
		};
	};
};
