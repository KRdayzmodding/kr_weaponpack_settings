class CfgPatches
{
	class kr_weapons_firearms_m16a2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_magazine_556x45"};
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
	class kr_M16A2_Base: Rifle_Base
	{
		scope = 0;
		weight = 2276;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {0,0.6,50,200,4,10};
		attachments[] = {"kr_muzzle556","kr_m16_hndgrd","kr_ar_pistolgrip","kr_ar_bttstck","weaponWrap"};
		WeaponLength = 0.856;
		barrelArmor = 4.5;
		initSpeedMultiplier = 0.8;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_556x45_AP"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\m16a2\data\m16a2_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\m16a2\data\m16a2.rvmat"};
		magazines[] = {"Mag_STANAG_30Rnd","Mag_STANAGCoupled_30Rnd","Mag_STANAG_60Rnd","Mag_CMAG_10Rnd","Mag_CMAG_20Rnd","Mag_CMAG_30Rnd","Mag_CMAG_40Rnd","Mag_CMAG_10Rnd_Green","Mag_CMAG_20Rnd_Green","Mag_CMAG_30Rnd_Green","Mag_CMAG_40Rnd_Green","Mag_CMAG_10Rnd_Black","Mag_CMAG_20Rnd_Black","Mag_CMAG_30Rnd_Black","Mag_CMAG_40Rnd_Black","Mag_556x45_magpulp_60Rnd","Mag_556x45_colt_ar15_std_30Rnd","Mag_556x45_fn_mk16_std_30Rnd","Mag_556x45_hk_polymer_30Rnd","Mag_556x45_hk_gen_2_pm_30Rnd","Mag_556x45_magpulm3_10Rnd","Mag_556x45_magpulm3_20Rnd","Mag_556x45_magpulm3_30Rnd_blck","Mag_556x45_magpulm3_30Rnd_tan","Mag_556x45_magpulm3_40Rnd_Base","Mag_556x45_magpulm3_40Rnd_blck","Mag_556x45_magpulm3_40Rnd_tan","Mag_556x45_steel_maritime_30Rnd","Mag_556x45_srfr_mag5_60Rnd","Mag_556x45_srfr_mag5_100Rnd","Mag_556x45_troy_battlemag_30Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_tube"};
		reloadAction = "ReloadM4";
		hiddenSelections[] = {"camo"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
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
	};
	class kr_M16A2: kr_M16A2_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_M16A2";
		descriptionShort = "$STR_weapons_firearms_M16A2_dsc";
		model = "KR\weapons\kr_weaponpack_2\kr_weapons_firearms\m16a2\m16a2.p3d";
		itemSize[] = {8,3};
		weight = 3100;
		WeaponLength = 0.845;
		initSpeedMultiplier = 0.85;
		barrelArmor = 10.2;
		recoilModifier[] = {2.0,2.0,3.6};
		swayModifier[] = {2.0,2.0,2.0};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};
		modes[] = {"SemiAuto","Burst"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M16_Shot_SoundSet","M16_Tail_SoundSet","M16_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M16_silencer_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"},{"M16_silencerHomeMade_SoundSet","M16_silencerHomeMadeTail_SoundSet","M16_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0006;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"M16_Shot_SoundSet","M16_Tail_SoundSet","M16_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M16_silencer_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"},{"M16_silencerHomeMade_SoundSet","M16_silencerHomeMadeTail_SoundSet","M16_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.065;
			dispersion = 0.00065;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\m16a2\data\m16a2.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\m16a2\data\m16a2_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\m16a2\data\m16a2_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\m16a2\data\m16a2_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\m16a2\data\m16a2_destruct.rvmat"}}};
				};
			};
		};

		class kr_firearms
		{
			barreltype = 1;
			handguardSlotName = "kr_m16_hndgrd";
		};
	};
};
