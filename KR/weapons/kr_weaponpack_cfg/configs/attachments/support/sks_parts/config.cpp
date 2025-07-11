class CfgPatches
{
	class kr_attachments_sks_parts
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
	class kr_receiver_Base;
	class kr_hguard_Base;

	class kr_sks_reciever_mtu017: kr_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_reciever_sks_mtu017";
		descriptionShort = "$STR_kr_weapons_attachments_reciever_sks_mtu017_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\reciever_sks_mtu017.p3d";
		inventorySlot[] = {"kr_sks_receiver"};
		weight = 215;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1.1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\reciever_sks_mtu017_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\reciever_sks_mtu017.rvmat"};
		itemSize[] = {2,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_firearms
		{
			receiver = 1;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "SKS";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\reciever_sks_mtu017.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\reciever_sks_mtu017_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\reciever_sks_mtu017_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\reciever_sks_mtu017_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\reciever_sks_mtu017_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_mount_sks_utg_socom: kr_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_sks_utg_socom";
		descriptionShort = "$STR_kr_weapons_attachments_mount_sks_utg_socom_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\mount_sks_utg_socom.p3d";
		inventorySlot[] = {"kr_sks_hndgrd"};
		weight = 170;
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\mount_sks_utg_socom_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\mount_sks_utg_socom.rvmat"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {0.9,0.9,1.0};


		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		attachments[] = {"kr_bipod","kr_light_right","kr_light_left"};

		class kr_description
		{
			kr_type = "SKS";
			kr_tier = 3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\mount_sks_utg_socom.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\mount_sks_utg_socom_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\mount_sks_utg_socom_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\mount_sks_utg_socom_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sks_parts\data\mount_sks_utg_socom_destruct.rvmat"}}};
				};
			};
		};
	};
};
