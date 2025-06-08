class CfgPatches
{
	class kr_weapons_smg_stm9
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class kr_Gunplay_Base;
class cfgWeapons
{
	class kr_ak_Base;
	class kr_stm9_Base: kr_ak_Base
	{
		scope = 0;
		weight = 2600;
		WeaponLength = 0.62;
		chamberableFrom[] = {"kr_Ammo_9x19_gt","kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_rip","kr_Ammo_9x19_quakemaker","Ammo_9x19"};
		magazines[] = {"Mag_9x19_glock17_std_17Rnd","Mag_9x19_glock17_pmag_21Rnd","Mag_9x19_glock17_33Rnd","Mag_9x19_glock17_50Rnd"};
		PPDOFProperties[] = {1,0.65,10,145,4,10};
		simpleHiddenSelections[] = {			
			"hide_barrel",
			"hide_pistolgrip",
			"fold",
			"unfold",
			"rear_sights",
			"hide_tube"
		};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_firearms
		{
			handguardSlotName = "kr_ar10_ar15_hndgrd";
			buttstockSlotName = "kr_ar_bttstck";
		};

		class NoiseShoot
		{
			strength = 60;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,75,100,150,200};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 200;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.06,-0.02,0.03};
				orientation[] = {0,15,0};
			};
			class Melee
			{
				position[] = {-0.06,-0.02,-0.05};
				orientation[] = {0,-15,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz61_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
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
	};
	class kr_stm9: kr_stm9_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_stm9_409";
		descriptionShort = "$STR_weapons_firearms_stm9_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_smg\stm9\stm9_409.p3d";
		attachments[] = {"kr_muzzle9_19","kr_ar10_ar15_hndgrd","weaponOptics","kr_ar_pistolgrip","kr_ar_bttstck","weaponHolo1","weaponWrap"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_smg\stm9\data\stm9_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_smg\stm9\data\stm9.rvmat"};
		initSpeedMultiplier = 1.5;
		barrelArmor = 8;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		itemSize[] = {8,3};
		modes[] = {"SemiAuto"};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Bizon_Shot_SoundSet","Bizon_Tail_SoundSet","Bizon_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Bizon_silencer_SoundSet","Bizon_silencerTail_SoundSet","Bizon_silencerInteriorTail_SoundSet"},{"Bizon_silencerHomeMade_SoundSet","Bizon_silencerHomeMadeTail_SoundSet","Bizon_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\stm9\data\stm9.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\stm9\data\stm9_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\stm9\data\stm9_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\stm9\data\stm9_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\stm9\data\stm9_destruct.rvmat"}}};
				};
			};
		};
	};
};
