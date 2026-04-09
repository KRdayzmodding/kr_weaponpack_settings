class CfgPatches
{
	class kr_items_weaponOil
	{
		units[] = {"kr_items_weaponOil","kr_items_weaponOilSpray"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;

class cfgVehicles
{
	class Inventory_Base;
	
	class kr_weaponOil_Base : Inventory_Base 
	{
		quantityBar = 1;
		weightPerQuantityUnit = 1.0;
		stackedUnit = "ml";
		varQuantityMin = 0.0;
		varQuantityDestroyOnMin = 1;
	};

	class kr_items_weaponOil: kr_weaponOil_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_items_weaponOil";
		descriptionShort = "$STR_kr_weapons_items_weaponOil_dsc";
		model = "\KR\weapons\kr_weaponpack_2\items\weaponOil\weaponOil.p3d";
		weight = 150;
		itemSize[] = {1,1};
		soundImpactType = "plastic";
		simpleHiddenSelections[] = {};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\items\weaponOil\data\weaponOil_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\items\weaponOil\data\weaponOil.rvmat"};

		varQuantityInit = 200.0;
		varQuantityMax = 200.0;

		kr_oilLevelCap       = 300;
		kr_oilCost           = 20; 

		class kr_description
		{
			kr_tier = 2;
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\items\weaponOil\data\weaponOil.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\items\weaponOil\data\weaponOil_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\items\weaponOil\data\weaponOil_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\items\weaponOil\data\weaponOil_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\items\weaponOil\data\weaponOil_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_items_weaponOilSpray: kr_weaponOil_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_items_weaponOilSpray";
		descriptionShort = "$STR_kr_weapons_items_weaponOilSpray_dsc";
		model = "\KR\weapons\kr_weaponpack_2\items\weaponOil\weaponOilSpray.p3d";
		weight = 250;
		itemSize[] = {1,2};
		soundImpactType = "plastic";
		simpleHiddenSelections[] = {};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\items\weaponOil\data\OilSpray_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\items\weaponOil\data\OilSpray.rvmat"};

		varQuantityInit = 350.0;
		varQuantityMax = 350.0;

		kr_oilLevelCap       = 600;
		kr_oilCost           = 70; 

		class kr_description
		{
			kr_tier = 3;
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\items\weaponOil\data\OilSpray.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\items\weaponOil\data\OilSpray_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\items\weaponOil\data\OilSpray_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\items\weaponOil\data\OilSpray_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\items\weaponOil\data\OilSpray_destruct.rvmat"}}};
				};
			};
		};
	};
};
