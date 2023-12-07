class CfgPatches
{
	class kr_weapatt_scar_parts_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapatt_scar_parts"};
	};
};
class cfgVehicles
{
	class kr_scar_stock_Base;
	class kr_scar_stock_std: kr_scar_stock_Base
	{
		recoilModifier[] = {0.3,0.3,0.3};
		swayModifier[] = {0.3,0.3,0.3};
		adsModifier[] = {0,0,0};
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "Mk.16/Mk.17";
		};
	};
};
