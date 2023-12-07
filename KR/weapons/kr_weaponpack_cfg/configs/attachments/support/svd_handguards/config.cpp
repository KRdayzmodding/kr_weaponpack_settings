class CfgPatches
{
	class kr_weapatt_svd_handguards_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapatt_svd_handguards"};
	};
};

class kr_discription_Base
{
	kr_type = "СВД, СВДС";
	kr_tier = 1;
};

class cfgVehicles
{
	class kr_svd_hguard_Base;
	class kr_svd_hguard_t1_Base;
	class kr_svd_hguard_t2_Base;
	class kr_svd_hguard_t3_Base;
	class kr_svd_hguard_t4_Base;

/////////////////////////============== Т1 ==============/////////////////////////

	class kr_svd_hguard_izhmash_s_std: kr_svd_hguard_t1_Base
	{
		class kr_discription : kr_discription_Base {};
	};

	class kr_svd_hguard_wood_std: kr_svd_hguard_t1_Base
	{
		class kr_discription : kr_discription_Base {};
	};

/////////////////////////============== Т2 ==============/////////////////////////

	class kr_svd_hguard_caa_xrs_drg: kr_svd_hguard_t2_Base
	{
		class kr_discription : kr_discription_Base
		{
			kr_tier = 2;
		};
	};

/////////////////////////============== Т3 ==============/////////////////////////

	class kr_svd_hguard_izhmash_modernized_kit: kr_svd_hguard_t3_Base
	{
		class kr_discription : kr_discription_Base
		{
			kr_tier = 3;
		};
	};

	class kr_svd_hguard_izhmash_modernized_kit_raild : kr_svd_hguard_izhmash_modernized_kit{};

/////////////////////////============== Т4 ==============/////////////////////////

	class kr_svd_hguard_sag_chassis_mk_1: kr_svd_hguard_t4_Base
	{
		class kr_discription : kr_discription_Base
		{
			kr_tier = 4;
		};
	};

	class kr_svd_hguard_sag_chassis_mk_1_raild : kr_svd_hguard_sag_chassis_mk_1 {};
};