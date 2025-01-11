class CfgPatches
{
	class kr_weapatt_muzzle9x18
	{
		units[] = {"kr_muzzle9_18_suppressor_apb"};
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
	class kr_suppressor_t3_Base;
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	class kr_muzzle_t4_Base;
	class kr_muzzle9_18_suppressor_apb: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_18_suppressor_apb";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_18_suppressor_apb_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x18\muzzle9_18_suppressor_apb.p3d";
		weight = 60;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle9_18"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x18\data\apb_suppressor_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x18\data\apb_suppressor.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x18: APB";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x18\data\apb_suppressor.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x18\data\apb_suppressor_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x18\data\apb_suppressor_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x18\data\apb_suppressor_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x18\data\apb_suppressor_destruct.rvmat"}}};
				};
			};
		};
	};
};
