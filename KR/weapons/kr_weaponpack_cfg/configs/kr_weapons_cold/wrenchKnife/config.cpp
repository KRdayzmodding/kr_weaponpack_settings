////////////////////////////////////////////////////////////////////
//DeRap: kr_weapons_cold\wrenchKnife\config.bin
//Produced from mikero's Dos Tools Dll version 9.89
//https://mikero.bytex.digital/Downloads
//'now' is Wed Dec 25 02:07:05 2024 : 'file' last modified on Wed Dec 25 02:07:05 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class kr_weapons_cold_wrenchKnife
	{
		units[] = {"kr_wrenchKnife"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee","kr_data"};
	};
};
class CfgVehicles
{
	class CombatKnife;
	class kr_wrenchKnife: CombatKnife
	{
		scope = 2;
		displayName = "$STR_kr_weapons_cold_wrenchKnife";
		descriptionShort = "$STR_kr_weapons_cold_wrenchKnife_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_cold\wrenchKnife\wrenchKnife.p3d";
		inventorySlot[] = {"Knife"};
		repairableWithKits[] = {4};
		repairCosts[] = {10.0};
		rotationFlags = 17;
		RestrainUnlockType = 1;
		canSkinBodies = 1;
		weight = 240;
		itemSize[] = {1,3};
		lootTag[] = {"Hunting","Camping"};
		lootCategory = "Tools";
		itemInfo[] = {"Knife"};
		openItemSpillRange[] = {10,20};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_cold\wrenchKnife\data\wrenchKnife.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_cold\wrenchKnife\data\wrenchKnife_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_cold\wrenchKnife\data\wrenchKnife_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_cold\wrenchKnife\data\wrenchKnife_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_cold\wrenchKnife\data\wrenchKnife_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKnife";
				range = 1.2;
			};
			class Heavy
			{
				ammo = "MeleeKnife_Heavy";
				range = 1.2;
			};
			class Sprint
			{
				ammo = "MeleeKnife_Heavy";
				range = 3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
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
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
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
			};
		};
	};
};
