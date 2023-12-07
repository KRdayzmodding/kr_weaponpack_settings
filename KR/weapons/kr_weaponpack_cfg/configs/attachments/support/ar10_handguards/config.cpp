class CfgPatches
{
	class kr_weapatt_ar10_handguard_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_data","kr_weapatt_ar10_handguards"};
	};
};
class cfgVehicles
{
	class kr_ar10_hguard_Base;
	class kr_ar10_hguard_t1_Base: kr_ar10_hguard_Base
	{
		recoilModifier[] = {0.6,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		adsModiefer[] = {0.9,0,1};
	};
	class kr_ar10_hguard_t2_Base: kr_ar10_hguard_Base
	{
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		adsModiefer[] = {0.85,0,1};
	};
	class kr_ar10_hguard_t3_Base: kr_ar10_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		adsModiefer[] = {0.8,0,1};
	};
};
