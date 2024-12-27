class CfgPatches
{
	class kr_weaponpack_muzzles
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
	class ItemSuppressor;
	class kr_muzzle_Base: ItemSuppressor
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		model = "";
		hiddenSelections[] = {"camo"};
		rotationFlags = 17;
		reversed = 0;
		weight = 100;
		itemSize[] = {1,1};
		itemModelLength = 0.007;
		barrelArmor = 15000;
		inventorySlot[] = {};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		noiseShootModifier = -0.01;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		selectionFireAnim = "zasleh";
		soundIndex = 0;
		muzzlePos = "usti hlavne";
		soundImpactType = "metal";
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
					hitpoints = 10;
				};
			};
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
					overrideParticle = "weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
		};
	};
	class kr_muzzle_t1_Base: kr_muzzle_Base
	{
		barrelArmor = 20000;
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.1;
		recoilModifier[] = {0.9,0.95,0.95};
		swayModifier[] = {1.0,1.0,1.0};
		class kr_description
		{
			kr_tier = 1;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_muzzle_t2_Base: kr_muzzle_Base
	{
		barrelArmor = 15000;
		dispersionModifier = -0.00012;
		noiseShootModifier = -0.12;
		recoilModifier[] = {0.85,0.9,0.9};
		swayModifier[] = {1.0,1.0,1.0};
		class kr_description
		{
			kr_tier = 2;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_muzzle_t3_Base: kr_muzzle_Base
	{
		barrelArmor = 12000;
		dispersionModifier = -0.00017;
		noiseShootModifier = -0.13;
		recoilModifier[] = {0.8,0.9,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		class kr_description
		{
			kr_tier = 3;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_muzzle_t4_Base: kr_muzzle_Base
	{
		barrelArmor = 9000;
		dispersionModifier = -0.00025;
		noiseShootModifier = -0.15;
		recoilModifier[] = {0.75,0.8,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		class kr_description
		{
			kr_tier = 4;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_suppressor_Base: ItemSuppressor
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		model = "";
		hiddenSelections[] = {"camo"};
		rotationFlags = 17;
		reversed = 0;
		weight = 200;
		itemSize[] = {3,1};
		itemModelLength = 0.1;
		barrelArmor = 5000;
		inventorySlot[] = {};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		noiseShootModifier = -0.9;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		soundImpactType = "metal";
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
					hitpoints = 5;
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle = "weapon_shot_silencer_01";
					onlyWithinHealthLabel[] = {0,3};
					positionOffset[] = {0,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 2;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
	class kr_suppressor_t1_Base: kr_suppressor_Base
	{
		barrelArmor = 7000;
		noiseShootModifier = -0.8;
		recoilModifier[] = {0.9,0.85,0.9};
		swayModifier[] = {1.0,1.1,1.0};
		dispersionModifier = -5e-05;
		class kr_description
		{
			kr_tier = 1;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -20;
		};
	};
	class kr_suppressor_t2_Base: kr_suppressor_Base
	{
		barrelArmor = 6000;
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.85;
		recoilModifier[] = {0.85,0.8,0.85};
		swayModifier[] = {1.0,1.1,1.0};
		class kr_description
		{
			kr_tier = 2;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
	};
	class kr_suppressor_t3_Base: kr_suppressor_Base
	{
		barrelArmor = 5000;
		dispersionModifier = -0.00015;
		noiseShootModifier = -0.93;
		recoilModifier[] = {0.8,0.75,0.8};
		swayModifier[] = {1.0,1.15,1.0};
		class kr_description
		{
			kr_tier = 3;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
	};
};
