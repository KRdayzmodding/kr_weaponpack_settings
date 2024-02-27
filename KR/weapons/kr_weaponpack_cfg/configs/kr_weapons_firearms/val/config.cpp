class CfgPatches
{
	class kr_weapons_firearms_val_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","DZ_Weapons_Firearms","kr_data","kr_weapons_firearms_val"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;

class cfgWeapons
{
	class Rifle_Base;
	class kr_VAL_Base: Rifle_Base
	{
		PPDOFProperties[] = {1,0.5,50,150,4,10};
		WeaponLength = 0.78;
		barrelArmor = 2.4;
		magazineSwitchTime = 0.38;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};

		class NoiseShoot
		{
			strength = 5;
			type = "sound";
		};
	};

	class kr_VAL: kr_VAL_Base
	{
		itemSize[] = {6,3};
	};
};
