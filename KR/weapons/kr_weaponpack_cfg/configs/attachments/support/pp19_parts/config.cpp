class CfgPatches
{
	class kr_attachments_pp19_receivers
	{
		units[] = {"kr_pp19_receiver_sn","kr_pp19_receiver_std"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ak_receiver_Base;
	class kr_pp19_receiver_sn: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_pp19_receiver_sn";
		descriptionShort = "$STR_kr_weapons_attachments_pp19_receiver_sn_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\pp19_parts\pp19_receiver_sn.p3d";
		weight = 240;
		inventorySlot[] = {"kr_pp19_receiver"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1.05,1.05,1.05};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_sn_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_sn.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_firearms
		{
			optic = 1;
			receiver = 0;
			sight = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Saiga9, PP-19-01";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_sn.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_sn_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_sn_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_sn_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_sn_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_pp19_receiver_std: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_pp19_receiver_std";
		descriptionShort = "$STR_kr_weapons_attachments_pp19_receiver_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\pp19_parts\pp19_receiver_std.p3d";
		weight = 240;
		inventorySlot[] = {"kr_pp19_receiver"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_std.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_firearms
		{
			optic = 0;
			receiver = 0;
			sight = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "Saiga9, PP-19-01";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\pp19_parts\data\receiver_pp19_std_destruct.rvmat"}}};
				};
			};
		};
	};
};
