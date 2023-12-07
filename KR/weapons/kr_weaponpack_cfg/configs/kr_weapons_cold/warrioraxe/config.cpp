class CfgPatches
{
	class kr_weapons_cold_warrioraxe_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_cold_warrioraxe"};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class FirefighterAxe;
	class kr_warrioraxe: FirefighterAxe
	{
		itemSize[] = {3,7};
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
	};
};
