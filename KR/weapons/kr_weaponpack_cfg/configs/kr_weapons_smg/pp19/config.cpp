class CfgPatches
{
	class kr_weapons_smg_pp19_01_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapons_smg_pp19_01"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;

class cfgWeapons
{
	class kr_ak_Base;
	class kr_pp19_01_Base : kr_ak_Base 
	{
		class NoiseShoot
		{
			strength = 66;
			type = "shot";
		};
	};

	class kr_pp19_01 : kr_pp19_01_Base 
	{
		initSpeedMultiplier = 1.0;
		barrelArmor = 3.7;
		recoilModifier[] = {2.5,2.5,4};
		swayModifier[] = {2.5,2.7,2.25};
		adsModifier[] = {0.1,0,0};

		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "9x19";
		};
	};

	class kr_saiga9 : kr_pp19_01_Base 
	{
		initSpeedMultiplier = 1.0;
		barrelArmor = 3.7;
		recoilModifier[] = {2.5,2.5,4};
		swayModifier[] = {2.5,2.7,2.25};
		adsModifier[] = {0.1,0,0};

		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "9x19";
		};
	};
};