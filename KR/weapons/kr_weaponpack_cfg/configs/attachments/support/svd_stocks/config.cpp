class CfgPatches
{
	class kr_weapatt_svd_buttstocks_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapatt_svd_buttstocks"};
	};
};
class cfgVehicles
{
	class kr_svd_stock_Base;
	class kr_svd_stock_lynx_arms: kr_svd_stock_Base
	{
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		adsModifier[] = {0,0,0};
		class kr_discription
		{
			kr_tier = 3;
			kr_type = "СВДС";
		};
	};
	class kr_svd_stock_std: kr_svd_stock_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "СВДС";
		};
	};
};
