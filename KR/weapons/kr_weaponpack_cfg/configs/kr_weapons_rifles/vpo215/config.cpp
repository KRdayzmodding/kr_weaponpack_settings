class CfgPatches
{
	class kr_weapons_rifles_vpo215_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","kr_data","kr_weapons_rifles_vpo215"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class kr_vpo_215_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		initSpeedMultiplier = 1.4;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};		
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 0.71;
		barrelArmor = 3.0;

		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
	};
	class kr_vpo_215: kr_vpo_215_Base
	{
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = ".366 TKM";
		};
	};
};
