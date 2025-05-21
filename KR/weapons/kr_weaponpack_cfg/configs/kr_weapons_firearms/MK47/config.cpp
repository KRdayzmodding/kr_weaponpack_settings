class CfgPatches
{
	class kr_weapons_firearms_mk47
	{
		units[] = {};
		weapons[] = {"kr_mk47_256mm","kr_mk47_409mm"};
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
	class Launcher_Base;
	class kr_mk47_Base: Rifle_Base
	{
		scope = 0;
		descriptionShort = "$STR_weapons_firearms_mk47_dsc";
		weight = 2322;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.6,50,100,4,10};
		itemSize[] = {8,3};
		spawnDamageRange[] = {0.0,0.6};
		attachments[] = {"kr_muzzle308","kr_ar10_hndgrd","weaponOptics","kr_ar_pistolgrip","kr_ar_bttstck","weaponHolo1","weaponWrap"};
		WeaponLength = 0.814784;
		barrelArmor = 25;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x39","Ammo_762x39Tracer","kr_Ammo_762x39_AP","kr_Ammo_762x39_fmj","kr_Ammo_762x39_HP","kr_Ammo_762x39_t45m","kr_Ammo_762x39_mai_ap","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_us","kr_Ammo_762x39_bp","kr_Ammo_366TKM_custom_ap","kr_Ammo_366TKM_FMJ","kr_Ammo_366TKM_EKO","kr_Ammo_366TKM_Geksa"};
		magazines[] = {"Mag_762x39_sawed_off_10Rnd","Mag_762x39_6L10_30Rnd","Mag_762x39_ak103_std_30Rnd","Mag_762x39_akms_aluminium_30Rnd","Mag_762x39_fab_defense_ultimag_30Rnd","Mag_762x39_magpul_pmag_30Rnd","Mag_762x39_us_palm_30Rnd","Mag_762x39_x_products_drum_50Rnd","Mag_762x39_promag_drum_73Rnd","Mag_762x39_molot_rpk_drum_75Rnd"};
		kr_bannedAmmo[] = {"Bullet_366TKM_EKO","Bullet_366TKM_FMJ","Bullet_366TKM_Geksa","Bullet_366TKM_custom_ap"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		simpleHiddenSelections[] = {"hide_barrel","hide_pistolgrip","hide_muzzle","fold","unfold","rear_sights","hide_tube"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK47\data\mk47_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK47\data\mk47.rvmat"};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK47\data\mk47.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK47\data\mk47_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK47\data\mk47_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK47\data\mk47_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\MK47\data\mk47_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mk47_256mm: kr_mk47_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_mk47";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\MK47\mk47_256mm.p3d";
		itemSize[] = {7,3};
		weight = 2322;
		WeaponLength = 0.635;
		initSpeedMultiplier = 1.0;
		barrelArmor = 14;
		recoilModifier[] = {1.3,1.3,1.5};
		swayModifier[] = {1.2,1.0,1.35};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
		};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			barreltype = 1;
			handguardSlotName = "kr_ar10_hndgrd";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class NoiseShoot
		{
			strength = 80;
			type = "shot";
		};
	};
	class kr_mk47_409mm: kr_mk47_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_mk47_409";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\MK47\mk47_409mm.p3d";
		itemSize[] = {8,3};
		weight = 2982;
		WeaponLength = 0.794;
		initSpeedMultiplier = 1.15;
		barrelArmor = 10.0;
		recoilModifier[] = {1.4,1.4,1.6};
		swayModifier[] = {1.3,1.3,1.5};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x39";
		};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			barreltype = 2;
			handguardSlotName = "kr_ar10_hndgrd";
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
	};
};
