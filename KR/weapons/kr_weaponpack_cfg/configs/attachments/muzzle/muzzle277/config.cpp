class CfgPatches
{
	class kr_weapatt_muzzle277
	{
		units[] = {"kr_muzzle277_suppressor_SLX68"};
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
	class kr_muzzle277_suppressor_SLX68: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle277_suppressor_SLX68";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle277_suppressor_SLX68_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle277\muzzle277_suppressor_SLX68.p3d";
		weight = 60;
		itemModelLength = 0.18;
		inventorySlot[] = {"kr_muzzle277"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle277\data\spear_suppressor_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle277\data\spear_suppressor.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = ".277 FURY";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle277\data\spear_suppressor.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle277\data\spear_suppressor_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle277\data\spear_suppressor_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle277\data\spear_suppressor_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle277\data\spear_suppressor_destruct.rvmat"}}};
				};
			};
		};
	};
};
