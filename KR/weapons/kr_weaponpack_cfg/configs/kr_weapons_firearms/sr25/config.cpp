class CfgPatches
{
	class kr_weapons_firearms_sr25
	{
		units[] = {};
		weapons[] = {"kr_sr25_406mm","kr_sr25_508mm"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","kr_data"};
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
	class Rifle_Base;
	class kr_sr25_Base: Rifle_Base
	{
		scope = 0;
		descriptionShort = "$STR_weapons_firearms_sr25_dsc";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		attachments[] = {"kr_muzzle308","kr_ar10_hndgrd","weaponOptics","kr_ar_pistolgrip","kr_ar15_tube","kr_ar_bttstck","weaponHolo1","weaponWrap"};
		simpleHiddenSelections[] = {"hide_gasblock","hide_gasblock_low","hide_pistolgrip","hide_sight_front","hide_sight_rear","hide_tube"};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","kr_Ammo_308Win_AP","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};
		magazines[] = {"Mag_762x51_kac_steel_10Rnd","Mag_762x51_pmag_20Rnd","Mag_762x51_kac_steel_20Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		hiddenSelections[] = {"camo"};
		spawnDamageRange[] = {0.0,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\sr25\data\sr25_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\sr25\data\sr25.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 270;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\sr25\data\sr25.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\sr25\data\sr25.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\sr25\data\sr25_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\sr25\data\sr25_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\sr25\data\sr25_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
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
	class kr_sr25_406mm: kr_sr25_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_sr25";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\sr25\sr25_406.p3d";
		WeaponLength = 0.811549;
		itemSize[] = {8,3};
		weight = 3860;
		recoilModifier[] = {3.2,3.7,6.2};
		swayModifier[] = {2.8,2.8,2.8};
		barrelArmor = 6.3;
		initSpeedMultiplier = 1.15;
		modes[] = {"SemiAuto"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51 (.308)";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00065;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			barreltype = 2;
			handguardSlotName = "kr_ar10_hndgrd";
		};
	};
	class kr_sr25_508mm: kr_sr25_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_sr25_508";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\sr25\sr25_508.p3d";
		WeaponLength = 0.913149;
		itemSize[] = {9,3};
		weight = 4400;
		recoilModifier[] = {2.8,3.1,5.3};
		swayModifier[] = {3.2,3.2,3.2};
		barrelArmor = 5.0;
		initSpeedMultiplier = 1.3;
		modes[] = {"SemiAuto"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x51 (.308)";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00055;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			barreltype = 3;
			handguardSlotName = "kr_ar10_hndgrd";
		};
	};
};
