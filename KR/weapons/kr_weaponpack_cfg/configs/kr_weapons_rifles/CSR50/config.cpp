class CfgPatches
{
	class kr_weapons_rifles_CSR50_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_rifles_CSR50"};
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
	class kr_CSR50_Base: BoltActionRifle_Base
	{
		PPDOFProperties[] = {};
		barrelArmor = 1.4;
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		adsModiefer[] = {0.1,0,0};
		class Single: Mode_Single
		{
			soundSetShot[] = {"csr50_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
	};
};
