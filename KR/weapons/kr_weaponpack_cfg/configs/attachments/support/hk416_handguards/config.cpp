class CfgPatches
{
	class kr_attachments_hk416_handguards
	{
		units[] = {"kr_hk416_hguard_hk_quad_rail","kr_hk416_hguard_midwest_9","kr_hk416_hguard_midwest_9_raild","kr_hk416_hguard_hk_quad_rail_extended","kr_hk416_hguard_midwest_13_5","kr_hk416_hguard_midwest_13_5_raild","kr_hk416_hguard_si_crux","kr_hk416_hguard_si_crux_raild","kr_hk416_hguard_troy_carbon_fiber","kr_hk416_hguard_troy_carbon_fiber_raild","kr_hk416_hguard_hk_mrs_keymod","kr_hk416_hguard_hk_mrs_keymod_raild"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_hk416_hguard_t1_Base;
	class kr_hk416_hguard_t2_Base;
	class kr_hk416_hguard_t3_Base;
	class kr_hk416_hguard_hk_quad_rail: kr_hk416_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_hk_quad_rail";
		descriptionShort = "$STR_kr_weapons_attachments_hk416_hguard_hk_quad_rail_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\hk416_handguard_hk_quad_rail.p3d";
		weight = 399;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "HK416";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left","kr_bipod"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 4;
				light = 5;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_hk416_hguard_midwest_9: kr_hk416_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_midwest_9";
		descriptionShort = "$STR_kr_weapons_attachments_hk416_hguard_midwest_9_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\hk416_handguard_midwest_9.p3d";
		weight = 280;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_9_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_9.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "HK416";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_9.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_9_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_9_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_9_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_9_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_hk416_hguard_midwest_9_raild: kr_hk416_hguard_midwest_9
	{
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_midwest_9_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "HK416";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 3;
				light = 4;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
	};
	class kr_hk416_hguard_hk_quad_rail_extended: kr_hk416_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_hk_quad_rail_extended";
		descriptionShort = "$STR_kr_weapons_attachments_hk416_hguard_hk_quad_rail_extended_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\hk416_handguard_hk_quad_rail_extended.p3d";
		weight = 540;
		itemSize[] = {6,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_extended_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_extended.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "HK416";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 4;
				light = 5;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_extended.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_extended_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_extended_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_extended_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_quad_rail_extended_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_hk416_hguard_midwest_13_5: kr_hk416_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_midwest_13_5";
		descriptionShort = "$STR_kr_weapons_attachments_hk416_hguard_midwest_13_5_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\hk416_handguard_midwest_13_5.p3d";
		weight = 370;
		itemSize[] = {4,1};
		attachments[] = {"kr_pointer_1","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_13_5_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_13_5.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "HK416";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_firearms
		{
			class barreltype1
			{
				holo = 1;
				grip = 0;
				sight = 1;
				light = 0;
				gasblock = 0;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_13_5.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_13_5_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_13_5_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_13_5_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\midwest_13_5_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_hk416_hguard_midwest_13_5_raild: kr_hk416_hguard_midwest_13_5
	{
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_midwest_13_5_raild";
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right"};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "HK416";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 3;
				light = 3;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
	};
	class kr_hk416_hguard_si_crux: kr_hk416_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_si_crux";
		descriptionShort = "$STR_kr_weapons_attachments_hk416_hguard_si_crux_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\hk416_handguard_si_crux.p3d";
		weight = 440;
		itemSize[] = {6,1};
		attachments[] = {"kr_pointer_1","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\si_crux_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\si_crux.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "HK416";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 16;
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\si_crux.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\si_crux_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\si_crux_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\si_crux_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\si_crux_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_hk416_hguard_si_crux_raild: kr_hk416_hguard_si_crux
	{
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_si_crux_raild";
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod"};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "HK416";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 1;
				light = 1;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
	};
	class kr_hk416_hguard_troy_carbon_fiber: kr_hk416_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_troy_carbon_fiber";
		descriptionShort = "$STR_kr_weapons_attachments_hk416_hguard_troy_carbon_fiber_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\hk416_handguard_troy_carbon_fiber.p3d";
		weight = 250;
		itemSize[] = {5,1};
		attachments[] = {"kr_pointer_1","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\troy_carbon_fiber_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\troy_carbon_fiber.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "HK416";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 17;
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\troy_carbon_fiber.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\troy_carbon_fiber_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\troy_carbon_fiber_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\troy_carbon_fiber_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\troy_carbon_fiber_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_hk416_hguard_troy_carbon_fiber_raild: kr_hk416_hguard_troy_carbon_fiber
	{
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_troy_carbon_fiber_raild";
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod"};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "HK416";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 1;
				light = 1;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
	};
	class kr_hk416_hguard_hk_mrs_keymod: kr_hk416_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_hk_mrs_keymod";
		descriptionShort = "$STR_kr_weapons_attachments_hk416_hguard_hk_mrs_keymod_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\hk416_handguard_hk_mrs_keymod.p3d";
		weight = 390;
		itemSize[] = {4,1};
		attachments[] = {"kr_pointer_1","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_mrs_keymod_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_mrs_keymod.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "HK416";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 18;
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_mrs_keymod.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_mrs_keymod_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_mrs_keymod_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_mrs_keymod_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\hk416_handguards\data\hk_mrs_keymod_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_hk416_hguard_hk_mrs_keymod_raild: kr_hk416_hguard_hk_mrs_keymod
	{
		displayName = "$STR_kr_weapons_attachments_hk416_hguard_hk_mrs_keymod_raild";
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod"};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "HK416";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 2;
				light = 2;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
	};
};
