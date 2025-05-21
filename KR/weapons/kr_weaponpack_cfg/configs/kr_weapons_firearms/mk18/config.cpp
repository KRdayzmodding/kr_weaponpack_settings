class CfgPatches
{
	class kr_weapons_firearms_mk18
	{
		units[] = {};
		weapons[] = {"kr_MK18"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class kr_Gunplay_Base;
class cfgWeapons
{
	class Rifle_Base;
	class kr_MK18_Base: Rifle_Base
	{
		scope = 0;
		displayName = "$STR_weapons_firearms_mk18";
		descriptionShort = "$STR_weapons_firearms_mk18_dsc";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\MK18\MK18.p3d";
		weight = 5500;
		attachments[] = {"kr_muzzle338","kr_mk18_hndgrd","weaponOpticsB","kr_ar_pistolgrip","kr_ar_bttstck","weaponWrap"};
		chamberableFrom[] = {"kr_Ammo_338LM_fmj","kr_Ammo_338LM_ap","kr_Ammo_338LM_upz","kr_Ammo_338LM_tac_x"};
		magazines[] = {"Mag_338lm_mk18_10Rnd"};
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		magazineSwitchTime = 0.5;
		ejectType = 1;
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_sight_rear","hide_sight_front","hide_tube"};
		reloadAction = "ReloadM4";
		hiddenSelections[] = {"camo"};
		itemSize[] = {8,3};
		WeaponLength = 1.2;
		initSpeedMultiplier = 1.0;
		barrelArmor = 12;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MK18_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Repeater_silencerHomeMade_SoundSet","Repeater_silencerHomeMadeTail_SoundSet","Repeater_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.15;
			dispersion = 0.0026;
			magazineSlot = "magazine";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 200;
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
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
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
				shotsToStartOverheating = 25;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK18\data\MK18.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK18\data\MK18_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK18\data\MK18_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK18\data\MK18_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK18\data\MK18_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_MK18: kr_MK18_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK18\data\MK18_co.paa"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".338 LM";
		};
		class kr_firearms
		{
			barreltype = 1;
			handguardSlotName = "kr_mk18_hndgrd";
		};
	};
};
