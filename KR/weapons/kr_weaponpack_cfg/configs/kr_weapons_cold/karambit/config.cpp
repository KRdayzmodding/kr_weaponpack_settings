class CfgPatches
{
	class kr_weapons_cold_karambit_cfg
	{
		units[] = {"kr_karambit"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_cold_karambit"};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class CombatKnife;
	class kr_karambit: CombatKnife
	{
		canSkinBodies = 1;
		itemSize[] = {1,2};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKnife_Jagd";
				range = 1.2;
			};
			class Heavy
			{
				ammo = "MeleeKnife_Jagd_Heavy";
				range = 1.2;
			};
			class Sprint
			{
				ammo = "MeleeKnife_Jagd_Heavy";
				range = 3.3;
			};
		};
	};
};
