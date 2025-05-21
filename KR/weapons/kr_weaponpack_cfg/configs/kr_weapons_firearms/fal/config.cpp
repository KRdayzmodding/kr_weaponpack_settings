class CfgPatches
{
	class kr_weapons_firearms_fal
	{
		units[] = {};
		weapons[] = {"kr_fal_280mm","kr_fal_406mm","kr_fal_533mm"};
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
	class kr_fal_Base: Rifle_Base
	{
		descriptionShort = "$STR_weapons_firearms_FAL_dsc";
		scope = 0;
		weight = 6000;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		WeaponLength = 0.752228;
		barrelArmor = 2.2;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","kr_Ammo_308Win_AP","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};
		attachments[] = {"kr_muzzle308","kr_fal_hndgrd","kr_fal_receiver","kr_fal_pistolgrip","kr_fal_stock","weaponHolo1","weaponOptics","weaponWrap"};
		magazines[] = {"Mag_762x51_sarco_30Rnd","Mag_762x51_dsarms_10Rnd","Mag_762x51_dsarms_20Rnd","Mag_762x51_dsarms_30Rnd","Mag_762x51_mmw_20Rnd","Mag_762x51_xproduct_50Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {3.4,3.9,6.4};
		swayModifier[] = {2.6,2.6,2.6};
		simpleHiddenSelections[] = {"hide_bttstock","hide_muzzle","hide_grip","hide_pistolgrip","hide_receiver"};
		hiddenSelections[] = {"camo"};
		reloadAction = "ReloadFal";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\fal\data\fal_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\fal\data\fal.rvmat"};
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
			modelOptics = "-";
			discreteDistance[] = {100,200,300};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 50;
			distanceZoomMax = 300;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\fal\data\fal.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\fal\data\fal_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\fal\data\fal_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\fal\data\fal_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\fal\data\fal_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_fal_280mm: kr_fal_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_FAL";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\fal\fal_280mm.p3d";
		itemSize[] = {7,3};
		weight = 3751;
		WeaponLength = 0.531;
		barrelArmor = 15;
		initSpeedMultiplier = 0.9;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.8,0.8,0.8};
		modes[] = {"SemiAuto","FullAuto"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -25;
		};
		class NoiseShoot
		{
			strength = 80;
			type = "shot";
		};

		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			barreltype = 1;
			handguardSlotName = "kr_fal_hndgrd";
		};
	};
	class kr_fal_406mm: kr_fal_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_FAL_406";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\fal\fal_406mm.p3d";
		itemSize[] = {8,3};
		weight = 3951;
		WeaponLength = 0.663;
		barrelArmor = 13.0;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.9,0.9,0.9};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51 (.308)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -20;
		};
		class NoiseShoot
		{
			strength = 90;
			type = "shot";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0037;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0037;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			barreltype = 1;
			handguardSlotName = "kr_fal_hndgrd";
		};
	};
	class kr_fal_533mm: kr_fal_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_FAL_533";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\fal\fal_533mm.p3d";
		itemSize[] = {9,3};
		weight = 4126;
		WeaponLength = 0.785;
		barrelArmor = 11.0;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {1.0,1.0,1.0};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x51 (.308)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -22;
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0033;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0033;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			barreltype = 2;
			handguardSlotName = "kr_fal_hndgrd";
		};
	};
};
