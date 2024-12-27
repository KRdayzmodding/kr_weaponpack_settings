class CfgPatches
{
	class kr_weapons_rifles_sako85
	{
		units[] = {};
		weapons[] = {"kr_sako85"};
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
	class kr_sako85_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		displayName = "$STR_weapons_rifles_sako85";
		descriptionShort = "$STR_weapons_rifles_sako85_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\sako85.p3d";
		weight = 2700;
		initSpeedMultiplier = 0.85;
		recoilModifier[] = {2.5,2.5,2.5};
		swayModifier[] = {2.2,2.2,1.2};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 0.71;
		barrelArmor = 6.0;
		chamberableFrom[] = {"kr_Ammo_338LM_fmj","kr_Ammo_338LM_ap","kr_Ammo_338LM_upz","kr_Ammo_338LM_tac_x"};
		magazines[] = {"Mag_338lm_sako85_4Rnd"};
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		opticsFlare = 0;
		winchesterTypeOpticsMount = 0;
		ironsightsExcludingOptics[] = {};
		animName = "cz527";
		chamberSize = 1;
		chamberedRound = "";
		magazineSwitchTime = 0.5;
		ejectType = 0;
		simpleHiddenSelections[] = {"hide_muzzle"};
		hiddenSelections[] = {"camo"};
		class NoiseShoot
		{
			strength = 120;
			type = "shot";
		};
		modes[] = {"Single"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"B95_Shot_SoundSet","B95_Tail_SoundSet","B95_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ550_silencerHomeMade_SoundSet","CZ550_silencerHomeMadeTail_SoundSet","CZ550_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300};
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
	class kr_sako85: kr_sako85_Base
	{
		scope = 2;
		attachments[] = {"kr_optics_top_mount","weaponOptics","weaponWrap"};
		itemSize[] = {9,3};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".338 LM";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85_destruct.rvmat"}}};
				};
			};
		};
	};
};
