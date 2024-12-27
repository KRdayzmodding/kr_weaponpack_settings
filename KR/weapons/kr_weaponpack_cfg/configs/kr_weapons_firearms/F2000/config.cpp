class CfgPatches
{
	class kr_weapons_firearms_f2000
	{
		units[] = {};
		weapons[] = {"kr_FN_F2000"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
	};
};
class kr_Gunplay_Base;
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class kr_FN_F2000_Base: Rifle_Base
	{
		scope = 0;
		displayName = "$STR_weapons_firearms_F2000";
		descriptionShort = "$STR_weapons_firearms_F2000_dsc";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\F2000\f2000.p3d";
		weight = 3800;
		itemSize[] = {7,3};
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_556x45_AP"};
		magazineSwitchTime = 0.38;
		ejectType = 1;
		spawnDamageRange[] = {0.0,0.6};
		WeaponLength = 0.8;
		barrelArmor = 7.5;
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = {"hide_muzzle","hide_rails"};
		magazines[] = {"Mag_556x45_colt_ar15_std_30Rnd","Mag_556x45_fn_mk16_std_30Rnd","Mag_556x45_hk_polymer_30Rnd","Mag_556x45_hk_gen_2_pm_30Rnd","Mag_556x45_magpulm3_10Rnd","Mag_556x45_magpulm3_20Rnd","Mag_556x45_magpulm3_30Rnd_Base","Mag_556x45_magpulm3_30Rnd_blck","Mag_556x45_magpulm3_30Rnd_tan","Mag_556x45_magpulm3_40Rnd_Base","Mag_556x45_magpulm3_40Rnd_blck","Mag_556x45_magpulm3_40Rnd_tan","Mag_556x45_steel_maritime_30Rnd","Mag_556x45_troy_battlemag_30Rnd"};
		attachments[] = {"kr_muzzle556","weaponOptics","kr_weaponOpticsF2000","weaponWrap"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			opticsZoomMin = 0.28;
			opticsZoomMax = 0.28;
			opticsZoomInit = 0.28;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.2,0,0};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {-0.15,0,-0.02};
				orientation[] = {0,0,0};
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
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
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
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "smokepoint1";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "smokepoint";
				};
			};
		};
		weaponStateAnim = "dz\anims\anm\player\reloads\AUG\w_aug_states.anm";
	};
	class kr_FN_F2000: kr_FN_F2000_Base
	{
		scope = 2;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,1};
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		initSpeedMultiplier = 1.2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\F2000\data\F2000_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\F2000\data\F2000.rvmat"};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.095;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\F2000\data\F2000.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\F2000\data\F2000.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\F2000\data\F2000_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\F2000\data\F2000_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\F2000\data\F2000_destruct.rvmat"}}};
				};
			};
		};
	};
};
