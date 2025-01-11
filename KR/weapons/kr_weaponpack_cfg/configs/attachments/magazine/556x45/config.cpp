class CfgPatches
{
	class kr_magazine_556x45
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Magazines","kr_magazine_Base"};
		magazines[] = {"Mag_556x45_6L29_30Rnd","Mag_556x45_CWP_30Rnd","Mag_556x45_colt_ar15_std_30Rnd","Mag_556x45_fn_mk16_std_30Rnd","Mag_556x45_hk_polymer_30Rnd","Mag_556x45_hk_gen_2_pm_30Rnd","Mag_556x45_magpulm3_10Rnd","Mag_556x45_magpulm3_20Rnd","Mag_556x45_magpulm3_30Rnd_blck","Mag_556x45_magpulm3_30Rnd_tan","Mag_556x45_magpulm3_40Rnd_blck","Mag_556x45_magpulm3_40Rnd_tan","Mag_556x45_magpulp_60Rnd","Mag_556x45_steel_maritime_30Rnd","Mag_556x45_srfr_mag5_60Rnd","Mag_556x45_srfr_mag5_100Rnd","Mag_556x45_troy_battlemag_30Rnd","Mag_556x45_sg550_30Rnd","Mag_556x45_sg550_60Rnd","Mag_556x45_g36_std_30Rnd","Mag_556x45_g36_std_60Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_556x45_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_556x45_AP"};
		weightPerQuantityUnit = 4;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};
	};
	class kr_magazine_556x45_G36_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_556x45_AP"};
		weightPerQuantityUnit = 4;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};
	};
	class Mag_556x45_6L29_30Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_6L29_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_6L29_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_6L29_30Rnd.p3d";
		weight = 230;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\6L29.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\6L29_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\6L29.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\6L29_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\6L29_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\6L29_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\6L29_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_CWP_30Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_CWP_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_CWP_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_CWP_30Rnd.p3d";
		weight = 230;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\CWP.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\CWP_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\CWP.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\CWP_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\CWP_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\CWP_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\CWP_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_colt_ar15_std_30Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_colt_ar15_std_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_colt_ar15_std_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_colt_ar15_std_30Rnd.p3d";
		weight = 230;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\colt_ar15_std_30Rnd.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\colt_ar15_std_30Rnd_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\colt_ar15_std_30Rnd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\colt_ar15_std_30Rnd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\colt_ar15_std_30Rnd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\colt_ar15_std_30Rnd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\colt_ar15_std_30Rnd_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_fn_mk16_std_30Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_fn_mk16_std_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_fn_mk16_std_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_fn_mk16_std_30Rnd.p3d";
		weight = 230;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\fn_mk16_std_30Rnd.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\fn_mk16_std_30Rnd_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -4;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\fn_mk16_std_30Rnd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\fn_mk16_std_30Rnd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\fn_mk16_std_30Rnd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\fn_mk16_std_30Rnd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\fn_mk16_std_30Rnd_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_hk_polymer_30Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_hk_polymer_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_hk_polymer_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_hk_polymer_30Rnd.p3d";
		weight = 230;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_polymer_30Rnd.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_polymer_30Rnd_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_polymer_30Rnd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_polymer_30Rnd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_polymer_30Rnd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_polymer_30Rnd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_polymer_30Rnd_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_hk_gen_2_pm_30Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_hk_gen_2_pm_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_hk_gen_2_pm_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_hk_gen_2_pm_30Rnd.p3d";
		weight = 230;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_gen_2_pm_30Rnd.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_gen_2_pm_30Rnd_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_gen_2_pm_30Rnd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_gen_2_pm_30Rnd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_gen_2_pm_30Rnd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_gen_2_pm_30Rnd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\hk_gen_2_pm_30Rnd_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_magpulm3_10Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_magpulm3_10Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_magpulm3_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_magpulm3_10Rnd.p3d";
		weight = 230;
		itemSize[] = {1,1};
		count = 10;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_10.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_10_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_10_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_magpulm3_20Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_magpulm3_20Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_magpulm3_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_magpulm3_20Rnd.p3d";
		weight = 230;
		itemSize[] = {1,2};
		count = 20;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_20.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_20_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_20_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_magpulm3_30Rnd_Base: kr_magazine_556x45_Base
	{
		displayName = "$STR_kr_magazines_556x45_magpulm3_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_magpulm3_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_magpulm3_30Rnd.p3d";
		weight = 230;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_30.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_30.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_30_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_30_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_30_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_30_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_magpulm3_30Rnd_blck: mag_556x45_magpulm3_30Rnd_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_30_co.paa"};
	};
	class Mag_556x45_magpulm3_30Rnd_tan: mag_556x45_magpulm3_30Rnd_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_30_tan_co.paa"};
	};
	class Mag_556x45_magpulm3_40Rnd_Base: kr_magazine_556x45_Base
	{
		displayName = "$STR_kr_magazines_556x45_magpulm3_40Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_magpulm3_40Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_magpulm3_40Rnd.p3d";
		weight = 240;
		itemSize[] = {1,4};
		count = 40;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_40.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_40.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_40_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_40_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_40_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_40_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_magpulm3_40Rnd_blck: mag_556x45_magpulm3_40Rnd_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_40_co.paa"};
	};
	class Mag_556x45_magpulm3_40Rnd_tan: mag_556x45_magpulm3_40Rnd_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_m3_40_tan_co.paa"};
	};
	class Mag_556x45_magpulp_60Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_magpulp_60Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_magpulp_60Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\mag_556x45_magpulp_60Rnd.p3d";
		weight = 240;
		itemSize[] = {2,3};
		count = 60;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_pmag60.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_pmag60_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -7;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_pmag60.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_pmag60_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_pmag60_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_pmag60_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\magpul_pmag60_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_steel_maritime_30Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_steel_maritime_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_steel_maritime_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_steel_maritime_30Rnd.p3d";
		weight = 240;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\steel_maritime_30Rnd.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\steel_maritime_30Rnd_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\steel_maritime_30Rnd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\steel_maritime_30Rnd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\steel_maritime_30Rnd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\steel_maritime_30Rnd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\steel_maritime_30Rnd_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_srfr_mag5_60Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_srfr_mag5_60Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_srfr_mag5_60Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_surefire_60Rnd.p3d";
		weight = 240;
		itemSize[] = {2,3};
		count = 60;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_60.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_60_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_60.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_60_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_60_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_60_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_60_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_556x45_srfr_mag5_100Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_srfr_mag5_100Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_srfr_mag5_100Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_surefire_100Rnd.p3d";
		weight = 240;
		itemSize[] = {2,4};
		count = 100;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_100.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_100_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_100.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_100_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_100_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_100_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\surefire_mag5_100_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_556x45_troy_battlemag_30Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_troy_battlemag_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_troy_battlemag_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_troy_battlemag_30Rnd.p3d";
		weight = 240;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\troy_battlemag_30Rnd.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\troy_battlemag_30Rnd_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\troy_battlemag_30Rnd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\troy_battlemag_30Rnd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\troy_battlemag_30Rnd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\troy_battlemag_30Rnd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\troy_battlemag_30Rnd_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_sg550_30Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_sg550_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_sg550_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_sg550_30Rnd.p3d";
		weight = 180;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine_co.paa"};
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_sg550_60Rnd: kr_magazine_556x45_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_sg550_60Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_sg550_60Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\556x45\Mag_556x45_sg550_60Rnd.p3d";
		weight = 360;
		itemSize[] = {2,3};
		count = 60;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine_co.paa"};
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -4;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\556x45\data\sg550_magazine_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_g36_std_30Rnd: kr_magazine_556x45_G36_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_g36_std_30Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_g36_std_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\Mag_556x45_g36_std_30Rnd.p3d";
		weight = 140;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std_co.paa"};
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class Mag_556x45_g36_std_60Rnd: kr_magazine_556x45_G36_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_556x45_g36_std_60Rnd";
		descriptionShort = "$STR_kr_magazines_556x45_g36_std_60Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\Mag_556x45_g36_std_60Rnd.p3d";
		weight = 280;
		itemSize[] = {2,3};
		count = 60;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std_co.paa"};
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -6;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\556x45\data\g36_std_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
};
