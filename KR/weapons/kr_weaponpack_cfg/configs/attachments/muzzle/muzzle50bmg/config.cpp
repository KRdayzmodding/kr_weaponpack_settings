class CfgPatches
{
	class kr_weapatt_muzzle50bmg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_suppressor_t2_Base;
	class kr_suppressor_t3_Base;
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	class kr_muzzle_t4_Base;
	
	class kr_muzzle50bmg_flashhider_M82: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle50bmg_flashhider_M82";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle50bmg_flashhider_M82_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\muzzle50bmg_flashhider_M82.p3d";
		weight = 220;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle50bmg"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M82_muzzle_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M82_muzzle.rvmat"};
		recoilModifier[] = {0.98,0.98,0.93};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0003;
		noiseShootModifier = -0.05;
		barrelArmor = 20000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};

		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					positionOffset[] = {0.0,0,0};
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_muzzle_50bmg";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
		};

		class kr_description
		{
			kr_tier = 2;
			kr_caliber = ".50BMG";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M82_muzzle.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M82_muzzle_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M82_muzzle_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M82_muzzle_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M82_muzzle_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_muzzle50bmg_flashhider_M99: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle50bmg_flashhider_M99";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle50bmg_flashhider_M99_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\muzzle50bmg_flashhider_M99.p3d";
		weight = 220;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle50bmg"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M99_muzzle_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M99_muzzle.rvmat"};
		recoilModifier[] = {0.97,0.97,0.9};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0004;
		noiseShootModifier = -0.1;
		barrelArmor = 15000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};

		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					positionOffset[] = {0.0,0,0};
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_muzzle_50bmg";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
		};

		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".50BMG";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M99_muzzle.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M99_muzzle_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M99_muzzle_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M99_muzzle_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\M99_muzzle_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_muzzle50bmg_flashhider_AX50: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle50bmg_flashhider_AX50";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle50bmg_flashhider_AX50_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\muzzle50bmg_flashhider_ax50.p3d";
		weight = 220;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle50bmg"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\ax50_muzzle_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\ax50_muzzle.rvmat"};
		recoilModifier[] = {0.95,0.95,0.87};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.13;
		barrelArmor = 15000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};

		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					positionOffset[] = {0.0,0,0};
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_muzzle_50bmg";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
		};

		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".50BMG";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\ax50_muzzle.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\ax50_muzzle_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\ax50_muzzle_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\ax50_muzzle_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\ax50_muzzle_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_muzzle50bmg_suppressor_barrett: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle50bmg_suppressor_barrett";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle50bmg_suppressor_barrett_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\muzzle50bmg_suppressor_barrett.p3d";
		weight = 780;
		itemModelLength = 0.367;
		inventorySlot[] = {"kr_muzzle50bmg"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\barrett_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\barrett.rvmat"};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.1,1.1,1.1};
		dispersionModifier = 0;
		noiseShootModifier = -0.98;
		barrelArmor = 5000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					positionOffset[] = {0.0,0,0};
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_silencer_50BMG";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
		};

		class kr_description
		{
			kr_tier = 6;
			kr_caliber = ".50BMG";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\barrett.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\barrett_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\barrett_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\barrett_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle50BMG\data\barrett_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
