class CfgPatches
{
	class kr_weapons_firearms_mk16_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","kr_data","kr_weapons_firearms_mk16"};
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

	class kr_mk16_Base : Rifle_Base 
	{
		PPDOFProperties[] = {1,0.5,50,160,4,10};

		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
	};

	class kr_mk16_254 : kr_mk16_Base 
    {
		recoilModifier[] = {2.5,2.5,4.7};
		swayModifier[] = {2.4,2.4,2.35};
		adsModifier[] = {0.1,0,0};
		initSpeedMultiplier = 1.0;
		barrelArmor = 6.3;

		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
	};

	class kr_mk16_355: kr_mk16_Base
	{
		recoilModifier[] = {2.6,2.6,4.6};
		swayModifier[] = {2.6,2.6,2.4};
		adsModifier[] = {0.1,0,0};
		barrelArmor = 7.2;
		initSpeedMultiplier = 1.1;

		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};

		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0008;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0008;
			magazineSlot = "magazine";
		};
	};

	class kr_mk16_457: kr_mk16_Base
	{
		barrelArmor = 8.3;
		initSpeedMultiplier = 1.25;
		recoilModifier[] = {2.9,2.9,4.3};
		swayModifier[] = {3,3,2.85};
		adsModifier[] = {0.1,0,0};

		class kr_discription
		{
			kr_tier = 4;
			kr_caliber = "5.56x45";
		};

		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
	};
};