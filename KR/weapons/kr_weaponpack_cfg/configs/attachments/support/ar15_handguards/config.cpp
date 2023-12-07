class CfgPatches
{
	class kr_weapatt_ar15_handguards_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_data","kr_weapatt_ar15_handguards"};
	};
};
class cfgVehicles
{
	class kr_ar15_hguard_Base;
	class kr_ar15_hguard_t1_Base: kr_ar15_hguard_Base
	{
		recoilModifier[] = {0.55,0.9,0.9};
		swayModifier[] = {0.55,0.55,0.55};
		adsModiefer[] = {0.9,0,1};
	};
	class kr_ar15_hguard_t2_Base: kr_ar15_hguard_Base
	{
		recoilModifier[] = {0.5,0.85,0.85};
		swayModifier[] = {0.5,0.5,0.5};
		adsModiefer[] = {0.9,0,1};
	};
	class kr_ar15_hguard_t3_Base: kr_ar15_hguard_Base
	{
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.45,0.45,0.45};
		adsModiefer[] = {0.85,0,1};
	};
	class kr_ar15_hguard_t4_Base: kr_ar15_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		adsModiefer[] = {0.8,0,1};
	};
};
