class CfgPatches
{
	class kr_weapatt_muzzle308
	{
		units[] = {"kr_muzzle308_flashhider_hk_prolonged","kr_muzzle308_flashhider_armanent_X3","kr_muzzle308_flashhider_fortis_red","kr_muzzle308_flashhider_m11_severe_duty","kr_muzzle308_flashhider_kac_qdc_fsk","kr_muzzle308_flashhider_keeno_arms_shrewd","kr_muzzle308_flashhider_odin_works_atlas_7","kr_muzzle308_flashhider_kac_qdc_mbk","kr_muzzle308_flashhider_surefire_warden","kr_muzzle308_suppressor_sig_SRD762Ti","kr_muzzle308_suppressor_sig_srd762qd","kr_muzzle308_suppressor_kac_prs_qdc"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_suppressor_t2_Base;
	class kr_suppressor_t3_Base;
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	class kr_muzzle_t4_Base;
	class kr_muzzle308_flashhider_hk_prolonged: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_flashhider_hk_prolonged";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_flashhider_hk_prolonged_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_flashhider_hk_prolonged.p3d";
		weight = 60;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\hk_prolonged_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\hk_prolonged.rvmat"};
		class kr_description
		{
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\hk_prolonged.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\hk_prolonged_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\hk_prolonged_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\hk_prolonged_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\hk_prolonged_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_flashhider_armanent_X3: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_flashhider_armanent_X3";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_flashhider_armanent_X3_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_flashhider_armanent_X3.p3d";
		weight = 60;
		itemModelLength = 0.054;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\armanent_X3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\armanent_X3.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\armanent_X3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\armanent_X3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\armanent_X3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\armanent_X3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\armanent_X3_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_flashhider_fortis_red: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_flashhider_fortis_red";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_flashhider_fortis_red_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_flashhider_fortis_red.p3d";
		weight = 108;
		itemModelLength = 0.082;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\fortis_red_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\fortis_red.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\fortis_red.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\fortis_red_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\fortis_red_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\fortis_red_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\fortis_red_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_flashhider_m11_severe_duty: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_flashhider_m11_severe_duty";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_flashhider_m11_severe_duty_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_flashhider_m11_severe_duty.p3d";
		weight = 60;
		itemModelLength = 0.064;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\m11_severe_duty_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\m11_severe_duty.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\m11_severe_duty.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\m11_severe_duty_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\m11_severe_duty_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\m11_severe_duty_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\m11_severe_duty_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_flashhider_kac_qdc_fsk: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_flashhider_kac_qdc_fsk";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_flashhider_kac_qdc_fsk_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_flashhider_kac_qdc_fsk.p3d";
		weight = 60;
		itemModelLength = 0.076;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_fsk_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_fsk.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_fsk.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_fsk_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_fsk_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_fsk_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_fsk_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_flashhider_keeno_arms_shrewd: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_flashhider_keeno_arms_shrewd";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_flashhider_keeno_arms_shrewd_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_flashhider_keeno_arms_shrewd.p3d";
		weight = 60;
		itemModelLength = 0.073;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\keeno_arms_shrewd_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\keeno_arms_shrewd.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\keeno_arms_shrewd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\keeno_arms_shrewd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\keeno_arms_shrewd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\keeno_arms_shrewd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\keeno_arms_shrewd_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_flashhider_odin_works_atlas_7: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_flashhider_odin_works_atlas_7";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_flashhider_odin_works_atlas_7_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_flashhider_odin_works_atlas_7.p3d";
		weight = 60;
		itemModelLength = 0.077;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\odin_works_atlas_7_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\odin_works_atlas_7.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\odin_works_atlas_7.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\odin_works_atlas_7_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\odin_works_atlas_7_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\odin_works_atlas_7_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\odin_works_atlas_7_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_flashhider_kac_qdc_mbk: kr_muzzle_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_flashhider_kac_qdc_mbk";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_flashhider_kac_qdc_mbk_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_flashhider_kac_qdc_mbk.p3d";
		weight = 60;
		itemModelLength = 0.078;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_mbk_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_mbk.rvmat"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_mbk.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_mbk_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_mbk_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_mbk_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_qdc_mbk_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_flashhider_surefire_warden: kr_muzzle_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_flashhider_surefire_warden";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_flashhider_surefire_warden_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_flashhider_surefire_warden.p3d";
		weight = 60;
		itemModelLength = 0.077;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\surefire_warden_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\surefire_warden.rvmat"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\surefire_warden.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\surefire_warden_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\surefire_warden_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\surefire_warden_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\surefire_warden_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_suppressor_sig_SRD762Ti: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_suppressor_sig_SRD762Ti";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_suppressor_sig_SRD762Ti_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_suppressor_sig_SRD762Ti.p3d";
		weight = 60;
		itemModelLength = 0.177;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_SRD762Ti_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_SRD762Ti.rvmat"};
		class kr_description
		{
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_SRD762Ti.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_SRD762Ti_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_SRD762Ti_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_SRD762Ti_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_SRD762Ti_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_suppressor_sig_srd762qd: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_suppressor_sig_srd762qd";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_suppressor_sig_srd762qd_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_suppressor_sig_srd762qd.p3d";
		weight = 60;
		itemModelLength = 0.178;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_srd762qd_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_srd762qd.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_srd762qd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_srd762qd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_srd762qd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_srd762qd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\sig_srd762qd_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle308_suppressor_kac_prs_qdc: kr_suppressor_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle308_suppressor_kac_prs_qdc";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle308_suppressor_kac_prs_qdc_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\muzzle308_suppressor_kac_prs_qdc.p3d";
		weight = 60;
		itemModelLength = 0.233;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_prs_qdc_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_prs_qdc.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_prs_qdc.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_prs_qdc_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_prs_qdc_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_prs_qdc_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle308\data\kac_prs_qdc_destruct.rvmat"}}};
				};
			};
		};
	};
};
