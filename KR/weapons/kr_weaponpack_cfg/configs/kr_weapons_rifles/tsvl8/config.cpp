class CfgPatches
{
	class kr_weapons_rifles_tsvl8
	{
		units[] = {};
		weapons[] = {"kr_tsvl8_M1","kr_tsvl8_M3"};
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
	class kr_tsvl8_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 4500;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,80,4,10};
		WeaponLength = 0.934214;
		chamberSize = 1;
		chamberedRound = "";
		magazineSwitchTime = 0.38;
		ejectType = 0;
		opticsFlare = 0;
		chamberableFrom[] = {"kr_Ammo_338LM_fmj","kr_Ammo_338LM_ap","kr_Ammo_338LM_upz","kr_Ammo_338LM_tac_x"};
		magazines[] = {"Mag_338lm_tsvl_8Rnd"};
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_muzzle"};
		modes[] = {"Single"};
		attachments[] = {"kr_muzzle338","kr_bipod","kr_ar_pistolgrip","weaponOpticsB","weaponWrap"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m1.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m1_co.paa"};
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 1;
			dispersion = 0.00245;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m1_destruct.rvmat"}}};
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
	class kr_tsvl8_M1: kr_tsvl8_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_tsvl8_m1";
		descriptionShort = "$STR_weapons_rifles_tsvl8_m1_dsc";
		model = "KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\tsvl_m1.p3d";
		barrelArmor = 16;
		itemSize[] = {9,3};
		WeaponLength = 0.934214;
		weight = 7400;
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".338 LM";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"DVL_M2_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ550_silencerHomeMade_SoundSet","CZ550_silencerHomeMadeTail_SoundSet","CZ550_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.00245;
			magazineSlot = "magazine";
		};
	};
	class kr_tsvl8_M3: kr_tsvl8_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_tsvl8_m3";
		descriptionShort = "$STR_weapons_rifles_tsvl8_m3_dsc";
		model = "KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\tsvl_m3.p3d";
		barrelArmor = 12;
		itemSize[] = {8,3};
		WeaponLength = 0.72;
		weight = 6200;
		initSpeedMultiplier = 1.3;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m3.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m1_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = ".338 LM";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"DVL_M2_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ550_silencerHomeMade_SoundSet","CZ550_silencerHomeMadeTail_SoundSet","CZ550_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.0026;
			magazineSlot = "magazine";
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\tsvl8\data\tsvl_m3_destruct.rvmat"}}};
				};
			};
		};
	};
};
