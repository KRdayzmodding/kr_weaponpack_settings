class CfgPatches
{
	class kr_weapons_rifles_dvl10_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_weapons_rifles_dvl10"};
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
	class kr_dvl10_Base: BoltActionRifle_ExternalMagazine_Base
	{
		initSpeedMultiplier = 1.69;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		adsModiefer[] = {0.1,0,0};
		class Single: Mode_Single
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 1;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
	};
	class kr_dvl10_M1: kr_dvl10_Base
	{
		barrelArmor = 1.69;
		class Single: Mode_Single
		{
			soundSetShot[] = {"DVL_M1_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"};
			reloadTime = 1;
			dispersion = 0.0006;
			magazineSlot = "magazine";
		};
	};
	class kr_dvl10_M2: kr_dvl10_Base
	{
		barrelArmor = 2.25;
		class Single: Mode_Single
		{
			soundSetShot[] = {"DVL_M2_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 1;
			dispersion = 0.00045;
			magazineSlot = "magazine";
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class kr_dvl10_mag: Magazine_Base
	{
		weight = 90;
		weightPerQuantityUnit = 10;
		itemSize[] = {1,1};
		count = 10;
		ammo = "Bullet_338kr_UPZ";
		tracersEvery = 0;
	};
};
