class CfgPatches
{
	class kr_weapons_firearms_rsass
	{
		units[] = {};
		weapons[] = {"kr_rsass"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","kr_data"};
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
	class kr_rsass_Base: Rifle_Base
	{
		scope = 0;
		descriptionShort = "$STR_weapons_firearms_rsass_dsc";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		attachments[] = {"kr_muzzle308","kr_ar10_hndgrd","weaponOptics","kr_ar_pistolgrip","kr_ar15_tube","kr_ar_bttstck","weaponHolo1","weaponWrap"};
		simpleHiddenSelections[] = 
		{
			"hide_charging",
			"hide_pistolgrip",
			"hide_tube",
			"fold",
			"unfold",
			"rear_sights"
		};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_762x51_bpz_fmj","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"Mag_762x51_kac_steel_10Rnd","Mag_762x51_pmag_20Rnd","Mag_762x51_kac_steel_20Rnd","Mag_762x51_kac_xproduct_50Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		hiddenSelections[] = {"camo"};
		spawnDamageRange[] = {0.0,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\rsass\data\rsass_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\rsass\data\rsass.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 310;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\rsass\data\rsass.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\rsass\data\rsass.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\rsass\data\rsass_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\rsass\data\rsass_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\rsass\data\rsass_destruct.rvmat"}}};
				};
			};
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 50;
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
					overrideParticle = "weapon_shot_mosin_compensator_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {0.01,0,0};
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
					onlyWithinOverheatLimits[] = {0.0,0.4};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.4,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.2,0,0};
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
	};
	class kr_rsass: kr_rsass_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_rsass";
		descriptionShort = "$STR_weapons_firearms_rsass_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\rsass\rsass.p3d";
		WeaponLength = 0.913149;
		itemSize[] = {9,3};
		weight = 4400;
		recoilModifier[] = {1.7,1.7,1.7};
		swayModifier[] = {1.5,1.0,1.0};
		barrelArmor = 9.0;
		initSpeedMultiplier = 1.3;
		modes[] = {"SemiAuto"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x51 (.308)";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"RSASS_Shot_SoundSet","RSASS_Tail_SoundSet","RSASS_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"RSASS_silencerHomeMade_SoundSet","RSASS_silencerHomeMadeTail_SoundSet","RSASS_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0034;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			barreltype = 4;
			handguardSlotName = "kr_ar10_hndgrd";
		};
	};
};
