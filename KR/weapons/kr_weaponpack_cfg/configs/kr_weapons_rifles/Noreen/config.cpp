class CfgPatches
{
	class kr_weapons_rifles_Noreen
	{
		units[] = {};
		weapons[] = {"kr_Noreen"};
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
	class BoltActionRifle_Base;
	class kr_Noreen_Base: BoltActionRifle_Base
	{
		scope = 0;
		displayName = "$STR_weapons_rifles_noreen_408";
		descriptionShort = "$STR_weapons_rifles_noreen_408_dsc";
		weight = 10400;
		model = "\KR\weapons\kr_weaponpack\kr_weapons_rifles\Noreen\Noreen.p3d";
		attachments[] = {"kr_ar_pistolgrip","weaponOpticsB","weaponOptics","weaponWrap"};
		itemSize[] = {10,3};
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 1.47;
		DisplayMagazine = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_408CheyTac"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		barrelArmor = 2.8;
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		modes[] = {"Single"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = ".408 CheyTac";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Noreen_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 1;
			dispersion = 0.0005;
			magazineSlot = "magazine";
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
			strength = 150;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class kr_Noreen: kr_Noreen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\KR\weapons\kr_weaponpack\kr_weapons_rifles\Noreen\data\Noreen_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\Noreen\Data\Noreen.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\Noreen\Data\Noreen.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\Noreen\Data\Noreen_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\Noreen\Data\Noreen_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\Noreen\Data\Noreen_destruct.rvmat"}}};
				};
			};
		};
	};
};
