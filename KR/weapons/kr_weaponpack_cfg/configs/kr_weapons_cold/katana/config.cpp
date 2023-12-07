class CfgPatches
{
	class kr_weapons_cold_katana_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_cold_katana"};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class Clothing;
	class Sword;
	class kr_katana: Sword
	{
		itemSize[] = {1,7};
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
	class kr_katana_case: Clothing
	{
		itemSize[] = {1,7};
	};
};
