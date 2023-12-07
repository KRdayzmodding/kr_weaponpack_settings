class CfgPatches
{
	class kr_weapatt_mosin_parts_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapatt_mosin_parts"};
	};
};

class cfgVehicles
{
	class Inventory_Base;

	class kr_buttpad_mosin_aim_sports: Inventory_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.0,1.0,0.5};
		adsModifier[] = {0.0,0,0};

		class kr_discription
		{
			kr_tier = 2;
			kr_type = "Винт. Мосина";
		};
	};
};