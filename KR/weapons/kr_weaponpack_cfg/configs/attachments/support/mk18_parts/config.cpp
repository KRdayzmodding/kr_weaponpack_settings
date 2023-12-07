class CfgPatches
{
	class kr_weapatt_mk18_parts_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapatt_mk18_parts"};
	};
};
class cfgVehicles
{
	class kr_mk18_hguard_Base;
	class kr_mk18_hguard: kr_mk18_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		adsModiefer[] = {0.8,0,1};
		itemSize[] = {7,1};
	};
	class kr_mk18_hguard_raild: kr_mk18_hguard{};
};
