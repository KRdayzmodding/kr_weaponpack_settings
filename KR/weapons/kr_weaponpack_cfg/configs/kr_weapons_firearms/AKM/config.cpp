class CfgPatches
{
	class kr_weapons_firearms_akm_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_firearms_akm"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class kr_ak_Base;
	class kr_akm_Base: kr_ak_Base
	{
		barrelArmor = 2.5;
		initSpeedMultiplier = 0.9;
		recoilModifier[] = {3.5,3.5,5.5};
		swayModifier[] = {3.2,3.2,2.85};
		adsModiefer[] = {0.1,0,0};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AKM_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AKM_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0008;
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AKM_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AKM_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.0008;
		};
		class NoiseShoot
		{
			strength = 100;
		};
	};
};
