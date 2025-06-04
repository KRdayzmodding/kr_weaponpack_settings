class CfgPatches
{
	class kr_weapons_firearms_mk17
	{
		units[] = {};
		weapons[] = {"kr_mk17_330","kr_mk17_406","kr_mk17_508"};
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
	class kr_mk17_Base: Rifle_Base
	{
		scope = 0;
		descriptionShort = "$STR_weapons_firearms_mk17_dsc";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		attachments[] = {"kr_muzzle308","weaponOptics","kr_ar_pistolgrip","kr_scar_stock","kr_foregrip","weaponFlashlight","weaponWrap"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_sight_front","hide_sight_rear"};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};
		magazines[] = {"Mag_762x51_mk17_20Rnd","Mag_762x51_g28_xproduct_50Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		hiddenSelections[] = {"camo"};
		spawnDamageRange[] = {0.0,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\mk17\data\mk17_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\mk17\data\mk17.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 270;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\mk17\data\mk17.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\mk17\data\mk17.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\mk17\data\mk17_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\mk17\data\mk17_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\mk17\data\mk17_destruct.rvmat"}}};
				};
			};
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
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x51 (.308)";
		};
	};
	class kr_mk17_330: kr_mk17_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_mk17";
		descriptionShort = "$STR_weapons_firearms_mk17_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\mk17\mk17_330.p3d";
		WeaponLength = 0.543;
		itemSize[] = {6,3};
		weight = 3800;
		barrelArmor = 17.0;
		initSpeedMultiplier = 0.95;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.9,0.9,0.9};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
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
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MK17_Shot_SoundSet","MK17_Tail_SoundSet","MK17_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MK17_silencerHomeMade_SoundSet","MK17_silencerHomeMadeTail_SoundSet","MK17_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MK17_Shot_SoundSet","MK17_Tail_SoundSet","MK17_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MK17_silencerHomeMade_SoundSet","MK17_silencerHomeMadeTail_SoundSet","MK17_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
	};
	class kr_mk17_406: kr_mk17_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_mk17_406";
		descriptionShort = "$STR_weapons_firearms_mk17_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\mk17\mk17_406.p3d";
		WeaponLength = 0.62;
		itemSize[] = {7,3};
		weight = 3900;
		barrelArmor = 17.0;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 90;
			type = "shot";
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51 (.308)";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MK17_Shot_SoundSet","MK17_Tail_SoundSet","MK17_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MK17_silencerHomeMade_SoundSet","MK17_silencerHomeMadeTail_SoundSet","MK17_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.0036;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MK17_Shot_SoundSet","MK17_Tail_SoundSet","MK17_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MK17_silencerHomeMade_SoundSet","MK17_silencerHomeMadeTail_SoundSet","MK17_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.0036;
			magazineSlot = "magazine";
		};
	};
	class kr_mk17_508: kr_mk17_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_mk17_508";
		descriptionShort = "$STR_weapons_firearms_mk17_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\mk17\mk17_508.p3d";
		WeaponLength = 0.71;
		itemSize[] = {8,3};
		weight = 4000;
		barrelArmor = 17.0;
		initSpeedMultiplier = 1.1;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {1.1,1.1,1.1};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x51 (.308)";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MK17_Shot_SoundSet","MK17_Tail_SoundSet","MK17_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MK17_silencerHomeMade_SoundSet","MK17_silencerHomeMadeTail_SoundSet","MK17_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.0034;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MK17_Shot_SoundSet","MK17_Tail_SoundSet","MK17_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MK17_silencerHomeMade_SoundSet","MK17_silencerHomeMadeTail_SoundSet","MK17_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.0034;
			magazineSlot = "magazine";
		};
	};
};
