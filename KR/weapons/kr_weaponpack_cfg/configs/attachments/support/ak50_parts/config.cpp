class CfgPatches
{
	class kr_attachments_ak50_parts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ak_receiver_Base;

	class kr_ak_receiver_ak50: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_receiver_ak50";
		descriptionShort = "$STR_kr_weapons_attachments_ak_receiver_ak50_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ak50_parts\ak50_receiver.p3d";
		weight = 1600;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak50_parts\data\ak50_receiver_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak50_parts\data\ak50_receiver.rvmat"};
		itemSize[] = {4,1};
		simpleHiddenSelections[] = 
		{
			"fold",
			"unfold"
		};
		inventorySlot[] = {"kr_ak50_receiver"};
		
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
			kr_tier = 5;
			kr_type = "AK-50";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak50_parts\data\ak50_receiver.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ak50_parts\data\ak50_receiver_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ak50_parts\data\ak50_receiver_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ak50_parts\data\ak50_receiver_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak50_parts\data\ak50_receiver_destruct.rvmat"}}};
				};
			};
		};
	};
};
