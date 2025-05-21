class CfgPatches
{
	class kr_weapatt_muzzleMulti
	{
		units[] = {"kr_muzzleMulti_flashhider_ak74_izhmash_std","kr_muzzleMulti_flashhider_aks74u_izhmash_std","kr_muzzleMulti_flashhider_awc_psr","kr_muzzleMulti_flashhider_lantac_dgn","kr_muzzleMulti_flashhider_taa_zk_23","kr_muzzleMulti_flashhider_nordic_corvette","kr_muzzleMulti_flashhider_zenit_dtk1","kr_muzzleMulti_flashhider_dd_wave","kr_muzzleMulti_flashhider_pws_cqb","kr_muzzleMulti_flashhider_rrd_4c","kr_muzzleMulti_suppressor_impro_oilFilter","kr_muzzleMulti_suppressor_rotor_43","kr_muzzleMulti_suppressor_thunder_beast_ultra_5","kr_muzzleMulti_suppressor_silencerco_hybrid_46","kr_muzzleMulti_suppressor_wave_qd","kr_muzzleMulti_suppressor_aac_762_sdn_6","kr_muzzleMulti_suppressor_awc_thor_psr_xl"};
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
	class kr_muzzleMulti_flashhider_ak74_izhmash_std: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_ak74_izhmash_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_ak74_izhmash_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_flashhider_ak74_izhmash_std.p3d";
		weight = 60;
		itemModelLength = 0.081;
		inventorySlot[] = {"kr_muzzle762_39","kr_muzzle545","kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\ak74_izhmash_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\ak74_izhmash_std.rvmat"};
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
			kr_caliber = "AK: 5.45, 556, 7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\ak74_izhmash_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\ak74_izhmash_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\ak74_izhmash_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\ak74_izhmash_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\ak74_izhmash_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_flashhider_aks74u_izhmash_std: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_aks74u_izhmash_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_aks74u_izhmash_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_flashhider_aks74u_izhmash_std.p3d";
		weight = 60;
		itemModelLength = 0.089;
		inventorySlot[] = {"kr_muzzle762_39","kr_muzzle545","kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aks74u_izhmash_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aks74u_izhmash_std.rvmat"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0006;
		noiseShootModifier = 0;
		barrelArmor = 20000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_caliber = "AK: 5.45, 556, 7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aks74u_izhmash_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aks74u_izhmash_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aks74u_izhmash_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aks74u_izhmash_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aks74u_izhmash_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_flashhider_awc_psr: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_awc_psr";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_awc_psr_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_flashhider_awc_psr.p3d";
		weight = 60;
		itemModelLength = 0.051;
		inventorySlot[] = {"kr_muzzle556","kr_muzzle308","kr_muzzle338","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_psr_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_psr.rvmat"};
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
			kr_caliber = "5.56, .338, 7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_psr.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_psr_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_psr_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_psr_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_psr_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_flashhider_lantac_dgn: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_lantac_dgn";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_lantac_dgn_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_flashhider_lantac_dgn.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle308","kr_muzzle762_39","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\lantac_dgn_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\lantac_dgn.rvmat"};
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
			kr_caliber = "7.62x39/51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\lantac_dgn.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\lantac_dgn_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\lantac_dgn_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\lantac_dgn_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\lantac_dgn_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_flashhider_taa_zk_23: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_taa_zk_23";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_taa_zk_23_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_flashhider_taa_zk_23.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle556","kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\taa_zk_23_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\taa_zk_23.rvmat"};
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
			kr_caliber = "5.56, 7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\taa_zk_23.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\taa_zk_23_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\taa_zk_23_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\taa_zk_23_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\taa_zk_23_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_flashhider_nordic_corvette: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_nordic_corvette";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_nordic_corvette_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_flashhider_nordic_corvette.p3d";
		weight = 60;
		itemModelLength = 0.044;
		inventorySlot[] = {"kr_muzzle556","kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\nordic_corvette_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\nordic_corvette.rvmat"};
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
			kr_caliber = "5.56, 7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\nordic_corvette.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\nordic_corvette_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\nordic_corvette_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\nordic_corvette_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\nordic_corvette_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_flashhider_zenit_dtk1: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_zenit_dtk1";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_zenit_dtk1_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_flashhider_zenit_dtk1.p3d";
		weight = 60;
		itemModelLength = 0.089;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		inventorySlot[] = {"kr_muzzle762_39","kr_muzzle545"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\zenit_dtk1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\zenit_dtk1.rvmat"};
		dispersionModifier = -0.0007;
		noiseShootModifier = 0;
		barrelArmor = 12000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.45, 7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\zenit_dtk1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\zenit_dtk1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\zenit_dtk1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\zenit_dtk1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\zenit_dtk1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_flashhider_dd_wave: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_dd_wave";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_dd_wave_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_flashhider_dd_wave.p3d";
		weight = 60;
		itemModelLength = 0.055;
		inventorySlot[] = {"kr_muzzle556","kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\dd_wave_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\dd_wave.rvmat"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0008;
		noiseShootModifier = 0;
		barrelArmor = 12000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.56, 7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\dd_wave.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\dd_wave_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\dd_wave_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\dd_wave_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\dd_wave_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_flashhider_pws_cqb: kr_muzzle_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_pws_cqb";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_pws_cqb_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_flashhider_pws_cqb.p3d";
		weight = 60;
		itemModelLength = 0.062;
		inventorySlot[] = {"kr_muzzle762_39","kr_muzzle545","kr_muzzle556"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\pws_cqb_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\pws_cqb.rvmat"};
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
			kr_caliber = "5.56, 5.45, 7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\pws_cqb.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\pws_cqb_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\pws_cqb_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\pws_cqb_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\pws_cqb_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_flashhider_rrd_4c: kr_muzzle_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_rrd_4c";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_flashhider_rrd_4c_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_flashhider_rrd_4c.p3d";
		inventorySlot[] = {"kr_muzzle762_39","kr_muzzle545"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rrd_4c_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rrd_4c.rvmat"};
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0008;
		noiseShootModifier = 0;
		barrelArmor = 9000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.45, 7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rrd_4c.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rrd_4c_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rrd_4c_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rrd_4c_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rrd_4c_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_suppressor_impro_oilFilter: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_impro_oilFilter";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_impro_oilFilter_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_suppressor_impro_oilFilter.p3d";
		weight = 900;
		itemModelLength = 0.14;
		itemSize[] = {2,2};
		inventorySlot[] = {"kr_muzzle50bmg", "kr_muzzle366", "kr_muzzle545", "kr_muzzle556", "kr_muzzle338", "kr_muzzle308", "kr_muzzle277", "kr_muzzle762_39", "kr_muzzle762_54", "kr_muzzle762_54_mosin", "kr_muzzle12_76", "kr_muzzle127_55", "kr_muzzle_9_39_9a91"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\oilfilter_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\oilfilter.rvmat"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.25,1.25,1.25};
		dispersionModifier = 0.0003;
		noiseShootModifier = -0.9;
		barrelArmor = 1000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "Rifles/Assault";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\oilfilter.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\oilfilter_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\oilfilter_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\oilfilter_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\oilfilter_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_suppressor_rotor_43: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_rotor_43";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_rotor_43_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_suppressor_rotor_43.p3d";
		weight = 60;
		itemModelLength = 0.14;
		inventorySlot[] = {"kr_muzzle556","kr_muzzle762_39"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rotor_43_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rotor_43.rvmat"};
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
			kr_caliber = "5.56, 7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rotor_43.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rotor_43_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rotor_43_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rotor_43_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\rotor_43_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_suppressor_thunder_beast_ultra_5: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_thunder_beast_ultra_5";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_thunder_beast_ultra_5_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_suppressor_thunder_beast_ultra_5.p3d";
		weight = 60;
		itemModelLength = 0.128;
		inventorySlot[] = {"kr_muzzle556","kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\thunder_beast_ultra_5_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\thunder_beast_ultra_5.rvmat"};
		recoilModifier[] = {1.0,1.0,0.9};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = 0.0006;
		noiseShootModifier = -0.93;
		barrelArmor = 7000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class kr_description
		{
			kr_caliber = "5.56, 7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\thunder_beast_ultra_5.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\thunder_beast_ultra_5_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\thunder_beast_ultra_5_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\thunder_beast_ultra_5_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\thunder_beast_ultra_5_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_suppressor_silencerco_hybrid_46: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_silencerco_hybrid_46";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_silencerco_hybrid_46_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_suppressor_silencerco_hybrid_46.p3d";
		weight = 60;
		itemModelLength = 0.197;
		inventorySlot[] = {"kr_muzzle9_19","kr_muzzle556","kr_muzzle308","kr_muzzle762_39","kr_muzzle545","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\silencerco_hybrid_46_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\silencerco_hybrid_46.rvmat"};
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
			kr_caliber = "5.56, 5.45, 7.62x39/51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\silencerco_hybrid_46.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\silencerco_hybrid_46_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\silencerco_hybrid_46_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\silencerco_hybrid_46_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\silencerco_hybrid_46_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_suppressor_wave_qd: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_wave_qd";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_wave_qd_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_suppressor_wave_qd.p3d";
		weight = 60;
		itemModelLength = 0.193;
		inventorySlot[] = {"kr_muzzle556","kr_muzzle308","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\wave_qd_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\wave_qd.rvmat"};
		recoilModifier[] = {1.0,0.9,0.9};
		swayModifier[] = {1.0,1.2,1.2};
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
			kr_caliber = "5.56, 7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\wave_qd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\wave_qd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\wave_qd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\wave_qd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\wave_qd_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_suppressor_aac_762_sdn_6: kr_suppressor_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_aac_762_sdn_6";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_aac_762_sdn_6_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_suppressor_aac_762_sdn_6.p3d";
		weight = 60;
		itemModelLength = 0.229;
		inventorySlot[] = {"kr_muzzle556","kr_muzzle308","kr_muzzle762_39","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aac_762_sdn_6_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aac_762_sdn_6.rvmat"};
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
			kr_caliber = "5.56, 7.62x39/51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aac_762_sdn_6.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aac_762_sdn_6_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aac_762_sdn_6_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aac_762_sdn_6_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\aac_762_sdn_6_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzleMulti_suppressor_awc_thor_psr_xl: kr_suppressor_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_awc_thor_psr_xl";
		descriptionShort = "$STR_kr_weapons_attachments_muzzleMulti_suppressor_awc_thor_psr_xl_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\muzzleMulti_suppressor_awc_thor_psr_xl.p3d";
		weight = 60;
		itemModelLength = 0.205;
		inventorySlot[] = {"kr_muzzle556","kr_muzzle308","kr_muzzle338","kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_thor_psr_xl_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_thor_psr_xl.rvmat"};
		recoilModifier[] = {1.0,1.0,0.9};
		swayModifier[] = {1.0,1.0,1.0};
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
			kr_caliber = "5.56, .338, 7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_thor_psr_xl.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_thor_psr_xl_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_thor_psr_xl_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_thor_psr_xl_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzleMulti\data\awc_thor_psr_xl_destruct.rvmat"}}};
				};
			};
		};
	};
};
