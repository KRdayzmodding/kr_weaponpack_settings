class CfgPatches
{
	class kr_attachments_ar_pistolgrips
	{
		units[] = {"kr_ar_pgrip_dlg","kr_ar_pgrip_ha_hg15","kr_ar_pgrip_sig_mcx","kr_ar_pgrip_f1_firearms_st1","kr_ar_pgrip_hk_grip_v2","kr_ar_pgrip_magpul_miad","kr_ar_pgrip_hogue_overmolded","kr_ar_pgrip_hk_battlegrip_b","kr_ar_pgrip_f1_firearms_st2","kr_ar_pgrip_magpul_moe","kr_ar_pgrip_hk_battlegrip","kr_ar_pgrip_f1_firearms_st2_pc","kr_ar_pgrip_hk_ergo_psg1","kr_ar_pgrip_na_gral","kr_ar_pgrip_stark","kr_ar_pgrip_td_hexgrip"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ar_pgrip_t1_Base;
	class kr_ar_pgrip_t2_Base;
	class kr_ar_pgrip_t3_Base;
	class kr_ar_pgrip_t4_Base;
	class kr_ar_pgrip_dlg: kr_ar_pgrip_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_dlg";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_dlg_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_dlg_123.p3d";
		weight = 100;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_dlg_123_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_dlg_123.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_dlg_123_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_dlg_123_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_dlg_123_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_dlg_123_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_ha_hg15: kr_ar_pgrip_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_ha_hg15";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_ha_hg15_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_hera_arms_hg15.p3d";
		weight = 80;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hera_arms_hg15_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hera_arms_hg15.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hera_arms_hg15_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hera_arms_hg15_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hera_arms_hg15_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hera_arms_hg15_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_sig_mcx: kr_ar_pgrip_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_sig_mcx";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_sig_mcx_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_sig_mcx_std.p3d";
		weight = 80;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_sig_mcx_std_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_sig_mcx_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_sig_mcx_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_sig_mcx_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_sig_mcx_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_sig_mcx_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_f1_firearms_st1: kr_ar_pgrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_f1_firearms_st1";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_f1_firearms_st1_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_f1_firearms_st1_skeletonized.p3d";
		weight = 80;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st1_skeletonized_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st1_skeletonized.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st1_skeletonized_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st1_skeletonized_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st1_skeletonized_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st1_skeletonized_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_hk_grip_v2: kr_ar_pgrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_hk_grip_v2";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_hk_grip_v2_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_hk_grip_v2.p3d";
		weight = 80;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_grip_v2_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_grip_v2.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_grip_v2_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_grip_v2_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_grip_v2_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_grip_v2_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_magpul_miad: kr_ar_pgrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_magpul_miad";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_magpul_miad_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_magpul_miad_gen_1_fde.p3d";
		weight = 50;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_miad_gen_1_fde_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_miad_gen_1_fde.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_miad_gen_1_fde_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_miad_gen_1_fde_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_miad_gen_1_fde_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_miad_gen_1_fde_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_hogue_overmolded: kr_ar_pgrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_hogue_overmolded";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_hogue_overmolded_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_hogue_overmolded.p3d";
		weight = 80;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hogue_overmolded_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hogue_overmolded.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hogue_overmolded_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hogue_overmolded_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hogue_overmolded_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hogue_overmolded_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_hk_battlegrip_b: kr_ar_pgrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_hk_battlegrip_b";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_hk_battlegrip_b_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_hk_battle_grip_beavertail.p3d";
		weight = 80;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_beavertail_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_beavertail.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_beavertail_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_beavertail_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_beavertail_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_beavertail_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_f1_firearms_st2: kr_ar_pgrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_f1_firearms_st2";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_f1_firearms_st2_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_f1_firearms_st2_skeletonized.p3d";
		weight = 90;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_skeletonized_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_skeletonized.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_skeletonized_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_skeletonized_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_skeletonized_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_skeletonized_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_magpul_moe: kr_ar_pgrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_magpul_moe";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_magpul_moe_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_magpul_moe.p3d";
		weight = 50;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_moe_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_moe.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_moe_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_moe_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_moe_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_magpul_moe_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_hk_battlegrip: kr_ar_pgrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_hk_battlegrip";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_hk_battlegrip_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_hk_battle_grip.p3d";
		weight = 80;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_battle_grip_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_f1_firearms_st2_pc: kr_ar_pgrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_f1_firearms_st2_pc";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_f1_firearms_st2_pc_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_f1_firearms_st2_pc_skeletonized.p3d";
		weight = 80;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_pc_skeletonized_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_pc_skeletonized.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_pc_skeletonized_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_pc_skeletonized_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_pc_skeletonized_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_f1_firearms_st2_pc_skeletonized_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_hk_ergo_psg1: kr_ar_pgrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_hk_ergo_psg1";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_hk_ergo_psg1_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_hk_ergo_psg1_style_grip.p3d";
		weight = 110;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_ergo_psg1_style_grip_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_ergo_psg1_style_grip.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_ergo_psg1_style_grip_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_ergo_psg1_style_grip_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_ergo_psg1_style_grip_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_hk_ergo_psg1_style_grip_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_na_gral: kr_ar_pgrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_na_gral";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_na_gral_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_naroh_arms_gral_s.p3d";
		weight = 92;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_naroh_arms_gral_s_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_naroh_arms_gral_s.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_naroh_arms_gral_s_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_naroh_arms_gral_s_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_naroh_arms_gral_s_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_naroh_arms_gral_s_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_stark: kr_ar_pgrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_stark";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_stark_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_stark_ar_rifle_grip.p3d";
		weight = 90;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_stark_ar_rifle_grip_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_stark_ar_rifle_grip.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_stark_ar_rifle_grip_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_stark_ar_rifle_grip_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_stark_ar_rifle_grip_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_stark_ar_rifle_grip_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ar_pgrip_td_hexgrip: kr_ar_pgrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ar_pgrip_td_hexgrip";
		descriptionShort = "$STR_kr_weapons_attachments_ar_pgrip_td_hexgrip_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\ar_pgrip_tactical_dynamics_hexgrip.p3d";
		weight = 64;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_tactical_dynamics_hexgrip_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_tactical_dynamics_hexgrip.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_tactical_dynamics_hexgrip_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_tactical_dynamics_hexgrip_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_tactical_dynamics_hexgrip_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ar_pistolgrips\data\ar_pgrip_tactical_dynamics_hexgrip_destruct.rvmat"}}};
				};
			};
		};
	};
};
