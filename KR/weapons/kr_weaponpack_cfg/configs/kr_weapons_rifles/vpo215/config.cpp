class CfgPatches
{
	class kr_weapons_rifles_vpo215
	{
		units[] = {};
		weapons[] = {"kr_vpo_215"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","kr_data"};
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
	class kr_vpo_215_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		displayName = "$STR_weapons_rifles_vpo215";
		descriptionShort = "$STR_weapons_rifles_vpo215_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_rifles\vpo215\vpo215.p3d";
		weight = 3575;
		initSpeedMultiplier = 1.4;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 0.7;
		barrelArmor = 8;
		chamberableFrom[] = {"kr_Ammo_366TKM_FMJ","kr_Ammo_366TKM_EKO","kr_Ammo_366TKM_custom_ap","kr_Ammo_366TKM_Geksa"};
		magazines[] = {"Mag_366_vpo215_4Rnd"};
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		opticsFlare = 0;
		winchesterTypeOpticsMount = 0;
		ironsightsExcludingOptics[] = {};
		animName = "cz527";
		chamberSize = 1;
		chamberedRound = "";
		magazineSwitchTime = 0.38;
		ejectType = 0;
		simpleHiddenSelections[] = {"hide_muzzle"};
		hiddenSelections[] = {"camo"};
		class NoiseShoot
		{
			strength = 80;
			type = "shot";
		};
		modes[] = {"Single"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 50;
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.0025;
			magazineSlot = "magazine";
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
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.07,0,-0.07};
				orientation[] = {-7,-55,5};
			};
			class Melee
			{
				position[] = {-0.07,0,0.05};
				orientation[] = {2,55,-5};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\cz527\w_cz527_states.anm";
	};
	class kr_vpo_215: kr_vpo_215_Base
	{
		scope = 2;
		attachments[] = {"kr_muzzle366","weaponOpticsB","weaponWrap"};
		itemSize[] = {10,3};
		recoilModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\vpo215\data\vpo215_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\vpo215\data\vpo215.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".366 TKM";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\vpo215\data\vpo215.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\vpo215\data\vpo215.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\vpo215\data\vpo215_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\vpo215\data\vpo215_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\vpo215\data\vpo215_destruct.rvmat"}}};
				};
			};
		};
	};
};
