class CfgPatches
{
	class kr_attachments_m16_handguards
	{
		units[] = {};
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
	class kr_ar_stock_t2_Base;

	class kr_m16a1_handguard_std: kr_ar15_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_m16a1_handguard_std";
		descriptionShort = "$STR_kr_weapons_attachments_m16a1_handguard_std_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\m16a1_handguard_std.p3d";
		weight = 350;
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a1_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a1_handguard.rvmat"};
		inventorySlot[] = {"kr_m16_hndgrd"};
		soundImpactType = "plastic";

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
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a1_handguard.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a1_handguard_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a1_handguard_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a1_handguard_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a1_handguard_destruct.rvmat"}}};
				};
			};
		};
		
		class kr_description
		{
			kr_tier = 1;
			kr_type = "M16A2";
		};
	};

	class kr_m16a2_handguard_std: kr_ar15_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_m16a2_handguard_std";
		descriptionShort = "$STR_kr_weapons_attachments_m16a2_handguard_std_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\m16a2_handguard_std.p3d";
		weight = 450;
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a2_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a2_handguard.rvmat"};
		inventorySlot[] = {"kr_m16_hndgrd"};
		soundImpactType = "plastic";

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "M16A2";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a2_handguard.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a2_handguard_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a2_handguard_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a2_handguard_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16a2_handguard_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_ar_stock_m16a1_std: kr_ar_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_m16a1_std";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_m16a1_std_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\ar_buttstock_m16a1_std.p3d";
		weight = 280;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16_stock.rvmat"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};

		class kr_description
		{
			kr_tier = 2;
			kr_type = "M4, M16, SR25";
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\m16a2_parts\data\m16_stock_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
};