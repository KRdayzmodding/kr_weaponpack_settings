class CfgPatches
{
	class kr_weapatt_ar_buttstocks_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_data","kr_weapatt_ar_buttstocks"};
	};
};
class cfgVehicles
{
	class kr_ar_stock_Base;
	class kr_ar_stock_t1_Base: kr_ar_stock_Base
	{
		recoilModifier[] = {0.9,0.6,0.55};
		swayModifier[] = {0.95,0.95,0.85};
		adsModiefer[] = {0.95,0,1};
	};
	class kr_ar_stock_t2_Base: kr_ar_stock_Base
	{
		recoilModifier[] = {0.85,0.55,0.5};
		swayModifier[] = {0.9,0.9,0.75};
		adsModiefer[] = {0.95,0,1};
	};
	class kr_ar_stock_t3_Base: kr_ar_stock_Base
	{
		recoilModifier[] = {0.8,0.5,0.45};
		swayModifier[] = {0.85,0.85,0.65};
		adsModiefer[] = {0.95,0,1};
	};
	class kr_ar_stock_t4_Base: kr_ar_stock_Base
	{
		recoilModifier[] = {0.75,0.45,0.35};
		swayModifier[] = {0.8,0.8,0.55};
		adsModiefer[] = {0.85,0,1};
	};
};
