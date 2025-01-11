class CfgPatches
{
	class kr_weapons_cold_warrioraxe
	{
		units[] = {"kr_warrioraxe"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee","kr_data"};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class FirefighterAxe;
	class kr_warrioraxe: FirefighterAxe
	{
		scope = 2;
		displayName = "$STR_kr_weapons_cold_warrioraxe";
		descriptionShort = "$STR_kr_weapons_cold_warrioraxe_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_cold\warrioraxe\warrioraxe.p3d";
		repairableWithKits[] = {4};
		repairCosts[] = {55.0};
		rotationFlags = 12;
		weight = 3700;
		itemSize[] = {3,7};
		itemBehaviour = 2;
		fragility = 0.01;
		inventorySlot[] = {"Shoulder","Melee"};
		lootCategory = "Crafted";
		lootTag[] = {"Work","Forester","Camping"};
		dismantle_action_type = 74;
		openItemSpillRange[] = {20,40};
		itemInfo[] = {"Axe"};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		
		class kr_description
		{
			kr_tier = 4;
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1,{"KR\weapons\kr_weaponpack\kr_weapons_cold\warrioraxe\data\warrioraxe.rvmat"}},{0.6,{"KR\weapons\kr_weaponpack\kr_weapons_cold\warrioraxe\data\warrioraxe_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_cold\warrioraxe\data\warrioraxe_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_cold\warrioraxe\data\warrioraxe_badlydamage.rvmat"}},{0.01,{"KR\weapons\kr_weaponpack\kr_weapons_cold\warrioraxe\data\warrioraxe_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "fireaxe";
		class MeleeModes
		{
			class Default
			{
				ammo = "Melee_kr_WarriorAxe";
				range = 2.5;
			};
			class Heavy
			{
				ammo = "Melee_kr_WarriorAxe_Heavy";
				range = 2.5;
			};
			class Sprint
			{
				ammo = "Melee_kr_WarriorAxe_Heavy";
				range = 4.5;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup_light
				{
					soundSet = "hatchet_pickup_light_SoundSet";
					id = 796;
				};
				class pickup
				{
					soundSet = "hatchet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "woodaxe_drop_SoundSet";
					id = 898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet = "FirefighterAxe_loop_SoundSet";
					id = 1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet = "FirefighterAxe_end_SoundSet";
					id = 1122;
				};
				class ShoulderR_Hide
				{
					soundset = "ShoulderR_Hide_SoundSet";
					id = 1210;
				};
				class ShoulderR_Show
				{
					soundset = "ShoulderR_Show_SoundSet";
					id = 1211;
				};
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
			};
		};
	};
};
