class CfgPatches
{
	class kr_attachments_pm_parts
	{
		units[] = {"kr_grip_pm_fd","kr_grip_pm_tk"};
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
	class kr_grip_pm_Base: kr_pgrip_Base
	{
		scope = 0;
		simpleHiddenSelections[] = {};
		hiddenSelections[] = {"camo"};
		itemSize[] = {2,1};
		weight = 250;
		inventorySlot[] = {"kr_pgrip_pm"};
		class kr_description
		{
			kr_type = "PM";
		};
	};
	class kr_grip_pm_fd: kr_grip_pm_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_grip_pm_fd";
		descriptionShort = "$STR_kr_weapons_attachments_grip_pm_fd_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\pgrip_pm_fd.p3d";
		weight = 50;
		itemSize[] = {1,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.6};
		attachments[] = {};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\pm_fd_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\pm_fd.rvmat"};
		soundImpactType = "plastic";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "PM";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\pm_fd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\pm_fd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\pm_fd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\pm_fd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\pm_fd_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_grip_pm_tk: kr_grip_pm_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_grip_pm_tk";
		descriptionShort = "$STR_kr_weapons_attachments_grip_pm_tk_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\pgrip_pm_tk.p3d";
		weight = 220;
		itemSize[] = {2,1};
		recoilModifier[] = {0.6,0.7,0.6};
		swayModifier[] = {0.7,0.7,0.7};
		attachments[] = {"kr_light_pistol"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\PM_TK_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\PM_TK.rvmat"};
		soundImpactType = "plastic";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "PM";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\PM_TK.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\PM_TK_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\PM_TK_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\PM_TK_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\pm_parts\data\PM_TK_destruct.rvmat"}}};
				};
			};
		};
	};
};
