class CfgPatches
{
	class kr_attachments_rpk16_parts
	{
		units[] = {"kr_rpk16_fstock_tube","kr_rpk16_hguard_std","kr_rpk16_hguard_std_raild"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_rpk16_fstock_Base;
	class kr_rpk16_hguard_Base;
	class kr_rpk16_fstock_tube: kr_rpk16_fstock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_rpk16_fld_bttstck_tube";
		descriptionShort = "$STR_kr_weapons_attachments_rpk16_fld_bttstck_tube_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\rpk16_fld_bttstck_tube.p3d";
		weight = 142;
		attachments[] = {"kr_ar_bttstck"};
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		itemSize[] = {2,1};
		haveTube = 1;
		isTube = 1;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_fld_bttstck_tube_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_fld_bttstck_tube.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_fld_bttstck_tube.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_fld_bttstck_tube_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_fld_bttstck_tube_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_fld_bttstck_tube_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_fld_bttstck_tube_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_rpk16_hguard_std: kr_rpk16_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_rpk16_handguard_std";
		descriptionShort = "$STR_kr_weapons_attachments_rpk16_handguard_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\rpk16_handguard_std.p3d";
		weight = 167;
		itemSize[] = {2,1};
		attachments[] = {"kr_foregrip","kr_rail_mount"};
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_handguard_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_handguard_std.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_firearms
		{
			grip = 1;
			light = 0;
			holo = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_handguard_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_handguard_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_handguard_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_handguard_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\rpk16_parts\data\rpk16_handguard_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_rpk16_hguard_std_raild: kr_rpk16_hguard_std
	{
		displayName = "$STR_kr_weapons_attachments_rpk16_handguard_std_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};
		class kr_firearms
		{
			grip = 1;
			light = 1;
			holo = 1;
		};
	};
};
