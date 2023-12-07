class CfgPatches
{
	class kr_weapons_cold_Jagdkommando_cfg
	{
		units[] = {"kr_Jagdkommando"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_cold_Jagdkommando"};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class CombatKnife;
	class kr_Jagdkommando: CombatKnife
	{
		canSkinBodies = 1;
		itemSize[] = {1,3};
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
