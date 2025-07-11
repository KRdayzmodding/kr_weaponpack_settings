class CfgPatches
{
	class kr_magazine_762x25
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
		magazines[] = {"Mag_762x25_tt_std_8Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_762x25_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_762x25_PT_gz";
		ammoItems[] = {"kr_Ammo_762x25_PT_gz","kr_Ammo_762x25_PST_gz","kr_Ammo_762x25_FMJ43","kr_Ammo_762x25_AKBS","kr_Ammo_762x25_HP"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x25";
		};
	};
	class Mag_762x25_tt_std_8Rnd: kr_magazine_762x25_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x25_tt_std_8Rnd";
		descriptionShort = "$STR_kr_magazines_762x25_tt_std_8Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\762x25\Mag_762x25_tt_std_8Rnd.p3d";
		weight = 70;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,2};
		count = 8;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x25";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt_destruct.rvmat"}}};
				};
			};
		};
	};
};
