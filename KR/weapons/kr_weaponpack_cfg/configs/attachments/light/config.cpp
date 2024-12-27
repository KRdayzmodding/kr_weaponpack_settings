class CfgPatches
{
	class kr_attachments_light
	{
		units[] = {"kr_light_steiner_las_tac_2","kr_light_surefire_xc1","kr_light_insight_wmx200","kr_light_armytek_xhp35","kr_light_ultrafire_WF501B","kr_light_zenit_2u","kr_laser_steiner_dbal","kr_laser_olight_baldr_pro","kr_laser_surefire_x400","kr_laser_zenit_2p","kr_laser_insight_anpeq2","kr_laser_anpeq15","kr_laser_tt_dlp_tactical_precision","kr_laser_zenit_perst_3","kr_laser_insight_la5","kr_laser_holosun_ls321","kr_laser_bemeyers_mawl_c1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Magazines"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class Switchable_Base;
	class kr_FlashlightBase: Switchable_Base
	{
		scope = 0;
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight","kr_pointer_1","kr_light_right","kr_light_bot","kr_light_left"};
		rotationFlags = 17;
		debug_ItemCategory = 3;
		reversed = 1;
		repairableWithKits[] = {7};
		repairCosts[] = {25.0};
		hiddenSelections[] = {"camo","reflector","glass","reflector_far"};
		soundImpactType = "plastic";
	};
	class kr_LaserPointer_base: kr_FlashlightBase
	{
		scope = 0;
		rotationFlags = 17;
		debug_ItemCategory = 3;
		reversed = 1;
		repairableWithKits[] = {7};
		repairCosts[] = {25.0};
		hiddenSelections[] = {"laser_reflector"};
		soundImpactType = "plastic";
	};
	class kr_TacticalBlock_base: kr_LaserPointer_base
	{
		scope = 0;
		rotationFlags = 17;
		debug_ItemCategory = 3;
		reversed = 1;
		repairableWithKits[] = {7};
		repairCosts[] = {25.0};
		hiddenSelections[] = {"camo","reflector","glass","laser_reflector","reflector_far"};
		soundImpactType = "plastic";
	};
	class kr_light_steiner_las_tac_2: kr_FlashlightBase
	{
		scope = 2;
		displayName = "$STR_kr_attachments_light_steiner_las_tac_2";
		descriptionShort = "$STR_kr_attachments_light_steiner_las_tac_2_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\light_steiner_las_tac_2.p3d";
		weight = 86;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight","kr_pointer_1","kr_light_right","kr_light_bot","kr_light_left","kr_light_pistol"};
		class kr_description
		{
			kr_tier = 1;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2_worn.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2_damage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2_badlydamage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2_destruct.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2_co.paa","dz\gear\tools\data\flashlight_glass.paa","KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2.rvmat","dz\gear\tools\data\flashlight_glass.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\steiner_las_tac_2.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_light_surefire_xc1: kr_FlashlightBase
	{
		scope = 2;
		displayName = "$STR_kr_attachments_laser_surefire_xc1";
		descriptionShort = "$STR_kr_attachments_laser_surefire_xc1_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\light_surefire_xc1.p3d";
		weight = 115;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight","kr_pointer_1","kr_light_right","kr_light_bot","kr_light_left","kr_light_pistol"};
		class kr_description
		{
			kr_tier = 1;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
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
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1_worn.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1_damage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1_badlydamage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1_destruct.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1_co.paa","dz\gear\tools\data\flashlight_glass.paa","KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1.rvmat","dz\gear\tools\data\flashlight_glass.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\surefire_xc1.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.005;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_light_insight_wmx200: kr_FlashlightBase
	{
		scope = 2;
		displayName = "$STR_kr_attachments_light_insight_wmx200";
		descriptionShort = "$STR_kr_attachments_light_insight_wmx200_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\light_insight_wmx200.p3d";
		weight = 210;
		itemSize[] = {3,1};
		class kr_description
		{
			kr_tier = 1;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200_worn.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200_damage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200_badlydamage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200_destruct.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200_co.paa","dz\gear\tools\data\flashlight_glass.paa","KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200.rvmat","dz\gear\tools\data\flashlight_glass.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\insight_wmx200.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_light_armytek_xhp35: kr_FlashlightBase
	{
		scope = 2;
		displayName = "$STR_kr_attachments_light_armytek_xhp35";
		descriptionShort = "$STR_kr_attachments_light_armytek_xhp35_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\light_armytek_xhp35.p3d";
		weight = 120;
		itemSize[] = {3,1};
		class kr_description
		{
			kr_tier = 3;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35_worn.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35_damage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35_badlydamage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35_destruct.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35_co.paa","dz\gear\tools\data\flashlight_glass.paa","KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35.rvmat","dz\gear\tools\data\flashlight_glass.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\armytek_xhp35.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.07;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_light_ultrafire_WF501B: kr_FlashlightBase
	{
		scope = 2;
		displayName = "$STR_kr_attachments_light_ultrafire_WF501B";
		descriptionShort = "$STR_kr_attachments_light_ultrafire_WF501B_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\light_ultrafire_WF501B.p3d";
		weight = 120;
		itemSize[] = {3,1};
		class kr_description
		{
			kr_tier = 3;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B_worn.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B_damage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B_badlydamage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B_destruct.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B_co.paa","dz\gear\tools\data\flashlight_glass.paa","KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B.rvmat","dz\gear\tools\data\flashlight_glass.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\ultrafire_WF501B.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.07;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_light_zenit_2u: kr_FlashlightBase
	{
		scope = 2;
		displayName = "$STR_kr_attachments_light_zenit_2u";
		descriptionShort = "$STR_kr_attachments_light_zenit_2u_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\light_zenit_2u.p3d";
		weight = 259;
		itemSize[] = {3,2};
		class kr_description
		{
			kr_tier = 4;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -7;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u_worn.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u_damage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u_badlydamage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u_destruct.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u_co.paa","dz\gear\tools\data\flashlight_glass.paa","KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u.rvmat","dz\gear\tools\data\flashlight_glass.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\zenit_2u.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.09;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_laser_steiner_dbal: kr_TacticalBlock_base
	{
		scope = 2;
		displayName = "$STR_kr_attachments_laser_steiner_dbal";
		descriptionShort = "$STR_kr_attachments_laser_steiner_dbal_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\laser_steiner_dbal.p3d";
		weight = 153;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight","kr_pointer_1","kr_light_right","kr_light_bot","kr_light_left","kr_light_pistol"};
		class kr_description
		{
			kr_tier = 1;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
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
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal_worn.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal_damage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal_badlydamage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal_destruct.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal_co.paa","dz\gear\tools\data\flashlight_glass.paa","KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal.rvmat","dz\gear\tools\data\flashlight_glass.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\steiner_dbal.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.03;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_laser_olight_baldr_pro: kr_TacticalBlock_base
	{
		scope = 2;
		displayName = "$STR_kr_attachments_light_olight_baldr_pro";
		descriptionShort = "$STR_kr_attachments_light_olight_baldr_pro_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\laser_olight_baldr_pro.p3d";
		weight = 129;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight","kr_pointer_1","kr_light_right","kr_light_bot","kr_light_left","kr_light_pistol"};
		class kr_description
		{
			kr_tier = 3;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro_worn.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro_damage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro_badlydamage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro_destruct.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro_co.paa","dz\gear\tools\data\flashlight_glass.paa","KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro.rvmat","dz\gear\tools\data\flashlight_glass.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\olight_baldr_pro.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.07;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_laser_surefire_x400: kr_TacticalBlock_base
	{
		scope = 2;
		displayName = "$STR_kr_attachments_light_surefire_x400";
		descriptionShort = "$STR_kr_attachments_light_surefire_x400_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\laser_surefire_x400.p3d";
		weight = 138;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight","kr_pointer_1","kr_light_right","kr_light_bot","kr_light_left","kr_light_pistol"};
		class kr_description
		{
			kr_tier = 3;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400_worn.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400_damage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400_badlydamage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400_destruct.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400_co.paa","dz\gear\tools\data\flashlight_glass.paa","KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400.rvmat","dz\gear\tools\data\flashlight_glass.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\surefire_x400.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.04;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_laser_zenit_2p: kr_TacticalBlock_base
	{
		scope = 2;
		displayName = "$STR_kr_attachments_light_zenit_2p";
		descriptionShort = "$STR_kr_attachments_light_zenit_2p_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\laser_zenit_2p.p3d";
		weight = 170;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight","kr_pointer_1","kr_light_right","kr_light_bot","kr_light_left","kr_light_pistol"};

		class kr_description
		{
			kr_tier = 4;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p_worn.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p_damage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p_badlydamage.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p_destruct.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p_co.paa","dz\gear\tools\data\flashlight_glass.paa","KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p.rvmat","dz\gear\tools\data\flashlight_glass.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\zenit_2p.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.04;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_laser_insight_anpeq2: kr_FlashlightBase
	{
		scope = 2;
		displayName = "$STR_kr_attachments_laser_insight_anpeq2";
		descriptionShort = "$STR_kr_attachments_laser_insight_anpeq2_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\laser_insight_anpeq2.p3d";
		weight = 210;
		itemSize[] = {2,1};
		class kr_description
		{
			kr_tier = 3;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 9;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2_destruct.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\insight_anpeq2.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.005;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_laser_anpeq15: kr_LaserPointer_base
	{
		scope = 2;
		displayName = "$STR_kr_attachments_laser_anpeq15";
		descriptionShort = "$STR_kr_attachments_laser_anpeq15_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\laser_anpeq15.p3d";
		weight = 210;
		itemSize[] = {2,1};
		class kr_description
		{
			kr_tier = 2;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
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
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\anpeq15.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\anpeq15_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\anpeq15_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\anpeq15_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\anpeq15_destruct.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\anpeq15_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\anpeq15_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\anpeq15_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\anpeq15_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\anpeq15.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\anpeq15.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\anpeq15.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\anpeq15.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.005;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_laser_tt_dlp_tactical_precision: kr_LaserPointer_base
	{
		scope = 2;
		displayName = "$STR_kr_attachments_laser_tt_dlp_tactical_precision";
		descriptionShort = "$STR_kr_attachments_laser_tt_dlp_tactical_precision_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\light\laser_tt_dlp_tactical_precision.p3d";
		weight = 120;
		itemSize[] = {1,1};
		inventorySlot[] = {"kr_tt_laser"};
		class kr_description
		{
			kr_tier = 2;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\light\data\tt_laser_co.paa","KR\weapons\kr_weaponpack_2\attachments\light\data\tt_laser_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\light\data\tt_laser.rvmat","KR\weapons\kr_weaponpack_2\attachments\light\data\tt_laser.rvmat"};
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
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\light\data\tt_laser.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\light\data\tt_laser_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\light\data\tt_laser_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\light\data\tt_laser_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\light\data\tt_laser_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.005;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_laser_zenit_perst_3: kr_LaserPointer_base
	{
		scope = 2;
		displayName = "$STR_kr_attachments_laser_zenit_perst_3";
		descriptionShort = "$STR_kr_attachments_laser_zenit_perst_3_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\laser_zenit_perst_3.p3d";
		weight = 300;
		itemSize[] = {2,1};
		class kr_description
		{
			kr_tier = 2;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
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
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3_destruct.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\zenit_perst_3.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.005;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_laser_insight_la5: kr_LaserPointer_base
	{
		scope = 2;
		displayName = "$STR_kr_attachments_laser_insight_la5";
		descriptionShort = "$STR_kr_attachments_laser_insight_la5_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\laser_insight_la5.p3d";
		weight = 210;
		itemSize[] = {2,1};
		class kr_description
		{
			kr_tier = 2;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
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
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_la5.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_la5_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_la5_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_la5_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\insight_la5_destruct.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\insight_la5_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\insight_la5_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\insight_la5_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\insight_la5_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\insight_la5.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\insight_la5.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\insight_la5.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\insight_la5.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.005;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class kr_laser_holosun_ls321: kr_LaserPointer_base
	{
		scope = 2;
		displayName = "$STR_kr_attachments_laser_holosun_ls321";
		descriptionShort = "$STR_kr_attachments_laser_holosun_ls321_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\laser_holosun_ls321.p3d";
		weight = 190;
		itemSize[] = {2,1};
		class kr_description
		{
			kr_tier = 4;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321_destruct.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\holosun_ls321.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.005;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	
	class kr_laser_bemeyers_mawl_c1: kr_LaserPointer_base
	{
		scope = 2;
		displayName = "$STR_kr_attachments_laser_bemeyers_mawl_c1";
		descriptionShort = "$STR_kr_attachments_laser_bemeyers_mawl_c1_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\light\laser_bemeyers_mawl_c1.p3d";
		weight = 286;
		itemSize[] = {2,1};
		class kr_description
		{
			kr_tier = 2;
			kr_angle = 0;
			kr_lumen = 0;
			kr_distance = 0;
		};
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
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1_destruct.rvmat"}}};
				};
			};
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1_co.paa","KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1.rvmat","KR\weapons\kr_weaponpack\attachments\light\data\bemeyers_mawl_c1.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.005;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
};