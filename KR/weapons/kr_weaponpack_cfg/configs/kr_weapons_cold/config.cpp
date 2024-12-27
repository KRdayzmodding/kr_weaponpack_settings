////////////////////////////////////////////////////////////////////
//DeRap: kr_weapons_cold\config.bin
//Produced from mikero's Dos Tools Dll version 9.89
//https://mikero.bytex.digital/Downloads
//'now' is Wed Dec 25 02:07:04 2024 : 'file' last modified on Wed Dec 25 02:07:04 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class kr_weapons_cold
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee","kr_data"};
		ammo[] = {"MeleeKnife_Jagd","MeleeKnife_Jagd_Heavy","Melee_kr_WarriorAxe","Melee_kr_WarriorAxe_Heavy"};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class MeleeAxe;
	class MeleeAxe_Heavy;
	class MeleeKnife_Heavy;
	class MeleeKnife;
	class MeleeKnife_Jagd: MeleeKnife
	{
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 2;
			class Health
			{
				damage = 45;
			};
			class Blood
			{
				damage = 120;
			};
			class Shock
			{
				damage = 45;
			};
			additionAnimalMeleeMultiplier = 2;
		};
	};
	class MeleeKnife_Jagd_Heavy: MeleeKnife_Heavy
	{
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 3;
			class Health
			{
				damage = 60;
			};
			class Blood
			{
				damage = 140;
			};
			class Shock
			{
				damage = 60;
			};
			additionAnimalMeleeMultiplier = 2;
		};
	};
	class Melee_kr_WarriorAxe: MeleeAxe
	{
		affectSkeleton = 1.4;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 2;
			class Health
			{
				damage = 70;
			};
			class Blood
			{
				damage = 70;
			};
			class Shock
			{
				damage = 15;
			};
			additionAnimalMeleeMultiplier = 4;
		};
	};
	class Melee_kr_WarriorAxe_Heavy: MeleeAxe_Heavy
	{
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 8;
			class Health
			{
				damage = 100;
			};
			class Blood
			{
				damage = 90;
			};
			class Shock
			{
				damage = 50;
			};
			additionAnimalMeleeMultiplier = 7;
		};
	};
};
