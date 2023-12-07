class CfgPatches
{
	class kr_weapons_cold_huntersKnife_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_cold_huntersKnife"};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class CombatKnife;
	class kr_huntersKnife: CombatKnife
	{
		canSkinBodies = 1;
		itemSize[] = {1,3};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKnife";
				range = 1.7;
			};
			class Heavy
			{
				ammo = "MeleeKnife_Heavy";
				range = 1.7;
			};
			class Sprint
			{
				ammo = "MeleeKnife_Heavy";
				range = 3.7;
			};
		};
	};
};
