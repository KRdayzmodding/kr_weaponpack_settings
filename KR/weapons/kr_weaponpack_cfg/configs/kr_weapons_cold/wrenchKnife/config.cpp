class CfgPatches
{
	class kr_weapons_cold_wrenchKnife_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_cold_wrenchKnife"};
	};
};
class CfgVehicles
{
	class CombatKnife;
	class kr_wrenchKnife: CombatKnife
	{
		canSkinBodies = 1;
		itemSize[] = {1,3};
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
	};
};
