class CfgPatches
{
	class kr_weapons_lmg_PKP
	{
		units[] = {};
		weapons[] = {"kr_PKP"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class kr_ak_Base;
	class kr_PKP_Base: kr_ak_Base
	{
		scope = 0;
		displayName = "$STR_weapons_firearms_PKP";
		descriptionShort = "$STR_weapons_firearms_PKP_dsc";
		attachments[] = {"kr_muzzle762_54","kr_foregrip","weaponOptics","kr_ak_pistolgrip","weaponWrap"};
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer","kr_Ammo_762x54r_bs","kr_Ammo_762x54r_bthp","kr_Ammo_762x54r_fmj","kr_Ammo_762x54r_lps","kr_Ammo_762x54r_ps","kr_Ammo_762x54r_snb","kr_Ammo_762x54r_t46m","kr_Ammo_762x54_AP"};
		magazines[] = {"Mag_762x54_pkp_100Rnd"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_lmg\PKP\data\PKP_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_lmg\PKP\data\PKP.rvmat"};
		modes[] = {"FullAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x54";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_firearms
		{
			handguardSlotName = "";
			buttstockSlotName = "";
		};
		class NoiseShoot
		{
			strength = 150;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,200,400};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 50;
			distanceZoomMax = 400;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\PKP\data\PKP.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\PKP\data\PKP_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\PKP\data\PKP_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\PKP\data\PKP_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\PKP\data\PKP_destruct.rvmat"}}};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_pkp_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.15,0,0};
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
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
				maxOverheatingValue = 60;
				shotsToStartOverheating = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.8};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8,1};
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
	class kr_PKP: kr_PKP_Base
	{
		scope = 2;
		model = "\KR\weapons\kr_weaponpack\kr_weapons_lmg\PKP\PKP.p3d";
		weight = 8200;
		WeaponLength = 1.15;
		itemSize[] = {10,4};
		barrelArmor = 20.5;
		initSpeedMultiplier = 1.3;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.9,0.9,0.9};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"PKP_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"PKP_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"PKP_silencer_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00065;
		};
	};
};
