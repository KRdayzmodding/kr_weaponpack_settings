class CfgPatches
{
	class kr_attachmetns_mp5_mount
	{
		units[] = {"kr_mount_mp5_bt","kr_mount_mp5_hk_mfi"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class Inventory_Base;
	class kr_mount_mp5_bt: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_mp5_bt";
		descriptionShort = "$STR_kr_weapons_attachments_mount_mp5_bt_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\mp5_mount\mp5_bt_mount.p3d";
		inventorySlot[] = {"kr_mp5_mount"};
		itemSize[] = {3,1};
		weight = 223;
		rotationFlags = 32;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\bt_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\bt.rvmat"};
		isMount = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "HK MP5/MP5SD";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\bt.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\bt_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\bt_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\bt_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\bt_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mount_mp5_hk_mfi: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_mp5_hk_mfi";
		descriptionShort = "$STR_kr_weapons_attachments_mount_mp5_hk_mfi_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\mp5_mount\mp5_hk_mfi_mount.p3d";
		inventorySlot[] = {"kr_mp5_mount"};
		itemSize[] = {2,1};
		weight = 71;
		rotationFlags = 32;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\hk_mfi_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\hk_mfi.rvmat"};
		isMount = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "HK MP5";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\hk_mfi.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\hk_mfi_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\hk_mfi_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\hk_mfi_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_mount\data\hk_mfi_destruct.rvmat"}}};
				};
			};
		};
	};
};
