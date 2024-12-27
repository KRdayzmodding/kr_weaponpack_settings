class CfgPatches
{
	class kr_attachments_mosin_parts
	{
		units[] = {"kr_buttpad_mosin_aim_sports"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class Inventory_Base;
	class kr_buttpad_mosin_aim_sports: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_buttpad_mosin_aim_sports";
		descriptionShort = "$STR_kr_weapons_attachments_buttpad_mosin_aim_sports_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\mosin_parts\buttpad_mosin_aim_sports.p3d";
		inventorySlot[] = {"kr_mosin_buttpad"};
		itemSize[] = {1,2};
		weight = 74;
		rotationFlags = 32;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.0,1.0,0.5};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mosin_parts\data\aim_sports_buttpad_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mosin_parts\data\aim_sports_buttpad.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Винт. Мосина";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mosin_parts\data\aim_sports_buttpad.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mosin_parts\data\aim_sports_buttpad_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mosin_parts\data\aim_sports_buttpad_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mosin_parts\data\aim_sports_buttpad_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mosin_parts\data\aim_sports_buttpad_destruct.rvmat"}}};
				};
			};
		};
	};
};
