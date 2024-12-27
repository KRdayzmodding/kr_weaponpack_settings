////////////////////////////////////////////////////////////////////
//DeRap: kr_weapons_cold\skullaxe\config.bin
//Produced from mikero's Dos Tools Dll version 9.89
//https://mikero.bytex.digital/Downloads
//'now' is Wed Dec 25 02:07:05 2024 : 'file' last modified on Wed Dec 25 02:07:05 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class kr_weapons_cold_skullaxe
	{
		units[] = {"kr_skullaxe"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee","kr_data"};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class FirefighterAxe;
	class kr_skullaxe: FirefighterAxe
	{
		scope = 2;
		displayName = "$STR_kr_weapons_cold_skullaxe";
		descriptionShort = "$STR_kr_weapons_cold_skullaxe_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_cold\skullaxe\skullaxe.p3d";
		repairableWithKits[] = {4};
		repairCosts[] = {20.0};
		rotationFlags = 12;
		weight = 1360;
		itemSize[] = {2,6};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1,{"KR\weapons\kr_weaponpack\kr_weapons_cold\skullaxe\data\skullaxe.rvmat"}},{0.6,{"KR\weapons\kr_weaponpack\kr_weapons_cold\skullaxe\data\skullaxe_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_cold\skullaxe\data\skullaxe_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_cold\skullaxe\data\skullaxe_badlydamage.rvmat"}},{0.01,{"KR\weapons\kr_weaponpack\kr_weapons_cold\skullaxe\data\skullaxe_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "fireaxe";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFireAxe";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeFireAxe_Heavy";
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeFireAxe_Heavy";
				range = 3.7;
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
