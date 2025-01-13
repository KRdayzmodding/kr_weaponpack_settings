class CfgPatches
{
	class kr_attachments_tt_grips
	{
		units[] = {"kr_tt_grip_PM_laser","kr_tt_grip_rubberized","kr_tt_grip_razor_arms"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_tt_grip_Base;
	class kr_LaserPointer_Base;

	class kr_tt_grip_PM_laser: kr_LaserPointer_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_tt_grip_PM_laser";
		descriptionShort = "$STR_kr_weapons_attachments_tt_grip_PM_laser_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\pgrip_tt_PM_laser.p3d";
		weight = 60;
		itemSize[] = {1,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.8,0.8,0.8};
		//attachments[] = {};
		inventorySlot[] = {"kr_tt_grip"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\laser_tt_206_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\laser_tt_206.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "TT";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\laser_tt_206.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\laser_tt_206_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\laser_tt_206_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\laser_tt_206_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\laser_tt_206_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_tt_grip_rubberized: kr_tt_grip_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_tt_grip_rubberized";
		descriptionShort = "$STR_kr_weapons_attachments_tt_grip_rubberized_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\pgrip_tt_rubberized.p3d";
		weight = 50;
		itemSize[] = {1,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		attachments[] = {};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\tt_grip_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\tt_grip.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "TT";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\tt_grip.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\tt_grip_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\tt_grip_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\tt_grip_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\tt_grip_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_tt_grip_razor_arms: kr_tt_grip_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_tt_grip_razor_arms";
		descriptionShort = "$STR_kr_weapons_attachments_tt_grip_razor_arms_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\pgrip_tt_razor_arms.p3d";
		weight = 50;
		itemSize[] = {1,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.6,0.6,0.8};
		attachments[] = {};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\razor_arms_grip_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\razor_arms_grip.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "TT";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\razor_arms_grip.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\razor_arms_grip_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\razor_arms_grip_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\razor_arms_grip_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\tt_grips\data\razor_arms_grip_destruct.rvmat"}}};
				};
			};
		};
	};
};
