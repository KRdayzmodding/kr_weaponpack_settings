class CfgPatches
{
	class kr_attachments_svch_parts
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

	class kr_svch_stock: kr_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_svch_stock";
		descriptionShort = "$STR_kr_weapons_attachments_svch_stock_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\svch_parts\stock_svch.p3d";
		simpleHiddenSelections[] = {};
		inventorySlot[] = {"kr_svch_stock"};
		weight = 350;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		itemSize[] = {2,1};
		soundImpactType = "plastic";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\svch_parts\data\svch_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\svch_parts\data\svch_stock.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "SVCh";
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
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\svch_parts\data\svch_stock.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\svch_parts\data\svch_stock_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\svch_parts\data\svch_stock_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\svch_parts\data\svch_stock_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\svch_parts\data\svch_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
