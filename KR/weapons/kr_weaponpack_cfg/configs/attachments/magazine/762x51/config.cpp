class CfgPatches
{
	class kr_magazine_762x51
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
		magazines[] = {"Mag_762x51_dsarms_10Rnd","Mag_762x51_kac_steel_10Rnd","Mag_762x51_g28_10Rnd","Mag_762x51_kac_steel_20Rnd","Mag_762x51_m240_150Rnd","Mag_762x51_pmag_20Rnd","Mag_762x51_dsarms_20Rnd","Mag_762x51_dsarms_30Rnd","Mag_762x51_mmw_20Rnd","Mag_762x51_mk17_20Rnd","Mag_762x51_sarco_30Rnd","Mag_762x51_g28_20Rnd","Mag_762x51_xproduct_50Rnd","Mag_762x51_g28_xproduct_50Rnd","Mag_762x51_mcmillan_cs5_10Rnd","Mag_762x51_mcmillan_cs5_20Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_762x51_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_762x51_tpz_sp";
		ammoItems[] = {"kr_Ammo_762x51_bpz_fmj","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","Ammo_308Win","Ammo_308WinTracer"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class Mag_762x51_dsarms_10Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_dsarms_10Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_dsarms_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_dsarms_10Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,1};
		count = 10;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_10.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_10_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_10_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_kac_steel_10Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_kac_steel_10Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_kac_steel_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_kac_steel_10Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,1};
		count = 10;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_10.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_10_co.paa"};

		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".308 (SR25, M40A5, RSASS, SPEAR)";
		};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_10_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_g28_10Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_g28_10Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_g28_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_g28_10Rnd.p3d";
		weight = 210;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,1};
		count = 10;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_10.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_10_co.paa"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x51 (.308)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_10_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_kac_steel_20Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_kac_steel_20Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_kac_steel_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_kac_steel_20Rnd.p3d";
		weight = 270;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,2};
		count = 20;
		swayModifier[] = {1,1.1,1.1};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_20.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_20_co.paa"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = ".308 (SR25, M40A5, RSASS, SPEAR)";
		};
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\kac_steel_20_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_m240_150Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_m240_150Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_m240_150Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_m240_150Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {3,3};
		count = 150;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_2.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_2_co.paa"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x51 (.308)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\m240_150.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\m240_150_damage.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\m240_150_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\m240_150_destruct.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\m240_150_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_pmag_20Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_pmag_20Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_pmag_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_pmag_20Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,2};
		count = 20;
		swayModifier[] = {1,1.05,1.05};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\pmag_20.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\pmag_20_co.paa"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".308 (SR25, M40A5, RSASS, SPEAR)";
		};
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\pmag_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\pmag_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\pmag_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\pmag_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\pmag_20_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_dsarms_20Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_dsarms_20Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_dsarms_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_dsarms_20Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,2};
		count = 20;
		swayModifier[] = {1.0,1.05,1.05};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_20.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_20_co.paa"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_20_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_dsarms_30Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_dsarms_30Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_dsarms_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_dsarms_30Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,3};
		count = 30;
		swayModifier[] = {1.0,1.15,1.15};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_30_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_30.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51 (.308)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_30.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_30_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_30_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_30_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\dsarms_30_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_mmw_20Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_mmw_20Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_mmw_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_mmw_20Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,2};
		count = 20;
		swayModifier[] = {1.0,1.1,1.1};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mmw_20.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mmw_20_co.paa"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mmw_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mmw_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mmw_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mmw_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mmw_20_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_mk17_20Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_mk17_20Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_mk17_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_mk17_20Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,2};
		count = 20;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mk17_20.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mk17_20_co.paa"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mk17_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mk17_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mk17_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mk17_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mk17_20_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_sarco_30Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_sarco_30Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_sarco_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_sarco_30Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,3};
		count = 30;
		swayModifier[] = {1.0,1.15,1.15};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\sarco_30.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\sarco_30_co.paa"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51 (.308)";
		};
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\sarco_30.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\sarco_30_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\sarco_30_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\sarco_30_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\sarco_30_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_g28_20Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_g28_20Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_g28_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_g28_20Rnd.p3d";
		weight = 220;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,2};
		count = 20;
		swayModifier[] = {1,1.05,1.05};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_20.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_20_co.paa"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\g28_20_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_xproduct_50Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_xproduct_50Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_xproduct_50Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_xproduct_50Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {2,3};
		count = 50;
		swayModifier[] = {1.0,1.3,1.3};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_co.paa"};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "7.62x51 (FAL)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_g28_xproduct_50Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_g28_xproduct_50Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_g28_xproduct_50Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_g28_xproduct_50Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {2,3};
		count = 50;
		swayModifier[] = {1.0,1.3,1.3};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_co.paa"};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "7.62x51 (G28/HK417/Mk17)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_mcmillan_cs5_10Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_mcmillan_cs5_10Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_mcmillan_cs5_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_mcmillan_cs5_10Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,1};
		count = 10;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_10.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_10_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_10_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x51_mcmillan_cs5_20Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_mcmillan_cs5_20Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_mcmillan_cs5_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_mcmillan_cs5_20Rnd.p3d";
		weight = 270;
		weightPerQuantityUnit = 4;
		itemSize[] = {1,2};
		count = 20;
		swayModifier[] = {1,1.05,1.05};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_20.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_20_co.paa"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\mcmillan_cs5_20_destruct.rvmat"}}};
				};
			};
		};
	};

	class Mag_762x51_kac_xproduct_50Rnd: kr_magazine_762x51_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x51_kac_xproduct_50Rnd";
		descriptionShort = "$STR_kr_magazines_762x51_kac_xproduct_50Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\762x51\Mag_762x51_kac_xproduct_50Rnd.p3d";
		weight = 230;
		weightPerQuantityUnit = 4;
		itemSize[] = {2,3};
		count = 50;
		swayModifier[] = {1.0,1.3,1.3};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_co.paa"};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = ".308 (SR25/RSASS/SPEAR)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -20;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x51\data\xproduct_50_destruct.rvmat"}}};
				};
			};
		};
	};
};
