class CfgPatches
{
	class kr_attachments_mk18_parts
	{
		units[] = {"kr_mk18_hguard","kr_mk18_hguard_raild"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_weapons_firearms_mk18","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_mk18_hguard_Base;
	class kr_mk18_hguard: kr_mk18_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mk18_handguard";
		descriptionShort = "$STR_kr_weapons_attachments_mk18_handguard_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\mk18_parts\mk18_handguard.p3d";
		weight = 420;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		itemSize[] = {7,1};
		attachments[] = {"kr_pointer_1","kr_rail_mount"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mk18_parts\data\mk18_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mk18_parts\data\mk18_handguard.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 18;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "MK18";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 0;
				light = 0;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mk18_parts\data\mk18_handguard.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mk18_parts\data\mk18_handguard_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mk18_parts\data\mk18_handguard_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mk18_parts\data\mk18_handguard_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mk18_parts\data\mk18_handguard_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mk18_hguard_raild: kr_mk18_hguard
	{
		displayName = "$STR_kr_weapons_attachments_mk18_handguard_raild";
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod"};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "MK18";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 1;
				light = 1;
				holo = 1;
				gasblock = 0;
				sight = 1;
			};
		};
	};
};
