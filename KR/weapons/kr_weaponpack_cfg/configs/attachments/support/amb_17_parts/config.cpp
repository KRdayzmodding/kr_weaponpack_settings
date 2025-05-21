class CfgPatches
{
	class kr_attachments_amb_17_parts
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
	class kr_stock_Base;

	class kr_amb17_stock: kr_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_amb_17_stock";
		descriptionShort = "$STR_kr_weapons_attachments_amb_17_stock_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\amb_17_parts\amb_17_stock.p3d";
		simpleHiddenSelections[] = {};
		inventorySlot[] = {"kr_amb17_stock"};
		weight = 350;
		recoilModifier[] = {0.8,0.8,0.5};
		swayModifier[] = {0.7,0.7,0.7};
		itemSize[] = {2,1};
		soundImpactType = "plastic";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\amb_17_parts\data\amb_17_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\amb_17_parts\data\amb_17_stock.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "AMB-17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\amb_17_parts\data\amb_17_stock.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\amb_17_parts\data\amb_17_stock_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\amb_17_parts\data\amb_17_stock_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\amb_17_parts\data\amb_17_stock_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\amb_17_parts\data\amb_17_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
