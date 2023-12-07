class CfgPatches
{
	class kr_weapatt_rpk16_parts_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapatt_rpk16_parts"};
	};
};
class cfgVehicles
{
	class kr_rpk16_fstock_Base;
	class kr_rpk16_hguard_Base;
	class kr_rpk16_fstock_tube: kr_rpk16_fstock_Base
	{
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		adsModiefer[] = {0,0,0};
		itemSize[] = {2,1};
	};
	class kr_rpk16_hguard_std: kr_rpk16_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		adsModiefer[] = {0.8,0,1};
		itemSize[] = {2,1};
	};
	class kr_rpk16_hguard_std_raild: kr_rpk16_hguard_std{};
};
