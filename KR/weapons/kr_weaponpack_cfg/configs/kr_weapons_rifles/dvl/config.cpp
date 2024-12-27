class CfgPatches
{
	class kr_weapons_rifles_dvl10
	{
		units[] = {};
		weapons[] = {"kr_dvl10_M1","kr_dvl10_M2"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
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
	class kr_dvl10_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 4500;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 0.934214;
		chamberSize = 1;
		chamberedRound = "";
		magazineSwitchTime = 0.38;
		ejectType = 0;
		opticsFlare = 0;
		chamberableFrom[] = {"kr_Ammo_338LM_fmj","kr_Ammo_338LM_ap","kr_Ammo_338LM_upz","kr_Ammo_338LM_tac_x"};
		magazines[] = {"Mag_338lm_dvl_10Rnd"};
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		modes[] = {"Single"};
		attachments[] = {"kr_ar_pistolgrip","weaponOpticsB","weaponOptics","weaponWrap"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\dvl10_co.paa"};
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 1;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_destruct.rvmat"}}};
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
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {0.0,-0.02,0.01};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {0.0,-0.02,-0.01};
				orientation[] = {0,0,0};
			};
		};
	};
	class kr_dvl10_M1: kr_dvl10_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_dvl_m1";
		descriptionShort = "$STR_weapons_rifles_dvl_m1_dsc";
		model = "KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\dvl_10_M1.p3d";
		barrelArmor = 5.69;
		itemSize[] = {9,3};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".338 LM";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"DVL_M1_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"};
			reloadTime = 1;
			dispersion = 0.00095;
			magazineSlot = "magazine";
		};
	};
	class kr_dvl10_M2: kr_dvl10_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_dvl_m2";
		descriptionShort = "$STR_weapons_rifles_dvl_m2_dsc";
		model = "KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\dvl_10_M2.p3d";
		barrelArmor = 8.25;
		itemSize[] = {9,3};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = ".338 LM";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"DVL_M2_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 1;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
	};
};
