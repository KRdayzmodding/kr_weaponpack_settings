class CfgPatches
{
	class kr_weapons_rifles_ax50_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_weapons_rifles_ax50"};
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
	class kr_AX50_Base: BoltActionRifle_ExternalMagazine_Base
	{
		barrelArmor = 2.1;
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		adsModiefer[] = {0.1,0,0};
		itemSize[] = {9,2};
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
	class kr_AX50_mag: Magazine_Base
	{
		weight = 90;
		weightPerQuantityUnit = 10;
		itemSize[] = {2,2};
		count = 10;
		ammo = "Bullet_762x39";
		ammoItems[] = {"Ammo_762x39","Ammo_762x39Tracer"};
		tracersEvery = 0;
	};
};
