class CfgPatches
{
	class kr_attachments_svd_buttstocks
	{
		units[] = {"kr_svd_stock_lynx_arms","kr_svd_stock_std"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_svd_stock_Base;
	class kr_svd_stock_lynx_arms: kr_svd_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_svd_stock_lynx_arms";
		descriptionShort = "$STR_kr_weapons_attachments_svd_stock_lynx_arms_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\svd_stocks\svd_bttstck_lynx_arms.p3d";
		inventorySlot[] = {"kr_svd_stock"};
		attachments[] = {"kr_ar_bttstck"};
		weight = 0.25;
		haveTube = 1;
		isTube = 1;
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\lynx_arms_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\lynx_arms.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "СВДС";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\lynx_arms.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\lynx_arms_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\lynx_arms_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\lynx_arms_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\lynx_arms_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_svd_stock_std: kr_svd_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_svd_stock_std";
		descriptionShort = "$STR_kr_weapons_attachments_svd_stock_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\svd_stocks\svd_bttstck_std.p3d";
		inventorySlot[] = {"kr_svd_stock"};
		weight = 0.25;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\svd_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\svd_std.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "СВДС";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\svd_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\svd_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\svd_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\svd_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\svd_stocks\data\svd_std_destruct.rvmat"}}};
				};
			};
		};
	};
};
