class CfgPatches
{
	class kr_attachments_g36_parts
	{
		units[] = {"kr_g36_hguard_a1","kr_g36_hguard_c","kr_g36_hguard_c_raild","kr_g36_hguard_k","kr_g36_hguard_k_raild","kr_g36_stock_std","kr_g36_stock_adjustable","g36_ar15_conversion_kit"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_support_Base;
	class kr_hguard_Base;
	class kr_stock_Base;
	class kr_g36_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		simpleHiddenSelections[] = {"hide_mount"};
		inventorySlot[] = {"kr_g36_handguard"};
		class kr_description
		{
			kr_type = "G36";
		};
	};
	class kr_g36_hguard_a1: kr_g36_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_g36_hguard_a1";
		descriptionShort = "$STR_kr_weapons_attachments_g36_hguard_a1_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\g36_handguard_a1.p3d";
		weight = 380;
		itemSize[] = {3,1};
		attachments[] = {"kr_g36_bipods"};
		simpleHiddenSelections[] = {};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_a1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_a1.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
			bipodSlot = "kr_g36_bipods";
		};
		class kr_description
		{
			kr_type = "G36";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_a1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_a1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_a1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_a1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_a1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_g36_hguard_c: kr_g36_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_g36_hguard_c";
		descriptionShort = "$STR_kr_weapons_attachments_g36_hguard_c_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\g36_handguard_c.p3d";
		weight = 230;
		itemSize[] = {2,1};
		simpleHiddenSelections[] = {"hide_mount"};
		attachments[] = {"kr_rail_mount"};
		inventorySlot[] = {"kr_g36c_handguard"};
		recoilModifier[] = {0.8,0.75,1};	
		swayModifier[] = {0.8,1,0.8};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_c_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_c.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kkr_type = "G36C";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_c.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_c_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_c_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_c_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_c_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_g36_hguard_c_raild: kr_g36_hguard_c
	{
		displayName = "$STR_kr_weapons_attachments_g36_hguard_c_raild";
		class kr_description
		{
			kr_type = "G36C";
			kr_tier = 2;
		};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
	};
	class kr_g36_hguard_k: kr_g36_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_g36_hguard_k";
		descriptionShort = "$STR_kr_weapons_attachments_g36_hguard_k_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\g36_handguard_k.p3d";
		weight = 280;
		itemSize[] = {2,1};
		simpleHiddenSelections[] = {"hide_mount"};
		attachments[] = {"kr_rail_mount"};
		inventorySlot[] = {"kr_g36k_handguard"};
		recoilModifier[] = {0.8,0.8,1};	
		swayModifier[] = {0.8,1,0.8};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_k_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_k.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_type = "G36K";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_k.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_k_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_k_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_k_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_k_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_g36_hguard_k_raild: kr_g36_hguard_k
	{
		displayName = "$STR_kr_weapons_attachments_g36_hguard_k_raild";
		class kr_description
		{
			kr_type = "G36K";
			kr_tier = 2;
		};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
	};
	class kr_g36_stock_Base: kr_stock_Base
	{
		scope = 0;
		itemSize[] = {2,1};
		soundImpactType = "plastic";
		class kr_description
		{
			kr_type = "G36";
		};
	};
	class kr_g36_stock_std: kr_g36_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_g36_stock_std";
		descriptionShort = "$STR_kr_weapons_attachments_g36_stock_std_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\g36_stock_std.p3d";
		inventorySlot[] = {"kr_g36_stock"};
		attachments[] = {};
		simpleHiddenSelections[] = {};
		weight = 450;
		recoilModifier[] = {1.0,0.7,0.5};
		swayModifier[] = {0.9,0.9,0.9};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_std.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "G36";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_g36_stock_adjustable: kr_g36_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_g36_stock_adjustable";
		descriptionShort = "$STR_kr_weapons_attachments_g36_stock_adjustable_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\g36_stock_adjustable.p3d";
		inventorySlot[] = {"kr_g36_stock"};
		attachments[] = {};
		simpleHiddenSelections[] = {};
		weight = 900;
		recoilModifier[] = {0.95,0.6,0.45};
		swayModifier[] = {0.85,0.85,0.85};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_adjustable_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_adjustable.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "G36";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_adjustable.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_adjustable_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_adjustable_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_adjustable_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\stock_g36_adjustable_destruct.rvmat"}}};
				};
			};
		};
	};
	class g36_ar15_conversion_kit: kr_support_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_g36_ar15_conversion_kit";
		descriptionShort = "$STR_kr_weapons_attachments_g36_ar15_conversion_kit_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\g36_ar15_conversion_kit.p3d";
		inventorySlot[] = {"kr_g36_ckit"};
		attachments[] = {};
		simpleHiddenSelections[] = {};
		weight = 100;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_ar15_conversion_kit_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_ar15_conversion_kit.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "G36";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_ar15_conversion_kit.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_ar15_conversion_kit_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_ar15_conversion_kit_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_ar15_conversion_kit_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\g36_parts\data\g36_ar15_conversion_kit_destruct.rvmat"}}};
				};
			};
		};
	};
};
