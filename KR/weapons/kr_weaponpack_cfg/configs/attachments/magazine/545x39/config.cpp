class CfgPatches
{
	class kr_magazine_545x39
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_magazine_Base"};
		magazines[] = {"Mag_545x39_6L18_45Rnd","Mag_545x39_6L20_30Rnd","Mag_545x39_6L23_30Rnd","Mag_545x39_6L23_plum_30Rnd","Mag_545x39_6L26_45Rnd","Mag_545x39_6L31_60Rnd","Mag_545x39_ak12_std_30Rnd","Mag_545x39_magpul_pmag_30Rnd","Mag_545x39_rpk16_drum_95Rnd","Mag_545x39_saiga_545_10Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_545x39_Base: kr_magazine_Base
	{
		ammoItems[] = {"Ammo_545x39","Ammo_545x39Tracer","kr_Ammo_545x39_BS","kr_Ammo_545x39_US","kr_Ammo_545x39_T","kr_Ammo_545x39_PS","kr_Ammo_545x39_PRS","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_BT","kr_Ammo_545x39_AP"};
		ammo = "Bullet_545x39";
		recoilModifier[] = {1.0,1.0,0.95};
		weightPerQuantityUnit = 4.0;
		tracersEvery = 0;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
		};
	};
	class Mag_545x39_6L18_45Rnd: kr_magazine_545x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_545x39_6L18";
		descriptionShort = "$STR_kr_magazines_545x39_6L18_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\545x39\Mag_545x39_6L18_45Rnd.p3d";
		weight = 300;
		itemSize[] = {1,4};
		count = 45;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L18_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L18.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L18.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L18_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L18_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L18_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L18_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_545x39_6L20_30Rnd: kr_magazine_545x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_545x39_6L20";
		descriptionShort = "$STR_kr_magazines_545x39_6L20_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\545x39\Mag_545x39_6L20_30Rnd.p3d";
		weight = 215;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L20_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L20.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L20_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_545x39_6L23_30Rnd: kr_magazine_545x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_545x39_6L23";
		descriptionShort = "$STR_kr_magazines_545x39_6L23_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\545x39\Mag_545x39_6L23_30Rnd.p3d";
		weight = 215;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_545x39_6L23_plum_30Rnd: Mag_545x39_6L23_30Rnd
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_plum_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_plum.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_plum.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_plum_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_plum_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_plum_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L23_plum_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_545x39_6L26_45Rnd: kr_magazine_545x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_545x39_6L26";
		descriptionShort = "$STR_kr_magazines_545x39_6L26_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\545x39\Mag_545x39_6L26_45Rnd.p3d";
		weight = 300;
		itemSize[] = {1,4};
		count = 45;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L26_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L26.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L26.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L26_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L26_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L26_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L26_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_545x39_6L31_60Rnd: kr_magazine_545x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_545x39_6L31";
		descriptionShort = "$STR_kr_magazines_545x39_6L31_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\545x39\Mag_545x39_6L31_60Rnd.p3d";
		weight = 300;
		itemSize[] = {1,3};
		count = 60;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L31_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L31.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -6;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.45x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L31.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L31_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L31_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L31_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\6L31_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_545x39_ak12_std_30Rnd: kr_magazine_545x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_545x39_ak12_std";
		descriptionShort = "$STR_kr_magazines_545x39_ak12_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\545x39\Mag_545x39_ak12_std_30Rnd.p3d";
		weight = 190;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\ak12_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\ak12_std.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\ak12_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\ak12_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\ak12_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\ak12_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\ak12_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_545x39_magpul_pmag_30Rnd: kr_magazine_545x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_545x39_magpul_pmag";
		descriptionShort = "$STR_kr_magazines_545x39_magpul_pmag_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\545x39\Mag_545x39_magpul_pmag_30Rnd.p3d";
		weight = 200;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\magpul_pmag_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\magpul_pmag.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.45x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\magpul_pmag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\magpul_pmag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\magpul_pmag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\magpul_pmag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\magpul_pmag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_545x39_rpk16_drum_95Rnd: kr_magazine_545x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_545x39_rpk16_drum";
		descriptionShort = "$STR_kr_magazines_545x39_rpk16_drum_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\545x39\Mag_545x39_rpk16_drum_95Rnd.p3d";
		weight = 680;
		itemSize[] = {3,3};
		count = 95;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\rpk16_drum_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\rpk16_drum.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.45x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\rpk16_drum.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\rpk16_drum_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\rpk16_drum_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\rpk16_drum_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\rpk16_drum_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_545x39_saiga_545_10Rnd: kr_magazine_545x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_545x39_saiga_545";
		descriptionShort = "$STR_kr_magazines_545x39_saiga_545_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\545x39\Mag_545x39_saiga_545_10Rnd.p3d";
		weight = 112;
		itemSize[] = {1,1};
		count = 10;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\saiga_545_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\saiga_545.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "5.45x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\saiga_545.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\saiga_545_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\saiga_545_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\saiga_545_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\545x39\data\saiga_545_destruct.rvmat"}}};
				};
			};
		};
	};
};
