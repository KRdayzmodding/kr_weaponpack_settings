class CfgPatches
{
	class kr_weapatt_kr_muzzle762_25
	{
		units[] = {"kr_muzzle762x25_flashhider_tt","kr_muzzle762x25_suppressor_tt_muzzle"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle762x25_flashhider_tt: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762x25_flashhider_tt";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762x25_flashhider_tt_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\muzzle762x25_flashhider_tt.p3d";
		weight = 60;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle762_25"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x25: TT";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762x25_suppressor_tt_muzzle: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762x25_suppressor_tt";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762x25_suppressor_tt_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\muzzle762x25_suppressor_tt.p3d";
		weight = 60;
		itemModelLength = 0.16;
		inventorySlot[] = {"kr_muzzle762_25"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x25: TT";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle762x25\data\tt_muzzle_destruct.rvmat"}}};
				};
			};
		};
	};
};
