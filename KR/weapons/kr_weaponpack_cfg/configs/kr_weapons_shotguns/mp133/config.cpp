class CfgPatches
{
	class kr_weapons_shotguns_mp133_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_weapons_shotguns_mp133"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;

class cfgWeapons
{
	class Shotgun_Base;

	class kr_mp133_Base: Shotgun_Base
	{
		chamberableFrom[] = 
		{
			"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom",
			"kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator",
			"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"
		};
		PPDOFProperties[] = {1,0.5,10,140,4,10};

		class Single: Mode_Single
		{
			soundSetShot[] = {"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			reloadTime = 1;
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
	};

	class kr_mp133 : kr_mp133_Base
	{
		chamberSize = 5;
		initSpeedMultiplier = 1.25;
		barrelArmor = 18.0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.3,2.3,1.2};

		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "12x76";
		};
	};
};