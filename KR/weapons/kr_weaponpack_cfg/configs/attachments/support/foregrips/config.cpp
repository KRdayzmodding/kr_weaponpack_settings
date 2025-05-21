class CfgPatches
{
	class kr_attachments_foregrips
	{
		units[] = {"kr_foregrip_rtm_pillau","kr_foregrip_zenit_rk_0","kr_foregrip_zenit_rk_6","kr_foregrip_bgv_mk46k","kr_foregrip_bgv_mk46k_fde","kr_foregrip_vtac_uvg","kr_foregrip_zenit_rk_4","kr_foregrip_zenit_rk_5","kr_foregrip_ckib_ash12_std","kr_foregrip_cobra_tactical","kr_foregrip_sturmgriff_assault","kr_foregrip_magpul_afg","kr_foregrip_magpul_afg_fde","kr_foregrip_magpul_afg_fg","kr_foregrip_magpul_afg_od","kr_foregrip_magpul_rvg","kr_foregrip_magpul_rvg_fde","kr_foregrip_td_al_skltn","kr_foregrip_zenit_rk_1","kr_foregrip_hera_arms_cqr","kr_foregrip_kac_vertical","kr_foregrip_stark_se_5_express","kr_foregrip_zenit_rk_2","kr_foregrip_zenit_b25u_rk_1","kr_foregrip_fortis_shift"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_foregrip_t1_Base;
	class kr_foregrip_t2_Base;
	class kr_foregrip_t3_Base;
	class kr_foregrip_t4_Base;
	class kr_foregrip_rtm_pillau: kr_foregrip_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_rtm_pillau";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_rtm_pillau_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_rtm_pillau.p3d";
		weight = 65;
		itemSize[] = {1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\rtm_pillau_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\rtm_pillau.rvmat"};
		recoilModifier[] = {0.7,0.9,1};	
		swayModifier[] = {0.9,0.8,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\rtm_pillau.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\rtm_pillau_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\rtm_pillau_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\rtm_pillau_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\rtm_pillau_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_zenit_rk_0: kr_foregrip_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_zenit_rk_0";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_zenit_rk_0_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_zenit_rk_0.p3d";
		weight = 138;
		itemSize[] = {1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_0_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_0.rvmat"};
		recoilModifier[] = {0.9,0.7,1};	
		swayModifier[] = {0.8,0.9,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_0.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_0_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_0_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_0_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_0_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_zenit_rk_6: kr_foregrip_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_zenit_rk_6";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_zenit_rk_6_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_zenit_rk_6.p3d";
		weight = 100;
		itemSize[] = {1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_6_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_6.rvmat"};
		recoilModifier[] = {0.9,0.9,1};	
		swayModifier[] = {0.7,0.8,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_6.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_6_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_6_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_6_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_6_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_bgv_mk46k: kr_foregrip_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_bgv_mk46k";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_bgv_mk46k_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_bgv_mk46k.p3d";
		weight = 72;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\bgv_mk46k_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\bgv_mk46k.rvmat"};
		recoilModifier[] = {0.9,0.9,1};	
		swayModifier[] = {0.8,0.7,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\bgv_mk46k.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\bgv_mk46k_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\bgv_mk46k_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\bgv_mk46k_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\bgv_mk46k_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_bgv_mk46k_fde: kr_foregrip_bgv_mk46k
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\bgv_mk46k_fde_co.paa"};
	};
	class kr_foregrip_vtac_uvg: kr_foregrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_vtac_uvg";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_vtac_uvg_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_vtac_uvg.p3d";
		weight = 107;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\vtac_uvg_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\vtac_uvg.rvmat"};
		recoilModifier[] = {0.6,0.9,1};	
		swayModifier[] = {0.9,0.9,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\vtac_uvg.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\vtac_uvg_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\vtac_uvg_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\vtac_uvg_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\vtac_uvg_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_zenit_rk_4: kr_foregrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_zenit_rk_4";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_zenit_rk_4_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_zenit_rk_4.p3d";
		weight = 127;
		itemSize[] = {1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_4_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_4.rvmat"};
		recoilModifier[] = {0.9,0.6,1};	
		swayModifier[] = {0.9,0.9,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_4.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_4_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_4_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_4_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_4_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_zenit_rk_5: kr_foregrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_zenit_rk_5";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_zenit_rk_5_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_zenit_rk_5.p3d";
		weight = 127;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_5_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_5.rvmat"};
		recoilModifier[] = {0.9,0.9,1};	
		swayModifier[] = {0.6,0.9,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_5.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_5_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_5_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_5_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_5_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_ckib_ash12_std: kr_foregrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_ckib_ash12_std";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_ckib_ash12_std_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_ckib_ash12_std.p3d";
		weight = 80;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\ckib_ash12_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\ckib_ash12_std.rvmat"};
		recoilModifier[] = {0.9,0.9,1};	
		swayModifier[] = {0.9,0.6,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\ckib_ash12_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\ckib_ash12_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\ckib_ash12_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\ckib_ash12_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\ckib_ash12_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_cobra_tactical: kr_foregrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_cobra_tactical";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_cobra_tactical_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_cobra_tactical.p3d";
		weight = 80;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\cobra_tactical_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\cobra_tactical.rvmat"};
		recoilModifier[] = {0.6,0.6,1};	
		swayModifier[] = {0.9,0.9,0.9};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\cobra_tactical.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\cobra_tactical_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\cobra_tactical_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\cobra_tactical_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\cobra_tactical_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_sturmgriff_assault: kr_foregrip_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_sturmgriff_assault";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_sturmgriff_assault_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_sturmgriff_assault.p3d";
		weight = 68;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\sturmgriff_assault_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\sturmgriff_assault.rvmat"};
		recoilModifier[] = {0.9,0.9,1};	
		swayModifier[] = {0.6,0.6,0.9};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\sturmgriff_assault.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\sturmgriff_assault_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\sturmgriff_assault_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\sturmgriff_assault_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\sturmgriff_assault_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_magpul_afg: kr_foregrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_magpul_afg";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_magpul_afg_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_magpul_afg.p3d";
		weight = 82;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_afg_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_afg.rvmat"};
		recoilModifier[] = {0.55,0.9,1};	
		swayModifier[] = {0.9,0.9,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_afg.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_afg_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_afg_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_afg_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_afg_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_magpul_afg_fde: kr_foregrip_magpul_afg
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_afg_fde_co.paa"};
	};
	class kr_foregrip_magpul_afg_fg: kr_foregrip_magpul_afg
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_afg_fg_co.paa"};
	};
	class kr_foregrip_magpul_afg_od: kr_foregrip_magpul_afg
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_afg_od_co.paa"};
	};
	class kr_foregrip_magpul_rvg: kr_foregrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_magpul_rvg";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_magpul_rvg_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_magpul_rvg.p3d";
		weight = 82;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_rvg_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_rvg.rvmat"};
		recoilModifier[] = {0.9,0.55,1};	
		swayModifier[] = {0.9,0.9,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_rvg.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_rvg_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_rvg_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_rvg_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_rvg_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_magpul_rvg_fde: kr_foregrip_magpul_rvg
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\magpul_rvg_fde_co.paa"};
	};
	class kr_foregrip_td_al_skltn: kr_foregrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_td_al_skltn";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_td_al_skltn_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_td_al_skltn.p3d";
		weight = 133;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\td_al_skltn_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\td_al_skltn.rvmat"};
		recoilModifier[] = {0.9,0.9,1};	
		swayModifier[] = {0.55,0.9,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\td_al_skltn.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\td_al_skltn_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\td_al_skltn_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\td_al_skltn_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\td_al_skltn_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_zenit_rk_1: kr_foregrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_zenit_rk_1";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_zenit_rk_1_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_zenit_rk_1.p3d";
		weight = 170;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_1.rvmat"};
		recoilModifier[] = {0.9,0.9,1};	
		swayModifier[] = {0.9,0.55,0.9};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_hera_arms_cqr: kr_foregrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_hera_arms_cqr";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_hera_arms_cqr_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_hera_arms_cqr.p3d";
		weight = 167;
		itemSize[] = {2,2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\hera_arms_cqr_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\hera_arms_cqr.rvmat"};
		recoilModifier[] = {0.6,0.6,1};	
		swayModifier[] = {0.9,0.9,0.9};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\hera_arms_cqr.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\hera_arms_cqr_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\hera_arms_cqr_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\hera_arms_cqr_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\hera_arms_cqr_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_kac_vertical: kr_foregrip_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_kac_vertical";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_kac_vertical_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_kac_vertical.p3d";
		weight = 72;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\kac_vertical_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\kac_vertical.rvmat"};
		recoilModifier[] = {0.9,0.9,1};	
		swayModifier[] = {0.6,0.6,0.9};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\kac_vertical.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\kac_vertical_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\kac_vertical_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\kac_vertical_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\kac_vertical_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_stark_se_5_express: kr_foregrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_stark_se_5_express";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_stark_se_5_express_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_stark_se_5_express.p3d";
		weight = 90;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\stark_se_5_express_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\stark_se_5_express.rvmat"};
		recoilModifier[] = {0.8,0.8,0.8};	
		swayModifier[] = {0.8,0.8,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\stark_se_5_express.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\stark_se_5_express_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\stark_se_5_express_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\stark_se_5_express_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\stark_se_5_express_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_zenit_rk_2: kr_foregrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_zenit_rk_2";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_zenit_rk_2_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_zenit_rk_2.p3d";
		weight = 200;
		itemSize[] = {1,3};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_2_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_2.rvmat"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {0.75,0.75,0.9};

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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_2.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_2_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_2_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_2_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_rk_2_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_zenit_b25u_rk_1: kr_foregrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_zenit_b25u_rk_1";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_zenit_b25u_rk_1_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_zenit_b25u_rk_1.p3d";
		weight = 180;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_b25u_rk_1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_b25u_rk_1.rvmat"};
		recoilModifier[] = {0.5,0.7,0.7};	
		swayModifier[] = {0.5,0.7,0.9};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -9;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_b25u_rk_1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_b25u_rk_1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_b25u_rk_1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_b25u_rk_1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\zenit_b25u_rk_1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_foregrip_fortis_shift: kr_foregrip_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_foregrip_fortis_shift";
		descriptionShort = "$STR_kr_weapons_attachments_foregrip_fortis_shift_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\foregrips\foregrip_fortis_shift.p3d";
		weight = 170;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\fortis_shift_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\fortis_shift.rvmat"};
		recoilModifier[] = {0.95,0.95,0.95};	
		swayModifier[] = {0.95,0.95,0.9};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\fortis_shift.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\fortis_shift_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\fortis_shift_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\fortis_shift_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\foregrips\data\fortis_shift_destruct.rvmat"}}};
				};
			};
		};
	};
};
