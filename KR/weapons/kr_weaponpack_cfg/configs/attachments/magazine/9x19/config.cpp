class CfgPatches
{
	class kr_magazine_9x19
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Magazines","kr_magazine_Base"};
		magazines[] = {"Mag_9x19_mp5_kurtz_std_20Rnd","Mag_9x19_mp5_std_curved_30Rnd","Mag_9x19_mp5_x_product_50Rnd","Mag_9x19_pp19_pufgun_sg919_20Rnd","Mag_9x19_pp19_pufgun_sg919_30Rnd","Mag_9x19_pp19_izhmash_sb7_10Rnd","Mag_9x19_pp19_izhmash_std_30Rnd","Mag_9x19_mp443_std_18Rnd","Mag_9x19_glock17_50Rnd","Mag_9x19_glock17_33Rnd","Mag_9x19_glock17_pmag_21Rnd","Mag_9x19_glock17_std_17Rnd","Mag_9x19_m9a3_17Rnd","Mag_9x19_m9a3_blk_17Rnd","Mag_9x19_p226r_15Rnd","Mag_9x19_p226r_20Rnd","Mag_9x19_pl15_16Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_9x19_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_9x19_7n21";
		ammoItems[] = {"Ammo_9x19","kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_rip","kr_Ammo_9x19_quakemaker"};
		weightPerQuantityUnit = 4;
		hiddenSelections[] = {"camo"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19";
		};
	};
	class Mag_9x19_mp5_kurtz_std_20Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_kurtz_std_20Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_kurtz_std_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\9x19\Mag_9x19_mp5_kurtz_std_20Rnd.p3d";
		weight = 230;
		itemSize[] = {1,2};
		count = 20;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_kurtz_std.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_kurtz_std_co.paa"};
		soundImpactType = "metal";
		
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "9x19: MP5";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_kurtz_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_kurtz_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_kurtz_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_kurtz_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_kurtz_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_9x19_mp5_std_curved_30Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_std_curved_30Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_std_curved_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\9x19\Mag_9x19_mp5_std_curved_30Rnd.p3d";
		weight = 230;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_curved_std.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_curved_std_co.paa"};
		soundImpactType = "metal";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19: MP5";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_curved_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_curved_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_curved_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_curved_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_curved_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_9x19_mp5_x_product_50Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_x_product_50Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_x_product_50Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\9x19\Mag_9x19_mp5_x_product_50Rnd.p3d";
		weight = 230;
		itemSize[] = {2,3};
		count = 50;
		swayModifier[] = {1.0,1.15,1.15};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_x_product50.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_x_product50_co.paa"};
		soundImpactType = "metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_x_product50.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_x_product50_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_x_product50_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_x_product50_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\mp5_x_product50_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -7;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "9x19: MP5";
		};
	};
	class Mag_9x19_pp19_pufgun_sg919_20Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_pp19_pufgun_sg919_20Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_pp19_pufgun_sg919_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\9x19\Mag_9x19_pp19_pufgun_sg919_20Rnd.p3d";
		weight = 85;
		itemSize[] = {1,2};
		count = 20;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_20.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_20_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_20_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19: PP19-1, Saiga-9";
		};
	};
	class Mag_9x19_pp19_pufgun_sg919_30Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_pp19_pufgun_sg919_30Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_pp19_pufgun_sg919_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\9x19\Mag_9x19_pp19_pufgun_sg919_30Rnd.p3d";
		weight = 110;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_30.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_30_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_30.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_30_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_30_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_30_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\pufgun_sg919_30_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19: PP19-1, Saiga-9";
		};
	};
	class Mag_9x19_pp19_izhmash_sb7_10Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_pp19_izhmash_sb7_10Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_pp19_izhmash_sb7_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\9x19\Mag_9x19_pp19_izhmash_sb7.p3d";
		weight = 170;
		itemSize[] = {1,3};
		count = 10;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\izhmash_sb7.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\izhmash_sb7_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\izhmash_sb7.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\izhmash_sb7_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\izhmash_sb7_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\izhmash_sb7_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x19\data\izhmash_sb7_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "9x19: PP19-1, Saiga-9";
		};
	};
	class Mag_9x19_pp19_izhmash_std_30Rnd: Mag_9x19_pp19_izhmash_sb7_10Rnd
	{
		displayName = "$STR_kr_magazines_9x19_pp19_izhmash_std_30Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_pp19_izhmash_std_30Rnd_dsc";
		count = 30;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19: PP19-1, Saiga-9";
		};
	};
	class Mag_9x19_mp443_std_18Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_mp443_std_18Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_mp443_std_18Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\Mag_9x19_mp443_std_18Rnd.p3d";
		weight = 100;
		itemSize[] = {1,2};
		count = 18;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mp443.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mp443_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mp443.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mp443_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mp443_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mp443_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mp443_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19: MP-433";
		};
	};
	class Mag_9x19_glock17_50Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_glock17_50Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_glock17_50Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\Mag_9x19_glock17_50Rnd.p3d";
		weight = 600;
		itemSize[] = {2,3};
		count = 50;
		swayModifier[] = {1.0,1.25,1.25};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_50.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_50_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_50.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_50_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_50_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_50_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_50_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -12;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "9x19: Glock17/18c/21, STM-9";
		};
	};
	class Mag_9x19_glock17_33Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_glock17_big_stick_33Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_glock17_big_stick_33Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\Mag_9x19_glock17_big_stick_33Rnd.p3d";
		weight = 200;
		itemSize[] = {1,3};
		count = 33;
		swayModifier[] = {1.0,1.1,1.1};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_big_stick.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_big_stick_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_big_stick.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_big_stick_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_big_stick_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_big_stick_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_big_stick_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x19: Glock17/18c/21, STM-9";
		};
	};
	class Mag_9x19_glock17_pmag_21Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_glock17_pmag_21Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_glock17_pmag_21Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\Mag_9x19_glock17_pmag_21Rnd.p3d";
		weight = 110;
		itemSize[] = {1,2};
		count = 21;
		swayModifier[] = {1.0,1.05,1.05};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\glock_magpul_pmag_21.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\glock_magpul_pmag_21_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\glock_magpul_pmag_21.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\glock_magpul_pmag_21_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\glock_magpul_pmag_21_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\glock_magpul_pmag_21_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\glock_magpul_pmag_21_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19: Glock17/18c/21, STM-9";
		};
	};
	class Mag_9x19_glock17_std_17Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_glock17_std_17Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_glock17_std_17Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\Mag_9x19_glock17_std_17Rnd.p3d";
		weight = 90;
		itemSize[] = {1,2};
		count = 17;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_std_17.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_std_17_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_std_17.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_std_17_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_std_17_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_std_17_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\mag_glock_std_17_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19: Glock17/18c/21, STM-9";
		};
	};
	class Mag_9x19_m9a3_17Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_m9a3_17Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_m9a3_17Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\Mag_9x19_m9a3_17Rnd.p3d";
		weight = 90;
		itemSize[] = {1,2};
		count = 17;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\m9a3_mag.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\m9a3_mag_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\m9a3_mag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\m9a3_mag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\m9a3_mag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\m9a3_mag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\m9a3_mag_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19: Beretta M9";
		};
	};
	class Mag_9x19_m9a3_blk_17Rnd: Mag_9x19_m9a3_17Rnd
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\m9a3_mag_blk_co.paa"};
	};
	class Mag_9x19_p226r_15Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_p226r_15Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_p226r_15Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\Mag_9x19_p226r_15Rnd.p3d";
		weight = 90;
		itemSize[] = {1,2};
		count = 15;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_15.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_15_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_15.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_15_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_15_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_15_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_15_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19: P226r";
		};
	};
	class Mag_9x19_p226r_20Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_p226r_20Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_p226r_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\Mag_9x19_p226r_20Rnd.p3d";
		weight = 90;
		itemSize[] = {1,2};
		count = 20;
		swayModifier[] = {1.0,1.05,1.05};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_20.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_20_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\p226_mag_20_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19: P226r";
		};
	};
	class Mag_9x19_pl15_16Rnd: kr_magazine_9x19_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x19_pl15_16Rnd";
		descriptionShort = "$STR_kr_magazines_9x19_pl15_16Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\Mag_9x19_pl15_16Rnd.p3d";
		weight = 90;
		itemSize[] = {1,2};
		count = 16;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\pl15_mag.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\pl15_mag_co.paa"};
		soundImpactType = "plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\pl15_mag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\pl15_mag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\pl15_mag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\pl15_mag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\9x19\data\pl15_mag_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19: PL-15";
		};
	};
};
