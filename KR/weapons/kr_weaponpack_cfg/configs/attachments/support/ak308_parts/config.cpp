class CfgPatches
{
	class kr_attachments_ak308_parts
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

	class kr_ak_receiver_ak308: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_receiver_ak308";
		descriptionShort = "$STR_kr_weapons_attachments_ak_receiver_ak308_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ak308_parts\ak308_receiver.p3d";
		weight = 90;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak308_parts\data\ak308_receiver_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak308_parts\data\ak308_receiver.rvmat"};
		itemSize[] = {3,1};
		simpleHiddenSelections[]={"hide_sight"};
		inventorySlot[] = {"kr_ak308_receiver"};
		
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
			kr_tier = 2;
			kr_type = "AK308";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak308_parts\data\ak308_receiver.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ak308_parts\data\ak308_receiver_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ak308_parts\data\ak308_receiver_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ak308_parts\data\ak308_receiver_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak308_parts\data\ak308_receiver_destruct.rvmat"}}};
				};
			};
		};
	};
};
