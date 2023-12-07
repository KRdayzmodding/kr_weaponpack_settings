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
			"KR_Ammo_buckshot_5","KR_Ammo_buckshot_7","KR_Ammo_buckshot_8",
			"KR_Ammo_RIP","KR_Ammo_FTX_custom","KR_Ammo_lead_slug","KR_Ammo_AP20","KR_Ammo_Grizzly40","KR_Ammo_frag_12","KR_Ammo_devastator",
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