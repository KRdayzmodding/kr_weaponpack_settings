class CfgPatches
{
	class kr_weapons_firearms_fal_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_firearms_fal"};
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
	class kr_fal_Base: Rifle_Base
	{
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		class NoiseShoot
		{
			strength = 120;
			type = "shot";
		};
	};
	class kr_fal_280mm: kr_fal_Base
	{
		barrelArmor = 6.8;
		initSpeedMultiplier = 1.35;
		recoilModifier[] = {3.4,3.9,6.4};
		swayModifier[] = {2.6,2.6,2.6};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0009;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			dispersion = 0.0009;
			magazineSlot = "magazine";
		};
	};
	class kr_fal_406mm: kr_fal_Base
	{
		barrelArmor = 8.0;
		initSpeedMultiplier = 1.15;
		recoilModifier[] = {3.2,3.6,6};
		swayModifier[] = {2.8,2.8,2.8};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
	};
	class kr_fal_533mm: kr_fal_Base
	{
		barrelArmor = 9.0;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {3,3.2,5.5};
		swayModifier[] = {3,3,3};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
	};
};
