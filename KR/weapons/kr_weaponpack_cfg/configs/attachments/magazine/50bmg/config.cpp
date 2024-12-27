class CfgPatches
{
	class kr_magazine_50bmg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_magazine_Base"};
		magazines[] = {"Mag_50bmg_AX50_5Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_50bmg_base: kr_magazine_Base
	{
		weightPerQuantityUnit = 10;
		ammo = "Bullet_50BMG";
		ammoItems[] = {"kr_Ammo_50BMG","kr_Ammo_50BMG_AP","kr_Ammo_50BMG_E","kr_Ammo_50BMG_ET","kr_Ammo_50BMG_T"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".50BMG";
		};
	};
	class Mag_50bmg_AX50_5Rnd: kr_magazine_50bmg_base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_50bmg_ax50_5Rnd";
		descriptionShort = "$STR_kr_magazines_50bmg_ax50_5Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\50bmg\Mag_50bmg_ax50_5Rnd.p3d";
		weight = 90;
		itemSize[] = {2,2};
		count = 5;
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\AX50\data\AX50_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\AX50\data\AX50.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\AX50\data\AX50.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\AX50\data\AX50_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\AX50\data\AX50_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\AX50\data\AX50_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\AX50\data\AX50_destruct.rvmat"}}};
				};
			};
		};
	};
};
