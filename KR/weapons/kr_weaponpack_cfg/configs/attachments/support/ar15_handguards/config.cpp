class CfgPatches
{
	class kr_attachments_ar15_handguards
	{
		units[] = {"kr_ar15_hguard_colt_m4_std","kr_ar15_hguard_adar_wood","kr_ar15_hguard_magpul_moe_sl_s","kr_ar15_hguard_magpul_moe_sl_s_raild","kr_ar15_hguard_dd_ris_ii_fsp","kr_ar15_hguard_geissele_smr_mk16","kr_ar15_hguard_geissele_smr_mk16_raild","kr_ar15_hguard_strike_industries_viper","kr_ar15_hguard_strike_industries_viper_raild","kr_ar15_hguard_stmarms_9","kr_ar15_hguard_stmarms_9_raild","kr_ar15_hguard_unique_ars_was","kr_ar15_hguard_magpul_moe_sl_m","kr_ar15_hguard_magpul_moe_sl_m_raild","kr_ar15_hguard_aeroknox_ax15","kr_ar15_hguard_aeroknox_ax15_raild","kr_ar15_hguard_dd_ris_ii_95","kr_ar15_hguard_stmarms_12","kr_ar15_hguard_stmarms_12_raild","kr_ar15_hguard_stmarms_15","kr_ar15_hguard_stmarms_15_raild","kr_ar15_hguard_precision_reflex_carbon","kr_ar15_hguard_precision_reflex_carbon_raild","kr_ar15_hguard_stngr_vypr","kr_ar15_hguard_stngr_vypr_raild","kr_ar15_hguard_sai_qd_rail_short","kr_ar15_hguard_sai_qd_rail_short_raild","kr_ar15_hguard_dd_ris_ii_1225","kr_ar15_hguard_sai_qd_rail_long","kr_ar15_hguard_sai_qd_rail_long_raild","kr_ar15_hguard_war_sport_lvoa_c","kr_ar15_hguard_war_sport_lvoa_c_raild","kr_ar15_hguard_war_sport_lvoa_s","kr_ar15_hguard_war_sport_lvoa_s_raild","kr_ar15_hguard_lone_star_ion_lite","kr_ar15_hguard_lone_star_ion_lite_raild","kr_ar15_hguard_alexander_arms_mk10","kr_ar15_hguard_alexander_arms_mk10_raild"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ar15_hguard_t1_Base;
	class kr_ar15_hguard_t2_Base;
	class kr_ar15_hguard_t3_Base;
	class kr_ar15_hguard_t4_Base;
	class kr_ar15_hguard_colt_m4_std: kr_ar15_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_colt_m4_std";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_colt_m4_std_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_colt_m4_std.p3d";
		weight = 322;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_colt_m4_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_colt_m4_std.rvmat"};
		recoilModifier[] = {0.7,0.7,1};	
		swayModifier[] = {0.65,1,0.65};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_colt_m4_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_colt_m4_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_colt_m4_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_colt_m4_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_colt_m4_std_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
		class kr_description
		{
			kr_tier = 1;
			kr_type = "M4A1 260/370 mm";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype2: barreltype1{};
		};
	};
	class kr_ar15_hguard_adar_wood: kr_ar15_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_adar_wood";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_adar_wood_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_adar_wood.p3d";
		weight = 385;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_adar_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_adar_wood.rvmat"};
		recoilModifier[] = {0.7,0.7,1};	
		swayModifier[] = {0.65,1,0.65};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_adar_wood.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_adar_wood_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_adar_wood_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_adar_wood_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_adar_wood_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "wood";
		class kr_firearms
		{
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_magpul_moe_sl_s: kr_ar15_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_magpul_moe_sl_s";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_magpul_moe_sl_s_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_magpul_moe_sl_s.p3d";
		weight = 190;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_s_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_s.rvmat"};
		recoilModifier[] = {0.7,0.85,1};	
		swayModifier[] = {0.85,1,0.8};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "M4A1 260/370 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_s.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_s_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_s_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_s_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_s_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype2: barreltype1{};
		};
	};
	class kr_ar15_hguard_magpul_moe_sl_s_raild: kr_ar15_hguard_magpul_moe_sl_s
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_magpul_moe_sl_s_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 2;
				light = 9;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype2: barreltype1{};
		};
	};
	class kr_ar15_hguard_dd_ris_ii_fsp: kr_ar15_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_dd_ris_ii_fsp";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_dd_ris_ii_fsp_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_dd_ris_ii_fsp.p3d";
		weight = 300;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_fsp_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_fsp.rvmat"};
		recoilModifier[] = {0.85,0.7,1};	
		swayModifier[] = {0.85,1,0.8};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		attachments[] = {"kr_foregrip","kr_light_right","kr_bipod","kr_light_left"/*,"kr_gl"*/};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "M4A1";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_fsp.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_fsp_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_fsp_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_fsp_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_fsp_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 7;
				light = 10;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3: barreltype1{};
			class barreltype4: barreltype1{};
			class barreltype5: barreltype1{};
		};
	};
	class kr_ar15_hguard_geissele_smr_mk16: kr_ar15_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_geissele_smr_mk16";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_geissele_smr_mk16_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_geissele_smr_mk16.p3d";
		weight = 335;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_geissele_smr_mk16_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_geissele_smr_mk16.rvmat"};
		recoilModifier[] = {0.75,0.7,1};	
		swayModifier[] = {0.75,1,0.75};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "M4A1";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_geissele_smr_mk16.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_geissele_smr_mk16_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_geissele_smr_mk16_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_geissele_smr_mk16_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_geissele_smr_mk16_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_geissele_smr_mk16_raild: kr_ar15_hguard_geissele_smr_mk16
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_geissele_smr_mk16_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 4;
				light = 10;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 4;
				light = 10;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_strike_industries_viper: kr_ar15_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_strike_industries_viper";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_strike_industries_viper_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_strike_industries_viper.p3d";
		weight = 174;
		itemSize[] = {2,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_strike_industries_viper_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_strike_industries_viper.rvmat"};
		recoilModifier[] = {0.7,0.6,1};	
		swayModifier[] = {0.7,1,0.7};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "M4A1 260/370 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_strike_industries_viper.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_strike_industries_viper_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_strike_industries_viper_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_strike_industries_viper_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_strike_industries_viper_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype2: barreltype1{};
		};
	};
	class kr_ar15_hguard_strike_industries_viper_raild: kr_ar15_hguard_strike_industries_viper
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_strike_industries_viper_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 1;
				light = 8;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype2: barreltype1{};
		};
	};
	class kr_ar15_hguard_stmarms_9: kr_ar15_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_stmarms_9";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_stmarms_9_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_stmarms_9.p3d";
		weight = 155;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_9_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_9.rvmat"};
		recoilModifier[] = {0.6,0.7,1};	
		swayModifier[] = {0.7,1,0.7};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "M4A1";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_9.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_9_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_9_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_9_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_9_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_stmarms_9_raild: kr_ar15_hguard_stmarms_9
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_stmarms_9_raild";
		attachments[] = {"kr_foregrip","kr_light_left"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 6;
				light = 10;
				holo = 0;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 6;
				light = 10;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_unique_ars_was: kr_ar15_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_unique_ars_was";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_unique_ars_was_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_unique_ars_was.p3d";
		weight = 250;
		itemSize[] = {4,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_unique_ars_was_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_unique_ars_was.rvmat"};
		recoilModifier[] = {0.55,0.55,1};	
		swayModifier[] = {0.55,1,0.55};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "M4A1 370/406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_unique_ars_was.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_unique_ars_was_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_unique_ars_was_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_unique_ars_was_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_unique_ars_was_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 0;
				sight = 1;
			};
			class barreltype3: barreltype2{};
			class barreltype4: barreltype2{};
			class barreltype5: barreltype2{};
		};
	};
	class kr_ar15_hguard_magpul_moe_sl_m: kr_ar15_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_magpul_moe_sl_m";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_magpul_moe_sl_m_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_magpul_moe_sl_m.p3d";
		weight = 230;
		itemSize[] = {4,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_m_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_m.rvmat"};
		recoilModifier[] = {0.65,0.65,1};	
		swayModifier[] = {0.75,1,0.65};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "M4A1 406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_m.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_m_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_m_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_m_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_magpul_moe_sl_m_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_magpul_moe_sl_m_raild: kr_ar15_hguard_magpul_moe_sl_m
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_magpul_moe_sl_m_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype3
			{
				grip = 2;
				light = 11;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_aeroknox_ax15: kr_ar15_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_aeroknox_ax15";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_aeroknox_ax15_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_aeroknox_ax15.p3d";
		weight = 343;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_aeroknox_ax15_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_aeroknox_ax15.rvmat"};
		recoilModifier[] = {0.6,0.7,1};	
		swayModifier[] = {0.65,1,0.75};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "M4A1 370/406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_aeroknox_ax15.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_aeroknox_ax15_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_aeroknox_ax15_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_aeroknox_ax15_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_aeroknox_ax15_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 1;
				sight = 1;
			};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_aeroknox_ax15_raild: kr_ar15_hguard_aeroknox_ax15
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_aeroknox_ax15_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 5;
				light = 6;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
			class barreltype3
			{
				grip = 5;
				light = 6;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_dd_ris_ii_95: kr_ar15_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_dd_ris_ii_95";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_dd_ris_ii_95_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_dd_ris_ii_95.p3d";
		weight = 440;
		attachments[] = {"kr_foregrip","kr_light_right","kr_bipod","kr_light_left"/*,"kr_gl"*/};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_95_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_95.rvmat"};
		recoilModifier[] = {0.7,0.7,1};	
		swayModifier[] = {0.6,1,0.7};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "M4A1";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_95.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_95_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_95_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_95_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_95_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 8;
				light = 10;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 8;
				light = 10;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_stmarms_12: kr_ar15_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_stmarms_12";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_stmarms_12_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_stmarms_12.p3d";
		weight = 200;
		itemSize[] = {4,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_12_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_12.rvmat"};
		recoilModifier[] = {0.6,0.6,1};	
		swayModifier[] = {0.6,1,0.6};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 16;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "M4A1 370/406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_12.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_12_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_12_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_12_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_12_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 1;
				sight = 1;
			};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_stmarms_12_raild: kr_ar15_hguard_stmarms_12
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_stmarms_12_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 6;
				light = 7;
				holo = 0;
				gasblock = 1;
				sight = 1;
			};
			class barreltype3
			{
				grip = 6;
				light = 7;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_stmarms_15: kr_ar15_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_stmarms_15";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_stmarms_15_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_stmarms_15.p3d";
		weight = 220;
		itemSize[] = {5,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_15_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_15.rvmat"};
		recoilModifier[] = {0.5,0.7,1};	
		swayModifier[] = {0.5,1,0.7};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 17;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "M4A1 406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_15.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_15_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_15_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_15_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stmarms_15_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 1;
				sight = 1;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_stmarms_15_raild: kr_ar15_hguard_stmarms_15
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_stmarms_15_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype3
			{
				grip = 6;
				light = 2;
				holo = 0;
				gasblock = 1;
				sight = 1;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_precision_reflex_carbon: kr_ar15_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_precision_reflex_carbon";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_precision_reflex_carbon_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_precision_reflex_carbon.p3d";
		weight = 425;
		itemSize[] = {4,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_precision_reflex_carbon_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_precision_reflex_carbon.rvmat"};
		recoilModifier[] = {0.7,0.5,1};	
		swayModifier[] = {0.7,1,0.5};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 16;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "M4A1 370/406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_precision_reflex_carbon.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_precision_reflex_carbon_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_precision_reflex_carbon_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_precision_reflex_carbon_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_precision_reflex_carbon_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 1;
				sight = 1;
			};
			class barreltype3: barreltype2{};
			class barreltype4: barreltype2{};
			class barreltype5: barreltype2{};
		};
	};
	class kr_ar15_hguard_precision_reflex_carbon_raild: kr_ar15_hguard_precision_reflex_carbon
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_precision_reflex_carbon_raild";
		attachments[] = {"kr_foregrip","kr_bipod"};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 3;
				light = 1;
				holo = 0;
				gasblock = 1;
				sight = 1;
			};
			class barreltype3: barreltype2{};
			class barreltype4: barreltype2{};
			class barreltype5: barreltype2{};
		};
	};
	class kr_ar15_hguard_stngr_vypr: kr_ar15_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_stngr_vypr";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_stngr_vypr_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_stngr_vypr.p3d";
		weight = 209;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stngr_vypr_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stngr_vypr.rvmat"};
		recoilModifier[] = {0.65,0.55,1};	
		swayModifier[] = {0.65,1,0.65};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "M4A1 370/406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stngr_vypr.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stngr_vypr_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stngr_vypr_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stngr_vypr_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_stngr_vypr_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_stngr_vypr_raild: kr_ar15_hguard_stngr_vypr
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_stngr_vypr_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 6;
				light = 10;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 6;
				light = 10;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_sai_qd_rail_short: kr_ar15_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_sai_qd_rail_short";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_sai_qd_rail_short_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_sai_qd_rail_short.p3d";
		weight = 305;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_short_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_short.rvmat"};
		recoilModifier[] = {0.55,0.65,1};	
		swayModifier[] = {0.65,1,0.65};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "M4A1 260/370 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_short.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_short_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_short_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_short_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_short_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
		};
	};
	class kr_ar15_hguard_sai_qd_rail_short_raild: kr_ar15_hguard_sai_qd_rail_short
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_sai_qd_rail_short_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 4;
				light = 4;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
		};
	};
	class kr_ar15_hguard_dd_ris_ii_1225: kr_ar15_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_dd_ris_ii_1225";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_dd_ris_ii_1225_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_dd_ris_ii_1225.p3d";
		weight = 502;
		itemSize[] = {4,1};
		attachments[] = {"kr_foregrip","kr_light_right","kr_bipod","kr_light_left"/*,"kr_gl"*/};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_1225_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_1225.rvmat"};
		recoilModifier[] = {0.8,0.4,1};	
		swayModifier[] = {0.8,1,0.4};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 17;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "M4A1 370/406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_1225.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_1225_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_1225_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_1225_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_dd_ris_ii_1225_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 7;
				light = 7;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype3: barreltype2{};
			class barreltype4: barreltype2{};
			class barreltype5: barreltype2{};
		};
	};
	class kr_ar15_hguard_sai_qd_rail_long: kr_ar15_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_sai_qd_rail_long";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_sai_qd_rail_long_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_sai_qd_rail_long.p3d";
		weight = 355;
		itemSize[] = {5,1};
		attachments[] = {"kr_light_right","kr_light_left","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_long_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_long.rvmat"};
		recoilModifier[] = {0.45,0.75,1};	
		swayModifier[] = {0.45,1,0.75};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 18;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "M4A1 370/406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_long.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_long_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_long_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_long_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_sai_qd_rail_long_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype3: barreltype2{};
			class barreltype4: barreltype2{};
			class barreltype5: barreltype2{};
		};
	};
	class kr_ar15_hguard_sai_qd_rail_long_raild: kr_ar15_hguard_sai_qd_rail_long
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_sai_qd_rail_long_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 4;
				light = 3;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype3: barreltype2{};
			class barreltype4: barreltype2{};
			class barreltype5: barreltype2{};
		};
	};
	class kr_ar15_hguard_war_sport_lvoa_c: kr_ar15_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_war_sport_lvoa_c";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_war_sport_lvoa_c_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_war_sport_lvoa_c.p3d";
		weight = 650;
		itemSize[] = {5,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_c_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_c.rvmat"};
		recoilModifier[] = {0.8,0.8,1};	
		swayModifier[] = {0.4,1,0.4};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 19;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "M4A1 370/406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_c.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_c_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_c_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_c_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_c_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype3: barreltype2{};
			class barreltype4: barreltype2{};
			class barreltype5: barreltype2{};
		};
	};
	class kr_ar15_hguard_war_sport_lvoa_c_raild: kr_ar15_hguard_war_sport_lvoa_c
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_war_sport_lvoa_c_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 3;
				light = 2;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype3: barreltype2{};
			class barreltype4: barreltype2{};
			class barreltype5: barreltype2{};
		};
	};
	class kr_ar15_hguard_war_sport_lvoa_s: kr_ar15_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_war_sport_lvoa_s";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_war_sport_lvoa_s_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_war_sport_lvoa_s.p3d";
		weight = 500;
		itemSize[] = {4,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_s_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_s.rvmat"};
		recoilModifier[] = {0.6,0.5,1};	
		swayModifier[] = {0.6,1,0.6};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "M4A1";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_s.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_s_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_s_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_s_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_war_sport_lvoa_s_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3: barreltype1{};
			class barreltype4: barreltype1{};
			class barreltype5: barreltype1{};
		};
	};
	class kr_ar15_hguard_war_sport_lvoa_s_raild: kr_ar15_hguard_war_sport_lvoa_s
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_war_sport_lvoa_s_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 3;
				light = 7;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3: barreltype1{};
			class barreltype4: barreltype1{};
			class barreltype5: barreltype1{};
		};
	};
	class kr_ar15_hguard_lone_star_ion_lite: kr_ar15_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_lone_star_ion_lite";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_lone_star_ion_lite_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_lone_star_ion_lite.p3d";
		weight = 380;
		itemSize[] = {6,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_lone_star_ion_lite_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_lone_star_ion_lite.rvmat"};
		recoilModifier[] = {0.45,0.45,1};	
		swayModifier[] = {0.8,1,0.8};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "M4A1 457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_lone_star_ion_lite.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_lone_star_ion_lite_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_lone_star_ion_lite_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_lone_star_ion_lite_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_lone_star_ion_lite_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype4
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype5: barreltype4{};
		};
	};
	class kr_ar15_hguard_lone_star_ion_lite_raild: kr_ar15_hguard_lone_star_ion_lite
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_lone_star_ion_lite_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype4
			{
				grip = 6;
				light = 2;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype5: barreltype4{};
		};
	};
	class kr_ar15_hguard_alexander_arms_mk10: kr_ar15_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_alexander_arms_mk10";
		descriptionShort = "$STR_kr_weapons_attachments_ar15_hguard_alexander_arms_mk10_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\ar15_handguard_alexander_arms_mk10.p3d";
		weight = 380;
		itemSize[] = {4,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_alexander_arms_mk10_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_alexander_arms_mk10.rvmat"};
		recoilModifier[] = {0.5,0.6,1};	
		swayModifier[] = {0.75,1,0.75};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 23;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "M4A1 370/406/457/508 mm";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_alexander_arms_mk10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_alexander_arms_mk10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_alexander_arms_mk10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_alexander_arms_mk10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar15_handguards\data\ar15_handguard_alexander_arms_mk10_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 1;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
	class kr_ar15_hguard_alexander_arms_mk10_raild: kr_ar15_hguard_alexander_arms_mk10
	{
		displayName = "$STR_kr_weapons_attachments_ar15_hguard_alexander_arms_mk10_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_bipod"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 4;
				light = 5;
				holo = 0;
				gasblock = 1;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 4;
				light = 5;
				holo = 0;
				gasblock = 1;
				sight = 0;
			};
			class barreltype4: barreltype3{};
			class barreltype5: barreltype3{};
		};
	};
};
