class CfgPatches
{
	class kr_attachments_val_parts
	{
		units[] = {"kr_val_stock_std","kr_val_pgrip_rotor43"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_val_stock_Base;
	class kr_val_pgrip_Base;
	class kr_val_stock_std: kr_val_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_val_bttstck_std";
		descriptionShort = "$STR_kr_weapons_attachments_val_bttstck_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\val_parts\val_stock_tocmach_std.p3d";
		weight = 142;
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.8,0.8,0.8};
		itemSize[] = {2,1};
		haveTube = 1;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\stock_val_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\stock_val_std.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 24;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "val";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\stock_val_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\stock_val_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\stock_val_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\stock_val_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\stock_val_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_val_pgrip_rotor43: kr_val_pgrip_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_val_pgrip_rotor43";
		descriptionShort = "$STR_kr_weapons_attachments_val_pgrip_rotor43_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\val_parts\val_pistolgrip_rotor43.p3d";
		weight = 167;
		itemSize[] = {2,1};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		simpleHiddenSelections[] = {"hide_rotor_pistolgrip"};
		attachments[] = {"kr_ar_bttstck"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\pistolgrip_val_rotor_43_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\pistolgrip_val_rotor_43.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "val";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\pistolgrip_val_rotor_43.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\pistolgrip_val_rotor_43_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\pistolgrip_val_rotor_43_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\pistolgrip_val_rotor_43_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\val_parts\data\pistolgrip_val_rotor_43_destruct.rvmat"}}};
				};
			};
		};
	};
};
