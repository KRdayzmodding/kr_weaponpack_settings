class CfgPatches
{
	class kr_weapons_firearms_vss_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","DZ_Weapons_Firearms","kr_data","kr_weapons_firearms_vss"};
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
	class kr_VSS_Base: Rifle_Base
	{
		PPDOFProperties[] = {1,0.5,50,150,4,10};
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
	class kr_VSS: kr_VSS_Base
	{
		itemSize[] = {8,3};
	};
};
