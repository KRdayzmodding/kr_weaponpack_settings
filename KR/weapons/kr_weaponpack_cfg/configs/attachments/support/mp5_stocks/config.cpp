class CfgPatches
{
	class kr_attachments_mp5_stocks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports","kr_data","kr_attachments_support"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_mp5_stock_Base;
	class kr_mp5_stock_hk_a2: kr_mp5_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mp5_stock_hk_a2";
		descriptionShort = "$STR_kr_weapons_attachments_mp5_stock_hk_a2_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\mp5_bttstck_a2.p3d";
		simpleHiddenSelections[] = {"hide_tubepart"};
		weight = 472;
		recoilModifier[] = {1,1,0.85};
		swayModifier[] = {1,0.9,0.9};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a2_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a2.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "HK MP5";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a2.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a2_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a2_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a2_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a2_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mp5_stock_hk_a3: kr_mp5_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mp5_stock_hk_a3";
		descriptionShort = "$STR_kr_weapons_attachments_mp5_stock_hk_a3_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\mp5_bttstck_a3.p3d";
		weight = 800;
		recoilModifier[] = {1,1,0.7};
		swayModifier[] = {1,0.7,0.8};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a3.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "HK MP5";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_stocks\data\mp5_stock_hk_a3_destruct.rvmat"}}};
				};
			};
		};
	};
};
