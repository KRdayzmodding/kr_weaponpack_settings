class CfgPatches
{
	class kr_attachments_g28_parts
	{
		units[] = {"kr_g28_hguard_extended","kr_g28_hguard_extended_black","kr_g28_hguard_patrol","kr_g28_hguard_patrol_black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_weapons_firearms_g28","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_g28_hndgrd_Base;
	class kr_g28_hguard_extended: kr_g28_hndgrd_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_g28_handguard";
		descriptionShort = "$STR_kr_weapons_attachments_g28_handguard_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\g28_handguards\g28_handguard_extended.p3d";
		weight = 420;
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		itemSize[] = {5,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\extended_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\extended.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 30;
		};
		attachments[] = {"kr_foregrip","kr_pointer_1","kr_light_right","kr_bipod","kr_light_left"};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 1;
				light = 1;
				holo = 1;
				gasblock = 0;
				sight = 0;
			};
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "HK417/G28";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\extended.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\extended_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\extended_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\extended_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\extended_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_g28_hguard_extended_black: kr_g28_hguard_extended
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\extended_black_co.paa"};
	};
	class kr_g28_hguard_patrol: kr_g28_hndgrd_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_g28_handguard_patrol";
		descriptionShort = "$STR_kr_weapons_attachments_g28_handguard_patrol_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\g28_handguards\g28_handguard_patrol.p3d";
		weight = 420;
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		itemSize[] = {4,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\patrol_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\patrol.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "HK417/G28";
		};
		class kr_firearms
		{
			class barreltype1
			{
				grip = 1;
				light = 1;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\patrol.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\patrol_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\patrol_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\patrol_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\patrol_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_g28_hguard_patrol_black: kr_g28_hguard_patrol
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\g28_handguards\data\patrol_black_co.paa"};
	};
};
