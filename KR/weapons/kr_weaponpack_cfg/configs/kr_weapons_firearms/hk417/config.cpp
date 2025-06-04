class CfgPatches
{
	class kr_weapons_firearms_hk417
	{
		units[] = {};
		weapons[] = {"kr_hk417"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","kr_data","kr_weapons_firearms_g28"};
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
	class kr_hk417_Base: Rifle_Base
	{
		scope = 0;
		descriptionShort = "$STR_weapons_firearms_g28_dsc";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		attachments[] = {"kr_muzzle308","kr_g28_hndgrd","weaponOptics","kr_ar_pistolgrip","kr_ar15_tube","kr_ar_bttstck","weaponHolo1","weaponWrap"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_sight_front","hide_sight_rear","hide_sight_extended","hide_sight_patrol","hide_tube"};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};
		magazines[] = {"Mag_762x51_g28_10Rnd","Mag_762x51_g28_20Rnd","Mag_762x51_g28_xproduct_50Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		hiddenSelections[] = {"camo"};
		spawnDamageRange[] = {0.0,0.6};
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

	class kr_hk417: kr_hk417_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_hk417";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\hk417.p3d";
		WeaponLength = 0.811549;
		itemSize[] = {8,3};
		weight = 3860;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		barrelArmor = 17;
		initSpeedMultiplier = 1.0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417_co.paa"};

		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51 (.308)";
		};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"G28_Shot_SoundSet","SR25_Tail_SoundSet","G28_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"G28_silencerHomeMade_SoundSet","G28_silencerHomeMadeTail_SoundSet","G28_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.135;
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"G28_Shot_SoundSet","SR25_Tail_SoundSet","G28_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"G28_silencerHomeMade_SoundSet","G28_silencerHomeMadeTail_SoundSet","G28_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 50;
			distanceZoomMax = 200;
		};
		class kr_firearms
		{
			barreltype = 1;
			handguardSlotName = "kr_g28_hndgrd";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 320;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417_destruct.rvmat"}}};
				};
			};
		};
	};
};
