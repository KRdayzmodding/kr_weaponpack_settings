class CfgPatches
{
	class kr_attachments_svd_handguards
	{
		units[] = {"kr_svd_hguard_izhmash_s_std","kr_svd_hguard_wood_std","kr_svd_hguard_caa_xrs_drg","kr_svd_hguard_izhmash_modernized_kit","kr_svd_hguard_izhmash_modernized_kit_raild","kr_svd_hguard_sag_chassis_mk_1","kr_svd_hguard_sag_chassis_mk_1_raild"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_description_Base
{
	kr_type = "СВД, СВДС";
	kr_tier = 1;
};
class kr_firearms_Base
{
	grip = 0;
	light = 0;
	holo = 0;
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_svd_hguard_Base;
	class kr_svd_hguard_t1_Base;
	class kr_svd_hguard_t2_Base;
	class kr_svd_hguard_t3_Base;
	class kr_svd_hguard_t4_Base;
	class kr_svd_hguard_izhmash_s_std: kr_svd_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_svd_hguard_izhmash_s_std";
		descriptionShort = "$STR_kr_weapons_attachments_svd_hguard_izhmash_s_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\svd_handguards\svd_handguard_izhmash_s_std.p3d";
		weight = 260;
		itemSize[] = {3,1};
		simpleHiddenSelections[] = {};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_s_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_s_std.rvmat"};
		class kr_description: kr_description_Base{};
		class kr_firearms: kr_firearms_Base{};
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
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_s_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_s_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_s_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_s_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_s_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_svd_hguard_wood_std: kr_svd_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_svd_hguard_wood_std";
		descriptionShort = "$STR_kr_weapons_attachments_svd_hguard_wood_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\svd_handguards\svd_handguard_wood_std.p3d";
		weight = 260;
		itemSize[] = {3,1};
		simpleHiddenSelections[] = {};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\wood_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\wood_std.rvmat"};
		class kr_description: kr_description_Base{};
		class kr_firearms: kr_firearms_Base{};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\wood_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\wood_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\wood_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\wood_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\wood_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_svd_hguard_caa_xrs_drg: kr_svd_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_svd_hguard_caa_xrs_drg";
		descriptionShort = "$STR_kr_weapons_attachments_svd_hguard_caa_xrs_drg_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\svd_handguards\svd_handguard_caa_xrs_drg.p3d";
		weight = 650;
		itemSize[] = {3,1};
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\caa_xrs_drg_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\caa_xrs_drg.rvmat"};
		class kr_firearms: kr_firearms_Base
		{
			grip = 1;
			light = 1;
			holo = 1;
		};
		class kr_description: kr_description_Base
		{
			kr_tier = 2;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\caa_xrs_drg.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\caa_xrs_drg_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\caa_xrs_drg_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\caa_xrs_drg_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\caa_xrs_drg_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_svd_hguard_izhmash_modernized_kit: kr_svd_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_svd_hguard_izhmash_modernized_kit";
		descriptionShort = "$STR_kr_weapons_attachments_svd_hguard_izhmash_modernized_kit_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\svd_handguards\svd_handguard_izhmash_modernized_kit.p3d";
		weight = 480;
		itemSize[] = {4,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_modernized_kit_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_modernized_kit.rvmat"};
		class kr_description: kr_description_Base
		{
			kr_tier = 3;
		};
		class kr_firearms: kr_firearms_Base
		{
			grip = 0;
			light = 0;
			holo = 3;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 17;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_modernized_kit.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_modernized_kit_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_modernized_kit_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_modernized_kit_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\izhmash_modernized_kit_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_svd_hguard_izhmash_modernized_kit_raild: kr_svd_hguard_izhmash_modernized_kit
	{
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms: kr_firearms_Base
		{
			grip = 3;
			light = 3;
			holo = 3;
		};
	};
	class kr_svd_hguard_sag_chassis_mk_1: kr_svd_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_svd_hguard_sag_chassis_mk_1";
		descriptionShort = "$STR_kr_weapons_attachments_svd_hguard_sag_chassis_mk_1_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\svd_handguards\svd_handguard_sag_chassis_mk_1.p3d";
		weight = 890;
		itemSize[] = {5,1};
		attachments[] = {"kr_pointer_1","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\sag_chassis_mk_1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\sag_chassis_mk_1.rvmat"};
		class kr_description: kr_description_Base
		{
			kr_tier = 4;
		};
		class kr_firearms: kr_firearms_Base
		{
			grip = 0;
			light = 0;
			holo = 2;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 18;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\sag_chassis_mk_1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\sag_chassis_mk_1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\sag_chassis_mk_1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\sag_chassis_mk_1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_handguards\data\sag_chassis_mk_1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_svd_hguard_sag_chassis_mk_1_raild: kr_svd_hguard_sag_chassis_mk_1
	{
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right"};
		class kr_firearms: kr_firearms_Base
		{
			grip = 2;
			light = 2;
			holo = 2;
		};
	};
};
