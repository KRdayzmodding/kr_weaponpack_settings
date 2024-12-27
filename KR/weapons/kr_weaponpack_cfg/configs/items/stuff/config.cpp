class CfgPatches
{
	class kr_items_stuff
	{
		units[] = {"kr_items_kramtsov"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","kr_data"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing;
	class kr_items_kramtsov: Clothing
	{
		scope = 2;
		displayName = "Кот";
		descriptionShort = "Котится";
		model = "KR\weapons\kr_weaponpack\items\stuff\kramtsov_g.p3d";
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		visibilityModifier = 0.9;
		rotationFlags = 16;
		weight = 90;
		itemSize[] = {1,1};
		varWetMax = 1.0;
		heatIsolation = 0.7;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.8,0.8,0.8,1,CO)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
				};
			};
		};
		class ClothingTypes
		{
			male = "KR\weapons\kr_weaponpack\items\stuff\kramtsov_m.p3d";
			female = "KR\weapons\kr_weaponpack\items\stuff\kramtsov_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpIte
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
