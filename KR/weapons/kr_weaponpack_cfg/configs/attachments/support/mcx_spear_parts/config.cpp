class CfgPatches
{
	class kr_attachments_mcx_spear_parts
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
	class kr_mcx_spear_hguard_Base;
	class kr_mcx_spear_stock_Base;

	class kr_mcx_spear_fstock_tube: kr_mcx_spear_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mcx_spear_stock_tube";
		descriptionShort = "$STR_kr_weapons_attachments_mcx_spear_stock_tube_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\mcx_spear_stock_tube.p3d";
		weight = 380;
		attachments[] = {"kr_ar_bttstck"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		itemSize[] = {2,1};
		haveTube = 1;
		isTube = 1;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_f_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_f_stock.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "MCX SPEAR";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_f_stock.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_f_stock_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_f_stock_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_f_stock_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_f_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class kr_mcx_spear_stock_std : kr_mcx_spear_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mcx_spear_stock_std";
		descriptionShort = "$STR_kr_weapons_attachments_mcx_spear_stock_std_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\mcx_spear_stock_std.p3d";
		weight = 380;
		recoilModifier[] = {1.0,1.0,0.9};
		swayModifier[] = {1.0,0.8,0.85};
		itemSize[] = {2,1};
		haveTube = 0;
		isTube = 0;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_early_type_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_early_type.rvmat"};

		class kr_description
		{
			kr_tier = 2;
			kr_type = "MCX SPEAR";
		};

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
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_early_type.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_early_type_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_early_type_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_early_type_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\mcx_early_type_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class kr_mcx_spear_handguard: kr_mcx_spear_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mcx_spear_handguard";
		descriptionShort = "$STR_kr_weapons_attachments_mcx_spear_handguard_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\mcx_spear_hguard.p3d";
		weight = 420;
		itemSize[] = {3,1};
		attachments[] = {"kr_rail_mount"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\spear_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\spear_handguard.rvmat"};
		
		class kr_description
		{
			kr_tier = 3;
			kr_type = "MCX SPEAR";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};
		class kr_firearms {};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\spear_handguard.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\spear_handguard_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\spear_handguard_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\spear_handguard_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mcx_spear_parts\data\spear_handguard_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class kr_mcx_spear_handguard_raild: kr_mcx_spear_handguard
	{
		displayName = "$STR_kr_weapons_attachments_mcx_spear_handguard_raild";
		attachments[] = {"kr_foregrip","kr_light_right"};

		class kr_firearms
		{
			grip = 1;
			light = 1;
			holo = 1;
		};
	};
};
