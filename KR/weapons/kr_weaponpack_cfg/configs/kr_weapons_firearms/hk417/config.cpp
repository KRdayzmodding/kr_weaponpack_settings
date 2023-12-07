class CfgPatches
{
	class kr_weapons_firearms_hk417_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","kr_data","kr_weapons_firearms_hk417","kr_weapons_firearms_g28_cfg"};
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
	class kr_g28_Base;
	
	class kr_hk417 : kr_g28_Base 
    {
		recoilModifier[] = {3.2,3.7,6.2};
		swayModifier[] = {2.8,2.8,2.8};
		adsModifier[] = {0.1,0,0};
		barrelArmor = 9.8;
		initSpeedMultiplier = 1.15;

		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "7.62x51 (.308)";
		};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.00065;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00065;
			magazineSlot = "magazine";
		};
	};
};	