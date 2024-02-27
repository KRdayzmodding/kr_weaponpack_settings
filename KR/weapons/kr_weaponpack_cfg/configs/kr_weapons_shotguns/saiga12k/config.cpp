class CfgPatches
{
	class kr_weapons_shotguns_saiga_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_weapons_shotguns_saiga"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Rifle_Base;
	class kr_saiga_Base: Rifle_Base
	{
		chamberableFrom[] = 
		{
			"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom",
			"kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator",
			"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"
		};
		PPDOFProperties[] = {1,0.5,10,140,4,10};


		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Saiga12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			reloadTime = 0.13;
			dispersion = 0.01;
			firespreadangle = 1.5;
		};
	};

	class kr_saiga12k: kr_saiga_Base
	{
		barrelArmor = 11.1;
		recoilModifier[] = {3.2,3.3,3.1};
		swayModifier[] = {3.5,3.5,2.3};
		initSpeedMultiplier = 1.3;
		
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "12x76";
		};
	};
};