class CfgPatches
{
	class kr_weapatt_shotgun_parts_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapatt_shotgun_parts"};
	};
};


class cfgVehicles
{
	class kr_support_Base;
	class kr_saiga_hguard_Base;

	class kr_saiga12k_hguard_saiga12k_std : kr_saiga_hguard_Base
	{
		recoilModifier[] = {0.6,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		adsModifier[] = {0.9,0,1};

		class kr_discription
		{
			kr_type = "Сайга-12";
			kr_tier = 1;
		};
	};

    class kr_saiga12k_hguard_bravo18 : kr_saiga_hguard_Base
    {
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		adsModifier[] = {0.85,0,1};

		class kr_discription
		{
			kr_type = "Сайга12к";
			kr_tier = 2;
		};
    };

    class kr_saiga12k_hguard_cg340 : kr_saiga_hguard_Base
    {
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		adsModifier[] = {0.85,0,1};

        class kr_discription
        {
            kr_type = "Сайга-12";
            kr_tier = 2;
        };
    };
	class kr_saiga12k_hguard_cg340_raild : kr_saiga12k_hguard_cg340
	{
		class kr_discription
		{
			kr_type = "Сайга-12";
			kr_tier = 2;
		};
	};

	class kr_saiga12k_hguard_utg_pro_short : kr_saiga_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		adsModifier[] = {0.8,0,1};

		class kr_discription
		{
			kr_type = "Сайга-12";
			kr_tier = 3;
		};
	};

	class kr_saiga12k_hguard_utg_pro_long : kr_saiga_hguard_Base
	{
		recoilModifier[] = {0.25,0.70,0.70};
        swayModifier[] = {0.3,0.3,0.3};
        adsModifier[] = {0.75,0,1};

		class kr_discription
		{
			kr_type = "Сайга-12";
			kr_tier = 4;
		};
	};

	class kr_stock_spas12 : kr_support_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.75,0.75,0.75};
		adsModifier[] = {0.9,0,1};

		class kr_discription
		{
			kr_type = "SPAS12";
			kr_tier = 1;
		};
	};
};