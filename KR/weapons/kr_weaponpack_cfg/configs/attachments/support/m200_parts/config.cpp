class CfgPatches
{
	class kr_attachments_m200_parts
	{
		units[] = {"kr_m200_hguard_std","kr_m200_hguard_std_raild","kr_m200_stock_std"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_weapons_rifles_m200","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_m200_hguard_Base;
	class kr_m200_hguard_std: kr_m200_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_m200_std_handguard";
		descriptionShort = "$STR_kr_weapons_attachments_m200_std_handguard_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\m200_parts\m200_std_handguard.p3d";
		weight = 420;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		itemSize[] = {3,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_handguard.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "M200";
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
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_handguard.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_handguard_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_handguard_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_handguard_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_handguard_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_m200_hguard_std_raild: kr_m200_hguard_std
	{
		displayName = "$STR_kr_weapons_attachments_m200_std_handguard";
		attachments[] = {"kr_bipod"};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "M200";
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
		};
	};
	class kr_m200_stock_Base;
	class kr_m200_stock_std: kr_m200_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_m200_std_stock";
		descriptionShort = "$STR_kr_weapons_attachments_m200_std_stock_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\m200_parts\m200_stock_std.p3d";
		weight = 142;
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_stock.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "M200";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\m200_parts\data\m200_std_stock_destruct.rvmat"}}};
				};
			};
		};
	};
};
