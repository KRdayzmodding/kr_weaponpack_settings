class CfgPatches
{
	class kr_weapons_cold_skullaxe_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_cold_skullaxe"};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class FirefighterAxe;
	class kr_skullaxe: FirefighterAxe
	{
		itemSize[] = {2,6};
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
	};
};
