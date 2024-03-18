class CfgPatches
{
	class kr_attachments_mp5_stocks_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_attachments_mp5_stocks"};
	};
};
class cfgVehicles
{
	class kr_mp5_stock_Base;
	class kr_mp5_stock_hk_a2: kr_mp5_stock_Base
	{
		recoilModifier[] = {1.0,0.7,0.5};
		swayModifier[] = {0.9,0.9,0.9};
		adsModifier[] = {0.95,0,1};

		class kr_discription
		{
			kr_tier = 1;
			kr_type = "HK MP5";
		};
	};

	class kr_mp5_stock_hk_a3: kr_mp5_stock_Base
	{
		recoilModifier[] = {1.0,0.7,0.5};
		swayModifier[] = {0.9,0.9,0.9};
		adsModifier[] = {0.95,0,1};

		class kr_discription
		{
			kr_tier = 1;
			kr_type = "HK MP5";
		};
	};
};