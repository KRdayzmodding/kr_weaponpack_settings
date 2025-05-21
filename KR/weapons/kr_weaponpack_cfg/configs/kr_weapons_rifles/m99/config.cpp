class CfgPatches
{
	class kr_weapons_rifles_M99
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
	class BoltActionRifle_Base;
	class kr_M99_Base: BoltActionRifle_Base
	{
		scope = 0;
		displayName = "$STR_weapons_rifles_M99";
		descriptionShort = "$STR_weapons_rifles_M99_dsc";
		model = "KR\weapons\kr_weaponpack_2\kr_weapons_rifles\M99\M99.p3d";
		attachments[] = {"kr_muzzle50bmg","kr_m82_bipods","weaponOptics","kr_ar_pistolgrip","weaponWrap"};
		itemSize[] = {11,3};
		weight = 11000;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		WeaponLength = 1.1;
		DisplayMagazine = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_50BMG","kr_Ammo_50BMG_AP","kr_Ammo_50BMG_E","kr_Ammo_50BMG_ET","kr_Ammo_50BMG_T"};
		magazineSwitchTime = 0.4;
		ejectType = 0;
		barrelArmor = 15;
		initSpeedMultiplier = 1.35;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.9,0.8,1};
		simpleHiddenSelections[] = 
		{
			"hide_pistolgrip",
			"sights",
			"fold",
			"unfold"
		};
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 35;
		};

		class kr_description
		{
			kr_tier = 6;
			kr_caliber = ".50BMG";
		};

		class Single: Mode_Single
		{
			soundSetShot[] = {"M99_Shot_SoundSet","M99_Tail_SoundSet","M99_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M99_silencer_SoundSet","M99_silencerTail_SoundSet","M99_silencerInteriorTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.0022;
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
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_50BMG";
					overrideDirectionVector[] = {180,0,0};
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
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class kr_M99: kr_M99_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\M99\data\M99_co.paa"};
		recoilModifier[] = {1.0,1.0,1.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\M99\data\M99.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\M99\data\M99.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\M99\data\M99_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\M99\data\M99_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\M99\data\M99_destruct.rvmat"}}};
				};
			};
		};
	};
};