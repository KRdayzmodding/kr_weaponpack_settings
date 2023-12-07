class CfgPatches
{
	class kr_weapatt_ak_buttstocks_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_data","kr_weapatt_ak_buttstocks"};
	};
};
class cfgVehicles
{
	class kr_ak_stock_Base;
	class kr_ak_stock_t1_Base: kr_ak_stock_Base
	{
		recoilModifier[] = {1.0,0.7,0.5};
		swayModifier[] = {0.9,0.9,0.9};
		adsModiefer[] = {0.95,0,1};
	};
	class kr_ak_stock_t2_Base: kr_ak_stock_Base
	{
		recoilModifier[] = {0.8,0.5,0.45};
		swayModifier[] = {0.85,0.85,0.85};
		adsModiefer[] = {0.9,0,1};
	};
	class kr_ak_stock_t3_Base: kr_ak_stock_Base
	{
		recoilModifier[] = {0.75,0.35,0.35};
		swayModifier[] = {0.75,0.65,0.55};
		adsModiefer[] = {0.85,0,1};
	};
};
