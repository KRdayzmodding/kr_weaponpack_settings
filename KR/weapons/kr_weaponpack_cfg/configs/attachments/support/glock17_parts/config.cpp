class CfgPatches
{
	class kr_attachments_glock17_parts
	{
		units[] = {"kr_reciever_glock17_gspc_moto","kr_reciever_glock17_gspc_viper","kr_reciever_glock17_zev_hex","kr_reciever_glock17_zev_spartan","kr_grip_glock_rubberized"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_support_Base;
	class kr_pgrip_Base;
	class kr_glock17_reciever_Base: kr_support_Base
	{
		scope = 0;
		simpleHiddenSelections[] = {};
		hiddenSelections[] = {"camo"};
		itemSize[] = {2,1};
		weight = 250;
		inventorySlot[] = {"kr_receiver_g17"};
		class kr_description
		{
			kr_type = "Glock17";
		};
	};
	class kr_reciever_glock17_gspc_moto: kr_glock17_reciever_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_glock17_reciever_gspc_moto";
		descriptionShort = "$STR_kr_weapons_attachments_glock17_reciever_gspc_moto_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\reciever_gspc_moto.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_moto_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_moto.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_moto.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_moto_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_moto_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_moto_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_moto_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_reciever_glock17_gspc_viper: kr_glock17_reciever_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_glock17_reciever_gspc_viper";
		descriptionShort = "$STR_kr_weapons_attachments_glock17_reciever_gspc_viper_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\reciever_gspc_viper.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_viper_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_viper.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_viper.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_viper_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_viper_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_viper_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_gspc_viper_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_reciever_glock17_zev_hex: kr_glock17_reciever_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_glock17_reciever_zev_hex";
		descriptionShort = "$STR_kr_weapons_attachments_glock17_reciever_zev_hex_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\reciever_zev_hex.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_hex_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_hex.rvmat"};
		weight = 190;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_hex.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_hex_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_hex_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_hex_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_hex_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_reciever_glock17_zev_spartan: kr_glock17_reciever_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_glock17_reciever_zev_spartan";
		descriptionShort = "$STR_kr_weapons_attachments_glock17_reciever_zev_spartan_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\reciever_zev_spartan.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_spartan_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_spartan.rvmat"};
		weight = 190;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_spartan.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_spartan_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_spartan_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_spartan_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\reciever_zev_spartan_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_grip_glock_rubberized: kr_pgrip_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_glock_grip_rubberized";
		descriptionShort = "$STR_kr_weapons_attachments_glock_grip_rubberized_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\pgrip_glock17_pachmayr_tactical.p3d";
		weight = 50;
		itemSize[] = {1,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		attachments[] = {};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\pachmayr_tactical_rubber_grip_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\pachmayr_tactical_rubber_grip.rvmat"};
		inventorySlot[] = {"kr_pgrip_g17"};
		soundImpactType = "plastic";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Glock17/18c";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\pachmayr_tactical_rubber_grip.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\pachmayr_tactical_rubber_grip_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\pachmayr_tactical_rubber_grip_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\pachmayr_tactical_rubber_grip_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\glock17_parts\data\pachmayr_tactical_rubber_grip_destruct.rvmat"}}};
				};
			};
		};
	};
};
