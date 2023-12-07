class CfgPatches
{
	class kr_weapatt_foregrips_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapatt_foregrips"};
	};
};
class cfgVehicles
{
	class kr_foregrip_Base;
	class kr_foregrip_t1_Base: kr_foregrip_Base
	{
		recoilModifier[] = {0.7,0.9,0.9};
		swayModifier[] = {0.75,0.75,0.75};
		adsModiefer[] = {-0.1,0,0};
	};
	class kr_foregrip_t2_Base: kr_foregrip_Base
	{
		recoilModifier[] = {0.6,0.8,0.8};
		swayModifier[] = {0.7,0.7,0.7};
		adsModiefer[] = {-0.15,0,0};
	};
	class kr_foregrip_t3_Base: kr_foregrip_Base
	{
		recoilModifier[] = {0.5,0.7,0.7};
		swayModifier[] = {0.65,0.65,0.65};
		adsModiefer[] = {-0.2,0,0};
	};
	class kr_foregrip_t4_Base: kr_foregrip_Base
	{
		recoilModifier[] = {0.4,0.6,0.6};
		swayModifier[] = {0.6,0.6,0.6};
		adsModiefer[] = {-0.25,0,0};
	};
	class kr_foregrip_zenit_b25u_rk_1: kr_foregrip_t4_Base
	{
		recoilModifier[] = {0.4,0.6,0.6};
	};
};
