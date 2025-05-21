class CfgPatches
{
	class kr_weapons_rifles_dvl10
	{
		units[] = {};
		weapons[] = {"kr_dvl10_M1","kr_dvl10_M2"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;

class kr_Gunplay_Base;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class kr_dvl10_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 4500;
		WeaponLength = 0.934214;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		chamberSize = 1;
		chamberedRound = "";
		magazineSwitchTime = 0.38;
		ejectType = 0;
		opticsFlare = 0;
		chamberableFrom[] = {"kr_Ammo_338LM_fmj","kr_Ammo_338LM_ap","kr_Ammo_338LM_upz","kr_Ammo_338LM_tac_x"};
		magazines[] = {"Mag_338lm_dvl_10Rnd"};
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_muzzle"};
		modes[] = {"Single"};
		attachments[] = {"kr_ar_pistolgrip","weaponOpticsB","weaponWrap"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\dvl10_co.paa"};
		initSpeedMultiplier = 0.9;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.75,0.75,0.75};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 30;
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 1;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_destruct.rvmat"}}};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {0.0,-0.02,0.01};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {0.0,-0.02,-0.01};
				orientation[] = {0,0,0};
			};
		};
	};
	class kr_dvl10_M1: kr_dvl10_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_dvl_m1";
		descriptionShort = "$STR_weapons_rifles_dvl_m1_dsc";
		model = "KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\dvl_10_M1.p3d";
		weight = 5800;
		WeaponLength = 1.1;
		barrelArmor = 13;
		itemSize[] = {9,3};
		recoilModifier[] = {1.0,1.0,1.0};
		attachments[] = {"kr_ar_pistolgrip","weaponOpticsB","weaponWrap"};
		class NoiseShoot
        {
            strength = 10;
            type = "sound";
        };
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".338 LM";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"DVL_M1_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"};
			reloadTime = 1;
			dispersion = 0.0026;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_vss_01";
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 15;
				shotsToStartOverheating = 5;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	class kr_dvl10_M2: kr_dvl10_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_dvl_m2";
		descriptionShort = "$STR_weapons_rifles_dvl_m2_dsc";
		model = "KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\dvl_10_M2.p3d";
		weight = 5900;
		WeaponLength = 1.31;
		barrelArmor = 13;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.9,0.9,0.9};
		initSpeedMultiplier = 1.1;
		itemSize[] = {9,3};
		attachments[] = {"kr_muzzle338","kr_ar_pistolgrip","weaponOpticsB","weaponWrap"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = ".338 LM";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"DVL_M2_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"DVL_M1_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
	};
};
