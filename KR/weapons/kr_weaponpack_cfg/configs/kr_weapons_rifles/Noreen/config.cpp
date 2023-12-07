class CfgPatches
{
	class kr_weapons_rifles_Noreen_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_rifles_Noreen"};
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
	class BoltActionRifle_Base;
	class kr_Noreen_Base: BoltActionRifle_Base
	{
		barrelArmor = 1.2;
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		adsModiefer[] = {0.1,0,0};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Noreen_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 1;
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
	};
};
