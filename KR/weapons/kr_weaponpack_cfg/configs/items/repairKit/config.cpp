class CfgPatches
{
	class kr_items_repairKit
	{
		units[] = {"kr_items_repairKit","kr_items_opticKit"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class Inventory_Base;
	class kr_items_repairKit: Inventory_Base
	{
		scope = 0;
		displayName = "$STR_kr_weapons_items_repairKit";
		descriptionShort = "$STR_kr_weapons_items_repairKit_dsc";
		model = "\KR\weapons\kr_weaponpack_2\items\repairKit\repairKit.p3d";
		weight = 1200;
		itemSize[] = {3,3};
		soundImpactType = "plastic";
		simpleHiddenSelections[] = {};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\items\repairKit\data\repairKit_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\items\repairKit\data\repairKit.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\items\repairKit\data\repairKit.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\items\repairKit\data\repairKit_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\items\repairKit\data\repairKit_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\items\repairKit\data\repairKit_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\items\repairKit\data\repairKit_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_items_opticKit: Inventory_Base
	{
		scope = 0;
		displayName = "$STR_kr_weapons_items_opticKit";
		descriptionShort = "$STR_kr_weapons_items_opticKit_dsc";
		model = "\KR\weapons\kr_weaponpack_2\items\repairKit\repairKit.p3d";
		weight = 1200;
		itemSize[] = {3,3};
		soundImpactType = "plastic";
		simpleHiddenSelections[] = {};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\items\repairKit\data\opticKit_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\items\repairKit\data\opticKit.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\items\repairKit\data\opticKit.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\items\repairKit\data\opticKit_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\items\repairKit\data\opticKit_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\items\repairKit\data\opticKit_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\items\repairKit\data\opticKit_destruct.rvmat"}}};
				};
			};
		};
	};
};
