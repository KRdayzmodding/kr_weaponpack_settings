class CfgPatches
{
	class kr_weapons_firearms_mcx_spear
	{
		units[] = {};
		weapons[] = {"kr_mcx_spear"};
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
	class kr_mcx_spear_Base: Rifle_Base
	{
		scope = 0;
		descriptionShort = "$STR_weapons_firearms_spear_dsc";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		attachments[] = {"kr_muzzle308","kr_spear_handguard","weaponOptics","kr_ar_pistolgrip","kr_spear_stock","weaponHolo1","weaponWrap"};
		simpleHiddenSelections[] = 
		{
			"hide_pistolgrip",
			"hide_muzzle",
			"hide_barrel",
			"rear_sights",
			"fold",
			"unfold"
		};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};
		magazines[] = {"Mag_762x51_kac_steel_10Rnd","Mag_762x51_pmag_20Rnd","Mag_762x51_kac_steel_20Rnd","Mag_762x51_kac_xproduct_50Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		hiddenSelections[] = {"camo"};
		spawnDamageRange[] = {0.0,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\spear\data\mcx_spear_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\spear\data\mcx_spear.rvmat"};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 310;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\spear\data\mcx_spear.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\spear\data\mcx_spear.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\spear\data\mcx_spear_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\spear\data\mcx_spear_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\spear\data\mcx_spear_destruct.rvmat"}}};
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
			ergonomics = 10;
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
					positionOffset[] = {-0.04,0,0};
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mosin_compensator_01";
					positionOffset[] = {-0.04,0,0};
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {-0.045,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
					positionOffset[] = {-0.04,0,0};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 60;
				shotsToStartOverheating = 25;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {-0.04,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.4};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {-0.04,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {-0.4,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {-0.04,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {-0.04,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {-0.2,1};
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
	class kr_mcx_spear: kr_mcx_spear_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_spear";
		descriptionShort = "$STR_weapons_firearms_spear_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\spear\mcx_spear.p3d";
		WeaponLength = 0.913;
		itemSize[] = {8,3};
		weight = 4400;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.2,1.3,1.2};
		barrelArmor = 12.0;
		initSpeedMultiplier = 0.85;
		modes[] = {"SemiAuto","FullAuto"};

		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "7.62x51 (.308)";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SPEAR_Shot_SoundSet","SPEAR_Tail_SoundSet","SPEAR_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SPEAR_silencerPro_SoundSet","SPEAR_silencerTail_SoundSet","SPEAR_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0036;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"SPEAR_Shot_SoundSet","SPEAR_Tail_SoundSet","SPEAR_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SPEAR_silencerPro_SoundSet","SPEAR_silencerTail_SoundSet","SPEAR_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.0036;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			handguardSlotName = "kr_spear_handguard";
		};
	};
};
