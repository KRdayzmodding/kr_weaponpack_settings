class CfgPatches
{
	class kr_magazine_762x39
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
		magazines[] = {"Mag_762x39_sawed_off_10Rnd","Mag_762x39_6L10_30Rnd","Mag_762x39_ak103_std_30Rnd","Mag_762x39_akms_aluminium_30Rnd","Mag_762x39_fab_defense_ultimag_30Rnd","Mag_762x39_magpul_pmag_30Rnd","Mag_762x39_us_palm_30Rnd","Mag_762x39_rpk_std_40Rnd","Mag_762x39_rpk_std_bakelite_40Rnd","Mag_762x39_x_products_drum_50Rnd","Mag_762x39_promag_drum_73Rnd","Mag_762x39_molot_rpk_drum_75Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_762x39_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_762x39_fmj";
		ammoItems[] = {"kr_Ammo_762x39_fmj","kr_Ammo_762x39_t45m","kr_Ammo_762x39_mai_ap","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_us","kr_Ammo_762x39_bp","Ammo_762x39","Ammo_762x39Tracer","kr_Ammo_762x39_AP","kr_Ammo_366TKM_custom_ap","kr_Ammo_366TKM_FMJ","kr_Ammo_366TKM_EKO","kr_Ammo_366TKM_Geksa"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x39";
		};
	};
	class Mag_762x39_sawed_off_10Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_sawed_off_10Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_sawed_off_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_sawed_off_10Rnd.p3d";
		weight = 200;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,1};
		count = 10;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\sawed_off.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\sawed_off_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\sawed_off.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\sawed_off_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\sawed_off_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\sawed_off_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\sawed_off_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_6L10_30Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_6L10_30Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_6L10_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_6L10_30Rnd.p3d";
		weight = 370;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\6L10.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\6L10_co.paa"};
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\6L10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\6L10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\6L10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\6L10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\6L10_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_ak103_std_30Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_ak103_std_30Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_ak103_std_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_ak103_std_30Rnd.p3d";
		weight = 215;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\ak103_std.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\ak103_std_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\ak103_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\ak103_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\ak103_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\ak103_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\ak103_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_akms_aluminium_30Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_akms_aluminium_30Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_akms_aluminium_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_akms_aluminium_30Rnd.p3d";
		weight = 170;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\akms_aluminium.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\akms_aluminium_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -4;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\akms_aluminium.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\akms_aluminium_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\akms_aluminium_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\akms_aluminium_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\akms_aluminium_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_fab_defense_ultimag_30Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_fab_defense_ultimag_30Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_fab_defense_ultimag_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_fab_defense_ultimag_30Rnd.p3d";
		weight = 156;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\fab_defense_ultimag.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\fab_defense_ultimag_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\fab_defense_ultimag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\fab_defense_ultimag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\fab_defense_ultimag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\fab_defense_ultimag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\fab_defense_ultimag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_magpul_pmag_30Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_magpul_pmag_30Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_magpul_pmag_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_magpul_pmag_30Rnd.p3d";
		weight = 200;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\magpul_pmag.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\magpul_pmag_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\magpul_pmag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\magpul_pmag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\magpul_pmag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\magpul_pmag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\magpul_pmag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_us_palm_30Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_us_palm_30Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_us_palm_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_us_palm_30Rnd.p3d";
		weight = 200;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\us_palm.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\us_palm_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\us_palm.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\us_palm_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\us_palm_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\us_palm_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\us_palm_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_rpk_std_40Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_rpk_std_40Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_rpk_std_40Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_rpk_std_40Rnd.p3d";
		weight = 460;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,4};
		count = 40;
		swayModifier[] = {1,1.1,1.1};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -4;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_rpk_std_bakelite_40Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_rpk_std_bakelite_40Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_rpk_std_bakelite_40Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_rpk_std_bakelite_40Rnd.p3d";
		weight = 320;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,4};
		count = 40;
		swayModifier[] = {1,1.1,1.1};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_bakelite.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_bakelite_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -4;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_bakelite.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_bakelite_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_bakelite_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_bakelite_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\rpk_std_bakelite_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_x_products_drum_50Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_x_products_drum_50Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_x_products_drum_50Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_x_products_drum_50Rnd.p3d";
		weight = 700;
		weightPerQuantityUnit = 4;
		itemSize[] = {2,3};
		count = 50;
		swayModifier[] = {1,1.15,1.1};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\x_products_drum.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\x_products_drum_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\x_products_drum.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\x_products_drum_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\x_products_drum_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\x_products_drum_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\x_products_drum_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_promag_drum_73Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_promag_drum_73Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_promag_drum_73Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_promag_drum_73Rnd.p3d";
		weight = 720;
		weightPerQuantityUnit = 4;
		itemSize[] = {3,3};
		count = 73;
		swayModifier[] = {1,1.27,1.27};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\promag_drum.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\promag_drum_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -12;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\promag_drum.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\promag_drum_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\promag_drum_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\promag_drum_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\promag_drum_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x39_molot_rpk_drum_75Rnd: kr_magazine_762x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x39_molot_rpk_drum_75Rnd";
		descriptionShort = "$STR_kr_magazines_762x39_molot_rpk_drum_75Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x39\Mag_762x39_molot_rpk_drum_75Rnd.p3d";
		weight = 900;
		weightPerQuantityUnit = 4;
		itemSize[] = {3,3};
		count = 75;
		swayModifier[] = {1,1.25,1.25};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\molot_rpk_drum.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\molot_rpk_drum_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -11;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\molot_rpk_drum.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\molot_rpk_drum_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\molot_rpk_drum_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\molot_rpk_drum_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x39\data\molot_rpk_drum_destruct.rvmat"}}};
				};
			};
		};
	};
};
