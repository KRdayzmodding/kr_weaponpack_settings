class CfgPatches
{
	class kr_magazine_50bmg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_magazine_Base"};
		magazines[] = {"Mag_50bmg_ax50_mag_5Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_50bmg_Base: kr_magazine_Base
	{
		weightPerQuantityUnit = 10;
		ammo = "Bullet_50BMG";
		ammoItems[] = {"kr_Ammo_50BMG","kr_Ammo_50BMG_AP","kr_Ammo_50BMG_E","kr_Ammo_50BMG_ET","kr_Ammo_50BMG_T"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".50BMG";
		};
	};

	class Mag_50bmg_ax50_5Rnd: kr_magazine_50bmg_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_50bmg_ax50_5Rnd";
		descriptionShort = "$STR_kr_magazines_50bmg_ax50_5Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\Mag_50bmg_AX50_5Rnd.p3d";
		weight = 270;
		itemSize[] = {3,3};
		count = 5;
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\ax50_mag_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\ax50_mag.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\ax50_mag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\ax50_mag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\ax50_mag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\ax50_mag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\ax50_mag_destruct.rvmat"}}};
				};
			};
		};
	};

	class Mag_50bmg_M82_10Rnd: kr_magazine_50bmg_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_50bmg_m82_10Rnd";
		descriptionShort = "$STR_kr_magazines_50bmg_m82_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\Mag_50bmg_m82_10Rnd.p3d";
		weight = 270;
		itemSize[] = {3,3};
		count = 10;
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\m82_mag_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\m82_mag.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\m82_mag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\m82_mag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\m82_mag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\m82_mag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\50bmg\data\m82_mag_destruct.rvmat"}}};
				};
			};
		};
	};
};
