class CfgPatches
{
	class kr_weapons_firearms_m4
	{
		units[] = {};
		weapons[] = {"kr_m4a1_260mm","kr_m4a1_370mm","kr_m4a1_406mm","kr_m4a1_457mm","kr_m4a1_508mm"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_magazine_556x45"};
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
	class kr_M4A1_Base: Rifle_Base
	{
		scope = 0;
		weight = 2276;
		descriptionShort = "$STR_weapons_firearms_M4_dsc";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {0,0.6,50,200,4,10};
		//attachments[] = {"kr_muzzle556","kr_ar15_hndgrd","weaponOptics","kr_ar15_charging","kr_ar_pistolgrip","kr_ar15_tube","kr_ar_bttstck","weaponHolo1","weaponFlashlight","weaponWrap"};
		attachments[] = {"kr_muzzle556","kr_ar15_hndgrd","weaponOptics","kr_ar_pistolgrip","kr_ar15_tube","kr_ar_bttstck","weaponHolo1","weaponWrap"};
		WeaponLength = 0.814784;
		barrelArmor = 2.5;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_556x45_AP"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1.rvmat"};
		magazines[] = {"Mag_STANAG_30Rnd","Mag_STANAGCoupled_30Rnd","Mag_STANAG_60Rnd","Mag_CMAG_10Rnd","Mag_CMAG_20Rnd","Mag_CMAG_30Rnd","Mag_CMAG_40Rnd","Mag_CMAG_10Rnd_Green","Mag_CMAG_20Rnd_Green","Mag_CMAG_30Rnd_Green","Mag_CMAG_40Rnd_Green","Mag_CMAG_10Rnd_Black","Mag_CMAG_20Rnd_Black","Mag_CMAG_30Rnd_Black","Mag_CMAG_40Rnd_Black","Mag_556x45_magpulp_60Rnd","Mag_556x45_colt_ar15_std_30Rnd","Mag_556x45_fn_mk16_std_30Rnd","Mag_556x45_hk_polymer_30Rnd","Mag_556x45_hk_gen_2_pm_30Rnd","Mag_556x45_magpulm3_10Rnd","Mag_556x45_magpulm3_20Rnd","Mag_556x45_magpulm3_30Rnd_blck","Mag_556x45_magpulm3_30Rnd_tan","Mag_556x45_magpulm3_40Rnd_Base","Mag_556x45_magpulm3_40Rnd_blck","Mag_556x45_magpulm3_40Rnd_tan","Mag_556x45_steel_maritime_30Rnd","Mag_556x45_srfr_mag5_60Rnd","Mag_556x45_srfr_mag5_100Rnd","Mag_556x45_troy_battlemag_30Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		simpleHiddenSelections[] = {"hide_charging","hide_gasblock","hide_gasblock_low","hide_pistolgrip","hide_sight_front","hide_sight_rear","hide_tube"};
		reloadAction = "ReloadM4";
		hiddenSelections[] = {"camo"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 80;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_m4a1_260mm: kr_M4A1_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_M4";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\m4a1_260mm.p3d";
		itemSize[] = {7,3};
		weight = 3406;
		WeaponLength = 0.646;
		initSpeedMultiplier = 0.95;
		barrelArmor = 13;
		recoilModifier[] = {1.25,1.25,1.2};
		swayModifier[] = {1.3,1.2,1.6};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class NoiseShoot
		{
			strength = 70;
			type = "shot";
		};

		modes[] = {"SemiAuto","FullAuto"};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			barreltype = 1;
			handguardSlotName = "kr_ar15_hndgrd";
		};
	};
	class kr_m4a1_370mm: kr_M4A1_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_M4_370";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\m4a1_370mm.p3d";
		itemSize[] = {8,3};
		weight = 3449;
		WeaponLength = 0.744;
		initSpeedMultiplier = 1.0;
		barrelArmor = 9.1;
		recoilModifier[] = {1.35,1.35,1.3};
		swayModifier[] = {1.4,1.3,1.6};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_destruct.rvmat"}}};
				};
			};
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};
		class kr_firearms
		{
			barreltype = 2;
			handguardSlotName = "kr_ar15_hndgrd";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -20;
		};
		class NoiseShoot
		{
			strength = 75;
			type = "shot";
		};
	};
	class kr_m4a1_406mm: kr_M4A1_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_M4_406";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\m4a1_406mm.p3d";
		itemSize[] = {8,3};
		weight = 3819;
		WeaponLength = 0.772;
		initSpeedMultiplier = 1.05;
		barrelArmor = 10.1;
		recoilModifier[] = {1.35,1.35,1.3};
		swayModifier[] = {1.5,1.4,1.6};
		modes[] = {"SemiAuto","FullAuto"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_destruct.rvmat"}}};
				};
			};
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0035;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.0035;
			magazineSlot = "magazine";
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class kr_firearms
		{
			barreltype = 3;
			handguardSlotName = "kr_ar15_hndgrd";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -25;
		};
		class NoiseShoot
		{
			strength = 80;
			type = "shot";
		};
	};
	class kr_m4a1_457mm: kr_M4A1_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_M4_457";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\m4a1_457mm.p3d";
		itemSize[] = {9,3};
		weight = 3839;
		WeaponLength = 0.823;
		initSpeedMultiplier = 1.1;
		barrelArmor = 11.0;
		recoilModifier[] = {1.4,1.4,1.3};
		swayModifier[] = {1.55,1.45,1.65};
		modes[] = {"SemiAuto","FullAuto"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_destruct.rvmat"}}};
				};
			};
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class kr_firearms
		{
			barreltype = 2;
			handguardSlotName = "kr_ar15_hndgrd";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -30;
		};
		class NoiseShoot
		{
			strength = 85;
			type = "shot";
		};
	};
	class kr_m4a1_508mm: kr_M4A1_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_M4_508";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\m4a1_508mm.p3d";
		itemSize[] = {9,3};
		weight = 4034;
		WeaponLength = 0.874;
		initSpeedMultiplier = 1.3;
		barrelArmor = 12.0;
		recoilModifier[] = {1.4,1.4,1.3};
		swayModifier[] = {1.6,1.5,1.7};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\m4a1\data\m4a1_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms
		{
			barreltype = 5;
			handguardSlotName = "kr_ar15_hndgrd";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -35;
		};
		class NoiseShoot
		{
			strength = 90;
			type = "shot";
		};
	};
};
