class CfgPatches
{
	class kr_attachments_fal_handguards
	{
		units[] = {"kr_fal_hguard_belgian_style","kr_fal_hguard_original","kr_fal_hguard_casv_short","kr_fal_hguard_casv_short_raild","kr_fal_hguard_casv_long","kr_fal_hguard_casv_long_raild","kr_fal_hguard_picatinny_quad","kr_fal_hguard_picatinny_f","kr_fal_hguard_aimsport_keymod","kr_fal_hguard_aimsport_keymod_raild","kr_fal_hguard_aimsport_mlok","kr_fal_hguard_aimsport_mlok_raild"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_fal_hguard_t1_Base;
	class kr_fal_hguard_t2_Base;
	class kr_fal_hguard_t3_Base;
	class kr_fal_hguard_belgian_style: kr_fal_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_hguard_belgian_style";
		descriptionShort = "$STR_kr_weapons_attachments_fal_hguard_belgian_style_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\fal_handguards\fal_handguard_belgian_style.p3d";
		weight = 510;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\belgian_style_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\belgian_style.rvmat"};
		recoilModifier[] = {0.85,0.85,1};	
		swayModifier[] = {0.85,1,0.85};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "FAL 533mm";
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 0;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\belgian_style.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\belgian_style_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\belgian_style_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\belgian_style_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\belgian_style_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_hguard_original: kr_fal_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_hguard_original";
		descriptionShort = "$STR_kr_weapons_attachments_fal_hguard_original_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\fal_handguards\fal_handguard_original.p3d";
		weight = 610;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\original_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\original.rvmat"};
		recoilModifier[] = {0.8,0.8,1};	
		swayModifier[] = {0.8,1,0.8};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "FAL 533mm";
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 0;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\original.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\original_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\original_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\original_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\original_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_hguard_casv_short: kr_fal_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_hguard_casv_short";
		descriptionShort = "$STR_kr_weapons_attachments_fal_hguard_casv_short_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\fal_handguards\fal_handguard_casv_short.p3d";
		weight = 232;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_short_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_short.rvmat"};
		recoilModifier[] = {0.85,0.85,1};	
		swayModifier[] = {0.85,1,0.85};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "FAL 280/406 mm";
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_short.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_short_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_short_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_short_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_short_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_hguard_casv_short_raild: kr_fal_hguard_casv_short
	{
		displayName = "$STR_kr_weapons_attachments_fal_hguard_casv_short_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "FAL 280/406 mm";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 5;
				light = 5;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
	};
	class kr_fal_hguard_casv_long: kr_fal_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_hguard_casv_long";
		descriptionShort = "$STR_kr_weapons_attachments_fal_hguard_casv_long_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\fal_handguards\fal_handguard_casv_long.p3d";
		weight = 224;
		attachments[] = {"kr_pointer_1","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_long_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_long.rvmat"};
		recoilModifier[] = {0.8,0.8,1};	
		swayModifier[] = {0.8,1,0.8};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "FAL 533 mm";
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
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_long.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_long_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_long_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_long_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\casv_long_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_hguard_casv_long_raild: kr_fal_hguard_casv_long
	{
		displayName = "$STR_kr_weapons_attachments_fal_hguard_casv_long_raild";
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right"};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "FAL 533 mm";
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 3;
				light = 3;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
	};
	class kr_fal_hguard_picatinny_quad: kr_fal_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_hguard_picatinny_quad";
		descriptionShort = "$STR_kr_weapons_attachments_fal_hguard_picatinny_quad_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\fal_handguards\fal_handguard_picatinny_quad.p3d";
		weight = 480;
		attachments[] = {"kr_foregrip","kr_light_left","kr_light_right"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_quad_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_quad.rvmat"};
		recoilModifier[] = {0.7,0.7,1};	
		swayModifier[] = {0.7,1,0.7};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "FAL 280/406 mm";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 5;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_quad.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_quad_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_quad_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_quad_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_quad_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_hguard_picatinny_f: kr_fal_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_hguard_picatinny_f";
		descriptionShort = "$STR_kr_weapons_attachments_fal_hguard_picatinny_f_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\fal_handguards\fal_handguard_picatinny_f.p3d";
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		weight = 211;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_f_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_f.rvmat"};
		recoilModifier[] = {0.75,0.75,1};	
		swayModifier[] = {0.75,1,0.75};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "FAL 533 mm";
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 5;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_f.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_f_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_f_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_f_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\picatinny_f_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_hguard_aimsport_keymod: kr_fal_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_hguard_aimsport_keymod";
		descriptionShort = "$STR_kr_weapons_attachments_fal_hguard_aimsport_keymod_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\fal_handguards\fal_handguard_aimsport_keymod.p3d";
		weight = 440;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_keymod_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_keymod.rvmat"};
		recoilModifier[] = {0.75,0.75,1};	
		swayModifier[] = {0.75,1,0.75};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 16;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "FAL 533 mm";
		};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 0;
				light = 0;
				holo = 0;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_keymod.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_keymod_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_keymod_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_keymod_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_keymod_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_hguard_aimsport_keymod_raild: kr_fal_hguard_aimsport_keymod
	{
		displayName = "$STR_kr_weapons_attachments_fal_hguard_aimsport_keymod_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			class barreltype2
			{
				grip = 1;
				light = 1;
				holo = 0;
				gasblock = 0;
				sight = 1;
			};
		};
	};
	class kr_fal_hguard_aimsport_mlok: kr_fal_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_hguard_aimsport_mlok";
		descriptionShort = "$STR_kr_weapons_attachments_fal_hguard_aimsport_mlok_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\fal_handguards\fal_handguard_aimsport_mlok.p3d";
		weight = 211;
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_mlok_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_mlok.rvmat"};
		recoilModifier[] = {0.65,0.65,1};	
		swayModifier[] = {0.65,1,0.65};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "FAL 533 mm";
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
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_mlok.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_mlok_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_mlok_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_mlok_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_handguards\data\aimsport_mlok_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_hguard_aimsport_mlok_raild: kr_fal_hguard_aimsport_mlok
	{
		displayName = "$STR_kr_weapons_attachments_fal_hguard_aimsport_mlok_raild";
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right"};
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
		};
	};
};
