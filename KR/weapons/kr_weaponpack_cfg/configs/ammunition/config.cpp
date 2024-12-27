class CfgPatches
{
	class kr_weaponpack_ammunition_looseRounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","kr_data"};
		magazines[] = {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_quakemaker","kr_Ammo_9x19_rip","kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz","kr_Ammo_545x39_BS","kr_Ammo_545x39_BT","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_PRS","kr_Ammo_545x39_PS","kr_Ammo_545x39_T","kr_Ammo_545x39_US","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_366TKM_custom_ap","kr_Ammo_366TKM_EKO","kr_Ammo_366TKM_FMJ","kr_Ammo_366TKM_Geksa","kr_Ammo_762x39_bp","kr_Ammo_762x39_fmj","kr_Ammo_762x39_mai_ap","kr_Ammo_762x39_pp","kr_Ammo_762x39_ps","kr_Ammo_762x39_t45m","kr_Ammo_762x39_us","kr_Ammo_762x51_bpz_fmj","kr_Ammo_762x51_m61","kr_Ammo_762x51_m80","kr_Ammo_762x51_m993","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x54r_bs","kr_Ammo_762x54r_bthp","kr_Ammo_762x54r_fmj","kr_Ammo_762x54r_lps","kr_Ammo_762x54r_ps","kr_Ammo_762x54r_snb","kr_Ammo_762x54r_t46m","kr_Ammo_9x39_bp","kr_Ammo_9x39_pab9","kr_Ammo_9x39_sp5","kr_Ammo_9x39_sp6","kr_Ammo_762x25_PT_gz","kr_Ammo_762x25_PST_gz","kr_Ammo_762x25_FMJ43","kr_Ammo_762x25_AKBS","kr_Ammo_127x55_PS12","kr_Ammo_127x55_PS12A","kr_Ammo_127x55_PS12B","kr_Ammo_338LM_ap","kr_Ammo_338LM_upz","kr_Ammo_338LM_fmj","kr_Ammo_338LM_tac_x","kr_Ammo_408CheyTac","kr_Ammo_50BMG","kr_Ammo_50BMG_AP","kr_Ammo_50BMG_T","kr_Ammo_50BMG_E","kr_Ammo_50BMG_ET","kr_Ammo_12x76_devastator","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_AP20","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_RIP","kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_23x75_shrapnel_10","kr_Ammo_23x75_shrapnel_25","kr_Ammo_23x75_barrikade"};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class kr_Ammo_9x19_7n21: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x19_7n21";
		descriptionShort = "$STR_kr_weapons_ammo_9x19_7n21_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x19_7n21_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x19_7n21";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_7n31.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_7n31_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_7n31_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_7n31_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_7n31_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x19_7n31: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x19_7n31";
		descriptionShort = "$STR_kr_weapons_ammo_9x19_7n31_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x19_7n31_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x19_7n31";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x19";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_7n31.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_7n31_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_7n31_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_7n31_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_7n31_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x19_ap_63: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x19_ap_63";
		descriptionShort = "$STR_kr_weapons_ammo_9x19_ap_63_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x19_ap_63_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x19_ap_63";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_ap_63.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_ap_63_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_ap_63_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_ap_63_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_ap_63_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x19_gt: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x19_gt";
		descriptionShort = "$STR_kr_weapons_ammo_9x19_gt_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x19_gt_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x19_gt";
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "9x19";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_gt.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_gt_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_gt_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_gt_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_gt_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x19_pso_gz: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x19_pso_gz";
		descriptionShort = "$STR_kr_weapons_ammo_9x19_pso_gz_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x19_pso_gz_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x19_pso_gz";
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "9x19";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_pso_gz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_pso_gz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_pso_gz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_pso_gz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_pso_gz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x19_quakemaker: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x19_quakemaker";
		descriptionShort = "$STR_kr_weapons_ammo_9x19_quakemaker_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x19_quakemaker_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x19_quakemaker";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_quakemaker.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_quakemaker_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_quakemaker_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_quakemaker_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_quakemaker_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x19_rip: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x19_rip";
		descriptionShort = "$STR_kr_weapons_ammo_9x19_rip_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x19_rip_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x19_rip";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x19";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_rip.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_rip_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_rip_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_rip_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x19_rip_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x18_ppt_gz: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x18_ppt_gz";
		descriptionShort = "$STR_kr_weapons_ammo_9x18_ppt_gz_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x18_ppt_gz_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x18_ppt_gz";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x18";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_ppt_gz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_ppt_gz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_ppt_gz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_ppt_gz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_ppt_gz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x18_pbm_gz: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x18_pbm_gz";
		descriptionShort = "$STR_kr_weapons_ammo_9x18_pbm_gz_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x18_pbm_gz_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x18_pbm_gz";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x18";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pbm_gz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pbm_gz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pbm_gz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pbm_gz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pbm_gz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x18_pmm_gz: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x18_pmm_gz";
		descriptionShort = "$STR_kr_weapons_ammo_9x18_pmm_gz_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x18_pmm_gz_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x18_pmm_gz";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x18";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pmm_gz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pmm_gz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pmm_gz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pmm_gz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pmm_gz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x18_pso_gz: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x18_pso_gz";
		descriptionShort = "$STR_kr_weapons_ammo_9x18_pso_gz_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x18_pso_gz_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x18_pso_gz";
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "9x18";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pso_gz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pso_gz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pso_gz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pso_gz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pso_gz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x18_pst_gz: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x18_pst_gz";
		descriptionShort = "$STR_kr_weapons_ammo_9x18_pst_gz_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x18_pst_gz_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x18_pst_gz";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x18";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pst_gz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pst_gz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pst_gz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pst_gz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_pst_gz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x18_sp7_gz: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x18_sp7_gz";
		descriptionShort = "$STR_kr_weapons_ammo_9x18_sp7_gz_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x18_sp7_gz_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x18_sp7_gz";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x18";
			kr_bullettype = 1;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_sp7_gz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_sp7_gz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_sp7_gz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_sp7_gz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x18_sp7_gz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_545x39_BS: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_545x39_BS";
		descriptionShort = "$STR_kr_weapons_ammo_545x39_BS_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\545x39_BS_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_545x39_BS";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_545x39_BT: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_545x39_BT";
		descriptionShort = "$STR_kr_weapons_ammo_545x39_BT_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\545x39_BT_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_545x39_BT";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_545x39_FMJ: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_545x39_FMJ";
		descriptionShort = "$STR_kr_weapons_ammo_545x39_FMJ_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\545x39_FMJ_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_545x39_FMJ";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_545x39_PRS: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_545x39_PRS";
		descriptionShort = "$STR_kr_weapons_ammo_545x39_PRS_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\545x39_PRS_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_545x39_PRS";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_545x39_PS: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_545x39_PS";
		descriptionShort = "$STR_kr_weapons_ammo_545x39_PS_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\545x39_PS_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_545x39_PS";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_545x39_T: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_545x39_T";
		descriptionShort = "$STR_kr_weapons_ammo_545x39_T_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\545x39_T_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_545x39_T";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_545x39_US: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_545x39_US";
		descriptionShort = "$STR_kr_weapons_ammo_545x39_US_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\545x39_US_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_545x39_US";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\545x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_556x45_FMJ: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_556x45_FMJ";
		descriptionShort = "$STR_kr_weapons_ammo_556x45_FMJ_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\556x45_FMJ_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_556x45_FMJ";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_FMJ.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_FMJ_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_FMJ_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_FMJ_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_FMJ_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_556x45_m855: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_556x45_m855";
		descriptionShort = "$STR_kr_weapons_ammo_556x45_m855_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\556x45_m855_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_556x45_m855";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m855.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m855_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m855_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m855_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m855_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_556x45_m855a1: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_556x45_m855a1";
		descriptionShort = "$STR_kr_weapons_ammo_556x45_m855a1_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\556x45_m855a1_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_556x45_m855a1";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m855a1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m855a1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m855a1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m855a1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m855a1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_556x45_m856: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_556x45_m856";
		descriptionShort = "$STR_kr_weapons_ammo_556x45_m856_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\556x45_m856_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_556x45_m856";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m856.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m856_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m856_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m856_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m856_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_556x45_m995: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_556x45_m995";
		descriptionShort = "$STR_kr_weapons_ammo_556x45_m995_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\556x45_m995_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_556x45_m995";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m995.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m995_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m995_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m995_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_m995_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_556x45_warmageddon: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_556x45_warmageddon";
		descriptionShort = "$STR_kr_weapons_ammo_556x45_warmageddon_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\556x45_warmageddon_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_556x45_warmageddon";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_warmageddon.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_warmageddon_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_warmageddon_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_warmageddon_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\556x45_warmageddon_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_366TKM_custom_ap: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_366tkm_AP";
		descriptionShort = "$STR_kr_weapons_ammo_366tkm_AP_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\366TKM_custom_ap_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_366TKM_custom_ap";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".366TKM";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_366TKM_EKO: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_366TKM_EKO";
		descriptionShort = "$STR_kr_weapons_ammo_366TKM_EKO_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\366TKM_EKO_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_366TKM_EKO";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = ".366TKM";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_366TKM_FMJ: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_366TKM_FMJ";
		descriptionShort = "$STR_kr_weapons_ammo_366TKM_FMJ_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\366TKM_FMJ_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_366TKM_FMJ";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".366TKM";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_366TKM_Geksa: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_366TKM_Geksa";
		descriptionShort = "$STR_kr_weapons_ammo_366TKM_Geksa_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\366TKM_Geksa_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_366TKM_Geksa";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".366TKM";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\366_custom_ap_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x39_bp: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x39_bp";
		descriptionShort = "$STR_kr_weapons_ammo_762x39_bp_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x39_bp_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x39_bp";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_bp.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_bp_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_bp_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_bp_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_bp_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x39_fmj: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x39_fmj";
		descriptionShort = "$STR_kr_weapons_ammo_762x39_fmj_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x39_fmj_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x39_fmj";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_fmj.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_fmj_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_fmj_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_fmj_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_fmj_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x39_mai_ap: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x39_mai_ap";
		descriptionShort = "$STR_kr_weapons_ammo_762x39_mai_ap_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x39_mai_ap_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x39_mai_ap";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_mai_ap.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_mai_ap_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_mai_ap_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_mai_ap_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_mai_ap_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x39_pp: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x39_pp";
		descriptionShort = "$STR_kr_weapons_ammo_762x39_pp_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x39_pp_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x39_pp";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_pp.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_pp_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_pp_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_pp_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_pp_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x39_ps: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x39_ps";
		descriptionShort = "$STR_kr_weapons_ammo_762x39_ps_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x39_ps_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x39_ps";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_ps.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_ps_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_ps_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_ps_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_ps_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x39_t45m: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x39_t45m";
		descriptionShort = "$STR_kr_weapons_ammo_762x39_t45m_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x39_t45m_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x39_t45m";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_t45m.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_t45m_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_t45m_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_t45m_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_t45m_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x39_us: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x39_us";
		descriptionShort = "$STR_kr_weapons_ammo_762x39_us_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x39_us_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x39_us";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_us.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_us_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_us_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_us_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x39_us_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x51_bpz_fmj: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x51_bpz_fmj";
		descriptionShort = "$STR_kr_weapons_ammo_762x51_bpz_fmj_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x51_bpz_fmj_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_762x51_bpz_fmj";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x51 (.308)";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_bpz_fmj.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_bpz_fmj_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_bpz_fmj_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_bpz_fmj_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_bpz_fmj_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x51_m61: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x51_m61";
		descriptionShort = "$STR_kr_weapons_ammo_762x51_m61_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x51_m61_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_762x51_m61";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51 (.308)";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m61.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m61_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m61_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m61_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m61_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x51_m80: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x51_m80";
		descriptionShort = "$STR_kr_weapons_ammo_762x51_m80_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x51_m80_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_762x51_m80";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m80.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m80_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m80_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m80_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m80_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x51_m993: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x51_m993";
		descriptionShort = "$STR_kr_weapons_ammo_762x51_m993_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x51_m993_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_762x51_m993";
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x51 (.308)";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m993.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m993_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m993_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m993_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_m993_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x51_tpz_sp: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x51_tpz_sp";
		descriptionShort = "$STR_kr_weapons_ammo_762x51_tpz_sp_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x51_tpz_sp_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_762x51_tpz_sp";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x51 (.308)";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_tpz_sp.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_tpz_sp_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_tpz_sp_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_tpz_sp_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_tpz_sp_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x51_ultra_nosler: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x51_ultra_nosler";
		descriptionShort = "$STR_kr_weapons_ammo_762x51_ultra_nosler_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x51_ultra_nosler_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 50;
		ammo = "Bullet_762x51_ultra_nosler";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_ultra_nosler.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_ultra_nosler_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_ultra_nosler_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_ultra_nosler_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x51_ultra_nosler_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x54r_bs: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x54r_bs";
		descriptionShort = "$STR_kr_weapons_ammo_762x54r_bs_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x54r_bs_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x54r_bs";
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x54";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_bs.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_bs_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_bs_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_bs_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_bs_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x54r_bthp: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x54r_bthp";
		descriptionShort = "$STR_kr_weapons_ammo_762x54r_bthp_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x54r_bthp_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x54r_bthp";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x54";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_bthp.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_bthp_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_bthp_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_bthp_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_bthp_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x54r_fmj: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x54r_fmj";
		descriptionShort = "$STR_kr_weapons_ammo_762x54r_fmj_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x54r_fmj_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x54r_fmj";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x54";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_fmj.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_fmj_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_fmj_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_fmj_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_fmj_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x54r_lps: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x54r_lps";
		descriptionShort = "$STR_kr_weapons_ammo_762x54r_lps_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x54r_lps_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x54r_lps";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x54";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_lps.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_lps_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_lps_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_lps_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_lps_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x54r_ps: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x54r_ps";
		descriptionShort = "$STR_kr_weapons_ammo_762x54r_ps_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x54r_ps_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x54r_ps";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x54";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_ps.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_ps_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_ps_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_ps_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_ps_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x54r_snb: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x54r_snb";
		descriptionShort = "$STR_kr_weapons_ammo_762x54r_snb_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x54r_snb_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x54r_snb";
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x54";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_snb.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_snb_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_snb_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_snb_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_snb_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x54r_t46m: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x54r_t46m";
		descriptionShort = "$STR_kr_weapons_ammo_762x54r_t46m_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x54r_t46m_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x54r_t46m";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x54";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_t46m.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_t46m_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_t46m_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_t46m_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x54r_t46m_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x39_bp: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x39_bp";
		descriptionShort = "$STR_kr_weapons_ammo_9x39_bp_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x39_bp_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_9x39_bp";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_bp.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_bp_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_bp_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_bp_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_bp_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x39_pab9: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x39_pab9";
		descriptionShort = "$STR_kr_weapons_ammo_9x39_pab9_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x39_pab9_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_9x39_pab9";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_pab9.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_pab9_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_pab9_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_pab9_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_pab9_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x39_sp5: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x39_sp5";
		descriptionShort = "$STR_kr_weapons_ammo_9x39_sp5_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x39_sp5_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_9x39_sp5";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_sp5.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_sp5_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_sp5_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_sp5_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_sp5_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_9x39_sp6: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_9x39_sp6";
		descriptionShort = "$STR_kr_weapons_ammo_9x39_sp6_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\9x39_sp6_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_9x39_sp6";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x39";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_sp6.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_sp6_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_sp6_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_sp6_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\9x39_sp6_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x25_PT_gz: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x25_PT_gz";
		descriptionShort = "$STR_kr_weapons_ammo_762x25_PT_gz_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x25_PT_gz_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x25_PT_gz";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x25";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_PT_gz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_PT_gz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_PT_gz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_PT_gz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_PT_gz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x25_PST_gz: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x25_PST_gz";
		descriptionShort = "$STR_kr_weapons_ammo_762x25_PST_gz_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x25_PST_gz_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x25_PST_gz";
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x25";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_PST_gz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_PST_gz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_PST_gz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_PST_gz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_PST_gz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x25_FMJ43: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x25_FMJ43";
		descriptionShort = "$STR_kr_weapons_ammo_762x25_FMJ43_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x25_FMJ43_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x25_FMJ43";
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "7.62x25";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_FMJ43.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_FMJ43_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_FMJ43_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_FMJ43_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_FMJ43_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_762x25_AKBS: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_762x25_AKBS";
		descriptionShort = "$STR_kr_weapons_ammo_762x25_AKBS_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\762x25_AKBS_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_762x25_AKBS";
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "7.62x25";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_AKBS.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_AKBS_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_AKBS_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_AKBS_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\762x25_AKBS_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_127x55_PS12: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_127x55_PS12";
		descriptionShort = "$STR_kr_weapons_ammo_127x55_PS12_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\127x55_PS12_LooseRounds.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\ammunition\data\PS12_co.paa"};
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_127x55_PS12";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12.7x55";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_127x55_PS12A: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_127x55_PS12A";
		descriptionShort = "$STR_kr_weapons_ammo_127x55_PS12A_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\127x55_PS12A_LooseRounds.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\ammunition\data\PS12_co.paa"};
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_127x55_PS12A";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12.7x55";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_127x55_PS12B: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_127x55_PS12B";
		descriptionShort = "$STR_kr_weapons_ammo_127x55_PS12B_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\127x55_PS12B_LooseRounds.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\ammunition\data\PS12_co.paa"};
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_127x55_PS12B";
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "12.7x55";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\127x55_PS12_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_338LM_ap: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_338LM_ap";
		descriptionShort = "$STR_kr_weapons_ammo_338LM_ap_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\338LM_ap_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_338LM_ap";
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = ".338LM";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_ap.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_ap_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_ap_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_ap_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_ap_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_338LM_upz: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_338LM_upz";
		descriptionShort = "$STR_kr_weapons_ammo_338LM_upz_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\338LM_upz_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_338LM_upz";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".338LM";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_upz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_upz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_upz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_upz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_upz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_338LM_fmj: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_338LM_fmj";
		descriptionShort = "$STR_kr_weapons_ammo_338LM_fmj_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\338LM_fmj_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_338LM_fmj";
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".338LM";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_fmj.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_fmj_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_fmj_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_fmj_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_fmj_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_338LM_tac_x: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_338lm_TAC";
		descriptionShort = "$STR_kr_weapons_ammo_338lm_TAC_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\338LM_tac_x_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 60;
		ammo = "Bullet_338LM_tac_x";
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".338LM";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_tac_x.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_tac_x_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_tac_x_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_tac_x_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\338LM_tac_x_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_408CheyTac: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_408CheyTac";
		descriptionShort = "$STR_kr_weapons_ammo_408CheyTac_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\408CheyTac_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 15;
		itemSize[] = {1,2};
		ammo = "Bullet_408CheyTac";
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".408CheyTac";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\408CheyTac.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\408CheyTac_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\408CheyTac_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\408CheyTac_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\408CheyTac_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_50BMG: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_50BMG";
		descriptionShort = "$STR_kr_weapons_ammo_50BMG_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\50BMG_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 10;
		itemSize[] = {1,2};
		ammo = "Bullet_50BMG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\KR\weapons\kr_weaponpack\ammunition\data\50BMG_co.paa"};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = ".50BMG";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_50BMG_AP: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_50BMG_AP";
		descriptionShort = "$STR_kr_weapons_ammo_50BMG_AP_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\50BMG_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 10;
		itemSize[] = {1,2};
		ammo = "Bullet_50BMG_AP";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\KR\weapons\kr_weaponpack\ammunition\data\50BMG_AP_co.paa"};
		class kr_description
		{
			kr_tier = 6;
			kr_caliber = ".50BMG";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_50BMG_T: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_50bmg_tracer";
		descriptionShort = "$STR_kr_weapons_ammo_50bmg_tracer_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\50BMG_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 10;
		itemSize[] = {1,2};
		ammo = "Bullet_50BMG_T";
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = ".50BMG";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_50BMG_E: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_50BMG_E";
		descriptionShort = "$STR_kr_weapons_ammo_50BMG_E_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\50BMG_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 10;
		itemSize[] = {1,2};
		ammo = "Bullet_50BMG_E";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\KR\weapons\kr_weaponpack\ammunition\data\50BMG_E_co.paa"};
		class kr_description
		{
			kr_tier = 6;
			kr_caliber = ".50BMG";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_50BMG_ET: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_50BMG_ET";
		descriptionShort = "$STR_kr_weapons_ammo_50BMG_ET_dsc";
		model = "\KR\weapons\kr_weaponpack\ammunition\looseRounds\50BMG_LooseRounds.p3d";
		iconCartridge = 0;
		weight = 12;
		count = 10;
		itemSize[] = {1,2};
		ammo = "Bullet_50BMG_ET";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\KR\weapons\kr_weaponpack\ammunition\data\50BMG_ET_co.paa"};
		class kr_description
		{
			kr_tier = 6;
			kr_caliber = ".50BMG";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\ammunition\data\50BMG_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_12x76_devastator: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_12x76_devastator";
		descriptionShort = "$STR_kr_weapons_ammo_12x76_devastator_dsc";
		model = "KR\weapons\kr_weaponpack\ammunition\looseRounds\devastator_LooseRound.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 20;
		ammo = "Bullet_12x76_devastator";
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP_damage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_12x76_frag_12: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_12x76_frag_12";
		descriptionShort = "$STR_kr_weapons_ammo_12x76_frag_12_dsc";
		model = "KR\weapons\kr_weaponpack\ammunition\looseRounds\frag_12_LooseRound.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 20;
		ammo = "Bullet_12x76_frag_12";
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP_damage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_12x76_Grizzly40: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_12x76_Grizzly40";
		descriptionShort = "$STR_kr_weapons_ammo_12x76_Grizzly40_dsc";
		model = "KR\weapons\kr_weaponpack\ammunition\looseRounds\Grizzly40_LooseRound.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 20;
		ammo = "Bullet_12x76_Grizzly40";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack\ammunition\data\Grizzly40.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack\ammunition\data\Grizzly40.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack\ammunition\data\Grizzly40_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack\ammunition\data\Grizzly40_damage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack\ammunition\data\Grizzly40_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_12x76_AP20: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_12x76_AP20";
		descriptionShort = "$STR_kr_weapons_ammo_12x76_AP20_dsc";
		model = "KR\weapons\kr_weaponpack\ammunition\looseRounds\AP20_LooseRound.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 20;
		ammo = "Bullet_12x76_AP20";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack\ammunition\data\AP20.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack\ammunition\data\AP20.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack\ammunition\data\AP20_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack\ammunition\data\AP20_damage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack\ammunition\data\AP20_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_12x76_lead_slug: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_12x76_lead_slug";
		descriptionShort = "$STR_kr_weapons_ammo_12x76_lead_slug_dsc";
		model = "KR\weapons\kr_weaponpack\ammunition\looseRounds\lead_slug_LooseRound.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 40;
		ammo = "Bullet_12x76_lead_slug";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack\ammunition\data\slug.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack\ammunition\data\slug.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack\ammunition\data\slug_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack\ammunition\data\slug_damage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack\ammunition\data\slug_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_12x76_FTX_custom: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_12x76_FTX_custom";
		descriptionShort = "$STR_kr_weapons_ammo_12x76_FTX_custom_dsc";
		model = "KR\weapons\kr_weaponpack\ammunition\looseRounds\FTX_custom_LooseRound.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 20;
		ammo = "Bullet_12x76_FTX_custom";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack\ammunition\data\FTX_custom.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack\ammunition\data\FTX_custom.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack\ammunition\data\FTX_custom_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack\ammunition\data\FTX_custom_damage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack\ammunition\data\FTX_custom_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_12x76_RIP: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_12x76_RIP";
		descriptionShort = "$STR_kr_weapons_ammo_12x76_RIP_dsc";
		model = "KR\weapons\kr_weaponpack\ammunition\looseRounds\RIP_LooseRound.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 20;
		ammo = "Bullet_12x76_RIP";
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP_damage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack\ammunition\data\RIP_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_12x76_buckshot_5: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_12x76_buckshot_5";
		descriptionShort = "$STR_kr_weapons_ammo_12x76_buckshot_5_dsc";
		model = "KR\weapons\kr_weaponpack\ammunition\looseRounds\buckshot_LooseRound.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 40;
		ammo = "Bullet_12x76_buckshot_5";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\ammunition\data\buckshot_5_co.paa"};
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 50;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_5.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_5_worn.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_5_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_5_badlydamage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_5_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_12x76_buckshot_7: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_12x76_buckshot_7";
		descriptionShort = "$STR_kr_weapons_ammo_12x76_buckshot_7_dsc";
		model = "KR\weapons\kr_weaponpack\ammunition\looseRounds\buckshot_LooseRound.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 40;
		ammo = "Bullet_12x76_buckshot_7";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\ammunition\data\buckshot_7_co.paa"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 50;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_7.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_7_worn.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_7_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_7_badlydamage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_7_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_12x76_buckshot_8: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_12x76_buckshot_8";
		descriptionShort = "$STR_kr_weapons_ammo_12x76_buckshot_8_dsc";
		model = "KR\weapons\kr_weaponpack\ammunition\looseRounds\buckshot_LooseRound.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 40;
		ammo = "Bullet_12x76_buckshot_8";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\ammunition\data\buckshot_8_co.paa"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 50;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_8.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_8_worn.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_8_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_8_badlydamage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack\ammunition\data\buckshot_8_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_23x75_shrapnel_10: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_23x75_shrapnel_10";
		descriptionShort = "$STR_kr_weapons_ammo_23x75_shrapnel_10_dsc";
		model = "KR\weapons\kr_weaponpack_2\ammunition\looseRounds\23x75_shrapnel_10_LooseRounds.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 10;
		ammo = "Bullet_23x75_shrapnel_10";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "23x75";
			kr_bullettype = 0;
			kr_range = 10;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack_2\ammunition\data\shrapnel_10_23x75.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack_2\ammunition\data\shrapnel_10_23x75.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack_2\ammunition\data\shrapnel_10_23x75_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack_2\ammunition\data\shrapnel_10_23x75_damage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack_2\ammunition\data\shrapnel_10_23x75_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_23x75_shrapnel_25: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_23x75_shrapnel_25";
		descriptionShort = "$STR_kr_weapons_ammo_23x75_shrapnel_25_dsc";
		model = "KR\weapons\kr_weaponpack_2\ammunition\looseRounds\23x75_shrapnel_25_LooseRounds.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 10;
		ammo = "Bullet_23x75_shrapnel_25";
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "23x75";
			kr_bullettype = 0;
			kr_range = 10;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack_2\ammunition\data\shrapnel_25_23x75.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack_2\ammunition\data\shrapnel_25_23x75.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack_2\ammunition\data\shrapnel_25_23x75_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack_2\ammunition\data\shrapnel_25_23x75_damage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack_2\ammunition\data\shrapnel_25_23x75_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_Ammo_23x75_barrikade: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_ammo_23x75_barrikade";
		descriptionShort = "$STR_kr_weapons_ammo_23x75_barrikade_dsc";
		model = "KR\weapons\kr_weaponpack_2\ammunition\looseRounds\23x75_barrikade_LooseRounds.p3d";
		iconCartridge = 4;
		weight = 35;
		count = 10;
		ammo = "Bullet_23x75_barrikade";
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "23x75";
			kr_bullettype = 0;
			kr_range = 150;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"\KR\weapons\kr_weaponpack_2\ammunition\data\barrikade_23x75.rvmat"}},{0.7,{"\KR\weapons\kr_weaponpack_2\ammunition\data\barrikade_23x75.rvmat"}},{0.5,{"\KR\weapons\kr_weaponpack_2\ammunition\data\barrikade_23x75_damage.rvmat"}},{0.3,{"\KR\weapons\kr_weaponpack_2\ammunition\data\barrikade_23x75_damage.rvmat"}},{0.0,{"\KR\weapons\kr_weaponpack_2\ammunition\data\barrikade_23x75_destruct.rvmat"}}};
				};
			};
		};
	};
};
