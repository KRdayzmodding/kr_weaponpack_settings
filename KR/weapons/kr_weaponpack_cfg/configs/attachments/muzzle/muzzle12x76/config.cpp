class CfgPatches
{
	class kr_weapatt_muzzle12x76
	{
		units[] = {"kr_muzzle12x76_flashhider_vpo205_std","kr_muzzle12x76_flashhider_css_monster_caw","kr_muzzle12x76_flashhider_rh_gk_02","kr_muzzle12x76_suppressor_hexagon_12k","kr_muzzle12x76_suppressor_silencerco_salvo"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_suppressor_t2_Base;
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	class kr_muzzle12x76_flashhider_vpo205_std: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_vpo205_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_vpo205_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\muzzle12x76_flashhider_vpo205_std.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle12_76"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std.rvmat"};
		class kr_description
		{
			kr_caliber = "12x76";
			kr_tier = "1";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle12x76_flashhider_monster_claw: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_css_monster_caw";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_css_monster_caw_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\muzzle12x76_flashhider_css_monster_caw.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle12_76"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw.rvmat"};
		class kr_description
		{
			kr_caliber = "12x76";
			kr_tier = "2";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle12x76_flashhider_rh_gk_02: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_rh_gk_02";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_rh_gk_02_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\muzzle12x76_flashhider_rh_gk_02.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle12_76"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02.rvmat"};
		class kr_description
		{
			kr_caliber = "12x76";
			kr_tier = "3";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle12x76_suppressor_hexagon_12k: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle12x76_suppressor_hexagon_12k";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle12x76_suppressor_hexagon_12k_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\muzzle12x76_suppressor_hexagon_12k.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle12_76"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k.rvmat"};
		class kr_description
		{
			kr_caliber = "12x76";
			kr_tier = "1";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle12x76_suppressor_silencerco_salvo: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle12x76_suppressor_silencerco_salvo";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle12x76_suppressor_silencerco_salvo_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\muzzle12x76_suppressor_silencerco_salvo.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle12_76"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo.rvmat"};
		class kr_description
		{
			kr_caliber = "12x76";
			kr_tier = "2";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo_destruct.rvmat"}}};
				};
			};
		};
	};
};
