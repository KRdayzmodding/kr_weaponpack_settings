class CfgPatches
{
	class kr_weapons_lmg_M240_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_lmg_M240"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class kr_m240_Base;
	class kr_m240: kr_m240_Base
	{
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		swayModifier[] = {1,1,0.9};
		recoilModifier[] = {1.2,1.25,1.25};
		adsModiefer[] = {0.0,0,0};
		barrelArmor = 20.4;
		initSpeedMultiplier = 0.9;
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Magnum_Shot_SoundSet","Magnum_Tail_SoundSet","Magnum_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.088;
			dispersion = 0.0009;
			magazineSlot = "magazine";
		};
	};
};
