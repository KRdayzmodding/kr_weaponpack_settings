class CfgPatches
{
	class kr_attachments_ak_parts
	{
		units[] = {"kr_ak_buttpad_gp25","kr_ak_charging_handle_rp1","kr_ak_charging_handle_css"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_attachments_support"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class Inventory_Base;
	class kr_ak_buttpad_gp25: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_buttpad_gp25";
		descriptionShort = "$STR_kr_weapons_attachments_ak_buttpad_gp25_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_parts\ak_buttpad_gp25.p3d";
		inventorySlot[] = {"kr_ak_buttpad"};
		itemSize[] = {1,2};
		weight = 70;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_buttpad_gp25_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_buttpad_gp25.rvmat"};
		recoilModifier[] = {1.0,1.0,0.85};	
		swayModifier[] = {1,0.85,0.85};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_stdAKstocks";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_buttpad_gp25.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_buttpad_gp25_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_buttpad_gp25_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_buttpad_gp25_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_buttpad_gp25_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_charging_handle_rp1: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_charging_handle_rp1";
		descriptionShort = "$STR_kr_weapons_attachments_ak_charging_handle_rp1_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_parts\ak_charging_handle_rp1.p3d";
		inventorySlot[] = {"kr_ak_handle"};
		itemSize[] = {1,1};
		weight = 15;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_rp1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_rp1.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_rp1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_rp1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_rp1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_rp1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_rp1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_charging_handle_css: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_charging_handle_css";
		descriptionShort = "$STR_kr_weapons_attachments_ak_charging_handle_css_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_parts\ak_charging_handle_css.p3d";
		inventorySlot[] = {"kr_ak_handle"};
		itemSize[] = {1,1};
		weight = 15;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_css_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_css.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_css.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_css_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_css_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_css_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_parts\data\ak_charging_handle_css_destruct.rvmat"}}};
				};
			};
		};
	};
};
