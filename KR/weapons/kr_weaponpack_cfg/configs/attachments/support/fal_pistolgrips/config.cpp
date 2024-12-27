class CfgPatches
{
	class kr_attachments_fal_pistolgrips
	{
		units[] = {"kr_fal_pgrip_ds_saw","kr_fal_pgrip_fab_defense"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_fal_pgrip_Base;
	class kr_fal_pgrip_ds_saw: kr_fal_pgrip_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_pgrip_ds_arms_saw";
		descriptionShort = "$STR_kr_weapons_attachments_fal_pgrip_ds_arms_saw_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\fal_pgrip_ds_arms_saw.p3d";
		weight = 110;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.75,0.75,0.7};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\ds_arms_saw_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "FAL";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\ds_arms_saw.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\ds_arms_saw_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\ds_arms_saw_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\ds_arms_saw_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\ds_arms_saw_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_pgrip_fab_defense: kr_fal_pgrip_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_pgrip_fab_defense_ag";
		descriptionShort = "$STR_kr_weapons_attachments_fal_pgrip_fab_defense_ag_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\fal_pgrip_fab_defense_ag.p3d";
		weight = 110;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.8,0.8,0.7};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\fab_defense_ag_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "FAL";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\fab_defense_ag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\fab_defense_ag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\fab_defense_ag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\fab_defense_ag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_pistolgrips\data\fab_defense_ag_destruct.rvmat"}}};
				};
			};
		};
	};
};
