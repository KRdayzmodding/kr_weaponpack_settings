class CfgPatches
{
	class kr_magazine_9x18
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Magazines","kr_data","kr_magazine_Base"};
		magazines[] = {"Mag_9x18_apb_20Rnd","Mag_9x18_pm_8Rnd","Mag_9x18_pm_84Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_9x18_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_9x18_ppt_gz";
		ammoItems[] = {"kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz","Ammo_380"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		weightPerQuantityUnit = 4;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x18";
		};
	};
	class Mag_9x18_apb_20Rnd: kr_magazine_9x18_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x18_apb_20Rnd";
		descriptionShort = "$STR_kr_magazines_9x18_apb_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\Mag_9x18_apb_20Rnd.p3d";
		weight = 80;
		itemSize[] = {1,2};
		count = 20;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\apb_mag.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\apb_mag_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\apb_mag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\apb_mag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\apb_mag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\apb_mag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\apb_mag_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x18: APB, APS";
		};
	};
	class Mag_9x18_pm_8Rnd: kr_magazine_9x18_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x18_pm_8rnd";
		descriptionShort = "$STR_kr_magazines_9x18_pm_8rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\Mag_9x18_pm_8Rnd.p3d";
		weight = 60;
		itemSize[] = {1,2};
		count = 8;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_8.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_8_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_8.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_8_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_8_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_8_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_8_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x18: PM, PB";
		};
	};
	class Mag_9x18_pm_84Rnd: kr_magazine_9x18_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x18_pm_84rnd";
		descriptionShort = "$STR_kr_magazines_9x18_pm_84rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\Mag_9x18_pm_84Rnd.p3d";
		weight = 240;
		itemSize[] = {3,3};
		count = 84;
		swayModifier[] = {1.0,1.25,1.25};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_84.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_84_co.paa"};
		soundImpactType = "metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_84.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_84_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_84_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_84_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x18\data\pm_mag_84_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -20;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x18: PM, PB";
		};
	};
};
