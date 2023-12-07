class CfgPatches
{
	class kr_attachmetns_optics_other_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_attachmetns_optics_other"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics;
	class ItemOptics_Base;
	class kr_optics_pu_scope: ItemOptics_Base
	{
		inventorySlot[] = {"kr_weaponOpticsMosin","weaponOpticsMosin"};
		class kr_discription
		{
			kr_tier = 2;
		};
	};
	class kr_optics_F2000_scope: ItemOptics_Base
	{
		class kr_discription
		{
			kr_tier = 3;
		};
	};
};
