class CfgPatches
{
	class kr_weapons_firearms_honeybadger
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Mode_kr_GL;
class OpticsInfoRifle;
class kr_Gunplay_Base;
class cfgWeapons
{
	class Rifle_Base;
	class kr_honeybadger_Base: Rifle_Base
	{
		scope = 0;
		weight = 2276;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {0,0.6,50,200,4,10};
		//attachments[] = {"kr_muzzle556","kr_ar15_hndgrd","weaponOptics","kr_ar15_charging","kr_ar_pistolgrip","kr_ar15_tube","kr_ar_bttstck","weaponHolo1","weaponFlashlight","weaponWrap"};
		attachments[] = {"weaponOptics","kr_ar_pistolgrip","weaponHolo1","kr_foregrip","kr_light_right","weaponWrap"};
		WeaponLength = 0.814784;
		barrelArmor = 9.5;
		initSpeedMultiplier = 1.0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_300_m62","kr_Ammo_300_ap","kr_Ammo_300_vmax","kr_Ammo_300_bpz_fmj"};
		kr_bannedAmmo[] = {"Bullet_556x45","Bullet_556x45Tracer","Bullet_556x45_FMJ","Bullet_556x45_m855","Bullet_556x45_m855a1","Bullet_556x45_m856","Bullet_556x45_m995","Bullet_556x45_warmageddon"};
		magazines[] = {"Mag_STANAG_30Rnd","Mag_STANAGCoupled_30Rnd","Mag_STANAG_60Rnd","Mag_CMAG_10Rnd","Mag_CMAG_20Rnd","Mag_CMAG_30Rnd","Mag_CMAG_40Rnd","Mag_CMAG_10Rnd_Green","Mag_CMAG_20Rnd_Green","Mag_CMAG_30Rnd_Green","Mag_CMAG_40Rnd_Green","Mag_CMAG_10Rnd_Black","Mag_CMAG_20Rnd_Black","Mag_CMAG_30Rnd_Black","Mag_CMAG_40Rnd_Black","Mag_556x45_magpulp_60Rnd","Mag_556x45_colt_ar15_std_30Rnd","Mag_556x45_fn_mk16_std_30Rnd","Mag_556x45_hk_polymer_30Rnd","Mag_556x45_hk_gen_2_pm_30Rnd","Mag_556x45_magpulm3_10Rnd","Mag_556x45_magpulm3_20Rnd","Mag_556x45_magpulm3_30Rnd_blck","Mag_556x45_magpulm3_30Rnd_tan","Mag_556x45_magpulm3_40Rnd_Base","Mag_556x45_magpulm3_40Rnd_blck","Mag_556x45_magpulm3_40Rnd_tan","Mag_556x45_steel_maritime_30Rnd","Mag_556x45_srfr_mag5_60Rnd","Mag_556x45_srfr_mag5_100Rnd","Mag_556x45_troy_battlemag_30Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;

		simpleHiddenSelections[] = {"hide_sights","hide_pistolgrip"};
		reloadAction = "ReloadM4";
		hiddenSelections[] = {"camo1","camo2"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
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

		class NoiseShoot
		{
			strength = 5;
			type = "sound";
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
				maxOverheatingValue = 30;
				shotsToStartOverheating = 15;
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
	
	class kr_honeybadger: kr_honeybadger_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_honeybadger";
		descriptionShort = "$STR_weapons_firearms_honeybadger_dsc";
		model = "KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\honeybadger.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_1_co.paa","KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_2_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_1.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_2.rvmat"};
		itemSize[] = {7,3};
		weight = 2900;
		WeaponLength = 0.65;
		initSpeedMultiplier = 1.0;
		barrelArmor = 10;
		recoilModifier[] = {0.7,0.7,1.0};
		swayModifier[] = {0.8,0.9,1.0};

		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".300 Blackout";
		};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};

		class NoiseShoot
		{
			strength = 10;
			type = "shot";
		};

		modes[] = {"SemiAuto","FullAuto"};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"};
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
					hitpoints = 230;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_1.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_2.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_1_worn.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_2_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_1_damage.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_2_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_1_badlydamage.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_2_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_1_destruct.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_firearms\honeybadger\data\honeybadger_2_destruct.rvmat"}}
					};
				};
			};
		};
		class kr_firearms
		{
			barreltype = 1;
			handguardSlotName = "";
		};
	};
};