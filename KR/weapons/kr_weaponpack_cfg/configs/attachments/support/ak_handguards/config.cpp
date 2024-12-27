class CfgPatches
{
	class kr_attachments_ak_handguards
	{
		units[] = {"kr_ak_hguard_akm_wood","kr_ak_hguard_vpo_136","kr_ak_hguard_vpo_209","kr_ak_hguard_akm_wood_damaged","kr_ak_hguard_wood","kr_ak_hguard_plastic","kr_ak_hguard_plastic_plum","kr_ak_hguard_ak100_plastic","kr_ak_hguard_m1b_mk3","kr_ak_hguard_m1b_mk3_raild","kr_ak_hguard_m1b_tdi","kr_ak_hguard_m1b_tdi_gld","kr_ak_hguard_m1b_tdi_red","kr_ak_hguard_m1b_tdi_raild","kr_ak_hguard_m1b_tdi_gld_raild","kr_ak_hguard_m1b_tdi_red_raild","kr_ak_hguard_aks74u","kr_ak_hguard_magpul_moe","kr_ak_hguard_magpul_moe_fde","kr_ak_hguard_magpul_moe_od","kr_ak_hguard_magpul_moe_plm","kr_ak_hguard_magpul_moe_sg","kr_ak_hguard_magpul_moe_raild","kr_ak_hguard_magpul_moe_fde_raild","kr_ak_hguard_magpul_moe_od_raild","kr_ak_hguard_magpul_moe_plm_raild","kr_ak_hguard_magpul_moe_sg_raild","kr_ak_hguard_magpul_zhukov","kr_ak_hguard_magpul_zhukov_fde","kr_ak_hguard_magpul_zhukov_plm","kr_ak_hguard_magpul_zhukov_raild","kr_ak_hguard_magpul_zhukov_fde_raild","kr_ak_hguard_magpul_zhukov_plm_raild","kr_ak_hguard_b10_swiss","kr_ak_hguard_zenit_b10m_b19","kr_ak_hguard_RS47","kr_ak_hguard_zenit_b11","kr_ak_hguard_hexagon","kr_ak_hguard_hexagon_red","kr_ak_hguard_hexagon_raild","kr_ak_hguard_hexagon_red_raild","kr_ak_hguard_agressor","kr_ak_hguard_krebs_ufm","kr_ak_hguard_krebs_ufm_raild","kr_ak_hguard_xrsu47su","kr_ak_hguard_vltor_cmrd","kr_ak_hguard_vltor_cmrd_raild","kr_ak_hguard_troy_combo","kr_ak_hguard_troy_combo_raild","kr_ak_hguard_vs_24_33c","kr_ak_hguard_vs_24_33c_wht","kr_ak_hguard_vs_24_33c_raild","kr_ak_hguard_vs_24_33c_wht_raild","kr_ak_hguard_zenit_b31c","kr_ak_hguard_alfa_arms_goliaf"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_attachments_support"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ak_hguard_Base;
	class kr_ak_hguard_t1_Base;
	class kr_ak_hguard_t2_Base;
	class kr_ak_hguard_t3_Base;
	class kr_ak_hguard_t4_Base;
	class kr_ak_hguard_akm_wood: kr_ak_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_akm_wood";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_akm_wood_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_akm_wood.p3d";
		weight = 260;
		itemSize[] = {2,1};
		attachments[] = {"kr_tape"};
		simpleHiddenSelections[] = {"hide_tape"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_vpo_136: kr_ak_hguard_akm_wood
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_vpo_136";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_vpo_136_dsc";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_136_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_136.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_136.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_136_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_136_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_136_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_136_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_vpo_209: kr_ak_hguard_akm_wood
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_vpo_209";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_vpo_209_dsc";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_209_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_209.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_209.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_209_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_209_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_209_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vpo_209_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_akm_wood_damaged: kr_ak_hguard_akm_wood
	{
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_akm_wood_damaged.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_damaged_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_damaged.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_damaged.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_damaged_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_damaged_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_damaged_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\akm_wood_damaged_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_wood: kr_ak_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_wood";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_wood_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_wood.p3d";
		weight = 260;
		itemSize[] = {2,1};
		attachments[] = {"kr_tape"};
		simpleHiddenSelections[] = {"hide_tape"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\wood_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\wood.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\wood.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\wood_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\wood_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\wood_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\wood_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_plastic: kr_ak_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_plastic";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_plastic_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_plastic.p3d";
		weight = 250;
		itemSize[] = {2,1};
		attachments[] = {"kr_tape"};
		simpleHiddenSelections[] = {"hide_tape"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\plastic_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\plastic.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\plastic.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\plastic_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\plastic_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\plastic_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\plastic_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_plastic_plum: kr_ak_hguard_plastic
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_plastic_plum";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\plastic_plum_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\plastic_plum.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
	};
	class kr_ak_hguard_ak100_plastic: kr_ak_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_ak100_plastic";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_ak100_plastic_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_ak100_plastic.p3d";
		weight = 270;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\ak100_plastic_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\ak100_plastic.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 0;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\ak100_plastic.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\ak100_plastic_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\ak100_plastic_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\ak100_plastic_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\ak100_plastic_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_m1b_mk3: kr_ak_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_m1b_mk3";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_m1b_mk3_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_m1b_mk3.p3d";
		weight = 450;
		attachments[] = {"kr_rail_mount"};
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_mk3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_mk3.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_mk3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_mk3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_mk3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_mk3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_mk3_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_m1b_mk3_raild: kr_ak_hguard_m1b_mk3
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_m1b_mk3_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 4;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
	};
	class kr_ak_hguard_m1b_tdi: kr_ak_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_m1b_tdi";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_m1b_tdi_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_m1b_tdi.p3d";
		weight = 221;
		itemSize[] = {3,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_tdi_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_tdi.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_tdi.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_tdi_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_tdi_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_tdi_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_tdi_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_m1b_tdi_gld: kr_ak_hguard_m1b_tdi
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_tdi_gld_co.paa"};
	};
	class kr_ak_hguard_m1b_tdi_red: kr_ak_hguard_m1b_tdi
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\m1b_tdi_red_co.paa"};
	};
	class kr_ak_hguard_m1b_tdi_raild: kr_ak_hguard_m1b_tdi
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_m1b_tdi_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 4;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
	};
	class kr_ak_hguard_m1b_tdi_gld_raild: kr_ak_hguard_m1b_tdi_gld
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_m1b_tdi_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 4;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
	};
	class kr_ak_hguard_m1b_tdi_red_raild: kr_ak_hguard_m1b_tdi_red
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_m1b_tdi_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 4;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
	};
	class kr_ak_hguard_aks74u: kr_ak_hguard_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_aks74u";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_aks74u_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_aks74u.p3d";
		inventorySlot[] = {"kr_aks74u_hndgrd"};
		weight = 116;
		itemSize[] = {2,1};
		attachments[] = {"kr_tape"};
		simpleHiddenSelections[] = {"hide_tape"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\aks74u_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\aks74u.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_type = "АКС74у";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\aks74u.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\aks74u_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\aks74u_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\aks74u_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\aks74u_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_magpul_moe: kr_ak_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_magpul_moe";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_magpul_moe_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_magpul_moe.p3d";
		weight = 221;
		itemSize[] = {2,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 0;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_magpul_moe_fde: kr_ak_hguard_magpul_moe
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe_fde_co.paa"};
	};
	class kr_ak_hguard_magpul_moe_od: kr_ak_hguard_magpul_moe
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe_od_co.paa"};
	};
	class kr_ak_hguard_magpul_moe_plm: kr_ak_hguard_magpul_moe
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe_plm_co.paa"};
	};
	class kr_ak_hguard_magpul_moe_sg: kr_ak_hguard_magpul_moe
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_moe_sg_co.paa"};
	};
	class kr_ak_hguard_magpul_moe_raild: kr_ak_hguard_magpul_moe
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_magpul_moe_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 5;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_magpul_moe_fde_raild: kr_ak_hguard_magpul_moe_fde
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_magpul_moe_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 5;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_magpul_moe_od_raild: kr_ak_hguard_magpul_moe_od
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_magpul_moe_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 5;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_magpul_moe_plm_raild: kr_ak_hguard_magpul_moe_plm
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_magpul_moe_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 5;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_magpul_moe_sg_raild: kr_ak_hguard_magpul_moe_sg
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_magpul_moe_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 5;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_magpul_zhukov: kr_ak_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_magpul_zhukov";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_magpul_zhukov_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_magpul_zhukov.p3d";
		weight = 310;
		itemSize[] = {3,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_zhukov_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_zhukov.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_firearms
		{
			grip = 3;
			light = 0;
			holo = 0;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_zhukov.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_zhukov_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_zhukov_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_zhukov_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_zhukov_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_magpul_zhukov_fde: kr_ak_hguard_magpul_zhukov
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_zhukov_fde_co.paa"};
	};
	class kr_ak_hguard_magpul_zhukov_plm: kr_ak_hguard_magpul_zhukov
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\magpul_zhukov_plm_co.paa"};
	};
	class kr_ak_hguard_magpul_zhukov_raild: kr_ak_hguard_magpul_zhukov
	{
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ak_hguard_magpul_zhukov_raild";
		class kr_firearms
		{
			grip = 3;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_magpul_zhukov_fde_raild: kr_ak_hguard_magpul_zhukov_fde
	{
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ak_hguard_magpul_zhukov_raild";
		class kr_firearms
		{
			grip = 3;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_magpul_zhukov_plm_raild: kr_ak_hguard_magpul_zhukov_plm
	{
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ak_hguard_magpul_zhukov_raild";
		class kr_firearms
		{
			grip = 3;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_b10_swiss: kr_ak_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_b10_swiss";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_b10_swiss_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_b10_swiss.p3d";
		weight = 210;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\b10_swiss_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\b10_swiss.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		attachments[] = {"kr_foregrip","kr_light_right"};
		class kr_firearms
		{
			grip = 1;
			light = 0;
			holo = 0;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\b10_swiss.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\b10_swiss_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\b10_swiss_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\b10_swiss_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\b10_swiss_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_zenit_b10m_b19: kr_ak_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_zenit_b10m_b19";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_zenit_b10m_b19_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_zenit_b10m_b19.p3d";
		weight = 260;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b10m_b19_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b10m_b19.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 4;
			light = 4;
			holo = 4;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b10m_b19.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b10m_b19_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b10m_b19_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b10m_b19_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b10m_b19_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_RS47: kr_ak_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_RS47";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_RS47_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_RS47.p3d";
		weight = 220;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\RS47_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\RS47.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 3;
			light = 1;
			holo = 3;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\RS47.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\RS47_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\RS47_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\RS47_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\RS47_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_zenit_b11: kr_ak_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_zenit_b11";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_zenit_b11_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_zenit_b11.p3d";
		inventorySlot[] = {"kr_aks74u_hndgrd"};
		weight = 150;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b11_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b11.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_description
		{
			kr_type = "АКС74у";
			kr_tier = 2;
		};
		class kr_firearms
		{
			grip = 1;
			light = 1;
			holo = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b11.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b11_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b11_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b11_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b11_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_hexagon: kr_ak_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_hexagon";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_hexagon_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_hexagon.p3d";
		weight = 167;
		itemSize[] = {4,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\hexagon_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\hexagon.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 16;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/101/103";
			kr_tier = 3;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\hexagon.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\hexagon_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\hexagon_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\hexagon_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\hexagon_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_hexagon_red: kr_ak_hguard_hexagon
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\hexagon_red_co.paa"};
	};
	class kr_ak_hguard_hexagon_raild: kr_ak_hguard_hexagon
	{
		attachments[] = {"kr_foregrip","kr_light_right","kr_bipod","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ak_hguard_hexagon_raild";
		class kr_firearms
		{
			grip = 5;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_hexagon_red_raild: kr_ak_hguard_hexagon_red
	{
		attachments[] = {"kr_foregrip","kr_light_right","kr_bipod","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ak_hguard_hexagon_raild";
		class kr_firearms
		{
			grip = 5;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_agressor: kr_ak_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_agressor";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_agressor_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_agressor.p3d";
		weight = 260;
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\agressor_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\agressor.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 17;
		};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 1;
			light = 2;
			holo = 2;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\agressor.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\agressor_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\agressor_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\agressor_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\agressor_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_krebs_ufm: kr_ak_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_krebs_ufm";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_krebs_ufm_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_krebs_ufm.p3d";
		weight = 260;
		itemSize[] = {3,1};
		attachments[] = {"kr_pointer_1","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\krebs_ufm_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\krebs_ufm.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 18;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/101/103";
			kr_tier = 3;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\krebs_ufm.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\krebs_ufm_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\krebs_ufm_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\krebs_ufm_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\krebs_ufm_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_krebs_ufm_raild: kr_ak_hguard_krebs_ufm
	{
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ak_hguard_krebs_ufm_raild";
		class kr_firearms
		{
			grip = 5;
			light = 0;
			holo = 5;
		};
	};
	class kr_ak_hguard_xrsu47su: kr_ak_hguard_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_xrsu47su";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_xrsu47su_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_xrsu47su.p3d";
		inventorySlot[] = {"kr_aks74u_hndgrd"};
		weight = 520;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\xrsu47su_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\xrsu47su.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 18;
		};
		class kr_description
		{
			kr_type = "АКС74у";
			kr_tier = 3;
		};
		class kr_firearms
		{
			grip = 3;
			light = 3;
			holo = 2;
		};
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_light_left"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\xrsu47su.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\xrsu47su_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\xrsu47su_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\xrsu47su_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\xrsu47su_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_vltor_cmrd: kr_ak_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_vltor_cmrd";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_vltor_cmrd_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_vltor_cmrd.p3d";
		weight = 397;
		itemSize[] = {4,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vltor_cmrd_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vltor_cmrd.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 19;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/101/103";
			kr_tier = 4;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vltor_cmrd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vltor_cmrd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vltor_cmrd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vltor_cmrd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vltor_cmrd_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_vltor_cmrd_raild: kr_ak_hguard_vltor_cmrd
	{
		displayName = "$STR_kr_weapons_attachments_ak_hguard_vltor_cmrd_raild";
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		class kr_firearms
		{
			grip = 4;
			light = 0;
			holo = 0;
		};
	};
	class kr_ak_hguard_troy_combo: kr_ak_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_troy_combo";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_troy_combo_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_troy_combo.p3d";
		weight = 550;
		itemSize[] = {4,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\troy_combo_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\troy_combo.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 19;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/101/103";
			kr_tier = 4;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\troy_combo.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\troy_combo_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\troy_combo_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\troy_combo_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\troy_combo_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_troy_combo_raild: kr_ak_hguard_troy_combo
	{
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ak_hguard_troy_combo_raild";
		class kr_firearms
		{
			grip = 4;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
	};
	class kr_ak_hguard_vs_24_33c: kr_ak_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_vs_24_33c";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_vs_24_33c_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_vs_24_33c.p3d";
		weight = 385;
		itemSize[] = {4,1};
		attachments[] = {"kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vs_24_33c_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vs_24_33c.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/101/103";
			kr_tier = 4;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vs_24_33c.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vs_24_33c_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vs_24_33c_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vs_24_33c_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vs_24_33c_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_vs_24_33c_wht: kr_ak_hguard_vs_24_33c
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\vs_24_33c_wht_co.paa"};
	};
	class kr_ak_hguard_vs_24_33c_raild: kr_ak_hguard_vs_24_33c
	{
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ak_hguard_vs_24_33c_raild";
		class kr_firearms
		{
			grip = 4;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
	};
	class kr_ak_hguard_vs_24_33c_wht_raild: kr_ak_hguard_vs_24_33c_wht
	{
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		displayName = "$STR_kr_weapons_attachments_ak_hguard_vs_24_33c_raild";
		class kr_firearms
		{
			grip = 4;
			light = 0;
			holo = 1;
			gasblock = 1;
		};
	};
	class kr_ak_hguard_zenit_b31c: kr_ak_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_zenit_b31c";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_zenit_b31c_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_zenit_b31c.p3d";
		weight = 390;
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b31c_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b31c.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		class kr_firearms
		{
			grip = 1;
			light = 3;
			holo = 2;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 4;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b31c.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b31c_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b31c_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b31c_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\zenit_b31c_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_hguard_alfa_arms_goliaf: kr_ak_hguard_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_hguard_alfa_arms_goliaf";
		descriptionShort = "$STR_kr_weapons_attachments_ak_hguard_alfa_arms_goliaf_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_handguards\ak_handguard_alfa_arms_goliaf.p3d";
		inventorySlot[] = {"kr_aks74u_hndgrd"};
		weight = 150;
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\alfa_arms_goliaf_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\alfa_arms_goliaf.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 21;
		};
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		class kr_description
		{
			kr_type = "АКС74у";
			kr_tier = 4;
		};
		class kr_firearms
		{
			grip = 2;
			light = 2;
			holo = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\alfa_arms_goliaf.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\alfa_arms_goliaf_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\alfa_arms_goliaf_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\alfa_arms_goliaf_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_handguards\data\alfa_arms_goliaf_destruct.rvmat"}}};
				};
			};
		};
	};
};
