class CfgPatches
{
	class kr_weapons_rifles_awm_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_weapons_rifles_awm"};
		magazines[] = {};
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
	class kr_awm_Base: BoltActionRifle_ExternalMagazine_Base
	{
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		barrelArmor = 2.8;
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		adsModiefer[] = {0.1,0,0};
		class Single: Mode_Single
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class kr_awm_mag: Magazine_Base
	{
		weight = 90;
		weightPerQuantityUnit = 10;
		itemSize[] = {2,2};
		count = 10;
		ammo = "Bullet_338kr_UPZ";
		tracersEvery = 0;
	};
};
