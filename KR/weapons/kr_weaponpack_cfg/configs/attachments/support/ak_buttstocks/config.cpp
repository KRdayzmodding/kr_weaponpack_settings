class CfgPatches
{
	class kr_attachments_ak_buttstocks
	{
		units[] = {"kr_ak_stock_plastic","kr_ak_stock_plastic_plum","kr_ak_stock_wood","kr_ak_stock_akm_wood","kr_ak_stock_vpo_136","kr_ak_stock_vpo_209","kr_ak_stock_akts","kr_ak_fstock_rail","kr_ak_fstock_plastic_f","kr_ak_fstock_vpo205","kr_ak_fstock_akts_fold","kr_ak_stock_hexagon_kocherga","kr_ak_stock_fab_defense_uas","kr_ak_stock_zenit_pt_1","kr_ak_fstock_zenit_pt_1","kr_ak_stock_promag_archangel_opfor","kr_ak_stock_magpul_zhukov_s","kr_ak_stock_hera_arms_cqr47","kr_ak_stock_zenit_pt_3","kr_ak_fstock_zenit_pt_3"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_attachments_support"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ak_stock_t1_Base;
	class kr_ak_stock_t2_Base;
	class kr_ak_stock_t3_Base;
	class kr_ak_stock_plastic: kr_ak_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_plastic";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_plastic_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_plastic.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		attachments[] = {"kr_ak_buttpad","kr_tape","kr_meds"};
		simpleHiddenSelections[] = {"hide_tape","hide_meds"};
		weight = 350;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 22;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_plastic_plum: kr_ak_stock_plastic
	{
		displayName = "$STR_kr_weapons_attachments_ak_stock_plastic_plum";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_plum_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_plum.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 22;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_plum.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_plum_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_plum_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_plum_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_plum_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_wood: kr_ak_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_wood";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_wood_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_wood.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		attachments[] = {"kr_ak_buttpad","kr_tape","kr_meds"};
		simpleHiddenSelections[] = {"hide_tape","hide_meds"};
		weight = 450;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\wood_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\wood.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 21;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\wood.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\wood_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\wood_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\wood_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\wood_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_akm_wood: kr_ak_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_akm_wood";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_akm_wood_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_akm_wood.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		attachments[] = {"kr_ak_buttpad","kr_tape","kr_meds"};
		simpleHiddenSelections[] = {"hide_tape","hide_meds"};
		weight = 450;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akm_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akm_wood.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akm_wood.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akm_wood_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akm_wood_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akm_wood_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akm_wood_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_vpo_136: kr_ak_stock_akm_wood
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_vpo_136";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_vpo_136_dsc";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_136_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_136.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_136.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_136_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_136_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_136_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_136_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_vpo_209: kr_ak_stock_akm_wood
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_vpo_209";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_vpo_209_dsc";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_209_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_209.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_209.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_209_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_209_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_209_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo_209_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_akts: kr_ak_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_akts";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_akts_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_akts.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		simpleHiddenSelections[] = {"hide_tubepart"};
		attachments[] = {"kr_ar_bttstck"};
		weight = 240;
		haveTube = 1;
		isTube = 1;
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_fstock_rail: kr_ak_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_fstock_rail";
		descriptionShort = "$STR_kr_weapons_attachments_ak_fstock_rail_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_fld_bttstck_rail.p3d";
		inventorySlot[] = {"kr_ak_fstock"};
		attachments[] = {"kr_ak_buttpad","kr_tape"};
		simpleHiddenSelections[] = {"hide_tape"};
		weight = 0.264;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\rail_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\rail.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akfstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\rail.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\rail_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\rail_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\rail_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\rail_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 0.3;
				initPhase = 0;
			};
		};
	};
	class kr_ak_fstock_plastic_f: kr_ak_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_fstock_plastic_f";
		descriptionShort = "$STR_kr_weapons_attachments_ak_fstock_plastic_f_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_fld_bttstck_plastic_f.p3d";
		inventorySlot[] = {"kr_ak_fstock"};
		attachments[] = {"kr_ak_buttpad","kr_tape","kr_meds"};
		simpleHiddenSelections[] = {"hide_tape","hide_meds"};
		weight = 0.264;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_f_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_f.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 22;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akfstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_f.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_f_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_f_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_f_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\plastic_f_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 0.3;
				initPhase = 0;
			};
		};
	};
	class kr_ak_fstock_vpo205: kr_ak_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_fstock_vpo205";
		descriptionShort = "$STR_kr_weapons_attachments_ak_fstock_vpo205_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_fld_bttstck_vpo205.p3d";
		inventorySlot[] = {"kr_ak_fstock"};
		attachments[] = {"kr_ak_buttpad"};
		weight = 0.37;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo205_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo205.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 22;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akfstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo205.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo205_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo205_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo205_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\vpo205_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 0.3;
				initPhase = 0;
			};
		};
	};
	class kr_ak_fstock_akts_fold: kr_ak_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_fstock_akts_fold";
		descriptionShort = "$STR_kr_weapons_attachments_ak_fstock_akts_fold_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_fld_bttstck_akts_fold.p3d";
		inventorySlot[] = {"kr_ak_fstock"};
		attachments[] = {"kr_ar_bttstck"};
		weight = 0.264;
		haveTube = 1;
		isTube = 1;
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_fold_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_fold.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_akfstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_fold.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_fold_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_fold_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_fold_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\akts_fold_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_hexagon_kocherga: kr_ak_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_hexagon_kocherga";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_hexagon_kocherga_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_hexagon_kocherga.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		weight = 180;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hexagon_kocherga_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hexagon_kocherga.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hexagon_kocherga.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hexagon_kocherga_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hexagon_kocherga_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hexagon_kocherga_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hexagon_kocherga_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_fab_defense_uas: kr_ak_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_fab_defense_uas";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_fab_defense_uas_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_fab_defense_uas.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		weight = 450;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\fab_defense_uas_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\fab_defense_uas.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 26;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\fab_defense_uas.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\fab_defense_uas_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\fab_defense_uas_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\fab_defense_uas_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\fab_defense_uas_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_zenit_pt_1: kr_ak_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_zenit_pt_1";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_zenit_pt_1_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_zenit_pt_1.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		weight = 320;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 27;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_fstock_zenit_pt_1: kr_ak_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_fstock_zenit_pt_1";
		descriptionShort = "$STR_kr_weapons_attachments_ak_fstock_zenit_pt_1_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_fld_bttstck_zenit_pt_1.p3d";
		inventorySlot[] = {"kr_ak_fstock"};
		weight = 320;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 27;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_akfstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_promag_archangel_opfor: kr_ak_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_promag_archangel_opfor";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_promag_archangel_opfor_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_promag_archangel_opfor.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		weight = 390;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\promag_archangel_opfor_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\promag_archangel_opfor.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 30;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\promag_archangel_opfor.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\promag_archangel_opfor_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\promag_archangel_opfor_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\promag_archangel_opfor_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\promag_archangel_opfor_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_magpul_zhukov_s: kr_ak_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_magpul_zhukov_s";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_magpul_zhukov_s_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_magpul_zhukov_s.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		weight = 425;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\magpul_zhukov_s_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\magpul_zhukov_s.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 31;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\magpul_zhukov_s.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\magpul_zhukov_s_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\magpul_zhukov_s_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\magpul_zhukov_s_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\magpul_zhukov_s_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_hera_arms_cqr47: kr_ak_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_hera_arms_cqr47";
		descriptionShort = "$STR_kr_weapons_attachments_ak_stock_hera_arms_cqr47_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_hera_arms_cqr47.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		weight = 525;
		itemSize[] = {3,2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hera_arms_cqr47_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hera_arms_cqr47.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 32;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hera_arms_cqr47.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hera_arms_cqr47_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hera_arms_cqr47_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hera_arms_cqr47_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\hera_arms_cqr47_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_stock_zenit_pt_3: kr_ak_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_fstock_zenit_pt_3";
		descriptionShort = "$STR_kr_weapons_attachments_ak_fstock_zenit_pt_3_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_bttstck_zenit_pt_3.p3d";
		inventorySlot[] = {"kr_ak_stock"};
		weight = 248;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 33;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_akstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_fstock_zenit_pt_3: kr_ak_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_fstock_zenit_pt_3";
		descriptionShort = "$STR_kr_weapons_attachments_ak_fstock_zenit_pt_3_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_fld_bttstck_zenit_pt_3.p3d";
		inventorySlot[] = {"kr_ak_fstock"};
		weight = 248;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 33;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_akfstock";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_destruct.rvmat"}}};
				};
			};
		};
	};
};
