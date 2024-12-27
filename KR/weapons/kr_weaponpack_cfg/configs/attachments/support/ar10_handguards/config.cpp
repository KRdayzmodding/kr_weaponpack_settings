class CfgPatches
{
	class kr_attachments_ar10_handguards
	{
		units[] = {"kr_ar10_hguard_cmmg_mk3_rml9","kr_ar10_hguard_cmmg_mk3_rml9_raild","kr_ar10_hguard_noveske_sws_n6","kr_ar10_hguard_noveske_sws_n6_long","kr_ar10_hguard_cmmg_mk3_rml15","kr_ar10_hguard_cmmg_mk3_rml15_raild","kr_ar10_hguard_kac_urx4","kr_ar10_hguard_kac_urx4_raild","kr_ar10_hguard_jp_rsass_std","kr_ar10_hguard_jp_rsass_std_raild","kr_ar10_hguard_lancer_lch7","kr_ar10_hguard_lancer_lch7_raild"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ar10_hguard_t1_Base;
	class kr_ar10_hguard_t2_Base;
	class kr_ar10_hguard_t3_Base;
	class kr_ar10_hguard_cmmg_mk3_rml9: kr_ar10_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_cmmg_mk3_rml9";
		descriptionShort = "$STR_kr_weapons_attachments_ar10_hguard_cmmg_mk3_rml9_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\ar10_handguard_cmmg_mk3_rml9.p3d";
		weight = 360;
		itemSize[] = {3,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml9_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml9.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "Mk47 256/409, SR25 406/508";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml9.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml9_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml9_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml9_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml9_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar10_hguard_cmmg_mk3_rml9_raild: kr_ar10_hguard_cmmg_mk3_rml9
	{
		attachments[] = {"kr_foregrip","kr_light_right"};
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_cmmg_mk3_rml9_raild";
		class kr_firearms
		{
			class barreltype1
			{
				grip = 1;
				light = 1;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype2: barreltype1{};
			class barreltype3
			{
				grip = 1;
				light = 1;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
		};
	};
	class kr_ar10_hguard_noveske_sws_n6: kr_ar10_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_noveske_sws_n6";
		descriptionShort = "$STR_kr_weapons_attachments_ar10_hguard_noveske_sws_n6_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\ar10_handguard_noveske_sws_n6.p3d";
		weight = 360;
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "Mk47 409, SR25 406/508";
		};
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 6;
				light = 6;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype3
			{
				grip = 6;
				light = 6;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype4
			{
				grip = 6;
				light = 6;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar10_hguard_noveske_sws_n6_long: kr_ar10_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_noveske_sws_n6_long";
		descriptionShort = "$STR_kr_weapons_attachments_ar10_hguard_noveske_sws_n6_long_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\ar10_handguard_noveske_sws_n6_long.p3d";
		weight = 360;
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_long_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_long.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "Mk47 409, SR25 406/508";
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 6;
				light = 6;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
			class barreltype3
			{
				grip = 6;
				light = 6;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype4
			{
				grip = 6;
				light = 6;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_long.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_long_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_long_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_long_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\noveske_sws_n6_long_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar10_hguard_cmmg_mk3_rml15: kr_ar10_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_cmmg_mk3_rml15";
		descriptionShort = "$STR_kr_weapons_attachments_ar10_hguard_cmmg_mk3_rml15_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\ar10_handguard_cmmg_mk3_rml15.p3d";
		weight = 360;
		itemSize[] = {5,1};
		attachments[] = {"kr_pointer_1","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml15_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml15.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Mk47 409, SR25 406/508";
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype4: barreltype3{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml15.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml15_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml15_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml15_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\cmmg_mk3_rml15_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar10_hguard_cmmg_mk3_rml15_raild: kr_ar10_hguard_cmmg_mk3_rml15
	{
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_cmmg_mk3_rml15_raild";
		class kr_firearms
		{
			class barreltype2
			{
				grip = 2;
				light = 2;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
			class barreltype3
			{
				grip = 2;
				light = 2;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype4: barreltype3{};
		};
	};
	class kr_ar10_hguard_kac_urx4: kr_ar10_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_kac_urx4";
		descriptionShort = "$STR_kr_weapons_attachments_ar10_hguard_kac_urx4_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\ar10_handguard_kac_urx4.p3d";
		weight = 360;
		itemSize[] = {5,1};
		attachments[] = {"kr_pointer_1","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\kac_urx4_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\kac_urx4.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Mk47 409, SR25 406/508";
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype4: barreltype3{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\kac_urx4.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\kac_urx4_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\kac_urx4_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\kac_urx4_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\kac_urx4_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar10_hguard_kac_urx4_raild: kr_ar10_hguard_kac_urx4
	{
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_kac_urx4_raild";
		class kr_firearms
		{
			class barreltype2
			{
				grip = 4;
				light = 4;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
			class barreltype3
			{
				grip = 4;
				light = 4;
				holo = 1;
				gasblock = 1;
				sight = 0;
			};
			class barreltype4: barreltype3{};
		};
	};
	class kr_ar10_hguard_jp_rsass_std: kr_ar10_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_jp_rsass_std";
		descriptionShort = "$STR_kr_weapons_attachments_ar10_hguard_jp_rsass_std_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\ar10_handguard_jp_rsass_std.p3d";
		weight = 360;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\jp_rsass_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\jp_rsass_std.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 16;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "Mk47 409, SR25 406/508";
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\jp_rsass_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\jp_rsass_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\jp_rsass_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\jp_rsass_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\jp_rsass_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar10_hguard_jp_rsass_std_raild: kr_ar10_hguard_jp_rsass_std
	{
		attachments[] = {"kr_foregrip","kr_light_right"};
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_jp_rsass_std_raild";
		class kr_firearms
		{
			class barreltype2
			{
				grip = 3;
				light = 3;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype3
			{
				grip = 3;
				light = 3;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype4: barreltype3{};
		};
	};
	class kr_ar10_hguard_lancer_lch7: kr_ar10_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_lancer_lch7";
		descriptionShort = "$STR_kr_weapons_attachments_ar10_hguard_lancer_lch7_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\ar10_handguard_lancer_lch7.p3d";
		weight = 360;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\lancer_lch7_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\lancer_lch7.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 17;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "Mk47 409, SR25 406/508";
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
			class barreltype3
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 1;
				sight = 1;
			};
			class barreltype4
			{
				grip = 0;
				light = 0;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\lancer_lch7.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\lancer_lch7_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\lancer_lch7_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\lancer_lch7_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar10_handguards\data\lancer_lch7_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar10_hguard_lancer_lch7_raild: kr_ar10_hguard_lancer_lch7
	{
		attachments[] = {"kr_foregrip","kr_light_right"};
		displayName = "$STR_kr_weapons_attachments_ar10_hguard_lancer_lch7_raild";
		class kr_firearms
		{
			class barreltype2
			{
				grip = 5;
				light = 5;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
			class barreltype3
			{
				grip = 5;
				light = 5;
				holo = 0;
				gasblock = 1;
				sight = 1;
			};
			class barreltype4: barreltype3
			{
				grip = 5;
				light = 5;
				holo = 0;
				gasblock = 0;
				sight = 0;
			};
		};
	};
};
