class CfgPatches
{
	class kr_weapatt_mp5_parts_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapatt_mp5_parts"};
	};
};
class cfgVehicles
{
	class kr_mp5_hndgrd_Base;
	class kr_mp5_hndgrd_bttl99: kr_mp5_hndgrd_Base
	{
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		adsModifier[] = {0.85,0,1};
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "HK MP5";
		};
	};
	class kr_mp5_hndgrd_caa_hx5: kr_mp5_hndgrd_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		adsModifier[] = {0.8,0,1};
		class kr_discription
		{
			kr_tier = 3;
			kr_type = "HK MP5";
		};
	};
	class kr_mp5_hndgrd_kurtz: kr_mp5_hndgrd_Base
	{
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		adsModifier[] = {0.9,0,1};
		class kr_discription
		{
			kr_tier = 1;
			kr_type = "HK MP5";
		};
	};
	class kr_mp5_hndgrd_ptr_trirail: kr_mp5_hndgrd_Base
	{
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		adsModifier[] = {0.85,0,1};
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "HK MP5";
		};
	};
	class kr_mp5_hndgrd_sd: kr_mp5_hndgrd_Base
	{
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.85,0.55,0.55};
		adsModifier[] = {0.9,0,1};
		class kr_discription
		{
			kr_tier = 1;
			kr_type = "HK MP5SD";
		};
	};
	class kr_mp5_hndgrd_wide_tropical: kr_mp5_hndgrd_Base
	{
		recoilModifier[] = {0.6,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		adsModifier[] = {0.9,0,1};
		class kr_discription
		{
			kr_tier = 1;
			kr_type = "HK MP5";
		};
	};
};
