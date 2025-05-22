class CfgPatches
{
	class kr_weapons_firearms_ak103
	{
		units[] = {};
		weapons[] = {"kr_ak103"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
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
	class kr_ak_Base;
	class kr_ak103_Base: kr_ak_Base
	{
		scope = 0;
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\ak103\ak103.p3d";
		attachments[] = {"kr_muzzle762_39","kr_ak_hndgrd","weaponOpticsAK","kr_ak_receiver","kr_ak_pistolgrip","kr_ak_fstock","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","weaponOptics","weaponOptics1","weaponOpticsDT","kr_ak_handle","weaponWrap"};
		weight = 2600;
		WeaponLength = 0.66;
		itemSize[] = {8,3};
		chamberableFrom[] = {"kr_Ammo_762x39_t45m","kr_Ammo_762x39_fmj","kr_Ammo_762x39_us","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_bp","kr_Ammo_762x39_HP","kr_Ammo_762x39_mai_ap","kr_Ammo_366TKM_custom_ap","kr_Ammo_366TKM_FMJ","kr_Ammo_366TKM_EKO","kr_Ammo_366TKM_Geksa","Ammo_762x39","Ammo_762x39Tracer"};
		kr_bannedAmmo[] = {"Bullet_366TKM_EKO","Bullet_366TKM_FMJ","Bullet_366TKM_Geksa","Bullet_366TKM_custom_ap"};
		magazines[] = {"Mag_762x39_sawed_off_10Rnd","Mag_762x39_6L10_30Rnd","Mag_762x39_ak103_std_30Rnd","Mag_762x39_akms_aluminium_30Rnd","Mag_762x39_fab_defense_ultimag_30Rnd","Mag_762x39_magpul_pmag_30Rnd","Mag_762x39_us_palm_30Rnd","Mag_762x39_rpk_std_40Rnd","Mag_762x39_rpk_std_bakelite_40Rnd","Mag_762x39_x_products_drum_50Rnd","Mag_762x39_promag_drum_73Rnd","Mag_762x39_molot_rpk_drum_75Rnd"};
		barrelArmor = 12.8;
		initSpeedMultiplier = 1.15;
		recoilModifier[] = {1.25,1.25,1.3};
		swayModifier[] = {1.8,1.6,1.2};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.003;
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.003;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x39";
		};
		class kr_firearms
		{
			receiverSlotName = "kr_ak_receiver";
			handguardSlotName = "kr_ak_hndgrd";
			buttstockSlotName = "kr_ak_fstock";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -20;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak103\data\ak103.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak103\data\ak103_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak103\data\ak103_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak103\data\ak103_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak103\data\ak103_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 500;
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
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
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
				maxOverheatingValue = 60;
				shotsToStartOverheating = 25;
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
		class NoiseShoot
		{
			strength = 90;
			type = "shot";
		};
	};
	class kr_ak103: kr_ak103_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_ak103";
		descriptionShort = "$STR_weapons_firearms_ak103_dsc";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak103\data\ak103_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak103\data\ak103.rvmat"};
	};
};
