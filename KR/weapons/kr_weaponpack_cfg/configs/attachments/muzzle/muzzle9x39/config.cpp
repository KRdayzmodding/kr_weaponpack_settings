class CfgPatches
{
	class kr_weapatt_muzzle9x39
	{
		units[] = {"kr_muzzle9_39_suppressor_9a91_std","kr_muzzle9_39_suppressor_kr_denoiser"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_suppressor_t2_Base;
	class kr_muzzle9_39_suppressor_9a91_std: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_39_suppressor_9a91_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_39_suppressor_9a91_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\muzzle9_39_suppressor_9a91_std.p3d";
		weight = 127;
		itemModelLength = 0.37;
		inventorySlot[] = {"kr_muzzle_9_39_9a91"};
		attachments[] = {"kr_s_mount_1","kr_s_mount_2"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\9a91_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\9a91_std.rvmat"};

		recoilModifier[] = {1.0,1.0,0.9};
		swayModifier[] = {1.2,1.2,1.2};
		dispersionModifier = 0.001;
		noiseShootModifier = -0.93;
		barrelArmor = 10500;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};

		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\9a91_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\9a91_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\9a91_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\9a91_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\9a91_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9_39_suppressor_kr_denoiser: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_39_suppressor_kr_denoiser";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_39_suppressor_kr_denoiser_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\muzzle9_39_suppressor_kr_denoiser.p3d";
		weight = 156;
		itemModelLength = 0.305;
		inventorySlot[] = {"kr_muzzle_9_39_9a91"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\kr_denoiser_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\kr_denoiser.rvmat"};

		recoilModifier[] = {1.0,0.9,0.9};
		swayModifier[] = {1.0,1.1,1.1};
		dispersionModifier = 0.0015;
		noiseShootModifier = -0.95;
		barrelArmor = 5000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};

		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\kr_denoiser.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\kr_denoiser_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\kr_denoiser_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\kr_denoiser_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x39\data\kr_denoiser_destruct.rvmat"}}};
				};
			};
		};
	};
};
