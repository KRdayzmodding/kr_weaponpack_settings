class CfgPatches
{
	class kr_attachments_shotgun_parts
	{
		units[] = {"kr_saiga12k_hguard_saiga12k_std","kr_saiga12k_hguard_bravo18","kr_saiga12k_hguard_cg340","kr_saiga12k_hguard_cg340_raild","kr_saiga12k_hguard_utg_pro_short","kr_saiga12k_hguard_utg_pro_long","kr_stock_spas12","kr_stock_m3_synthetic","kr_stock_m3s_telescopic","kr_stock_m870_magpul_sga","kr_stock_m870_raptor","kr_handguard_m870_fd_pr870","kr_handguard_m870_magpul_moe"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_support_Base;
	class kr_saiga_hguard_Base;
	class kr_saiga12k_hguard_saiga12k_std: kr_saiga_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_saiga12k_handguard_saiga12k_std";
		descriptionShort = "$STR_kr_weapons_attachments_saiga12k_handguard_saiga12k_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\saiga12k_handguard_saiga12k_std.p3d";
		weight = 180;
		recoilModifier[] = {0.6,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\saiga12k_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\saiga12k_std.rvmat"};
		soundImpactType = "plastic";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 0;
		};
		class kr_description
		{
			kr_type = "Сайга-12";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\saiga12k_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\saiga12k_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\saiga12k_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\saiga12k_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\saiga12k_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_saiga12k_hguard_bravo18: kr_saiga_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_saiga12k_handguard_bravo18";
		descriptionShort = "$STR_kr_weapons_attachments_saiga12k_handguard_bravo18_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\saiga12k_handguard_bravo18.p3d";
		weight = 370;
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\bravo18_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\bravo18.rvmat"};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		class kr_firearms
		{
			grip = 1;
			light = 1;
			holo = 1;
		};
		class kr_description
		{
			kr_type = "Сайга12к";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\bravo18.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\bravo18_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\bravo18_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\bravo18_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\bravo18_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_saiga12k_hguard_cg340: kr_saiga_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_saiga12k_handguard_cg340";
		descriptionShort = "$STR_kr_weapons_attachments_saiga12k_handguard_cg340_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\saiga12k_handguard_cg340.p3d";
		weight = 240;
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		itemSize[] = {3,1};
		haveTube = 1;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\cg340_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\cg340.rvmat"};
		soundImpactType = "plastic";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 0;
		};
		class kr_description
		{
			kr_type = "Сайга-12";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\cg340.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\cg340_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\cg340_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\cg340_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\cg340_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_saiga12k_hguard_cg340_raild: kr_saiga12k_hguard_cg340
	{
		attachments[] = {"kr_foregrip","kr_light_right"};
		weight = 250;
		class kr_firearms
		{
			grip = 2;
			light = 2;
			holo = 0;
		};
		class kr_description
		{
			kr_type = "Сайга-12";
			kr_tier = 2;
		};
	};
	class kr_saiga12k_hguard_utg_pro_short: kr_saiga_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_saiga12k_handguard_utg_pro_short";
		descriptionShort = "$STR_kr_weapons_attachments_saiga12k_handguard_utg_pro_short_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\saiga12k_handguard_utg_pro_short.p3d";
		weight = 408;
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_short_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_short.rvmat"};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_firearms
		{
			holo = 2;
		};
		class kr_description
		{
			kr_type = "Сайга-12";
			kr_tier = 3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_short.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_short_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_short_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_short_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_short_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_saiga12k_hguard_utg_pro_long: kr_saiga_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_saiga12k_handguard_utg_pro_long";
		descriptionlong = "$STR_kr_weapons_attachments_saiga12k_handguard_utg_pro_long_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\saiga12k_handguard_utg_pro_long.p3d";
		weight = 428;
		recoilModifier[] = {0.25,0.7,0.7};
		swayModifier[] = {0.3,0.3,0.3};
		itemSize[] = {4,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_long_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_long.rvmat"};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 18;
		};
		class kr_firearms
		{
			holo = 2;
		};
		class kr_description
		{
			kr_type = "Сайга-12";
			kr_tier = 4;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_long.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_long_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_long_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_long_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\utg_pro_long_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_stock_spas12: kr_support_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_spas12_stock";
		descriptionShort = "$STR_kr_weapons_attachments_spas12_stock_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\spas12_stock.p3d";
		weight = 300;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.75,0.75,0.75};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\spas12_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\spas12_stock.rvmat"};
		soundImpactType = "metal";
		inventorySlot[] = {"kr_spas12_stock"};
		class kr_description
		{
			kr_type = "SPAS12";
			kr_tier = 1;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 23;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\spas12_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\spas12_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\spas12_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\spas12_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\shotguns_parts\data\spas12_stock_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_stock_m3_synthetic: kr_support_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_m3s_synthetic_stock";
		descriptionShort = "$STR_kr_weapons_attachments_m3s_synthetic_stock_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\stock_m3s_synthetic.p3d";
		weight = 300;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.75,0.75,0.75};
		itemSize[] = {2,2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3s_synthetic_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3s_synthetic_stock.rvmat"};
		soundImpactType = "metal";
		inventorySlot[] = {"kr_m3s_stock"};
		class kr_description
		{
			kr_type = "Benelli M3 Super";
			kr_tier = 2;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 27;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3s_synthetic_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3s_synthetic_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3s_synthetic_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3s_synthetic_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3s_synthetic_stock_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_stock_m3s_telescopic: kr_support_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_m3s_telescopic_stock";
		descriptionShort = "$STR_kr_weapons_attachments_m3s_telescopic_stock_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\stock_m3s_telescopic.p3d";
		weight = 300;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.75,0.75,0.75};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3_telescopic_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3_telescopic_stock.rvmat"};
		soundImpactType = "metal";
		inventorySlot[] = {"kr_m3s_stock"};
		class kr_description
		{
			kr_type = "Benelli M3 Super";
			kr_tier = 1;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 23;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3_telescopic_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3_telescopic_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3_telescopic_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3_telescopic_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m3_telescopic_stock_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_stock_m870_magpul_sga: kr_support_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_stock_m870_magpul_sga";
		descriptionShort = "$STR_kr_weapons_attachments_stock_m870_magpul_sga_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\stock_m870_magpul_sga.p3d";
		weight = 300;
		recoilModifier[] = {0.75,0.85,0.55};
		swayModifier[] = {0.75,0.75,0.75};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_magpul_sga_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_magpul_sga.rvmat"};
		soundImpactType = "plastic";
		inventorySlot[] = {"kr_m870_stock"};
		class kr_description
		{
			kr_type = "Remington M870";
			kr_tier = 3;
		};
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_magpul_sga.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_magpul_sga_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_magpul_sga_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_magpul_sga_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_magpul_sga_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_stock_m870_raptor: kr_support_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_stock_m870_raptor";
		descriptionShort = "$STR_kr_weapons_attachments_stock_m870_raptor_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\stock_m870_raptor.p3d";
		weight = 300;
		recoilModifier[] = {1.0,1.0,1.3};
		swayModifier[] = {1.1,1.2,0.8};
		itemSize[] = {1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_raptor_grip_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_raptor_grip.rvmat"};
		soundImpactType = "plastic";
		inventorySlot[] = {"kr_m870_stock"};
		class kr_description
		{
			kr_type = "Remington M870";
			kr_tier = 2;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 28;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_raptor_grip.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_raptor_grip_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_raptor_grip_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_raptor_grip_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\m870_raptor_grip_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_handguard_m870_fd_pr870: kr_support_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_handguard_m870_fd_pr870";
		descriptionShort = "$STR_kr_weapons_attachments_handguard_m870_fd_pr870_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\handguard_m870_pr870.p3d";
		weight = 300;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\fab_defence_pr870_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\fab_defence_pr870.rvmat"};
		soundImpactType = "plastic";
		inventorySlot[] = {"kr_m870_pump"};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_description
		{
			kr_type = "Remington M870";
			kr_tier = 1;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\fab_defence_pr870.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\fab_defence_pr870_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\fab_defence_pr870_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\fab_defence_pr870_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\fab_defence_pr870_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_handguard_m870_magpul_moe: kr_support_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_handguard_m870_fd_pr870";
		descriptionShort = "$STR_kr_weapons_attachments_handguard_m870_fd_pr870_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\handguard_m870_magpul_moe.p3d";
		weight = 300;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\magpul_moe_870_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\magpul_moe_870.rvmat"};
		soundImpactType = "plastic";
		inventorySlot[] = {"kr_m870_pump"};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_description
		{
			kr_type = "Remington M870";
			kr_tier = 1;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\magpul_moe_870.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\magpul_moe_870_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\magpul_moe_870_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\magpul_moe_870_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\shotguns_parts\data\magpul_moe_870_destruct.rvmat"}}};
				};
			};
		};
	};
};
