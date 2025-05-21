class CfgPatches
{
	class kr_attachments_ar_buttstocks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ar_stock_t1_Base;
	class kr_ar_stock_t2_Base;
	class kr_ar_stock_t3_Base;
	class kr_ar_stock_t4_Base;
	class kr_ar_stock_armacon_baskak: kr_ar_stock_t1_Base
	{
		scope = 0;
		displayName = "$STR_kr_weapons_attachments_ar_stock_armacon_baskak";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_armacon_baskak_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_armacon_baskak.p3d";
		weight = 695;
		haveTube = 1;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\armacon_baskak_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\armacon_baskak.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_arSystems";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\armacon_baskak.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\armacon_baskak_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\armacon_baskak_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\armacon_baskak_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\armacon_baskak_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_ace_socom: kr_ar_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_ace_socom";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_ace_socom_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_ace_socom.p3d";
		weight = 270;
		haveTube = 1;
		recoilModifier[] = {1,1,0.8};
		swayModifier[] = {1,0.85,0.9};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\ace_socom_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\ace_socom.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_arSystems";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\ace_socom.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\ace_socom_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\ace_socom_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\ace_socom_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\ace_socom_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_sb_tac_sba3: kr_ar_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_sb_tac_sba3";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_sb_tac_sba3_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_sb_tac_sba3.p3d";
		weight = 213;
		recoilModifier[] = {1,1,0.9};
		swayModifier[] = {1,0.8,0.85};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\sb_tac_sba3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\sb_tac_sba3.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\sb_tac_sba3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\sb_tac_sba3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\sb_tac_sba3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\sb_tac_sba3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\sb_tac_sba3_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_hs_m4ss: kr_ar_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_hs_m4ss";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_hs_m4ss_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_hs_m4ss.p3d";
		weight = 695;
		recoilModifier[] = {1,1,0.85};
		swayModifier[] = {1,0.9,0.8};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hs_m4ss_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hs_m4ss.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 9;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hs_m4ss.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hs_m4ss_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hs_m4ss_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hs_m4ss_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hs_m4ss_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_adar_wood: kr_ar_stock_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_adar_wood";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_adar_wood_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_adar_wood.p3d";
		weight = 695;
		recoilModifier[] = {1,1,0.85};
		swayModifier[] = {1,0.85,0.85};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\adar_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\adar_wood.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\adar_wood.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\adar_wood_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\adar_wood_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\adar_wood_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\adar_wood_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "wood";
	};
	class kr_ar_stock_cmmg_ripstock: kr_ar_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_cmmg_ripstock";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_cmmg_ripstock_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_cmmg_ripstock.p3d";
		weight = 280;
		recoilModifier[] = {1,1,0.7};
		swayModifier[] = {1,0.7,0.8};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\cmmg_ripstock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\cmmg_ripstock.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\cmmg_ripstock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\cmmg_ripstock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\cmmg_ripstock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\cmmg_ripstock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\cmmg_ripstock_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_fab_defense_gls: kr_ar_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_fab_defense_gls";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_fab_defense_gls_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_fab_defense_gls.p3d";
		weight = 308;
		recoilModifier[] = {1,1,0.8};
		swayModifier[] = {1,0.7,0.7};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_gls_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_gls.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_gls.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_gls_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_gls_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_gls_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_gls_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_hk_417_as: kr_ar_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_hk_417_as";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_hk_417_as_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_hk_417_as.p3d";
		weight = 350;
		recoilModifier[] = {1,1,0.7};
		swayModifier[] = {1,0.8,0.7};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_as_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_as.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_as.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_as_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_as_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_as_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_as_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_magpul_ubr_gen2: kr_ar_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_magpul_ubr_gen2";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_magpul_ubr_gen2_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_magpul_ubr_gen2.p3d";
		weight = 610;
		haveTube = 1;
		itemSize[] = {3,2};
		recoilModifier[] = {1,1,0.85};
		swayModifier[] = {1,0.65,0.7};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ubr_gen2_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ubr_gen2.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_arSystems";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ubr_gen2.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ubr_gen2_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ubr_gen2_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ubr_gen2_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ubr_gen2_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_viper_pdw: kr_ar_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_viper_pdw";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_viper_pdw_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_viper_pdw.p3d";
		weight = 573;
		itemSize[] = {2,1};
		recoilModifier[] = {1,1,0.7};
		swayModifier[] = {1,0.85,0.65};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_pdw_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_pdw.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		haveTube = 1;
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_arSystems";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_pdw.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_pdw_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_pdw_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_pdw_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_pdw_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_hk_slimline: kr_ar_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_hk_slimline";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_hk_slimline_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_hk_slimline.p3d";
		weight = 695;
		recoilModifier[] = {1,1,0.65};
		swayModifier[] = {1,0.7,0.85};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_slimline_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_slimline.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_slimline.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_slimline_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_slimline_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_slimline_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_slimline_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_mcmillan_cs5: kr_ar_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_mcmillan_cs5";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_mcmillan_cs5_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_mcmillan_cs5.p3d";
		weight = 450;
		itemSize[] = {2,2};
		recoilModifier[] = {1,1,0.7};
		swayModifier[] = {1,0.7,0.8};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mcmillan_cs5_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mcmillan_cs5_stock.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};

		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mcmillan_cs5_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mcmillan_cs5_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mcmillan_cs5_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mcmillan_cs5_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mcmillan_cs5_stock_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "metal";
	};
	class kr_ar_stock_b5_precision: kr_ar_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_b5_precision";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_b5_precision_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_b5_precision.p3d";
		weight = 160;
		recoilModifier[] = {1,1,0.62};
		swayModifier[] = {1,0.6,0.75};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\b5_precision_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\b5_precision.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\b5_precision.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\b5_precision_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\b5_precision_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\b5_precision_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\b5_precision_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_fab_defense_glr: kr_ar_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_fab_defense_glr";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_fab_defense_glr_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_fab_defense_glr.p3d";
		weight = 276;
		recoilModifier[] = {1,1,0.6};
		swayModifier[] = {1,0.62,0.75};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glr_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glr.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 16;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glr.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glr_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glr_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glr_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glr_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_mft_bus: kr_ar_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_mft_bus";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_mft_bus_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_mft_bus.p3d";
		weight = 255;
		recoilModifier[] = {1,1,0.75};
		swayModifier[] = {1,0.6,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mft_bus_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mft_bus.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mft_bus.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mft_bus_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mft_bus_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mft_bus_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\mft_bus_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_magpul_ctr: kr_ar_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_magpul_ctr";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_magpul_ctr_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_magpul_ctr.p3d";
		weight = 226;
		recoilModifier[] = {1,1,0.7};
		swayModifier[] = {1,0.65,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ctr.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ctr.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ctr_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ctr_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ctr_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_ctr_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_kriss_defiance: kr_ar_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_kriss_defiance";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_kriss_defiance_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_kriss_defiance.p3d";
		weight = 400;
		recoilModifier[] = {1,1,0.6};
		swayModifier[] = {1,0.65,0.65};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\kriss_defiance_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\kriss_defiance.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\kriss_defiance.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\kriss_defiance_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\kriss_defiance_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\kriss_defiance_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\kriss_defiance_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_hk_417_concave: kr_ar_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_hk_417_concave";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_hk_417_concave_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_hk_417_concave.p3d";
		weight = 395;
		recoilModifier[] = {1,1,0.8};
		swayModifier[] = {1,0.6,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_concave_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_concave.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_concave.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_concave_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_concave_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_concave_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_417_concave_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_hk_e1: kr_ar_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_hk_e1";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_hk_e1_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_hk_e1.p3d";
		weight = 350;
		recoilModifier[] = {1,1,0.6};
		swayModifier[] = {1,0.6,0.8};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_e1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_e1.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 16;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_e1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_e1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_e1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_e1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hk_e1_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_troy_m7a1_pdw: kr_ar_stock_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_troy_m7a1_pdw";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_troy_m7a1_pdw_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_troy_m7a1_pdw.p3d";
		weight = 400;
		itemSize[] = {2,1};
		recoilModifier[] = {1,1,0.75};
		swayModifier[] = {1,0.65,0.65};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\troy_m7a1_pdw_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\troy_m7a1_pdw.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 17;
		};
		haveTube = 1;
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_arSystems";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\troy_m7a1_pdw.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\troy_m7a1_pdw_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\troy_m7a1_pdw_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\troy_m7a1_pdw_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\troy_m7a1_pdw_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
	};
	class kr_ar_stock_hera_cqr: kr_ar_stock_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_hera_cqr";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_hera_cqr_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_hera_cqr.p3d";
		weight = 350;
		itemSize[] = {3,2};
		recoilModifier[] = {1,1,0.6};
		swayModifier[] = {1,0.6,0.65};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hera_arms_cqr_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hera_arms_cqr.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hera_arms_cqr.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hera_arms_cqr_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hera_arms_cqr_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hera_arms_cqr_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\hera_arms_cqr_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_stock_fab_defense_glc: kr_ar_stock_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_fab_defense_glc";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_fab_defense_glc_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_fab_defense_glc.p3d";
		weight = 271;
		recoilModifier[] = {1,1,0.65};
		swayModifier[] = {1,0.6,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glc_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glc.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glc.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glc_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glc_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glc_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\fab_defense_glc_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_stock_vltor_emod: kr_ar_stock_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_vltor_emod";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_vltor_emod_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_vltor_emod.p3d";
		weight = 390;
		recoilModifier[] = {1,1,0.6};
		swayModifier[] = {1,0.65,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\vltor_emod_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\vltor_emod.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 18;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\vltor_emod.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\vltor_emod_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\vltor_emod_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\vltor_emod_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\vltor_emod_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_stock_magpul_prs_gen3: kr_ar_stock_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_magpul_prs_gen3";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_magpul_prs_gen3_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_magpul_prs_gen3.p3d";
		weight = 780;
		itemSize[] = {3,2};
		recoilModifier[] = {1,1,0.5};
		swayModifier[] = {1,0.7,0.65};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen3.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen3_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_stock_magpul_prs_gen2: kr_ar_stock_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_magpul_prs_gen2";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_magpul_prs_gen2_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_magpul_prs_gen2.p3d";
		weight = 790;
		itemSize[] = {3,2};
		recoilModifier[] = {1,1,0.7};
		swayModifier[] = {1,0.5,0.65};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen2_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen2.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen2.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen2_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen2_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen2_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_prs_gen2_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_stock_magpul_moe: kr_ar_stock_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_magpul_moe";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_magpul_moe_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_magpul_moe.p3d";
		weight = 226;
		recoilModifier[] = {1,1,0.65};
		swayModifier[] = {1,0.7,0.5};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_moe_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_moe.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_moe.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_moe_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_moe_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_moe_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\magpul_moe_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_stock_lmt_sopmod: kr_ar_stock_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_lmt_sopmod";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_lmt_sopmod_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_lmt_sopmod.p3d";
		weight = 148;
		recoilModifier[] = {1,1,0.5};
		swayModifier[] = {1,0.5,0.5};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\lmt_sopmod_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\lmt_sopmod.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\lmt_sopmod.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\lmt_sopmod_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\lmt_sopmod_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\lmt_sopmod_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\lmt_sopmod_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_stock_viper_m1: kr_ar_stock_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_stock_viper_m1";
		descriptionShort = "$STR_kr_weapons_attachments_ar_stock_viper_m1_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\ar_buttstock_viper_m1.p3d";
		weight = 188;
		recoilModifier[] = {1,1,0.8};
		swayModifier[] = {1,0.8,0.8};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_m1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_m1.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 27;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_kr_GUI_arAny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_m1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_m1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_m1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_m1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_buttstocks\data\viper_m1_destruct.rvmat"}}};
				};
			};
		};
	};
};
