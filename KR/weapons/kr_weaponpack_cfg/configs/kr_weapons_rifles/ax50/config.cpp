class CfgPatches
{
	class kr_weapons_rifles_ax50
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
	class kr_AX50_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		displayName = "$STR_weapons_rifles_ax50";
		descriptionShort = "$STR_weapons_rifles_ax50_dsc";
		weight = 10300;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		opticsFlare = 0;
		winchesterTypeOpticsMount = 0;
		WeaponLength = 1.03;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_50BMG","kr_Ammo_50BMG_AP","kr_Ammo_50BMG_E","kr_Ammo_50BMG_ET","kr_Ammo_50BMG_T"};
		magazines[] = {"Mag_50bmg_ax50_5Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = {"hide_barrel"};
		attachments[] = {"kr_muzzle50bmg","kr_ax50_handguard","weaponOpticsB1","kr_ax50_stock","weaponWrap"};
		model = "KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AX50\AX50.p3d";
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AX50\data\AX50.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AX50\data\AX50_co.paa"};
		barrelArmor = 2.6;
		initSpeedMultiplier = 1.1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		itemSize[] = {12,2};
		modes[] = {"Single"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 30;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".50BMG";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.0024;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AX50\data\AX50.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AX50\data\AX50_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AX50\data\AX50_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AX50\data\AX50_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AX50\data\AX50_destruct.rvmat"}}};
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
			strength = 110;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
	};

	class kr_AX50: kr_AX50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AX50\data\AX50_co.paa"};
	};
};