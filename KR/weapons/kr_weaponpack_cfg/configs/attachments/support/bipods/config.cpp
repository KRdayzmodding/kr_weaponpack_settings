class CfgPatches
{
	class kr_attachments_bipods
	{
		units[] = {"kr_bipod_atlas_v8_bt10","kr_bipod_bipods_g36_a1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_support_Base;
	class kr_bipods_Base: kr_support_Base
	{
		scope = 0;
		reversed = 0;
		rotationFlags = 17;
		hiddenSelections[] = {"camo"};
		isMeleeWeapon = 1;
		absorbency = 0.0;
		adsModifier[] = {0.0,0,0};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		soundImpactType = "metal";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimationSources
		{
			class bipods
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.6;
			};
		};
	};
	class kr_bipod_atlas_v8_bt10: kr_bipods_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_bipod_atlas_v8_bt10";
		descriptionShort = "$STR_kr_weapons_attachments_bipod_atlas_v8_bt10_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\bipods\bipod_atlas_v8_bt10.p3d";
		inventorySlot[] = {"kr_bipod","kr_foregrip"};
		attachments[] = {};
		simpleHiddenSelections[] = {};
		weight = 370;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\bipods\data\atlas_v8_bt10_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\bipods\data\atlas_v8_bt10.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_bipod";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\bipods\data\atlas_v8_bt10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\bipods\data\atlas_v8_bt10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\bipods\data\atlas_v8_bt10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\bipods\data\atlas_v8_bt10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\bipods\data\atlas_v8_bt10_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_bipod_bipods_g36_a1: kr_bipods_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_bipod_bipods_g36_a1";
		descriptionShort = "$STR_kr_weapons_attachments_bipod_bipods_g36_a1_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\bipods\bipods_g36_a1.p3d";
		inventorySlot[] = {"kr_g36_bipods"};
		attachments[] = {};
		simpleHiddenSelections[] = {};
		weight = 250;
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\bipods\data\bipods_g36_a1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\bipods\data\bipods_g36_a1.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "G36";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\bipods\data\bipods_g36_a1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\bipods\data\bipods_g36_a1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\bipods\data\bipods_g36_a1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\bipods\data\bipods_g36_a1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\bipods\data\bipods_g36_a1_destruct.rvmat"}}};
				};
			};
		};
	};
};
