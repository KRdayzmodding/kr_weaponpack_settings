class CfgPatches
{
	class kr_weapons_firearms_svch
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
class OpticsInfoRifle;
class kr_Gunplay_Base;
class cfgWeapons
{
	class Rifle_Base;
	class kr_svch_Base: Rifle_Base
	{
		descriptionShort = "$STR_weapons_rifles_svch_dsc";
		scope = 0;
		weight = 6600;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		WeaponLength = 0.752228;
		barrelArmor = 7;
		initSpeedMultiplier = 1.15;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_762x54r_t46m","kr_Ammo_762x54r_bs","kr_Ammo_762x54r_bthp","kr_Ammo_762x54r_fmj","kr_Ammo_762x54r_lps","kr_Ammo_762x54r_ps","kr_Ammo_762x54r_snb","Ammo_762x54","Ammo_762x54Tracer"};
		magazines[] = {"Mag_762x54_svd_10Rnd","Mag_762x54_svd_20Rnd"};
		attachments[] = {"kr_muzzle762_54","kr_bipod","kr_svch_stock","kr_ak_pistolgrip","weaponOptics","weaponWrap"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		simpleHiddenSelections[] = 
		{
			"hide_pistolgrip",
			"hide_muzzle",
			"sights",
			"fold",
			"unfold"
		};		
		hiddenSelections[] = {"camo"};
		reloadAction = "ReloadFal";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\svch\data\svch_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\svch\data\svch.rvmat"};
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
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "weapon_shot_mosin9130_01";
				};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle = "weapon_shot_m4a1_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class GasPistonBurstR
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.05,-0.02,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.12,-0.02,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.21,-0.02,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class Steam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.4,0.02,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class Steam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.45,0.02,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0,1};
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
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\svch\data\svch.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\svch\data\svch_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\svch\data\svch_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\svch\data\svch_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\svch\data\svch_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_svch: kr_svch_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_svch";
		model = "KR\weapons\kr_weaponpack_2\kr_weapons_firearms\svch\svch.p3d";
		itemSize[] = {7,3};
		weight = 4000;
		WeaponLength = 0.735;
		barrelArmor = 7;
		initSpeedMultiplier = 1.15;
		modes[] = {"SemiAuto"};

		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x54";
		};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};

		class kr_firearms
		{
			buttstockSlotName = "kr_svch_stock";
		};
	};
};
