class CfgPatches
{
	class kr_weapons_firearms_akm_vpo
	{
		units[] = {};
		weapons[] = {"kr_vpo_136","kr_vpo_209"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","DZ_Weapons_Firearms"};
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
	class kr_akm_vpo_Base: kr_ak_Base
	{
		scope = 0;
		itemSize[] = {8,3};
		weight = 3575;
		attachments[] = {"kr_muzzle762_39","kr_ak_hndgrd","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","weaponOptics","weaponOptics1","kr_ak_receiver","kr_ak_pistolgrip","kr_ak_stock","kr_ak_handle","weaponWrap"};
		hiddenSelections[] = {"camo"};
		WeaponLength = 0.7;
		barrelArmor = 2.9;
		initSpeedMultiplier = 1.02;
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {1.4,1.2,1.1};
		magazines[] = {"Mag_762x39_sawed_off_10Rnd","Mag_762x39_6L10_30Rnd","Mag_762x39_ak103_std_30Rnd","Mag_762x39_akms_aluminium_30Rnd","Mag_762x39_fab_defense_ultimag_30Rnd","Mag_762x39_magpul_pmag_30Rnd","Mag_762x39_us_palm_30Rnd","Mag_762x39_rpk_std_40Rnd","Mag_762x39_rpk_std_bakelite_40Rnd","Mag_762x39_x_products_drum_50Rnd","Mag_762x39_promag_drum_73Rnd","Mag_762x39_molot_rpk_drum_75Rnd"};
		modes[] = {"SemiAuto"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_firearms
		{
			receiverSlotName = "kr_ak_receiver";
			handguardSlotName = "kr_ak_hndgrd";
			buttstockSlotName = "kr_ak_stock";
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
			strength = 100;
			type = "shot";
		};
	};
	class kr_vpo_136: kr_akm_vpo_Base
	{
		scope = 2;
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\akm_vpo_136.p3d";
		displayName = "$STR_weapons_firearms_vpo_136";
		descriptionShort = "$STR_weapons_firearms_vpo_136_dsc";
		initSpeedMultiplier = 1.0;
		barrelArmor = 15.0;
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {1.4,1.2,1.1};
		chamberableFrom[] = {"Ammo_762x39","Ammo_762x39Tracer","kr_Ammo_762x39_AP","kr_Ammo_762x39_fmj","kr_Ammo_762x39_HP","kr_Ammo_762x39_t45m","kr_Ammo_762x39_mai_ap","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_us","kr_Ammo_762x39_bp","kr_Ammo_366TKM_custom_ap","kr_Ammo_366TKM_FMJ","kr_Ammo_366TKM_EKO","kr_Ammo_366TKM_Geksa"};
		kr_bannedAmmo[] = {"Bullet_366TKM_EKO","Bullet_366TKM_FMJ","Bullet_366TKM_Geksa","Bullet_366TKM_custom_ap"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_136_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_136.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x39";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AKM_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AKM_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.13;
			dispersion = 0.0035;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_136.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_136_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_136_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_136_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_136_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_vpo_209: kr_akm_vpo_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_vpo_209";
		descriptionShort = "$STR_weapons_firearms_vpo_209_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\akm_vpo_209.p3d";
		attachments[] = {"kr_muzzle366","kr_ak_hndgrd","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","weaponOptics","weaponOptics1","kr_ak_receiver","kr_ak_pistolgrip","kr_ak_stock","kr_ak_handle","weaponWrap"};
		initSpeedMultiplier = 1.0;
		barrelArmor = 4.67;
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {1.4,1.2,1.1};
		chamberableFrom[] = {"Ammo_762x39","Ammo_762x39Tracer","kr_Ammo_762x39_AP","kr_Ammo_762x39_fmj","kr_Ammo_762x39_HP","kr_Ammo_762x39_t45m","kr_Ammo_762x39_mai_ap","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_us","kr_Ammo_762x39_bp","kr_Ammo_366TKM_custom_ap","kr_Ammo_366TKM_FMJ","kr_Ammo_366TKM_EKO","kr_Ammo_366TKM_Geksa"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_209_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_209.rvmat"};
		kr_bannedAmmo[] = {"Bullet_762x39_bp","Bullet_762x39_fmj","Bullet_762x39_mai_ap","Bullet_762x39_pp","Bullet_762x39_ps","Bullet_762x39_t45m","Bullet_762x39_us"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".366 TKM";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AKM_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AKM_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.004;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_209.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_209_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_209_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_209_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\akm_vpo\data\vpo_209_destruct.rvmat"}}};
				};
			};
		};
	};
};
