class CfgPatches
{
	class kr_weapons_firearms_sr25_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_firearms_sr25"};
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
	class kr_sr25_Base: Rifle_Base
	{
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
	};
	class kr_sr25_406mm: kr_sr25_Base
	{
		recoilModifier[] = {3.2,3.7,6.2};
		swayModifier[] = {2.8,2.8,2.8};
		adsModiefer[] = {0.1,0,0};
		barrelArmor = 6.3;
		initSpeedMultiplier = 1.15;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00065;
			magazineSlot = "magazine";
		};
	};
	class kr_sr25_508mm: kr_sr25_Base
	{
		recoilModifier[] = {2.8,3.1,5.3};
		swayModifier[] = {3.2,3.2,3.2};
		adsModiefer[] = {0.1,0,0};
		barrelArmor = 5.0;
		initSpeedMultiplier = 1.3;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00055;
			magazineSlot = "magazine";
		};
	};
};
