class CfgPatches
{
	class kr_weapatt_ar_pistolgrips_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_data","kr_weapatt_ar_pistolgrips"};
	};
};
class cfgVehicles
{
	class kr_ar_pgrip_Base;
	class kr_ar_pgrip_t1_Base: kr_ar_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.95,0.95,0.7};
		adsModiefer[] = {0.9,0,1};
	};
	class kr_ar_pgrip_t2_Base: kr_ar_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.85,0.85,0.7};
		adsModiefer[] = {0.85,0,1};
	};
	class kr_ar_pgrip_t3_Base: kr_ar_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.8,0.8,0.7};
		adsModiefer[] = {0.75,0,1};
	};
	class kr_ar_pgrip_t4_Base: kr_ar_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.75,0.75,0.7};
		adsModiefer[] = {0.75,0,1};
	};
};
