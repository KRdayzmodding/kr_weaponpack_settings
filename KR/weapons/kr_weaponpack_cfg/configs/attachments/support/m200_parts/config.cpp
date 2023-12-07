class CfgPatches
{
	class kr_weapatt_m200_parts_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapatt_m200_parts"};
	};
};

class cfgVehicles
{
	class kr_m200_hguard_Base;
	class kr_m200_stock_Base;

	class kr_m200_hguard_std: kr_m200_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		adsModiefer[] = {0.8,0,1};

		class kr_discription
		{
			kr_tier = 2;
			kr_type = "M200";
		};
	};

	class kr_m200_hguard_std_raild : kr_m200_hguard_std
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_type = "M200";
		};
	};
	
	class kr_m200_stock_std: kr_m200_stock_Base
	{
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		adsModiefer[] = {0,0,0};

		class kr_discription
		{
			kr_tier = 2;
			kr_type = "M200";
		};
	};
};