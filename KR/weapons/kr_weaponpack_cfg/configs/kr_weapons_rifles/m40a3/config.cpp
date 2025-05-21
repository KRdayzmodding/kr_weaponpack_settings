class CfgPatches
{
	class kr_weapons_rifles_kr_m40a5
	{
		units[] = {};
		weapons[] = {"kr_m40a5"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
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
	class kr_m40a5_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 4000;
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\m40a5\m40a5.p3d";
		attachments[] = {"kr_muzzle308","kr_bipod","weaponOpticsB","weaponWrap"};
		itemSize[] = {9,3};
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		WeaponLength = 1.16;
		barrelArmor = 4.5;
		initSpeedMultiplier = 1.3;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_762x51_bpz_fmj","kr_Ammo_308Win_AP","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"Mag_762x51_kac_steel_10Rnd","Mag_762x51_pmag_20Rnd","Mag_762x51_kac_steel_20Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.6,0.6,0.6};
		simpleHiddenSelections[] = {"hide_barrel","hide_muzzle"};
		hiddenSelectionsTextures[] = {"\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\m40a5\data\m40a5_co.paa"};
		hiddenSelectionsMaterials[] = {"\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\m40a5\data\m40a5.rvmat"};
		class NoiseShoot
		{
			strength = 100;
			type = "sound";
		};
		modes[] = {"Single"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 40;
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {"SCOUT_silencer_SoundSet","SCOUT_silencerTail_SoundSet","SCOUT_silencerInteriorTail_SoundSet"};
			envShootingDecrease = 0.05;
			reloadTime = 1;
			dispersion = 0.00275;
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
				position[] = {0.02,-0.02,-0.02};
				orientation[] = {0,-30,0};
			};
			class Melee
			{
				position[] = {0.02,0,0.01};
				orientation[] = {0,30,0};
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
					overrideParticle = "weapon_shot_mosin_compensator_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {0.01,0,0};
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
				maxOverheatingValue = 60;
				shotsToStartOverheating = 25;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.4};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.4,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.2,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
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

		weaponStateAnim = "dz/anims/anm/player/reloads/SSG82/w_SSG82_states.anm";
	};
	class kr_m40a5: kr_m40a5_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_m40a5";
		descriptionShort = "$STR_weapons_rifles_m40a5_dsc";
		barrelArmor = 10;
		initSpeedMultiplier = 1.3;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.6,0.6,0.6};
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		class Single: Mode_Single
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SCOUT_silencer_SoundSet","SCOUT_silencerTail_SoundSet","SCOUT_silencerInteriorTail_SoundSet"}};
			envShootingDecrease = 0.05;
			reloadTime = 1.0;
			dispersion = 0.00275;
			magazineSlot = "magazine";
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x51 (.308)";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = 
					{
						{1.0,{"\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\m40a5\data\m40a5.rvmat"}},
						{0.7,{"\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\m40a5\data\m40a5.rvmat"}},
						{0.5,{"\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\m40a5\data\m40a5_damage.rvmat"}},
						{0.3,{"\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\m40a5\data\m40a5_damage.rvmat"}},
						{0.0,{"\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\m40a5\data\m40a5_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
