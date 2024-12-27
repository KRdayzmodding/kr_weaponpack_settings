class CfgPatches
{
	class kr_weapons_lmg_M240
	{
		units[] = {};
		weapons[] = {"kr_m240"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines"};
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
	class kr_m240_Base: Rifle_Base
	{
		scope = 0;
		displayName = "$STR_kr_weapons_lmg_m240";
		descriptionShort = "$STR_kr_weapons_lmg_m240_dsc";
		model = "KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\m240.p3d";
		attachments[] = {"kr_muzzle308","kr_foregrip","weaponOptics","kr_light_right","weaponWrap"};
		itemSize[] = {10,3};
		weight = 12290;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,50.0};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		WeaponLength = 1.23;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","kr_Ammo_308Win_AP","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};
		magazines[] = {"Mag_762x51_m240_150Rnd"};
		ejectType = 1;
		simpleHiddenSelections[] = {"hide_barrel","ammobelt","hide_muzzle"};
		hiddenSelections[] = {"camo","camo1"};
		modes[] = {"FullAuto"};
		swayModifier[] = {1,1,0.9};
		recoilModifier[] = {1.2,1.25,1.25};
		barrelArmor = 15.0;
		initSpeedMultiplier = 0.9;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "7.62x51 (.308)";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Magnum_Shot_SoundSet","Magnum_Tail_SoundSet","Magnum_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.088;
			dispersion = 0.0009;
			magazineSlot = "magazine";
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_1.rvmat","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_2.rvmat","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_int.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_1.rvmat","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_2.rvmat","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_int.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_1_damage.rvmat","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_2_damage.rvmat","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_int_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_1_damage.rvmat","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_2_damage.rvmat","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_int_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_1_destruct.rvmat","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_2_destruct.rvmat","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_int_destruct.rvmat"}}};
				};
			};
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
				maxOverheatingValue = 100;
				shotsToStartOverheating = 5;
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
	};
	class kr_m240: kr_m240_Base
	{
		scope = 2;
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		swayModifier[] = {1,1,0.9};
		recoilModifier[] = {1.2,1.25,1.25};
		barrelArmor = 20.4;
		initSpeedMultiplier = 0.9;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_1_co.paa","KR\weapons\kr_weaponpack\kr_weapons_lmg\M240\data\m240_2_co.paa"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Magnum_Shot_SoundSet","Magnum_Tail_SoundSet","Magnum_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.088;
			dispersion = 0.0009;
			magazineSlot = "magazine";
		};
	};
};
