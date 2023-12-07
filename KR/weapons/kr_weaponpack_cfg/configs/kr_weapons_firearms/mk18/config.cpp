class CfgPatches
{
	class kr_weapons_firearms_mk18_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_firearms_mk18"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class kr_MK18_Base: Rifle_Base
	{
		PPDOFProperties[] = {0,0.6,50,200,4,10};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
	};
	class kr_MK18: kr_MK18_Base
	{
		initSpeedMultiplier = 0.9;
		barrelArmor = 4.5;
		recoilModifier[] = {2.8,3.1,5.3};
		swayModifier[] = {3.2,3.2,3.2};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MK18_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 0.4;
			dispersion = 0.0006;
			magazineSlot = "magazine";
		};
	};
};
