class CfgPatches
{
	class kr_magazine_45ACP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Magazines","kr_data","kr_magazine_Base"};
		magazines[] = {};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_45ACP_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_45ACP";
		ammoItems[] = {"Ammo_45ACP"};
		weightPerQuantityUnit = 4;
		hiddenSelections[] = {"camo"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "45ACP";
		};
	};
	class Mag_45ACP_glock21_std_13Rnd: kr_magazine_45ACP_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_45ACP_glock21_std_13Rnd";
		descriptionShort = "$STR_kr_magazines_45ACP_glock21_std_13Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\Mag_45ACP_glock21_std_13Rnd.p3d";
		weight = 120;
		itemSize[] = {1,2};
		count = 13;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\glock21_std.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\glock21_std_co.paa"};
		soundImpactType = "metal";
		
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".45ACP";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\glock21_std.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\glock21_std_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\glock21_std_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\glock21_std_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\glock21_std_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Mag_45ACP_magex_g30_30Rnd: kr_magazine_45ACP_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_45ACP_magex_g30_30Rnd";
		descriptionShort = "$STR_kr_magazines_45ACP_magex_g30_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\Mag_45ACP_magex_g30_30Rnd.p3d";
		weight = 200;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\magex_g30.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\magex_g30_co.paa"};
		soundImpactType = "metal";
		
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".45ACP";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\magex_g30.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\magex_g30_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\magex_g30_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\magex_g30_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\45ACP\data\magex_g30_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
