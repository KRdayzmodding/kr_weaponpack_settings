class CfgPatches
{
	class kr_weapons_rifles_kr_mcmillan_cs5_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_rifles_kr_mcmillan_cs5"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class kr_mcmillan_cs5_Base: BoltActionRifle_ExternalMagazine_Base
	{
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		barrelArmor = 3.5;
		initSpeedMultiplier = 1.5;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.3,1.3,1};
		adsModiefer[] = {0.1,0,0};
		class Single: Mode_Single
		{
			soundSetShot[] = {"SCOUT_silencer_SoundSet","SCOUT_silencerTail_SoundSet","SCOUT_silencerInteriorTail_SoundSet"};
			envShootingDecrease = 0.05;
			reloadTime = 0.3;
			dispersion = 0.0003;
			magazineSlot = "magazine";
		};
	};
};
