class CfgPatches
{
	class kr_attachments_fal_parts
	{
		units[] = {"kr_fal_receiver"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_receiver_Base;
	class kr_fal_receiver_Base: kr_receiver_Base
	{
		class kr_description
		{
			kr_type = "FAL";
		};
	};
	class kr_fal_receiver: kr_fal_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_fal_receiver";
		descriptionShort = "$STR_kr_weapons_attachments_fal_receiver_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\fal_parts\fal_receiver.p3d";
		weight = 240;
		recoilModifier[] = {0.8,0.8,0.7};
		swayModifier[] = {1.0,1.0,0.9};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_parts\data\fal_receiver_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\fal_parts\data\fal_receiver.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 2;
		};
		class kr_firearms
		{
			optic = 1;
			receiver = 1;
			sight = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_parts\data\fal_receiver.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\fal_parts\data\fal_receiver_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\fal_parts\data\fal_receiver_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\fal_parts\data\fal_receiver_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\fal_parts\data\fal_receiver_destruct.rvmat"}}};
				};
			};
		};
	};
};
