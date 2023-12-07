class CfgPatches
{
	class kr_weapatt_g28_parts_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapatt_g28_parts"};
	};
};


class cfgVehicles
{
	class kr_g28_hndgrd_Base;
	class kr_g28_hguard_extended: kr_g28_hndgrd_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		adsModifier[] = {0.8,0,1};

		class kr_discription
		{
			kr_tier = 3;
			kr_type = "HK417/G28";
		};
	};
	class kr_g28_hguard_extended_black: kr_g28_hguard_extended {};

	class kr_g28_hguard_patrol: kr_g28_hndgrd_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		adsModifier[] = {0.8,0,1};

		class kr_discription
		{
			kr_tier = 2;
			kr_type = "HK417/G28";
		};
	};
	class kr_g28_hguard_patrol_black: kr_g28_hguard_patrol {};
};