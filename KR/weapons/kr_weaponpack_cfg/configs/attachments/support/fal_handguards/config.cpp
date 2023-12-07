class CfgPatches
{
	class kr_weapatt_fal_handguards_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_data","kr_weapatt_fal_handguards"};
	};
};
class cfgVehicles
{
	class kr_fal_hguard_Base;
	class kr_fal_hguard_t1_Base: kr_fal_hguard_Base
	{
		recoilModifier[] = {0.45,0.75,0.85};
		swayModifier[] = {0.65,0.65,0.65};
		adsModiefer[] = {0.9,0,1};
	};
	class kr_fal_hguard_t2_Base: kr_fal_hguard_Base
	{
		recoilModifier[] = {0.4,0.7,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		adsModiefer[] = {0.85,0,1};
	};
	class kr_fal_hguard_t3_Base: kr_fal_hguard_Base
	{
		recoilModifier[] = {0.38,0.68,0.78};
		swayModifier[] = {0.4,0.4,0.4};
		adsModiefer[] = {0.8,0,1};
	};
};
