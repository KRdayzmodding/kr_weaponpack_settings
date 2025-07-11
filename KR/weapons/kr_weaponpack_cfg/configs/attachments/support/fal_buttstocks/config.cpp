class CfgPatches
{
	class kr_attachments_fal_bttstck
	{
		units[] = {"kr_fal_stock_buffertube_adapter","kr_fal_stock_humpback","kr_fal_stock_magpul_prs","kr_fal_stock_para_brs","kr_fal_stock_para_folding","kr_fal_stock_para_spr"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_fal_stock_Base;
	class kr_fal_stock_buffertube_adapter: kr_fal_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_stock_buffertube_apadter";
		descriptionShort = "$STR_kr_weapons_attachments_fal_stock_buffertube_apadter_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\fal_bttstck_buffertube_apadter.p3d";
		simpleHiddenSelections[] = {"hide_tubepart"};
		attachments[] = {"kr_ar_bttstck"};
		weight = 472;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		itemSize[] = {2,1};
		haveTube = 1;
		isTube = 1;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\buffertube_apadter_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\buffertube_apadter.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "FAL";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\buffertube_apadter.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\buffertube_apadter_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\buffertube_apadter_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\buffertube_apadter_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\buffertube_apadter_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_stock_humpback: kr_fal_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_stock_humpback";
		descriptionShort = "$STR_kr_weapons_attachments_fal_stock_humpback_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\fal_bttstck_humpback.p3d";
		weight = 800;
		recoilModifier[] = {1,1,0.8};
		swayModifier[] = {1,0.85,0.9};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\humpback_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\humpback.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "FAL";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\humpback.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\humpback_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\humpback_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\humpback_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\humpback_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_stock_magpul_prs: kr_fal_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_stock_magpul_prs";
		descriptionShort = "$STR_kr_weapons_attachments_fal_stock_magpul_prs_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\fal_bttstck_magpul_prs.p3d";
		weight = 860;
		recoilModifier[] = {1,1,0.7};
		swayModifier[] = {1,0.7,0.8};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\magpul_prs_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\magpul_prs.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "FAL";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\magpul_prs.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\magpul_prs_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\magpul_prs_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\magpul_prs_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\magpul_prs_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_stock_para_brs: kr_fal_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_stock_para_brs";
		descriptionShort = "$STR_kr_weapons_attachments_fal_stock_para_brs_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\fal_bttstck_para_brs.p3d";
		weight = 810;
		recoilModifier[] = {1,1,0.8};
		swayModifier[] = {1,0.7,0.7};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_brs_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_brs.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "FAL";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_brs.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_brs_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_brs_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_brs_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_brs_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_stock_para_folding: kr_fal_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_stock_para_folding";
		descriptionShort = "$STR_kr_weapons_attachments_fal_stock_para_folding_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\fal_bttstck_para_folding.p3d";
		weight = 800;
		recoilModifier[] = {1,1,0.9};
		swayModifier[] = {1,0.8,0.85};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_folding_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_folding.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "FAL";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_folding.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_folding_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_folding_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_folding_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_folding_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_stock_para_spr: kr_fal_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_stock_para_spr";
		descriptionShort = "$STR_kr_weapons_attachments_fal_stock_para_spr_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\fal_bttstck_para_spr.p3d";
		weight = 950;
		recoilModifier[] = {1,1,0.7};
		swayModifier[] = {1,0.65,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_spr_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_spr.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "FAL";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_spr.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_spr_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_spr_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_spr_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_buttstocks\data\para_spr_destruct.rvmat"}}};
				};
			};
		};
	};
};
