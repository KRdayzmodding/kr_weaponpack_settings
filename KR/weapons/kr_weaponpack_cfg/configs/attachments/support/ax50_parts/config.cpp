class CfgPatches
{
	class kr_attachments_ax50_parts
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
	class kr_support_Base;
	class kr_hguard_Base;
	class kr_stock_Base;

	class kr_AX50_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		simpleHiddenSelections[] = {"hide_rail"};
		inventorySlot[] = {"kr_ax50_handguard"};
		class kr_description
		{
			kr_type = "AX50";
		};
	};

	class kr_AX50_hguard: kr_AX50_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_AX50_hguard";
		descriptionShort = "$STR_kr_weapons_attachments_AX50_hguard_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\AX50_handguard.p3d";
		weight = 850;
		itemSize[] = {3,1};
		attachments[] = {"kr_rail_mount"};
		inventorySlot[] = {"kr_ax50_handguard"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_handguard.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kkr_type = "AX50";
			kr_tier = 3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_handguard.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_handguard_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_handguard_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_handguard_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_handguard_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_AX50_hguard_raild: kr_AX50_hguard
	{
		displayName = "$STR_kr_weapons_attachments_AX50_hguard_raild";
		class kr_description
		{
			kr_type = "AX50";
			kr_tier = 4;
		};
		attachments[] = {"kr_bipod","kr_light_right","kr_light_left"};
	};

	class kr_AX50_stock_Base: kr_stock_Base
	{
		scope = 0;
		itemSize[] = {3,2};
		soundImpactType = "plastic";
		class kr_description
		{
			kr_type = "AX50";
		};
	};

	class kr_AX50_stock_std: kr_AX50_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_AX50_stock";
		descriptionShort = "$STR_kr_weapons_attachments_AX50_stock_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\ax50_stock.p3d";
		inventorySlot[] = {"kr_ax50_stock"};
		attachments[] = {};
		simpleHiddenSelections[] = {};
		weight = 780;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_stock.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "AX50";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ax50_parts\data\ax50_stock_destruct.rvmat"}}};
				};
			};
		};
	};
};
