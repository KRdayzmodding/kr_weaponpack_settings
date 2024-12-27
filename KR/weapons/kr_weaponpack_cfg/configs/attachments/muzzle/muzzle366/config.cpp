class CfgPatches
{
	class kr_weapatt_muzzle336
	{
		units[] = {"kr_muzzle366_suppressor_rotor_43"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_muzzle366_suppressor_rotor_43: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle366_suppressor_rotor_43";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle366_suppressor_rotor_43_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle366\muzzle366_suppressor_rotor_43.p3d";
		weight = 60;
		itemModelLength = 0.16;
		inventorySlot[] = {"kr_muzzle366"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle366\data\rotor_43_366_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle366\data\rotor_43_366.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".336TKM";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle366\data\rotor_43_366.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle366\data\rotor_43_366_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle366\data\rotor_43_366_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle366\data\rotor_43_366_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle366\data\rotor_43_366_destruct.rvmat"}}};
				};
			};
		};
	};
};
