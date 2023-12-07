class CfgPatches
{
	class kr_weapatt_ak_parts_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapatt_ak_parts"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class kr_ak_buttpad_gp25: Inventory_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_stdAKstocks";
		};
	};
	class kr_ak_charging_handle_rp1: Inventory_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "AK";
		};
	};
	class kr_ak_charging_handle_css: Inventory_Base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_type = "AK";
		};
	};
};
