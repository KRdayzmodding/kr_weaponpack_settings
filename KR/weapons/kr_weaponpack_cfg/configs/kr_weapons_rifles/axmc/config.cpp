class CfgPatches
{
	class kr_weapons_rifles_axmc
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_weapon_sounds_sounds"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;

class kr_Gunplay_Base;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class kr_axmc_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		displayName = "$STR_weapons_rifles_axmc";
		descriptionShort = "$STR_weapons_rifles_axmc_dsc";
		weight = 6000;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		opticsFlare = 0;
		winchesterTypeOpticsMount = 1;
		WeaponLength = 1.27;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_338LM_fmj","kr_Ammo_338LM_ap","kr_Ammo_338LM_upz","kr_Ammo_338LM_tac_x"};
		magazines[] = {"Mag_338lm_axmc_10Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = {"hide_barrel","hide_muzzle"};
		attachments[] = {"kr_muzzle338","weaponOpticsB","weaponWrap"};
		model = "KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\axmc.p3d";
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_co.paa"};
		barrelArmor = 10;
		initSpeedMultiplier = 1.15;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.8,0.8,0.8};
		itemSize[] = {9,2};
		modes[] = {"Single"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 30;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".338 LM";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_destruct.rvmat"}}};
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
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,150,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
		};
	};
	class kr_axmc: kr_axmc_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_co.paa"};
	};
};
