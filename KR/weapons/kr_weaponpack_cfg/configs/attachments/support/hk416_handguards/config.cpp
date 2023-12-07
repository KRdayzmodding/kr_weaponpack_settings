class CfgPatches
{
	class kr_weapatt_hk416_handguards_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_data","kr_weapatt_hk416_handguards"};
	};
};
class cfgVehicles
{
	class kr_hk416_hguard_Base;
	class kr_hk416_hguard_t1_Base: kr_hk416_hguard_Base
	{
		recoilModifier[] = {0.5,0.85,0.85};
		swayModifier[] = {0.5,0.5,0.5};
		adsModiefer[] = {0.9,0,1};
	};
	class kr_hk416_hguard_t2_Base: kr_hk416_hguard_Base
	{
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.45,0.45,0.45};
		adsModiefer[] = {0.85,0,1};
	};
	class kr_hk416_hguard_t3_Base: kr_hk416_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		adsModiefer[] = {0.8,0,1};
	};
};
