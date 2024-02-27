class CfgPatches
{
	class kr_weapons_shotguns_mp153_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_weapons_shotguns_mp153"};
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
	class kr_mp153_Base : Rifle_Base
	{
		PPDOFProperties[] = {1,0.6,50,160,4,10};
		chamberableFrom[] = 
		{
			"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom",
			"kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator",
			"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"
		};
	};

    class kr_mp153 : kr_mp153_Base
    {
		barrelArmor = 13.7;
		initSpeedMultiplier = 1.1;
		chamberSize = 5;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.4,2.4,1.3};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			reloadTime = 0.3;
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};

		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "12x76";
		};
    };
};