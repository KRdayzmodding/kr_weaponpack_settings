class CfgPatches
{
	class kr_weapatt_fal_bttstck_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_data","kr_weapatt_fal_bttstck"};
	};
};
class cfgVehicles
{
	class kr_fal_stock_Base;
	class kr_fal_stock_humpback: kr_fal_stock_Base
	{
		recoilModifier[] = {0.8,0.4,0.4};
		swayModifier[] = {0.85,0.85,0.85};
		adsModiefer[] = {0.9,0,1};
	};
	class kr_fal_stock_para_folding: kr_fal_stock_Base
	{
		recoilModifier[] = {0.8,0.4,0.4};
		swayModifier[] = {0.85,0.85,0.85};
		adsModiefer[] = {0.9,0,1};
	};
	class kr_fal_stock_para_brs: kr_fal_stock_Base
	{
		recoilModifier[] = {0.75,0.35,0.35};
		swayModifier[] = {0.75,0.65,0.55};
		adsModiefer[] = {0.85,0,1};
	};
	class kr_fal_stock_para_spr: kr_fal_stock_Base
	{
		recoilModifier[] = {0.73,0.33,0.33};
		swayModifier[] = {0.7,0.6,0.5};
		adsModiefer[] = {0.8,0,1};
	};
	class kr_fal_stock_magpul_prs: kr_fal_stock_Base
	{
		recoilModifier[] = {0.73,0.33,0.33};
		swayModifier[] = {0.7,0.6,0.5};
		adsModiefer[] = {0.8,0,1};
	};
	class kr_fal_stock_buffertube_adapter: kr_fal_stock_Base
	{
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		adsModiefer[] = {0,0,0};
		itemSize[] = {2,1};
	};
};
