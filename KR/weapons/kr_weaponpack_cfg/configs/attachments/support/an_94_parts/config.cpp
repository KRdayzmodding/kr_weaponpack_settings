class CfgPatches
{
	class kr_attachments_an_94_parts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_attachments_support"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ak_stock_t3_Base;

	class kr_an_94_stock: kr_ak_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_an_94_stock";
		descriptionShort = "$STR_kr_weapons_attachments_an_94_stock_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\an_94_parts\an_94_stock.p3d";
		inventorySlot[] = {"kr_an_94_stock"};
		weight = 350;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\an_94_parts\data\an_94_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\an_94_parts\data\an_94_stock.rvmat"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 22;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "AN-94";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\an_94_parts\data\an_94_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\an_94_parts\data\an_94_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\an_94_parts\data\an_94_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\an_94_parts\data\an_94_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\an_94_parts\data\an_94_stock_destruct.rvmat"}}};
				};
			};
		};
	};
};
