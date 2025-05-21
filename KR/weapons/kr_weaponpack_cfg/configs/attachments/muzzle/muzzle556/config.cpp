class CfgPatches
{
	class kr_weapatt_muzzle556
	{
		units[] = {"kr_muzzle556_flashhider_kac_qd","kr_muzzle556_flashhider_g36_complite","kr_muzzle556_flashhider_g36_incomplete","kr_muzzle556_flashhider_bulletec_st_6012","kr_muzzle556_flashhider_ferfrans","kr_muzzle556_flashhider_g36_long","kr_muzzle556_flashhider_kac_qdc_3","kr_muzzle556_flashhider_ferfrans_cqb_crd","kr_muzzle556_flashhider_troy_claymore","kr_muzzle556_flashhider_vp_09","kr_muzzle556_suppressor_sdqd_griffin_m4sd","kr_muzzle556_suppressor_kac_qdc","kr_muzzle556_suppressor_kac_nt4"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_suppressor_t2_Base;
	class kr_suppressor_t3_Base;
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	class kr_muzzle_t4_Base;
	class kr_muzzle556_flashhider_kac_qd: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_flashhider_kac_qd";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_flashhider_kac_qd_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_flashhider_kac_qd.p3d";
		weight = 60;
		itemModelLength = 0.047;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qd_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qd.rvmat"};
		recoilModifier[] = {0.98,0.98,0.98};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = 0;
		noiseShootModifier = -0.05;
		barrelArmor = 20000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};

		class kr_description
		{
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qd_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_flashhider_g36_complite: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_flashhider_g36_complite";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_flashhider_g36_complite_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\muzzle556_flashhider_g36_complite.p3d";
		weight = 60;
		itemModelLength = 0.047;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_complite_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_complite.rvmat"};
		recoilModifier[] = {0.98,0.98,0.93};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.05;
		barrelArmor = 20000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};

		class kr_description
		{
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_complite.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_complite_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_complite_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_complite_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_complite_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_flashhider_g36_incomplete: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_flashhider_g36_incomplete";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_flashhider_g36_incomplete_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\muzzle556_flashhider_g36_incomplete.p3d";
		weight = 60;
		itemModelLength = 0.047;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_incomplete_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_incomplete.rvmat"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0008;
		noiseShootModifier = 0;
		barrelArmor = 20000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};

		class kr_description
		{
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_incomplete.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_incomplete_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_incomplete_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_incomplete_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_incomplete_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_flashhider_bulletec_st_6012: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_flashhider_bulletec_st_6012";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_flashhider_bulletec_st_6012_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_flashhider_bulletec_st_6012.p3d";
		weight = 60;
		itemModelLength = 0.078;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\bulletec_st_6012_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\bulletec_st_6012.rvmat"};
		recoilModifier[] = {0.97,0.97,0.9};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.1;
		barrelArmor = 15000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
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
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\bulletec_st_6012.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\bulletec_st_6012_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\bulletec_st_6012_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\bulletec_st_6012_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\bulletec_st_6012_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_flashhider_ferfrans: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_flashhider_ferfrans";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_flashhider_ferfrans_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_flashhider_ferfrans.p3d";
		weight = 60;
		itemModelLength = 0.058;
		inventorySlot[] = {"kr_muzzle556"};
		simpleHiddenSelections[] = {"hide_part"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans.rvmat"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0009;
		noiseShootModifier = 0;
		barrelArmor = 15000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
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
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_flashhider_g36_long: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_flashhider_g36_long";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_flashhider_g36_long_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\muzzle556_flashhider_g36_long.p3d";
		weight = 60;
		itemModelLength = 0.047;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_long_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_long.rvmat"};
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0003;
		noiseShootModifier = 0;
		barrelArmor = 15000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
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
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_long.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_long_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_long_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_long_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle556\data\g36_long_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_flashhider_kac_qdc_3: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_flashhider_kac_qdc_3";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_flashhider_kac_qdc_3_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_flashhider_kac_qdc_3.p3d";
		weight = 60;
		itemModelLength = 0.053;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_3.rvmat"};
		recoilModifier[] = {0.95,0.95,0.87};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.15;
		barrelArmor = 12000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
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
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_3_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_flashhider_ferfrans_cqb_crd: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_flashhider_ferfrans_cqb_crd";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_flashhider_ferfrans_cqb_crd_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_flashhider_ferfrans.p3d";
		weight = 60;
		itemModelLength = 0.058;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans.rvmat"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.001;
		noiseShootModifier = 0;
		barrelArmor = 12000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
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
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_flashhider_troy_claymore: kr_muzzle_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_flashhider_troy_claymore";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_flashhider_troy_claymore_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_flashhider_troy_claymore.p3d";
		weight = 60;
		itemModelLength = 0.055;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\troy_claymore_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\troy_claymore.rvmat"};
		recoilModifier[] = {0.93,0.93,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.15;
		barrelArmor = 9000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
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
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\troy_claymore.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\troy_claymore_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\troy_claymore_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\troy_claymore_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\troy_claymore_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_flashhider_vp_09: kr_muzzle_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_flashhider_vp_09";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_flashhider_vp_09_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_flashhider_vp_09.p3d";
		weight = 60;
		itemModelLength = 0.06;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\vp_09_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\vp_09.rvmat"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0011;
		noiseShootModifier = 0;
		barrelArmor = 9000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
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
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\vp_09.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\vp_09_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\vp_09_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\vp_09_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\vp_09_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_suppressor_sdqd_griffin_m4sd: kr_suppressor_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_suppressor_sdqd_griffin_m4sd";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_suppressor_sdqd_griffin_m4sd_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_suppressor_sdqd_griffin_m4sd.p3d";
		weight = 397;
		itemModelLength = 0.135;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\sdqd_griffin_m4sd_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\sdqd_griffin_m4sd.rvmat"};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.1,1.1,1.1};
		dispersionModifier = 0;
		noiseShootModifier = -0.98;
		barrelArmor = 5000;

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
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\sdqd_griffin_m4sd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\sdqd_griffin_m4sd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\sdqd_griffin_m4sd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\sdqd_griffin_m4sd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\sdqd_griffin_m4sd_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_suppressor_kac_qdc: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_suppressor_kac_qdc";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_suppressor_kac_qdc_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_suppressor_kac_qdc.p3d";
		weight = 60;
		itemModelLength = 0.158;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc.rvmat"};
		recoilModifier[] = {1.0,0.9,0.9};
		swayModifier[] = {1.2,1.0,1.2};
		dispersionModifier = 0.0001;
		noiseShootModifier = -0.95;
		barrelArmor = 6000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
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
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_qdc_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle556_suppressor_kac_nt4: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle556_suppressor_kac_nt4";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle556_suppressor_kac_nt4_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_suppressor_kac_nt4.p3d";
		weight = 60;
		itemModelLength = 0.168;
		inventorySlot[] = {"kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_nt4_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_nt4.rvmat"};
		recoilModifier[] = {1.0,1.0,0.9};
		swayModifier[] = {1.2,1.2,1.2};
		dispersionModifier = 0.0002;
		noiseShootModifier = -0.93;
		barrelArmor = 7000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};

		class kr_description
		{
			kr_caliber = "5.56x45";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_nt4.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_nt4_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_nt4_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_nt4_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\kac_nt4_destruct.rvmat"}}};
				};
			};
		};
	};
};
