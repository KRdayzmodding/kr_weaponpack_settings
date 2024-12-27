class CfgPatches
{
	class kr_weapatt_muzzle127x55
	{
		units[] = {"kr_muzzle127x55_ash12"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_muzzle127x55_ash12: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle127x55_supressor_ash12_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle127x55_supressor_ash12_std_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\muzzle\muzzle127x55\ash_supressor.p3d";
		weight = 590;
		itemSize[] = {3,1};
		itemModelLength = 0.244;
		inventorySlot[] = {"kr_muzzle127_55"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ash12_add_co.paa"};
		class kr_description
		{
			kr_caliber = "12.7x55";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_destruct.rvmat"}}};
				};
			};
		};
	};
};
