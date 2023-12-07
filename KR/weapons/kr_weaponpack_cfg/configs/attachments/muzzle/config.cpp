class CfgPatches
{
	class kr_weapatt_muzzle_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_data"};
	};
};
class cfgVehicles
{
	class kr_muzzle_Base;
	class kr_suppressor_Base;
	class kr_suppressor_t1_Base: kr_suppressor_Base
	{
		barrelArmor = 8000;
		noiseShootModifier = -0.5;
		recoilModifier[] = {0.9,0.85,0.9};
		swayModifier[] = {1.0,1.1,1.0};
		dispersionModifier = -0.0001;
	};
	class kr_suppressor_t2_Base: kr_suppressor_Base
	{
		barrelArmor = 7000;
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.7;
		recoilModifier[] = {0.85,0.8,0.85};
		swayModifier[] = {1.0,1.1,1.0};
	};
	class kr_suppressor_t3_Base: kr_suppressor_Base
	{
		barrelArmor = 6000;
		dispersionModifier = -0.00015;
		noiseShootModifier = -0.9;
		recoilModifier[] = {0.8,0.75,0.8};
		swayModifier[] = {1.0,1.15,1.0};
	};
	class kr_muzzle_t1_Base: kr_muzzle_Base
	{
		barrelArmor = 9000;
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.1;
		recoilModifier[] = {0.9,0.95,0.95};
		swayModifier[] = {1.0,1.0,1.0};
	};
	class kr_muzzle_t2_Base: kr_muzzle_Base
	{
		barrelArmor = 8000;
		dispersionModifier = -0.00012;
		noiseShootModifier = -0.12;
		recoilModifier[] = {0.85,0.9,0.9};
		swayModifier[] = {1.0,1.0,1.0};
	};
	class kr_muzzle_t3_Base: kr_muzzle_Base
	{
		barrelArmor = 7000;
		dispersionModifier = -0.00017;
		noiseShootModifier = -0.13;
		recoilModifier[] = {0.8,0.9,0.85};
		swayModifier[] = {1.0,1.0,1.0};
	};
	class kr_muzzle_t4_Base: kr_muzzle_Base
	{
		barrelArmor = 6000;
		dispersionModifier = -0.00025;
		noiseShootModifier = -0.15;
		recoilModifier[] = {0.75,0.8,0.85};
		swayModifier[] = {1.0,1.0,1.0};
	};
};
