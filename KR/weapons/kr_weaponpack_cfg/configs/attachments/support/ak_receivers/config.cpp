class CfgPatches
{
	class kr_weapatt_ak_receivers_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapatt_ak_receivers"};
	};
};
class cfgVehicles
{
	class kr_ak_receiver_Base;
	class kr_ak_receiver_tactica_tula: kr_ak_receiver_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		adsModiefer[] = {0,0,0};
		itemSize[] = {3,1};
	};
	class kr_ak_receiver_tws_dog_leg: kr_ak_receiver_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		adsModiefer[] = {0,0,0};
		itemSize[] = {3,1};
	};
	class kr_ak_receiver_zenit_b33: kr_ak_receiver_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		adsModiefer[] = {0,0,0};
		itemSize[] = {3,1};
	};
	class kr_ak_receiver_akademia_bastion: kr_ak_receiver_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		adsModiefer[] = {0,0,0};
		itemSize[] = {3,1};
	};
	class kr_ak_receiver_fab_defence_pdc: kr_ak_receiver_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		adsModiefer[] = {0,0,0};
		itemSize[] = {3,1};
	};
};
