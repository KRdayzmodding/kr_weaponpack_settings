class CfgPatches
{
	class kr_attachments_scar_parts
	{
		units[] = {"kr_scar_stock_std"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_scar_stock_Base;
	class kr_scar_stock_std: kr_scar_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_scar_stock_std";
		descriptionShort = "$STR_kr_weapons_attachments_scar_stock_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\scar_parts\scar_bttstck_std.p3d";
		inventorySlot[] = {"kr_scar_stock"};
		weight = 0.25;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\scar_parts\data\scar_stock_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\scar_parts\data\scar_stock_std.rvmat"};
		recoilModifier[] = {0.3,0.3,0.3};
		swayModifier[] = {0.3,0.3,0.3};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 29;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Mk.16/Mk.17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\scar_parts\data\scar_stock_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\scar_parts\data\scar_stock_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\scar_parts\data\scar_stock_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\scar_parts\data\scar_stock_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\scar_parts\data\scar_stock_std_destruct.rvmat"}}};
				};
			};
		};
	};
};
