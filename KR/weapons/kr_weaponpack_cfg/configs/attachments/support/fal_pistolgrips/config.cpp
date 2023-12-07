class CfgPatches
{
	class kr_weapatt_fal_pistolgrips_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapatt_fal_pistolgrips"};
	};
};
class cfgVehicles
{
	class kr_fal_pgrip_Base;
	class kr_fal_pgrip_fab_defense: kr_fal_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.8,0.8,0.7};
		adsModiefer[] = {0.85,0,1};
	};
	class kr_fal_pgrip_ds_saw: kr_fal_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.75,0.75,0.7};
		adsModiefer[] = {0.75,0,1};
	};
};
