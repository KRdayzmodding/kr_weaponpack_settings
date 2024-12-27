class CfgPatches
{
	class kr_attachments_ak_pistolgrips
	{
		units[] = {"kr_ak_pgrip_tango_down","kr_ak_pgrip_tango_down_fde","kr_ak_pgrip_us_palm","kr_ak_pgrip_magpul_moe_ak","kr_ak_pgrip_tapco_saw","kr_ak_pgrip_tapco_saw_fde","kr_ak_pgrip_fab_defence_agr","kr_ak_pgrip_strike_indsustries","kr_ak_pgrip_strike_indsustries_fde","kr_ak_pgrip_ak12","kr_ak_pgrip_kgb_mg47","kr_ak_pgrip_kgb_mg47_red","kr_ak_pgrip_aeroknox_scorpius","kr_ak_pgrip_ags74_pro","kr_ak_pgrip_zenit_rk3"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_attachments_support"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ak_pgrip_t1_Base;
	class kr_ak_pgrip_t2_Base;
	class kr_ak_pgrip_t3_Base;
	class kr_ak_pgrip_t4_Base;
	class kr_ak_pgrip_tango_down: kr_ak_pgrip_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_tango_down";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_tango_down_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_tango_down.p3d";
		weight = 110;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tango_down_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tango_down.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tango_down.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tango_down_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tango_down_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tango_down_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tango_down_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_pgrip_tango_down_fde: kr_ak_pgrip_tango_down
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tango_down_fde_co.paa"};
	};
	class kr_ak_pgrip_us_palm: kr_ak_pgrip_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_us_palm";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_us_palm_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_us_palm.p3d";
		weight = 90;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\us_palm_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\us_palm.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\us_palm.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\us_palm_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\us_palm_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\us_palm_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\us_palm_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_pgrip_magpul_moe_ak: kr_ak_pgrip_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_magpul_moe_ak";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_magpul_moe_ak_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_magpul_moe_ak.p3d";
		weight = 80;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\magpul_moe_ak_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\magpul_moe_ak.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\magpul_moe_ak.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\magpul_moe_ak_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\magpul_moe_ak_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\magpul_moe_ak_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\magpul_moe_ak_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_pgrip_tapco_saw: kr_ak_pgrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_tapco_saw";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_tapco_saw_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_tapco_saw.p3d";
		weight = 130;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tapco_saw_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tapco_saw.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tapco_saw.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tapco_saw_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tapco_saw_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tapco_saw_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tapco_saw_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_pgrip_tapco_saw_fde: kr_ak_pgrip_tapco_saw
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\tapco_saw_fde_co.paa"};
	};
	class kr_ak_pgrip_fab_defence_agr: kr_ak_pgrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_fab_defence_agr";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_fab_defence_agr_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_fab_defence_agr.p3d";
		weight = 120;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\fab_defence_agr_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\fab_defence_agr.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\fab_defence_agr.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\fab_defence_agr_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\fab_defence_agr_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\fab_defence_agr_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\fab_defence_agr_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_pgrip_strike_indsustries: kr_ak_pgrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_strike_indsustries";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_strike_indsustries_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_strike_indsustries.p3d";
		weight = 91;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\strike_indsustries_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\strike_indsustries.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\strike_indsustries.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\strike_indsustries_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\strike_indsustries_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\strike_indsustries_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\strike_indsustries_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_pgrip_strike_indsustries_fde: kr_ak_pgrip_strike_indsustries
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\strike_indsustries_fde_co.paa"};
	};
	class kr_ak_pgrip_ak12: kr_ak_pgrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_ak12";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_ak12_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_ak12.p3d";
		weight = 50;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ak12_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ak12.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ak12.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ak12_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ak12_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ak12_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ak12_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_pgrip_kgb_mg47: kr_ak_pgrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_kgb_mg47";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_kgb_mg47_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_kgb_mg47.p3d";
		weight = 153;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\kgb_mg47_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\kgb_mg47.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\kgb_mg47.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\kgb_mg47_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\kgb_mg47_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\kgb_mg47_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\kgb_mg47_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_pgrip_kgb_mg47_red: kr_ak_pgrip_kgb_mg47
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\kgb_mg47_red_co.paa"};
	};
	class kr_ak_pgrip_aeroknox_scorpius: kr_ak_pgrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_aeroknox_scorpius";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_aeroknox_scorpius_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_aeroknox_scorpius.p3d";
		weight = 114;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\aeroknox_scorpius_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\aeroknox_scorpius.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\aeroknox_scorpius.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\aeroknox_scorpius_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\aeroknox_scorpius_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\aeroknox_scorpius_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\aeroknox_scorpius_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_pgrip_ags74_pro: kr_ak_pgrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_ags74_pro";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_ags74_pro_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_ags74_pro.p3d";
		weight = 150;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ags74_pro_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ags74_pro.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ags74_pro.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ags74_pro_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ags74_pro_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ags74_pro_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\ags74_pro_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_pgrip_zenit_rk3: kr_ak_pgrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_pgrip_zenit_rk3";
		descriptionShort = "$STR_kr_weapons_attachments_ak_pgrip_zenit_rk3_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\ak_pgrip_zenit_rk3.p3d";
		weight = 225;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\zenit_rk3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\zenit_rk3.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "AK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\zenit_rk3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\zenit_rk3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\zenit_rk3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\zenit_rk3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_pistolgrips\data\zenit_rk3_destruct.rvmat"}}};
				};
			};
		};
	};
};
