class CfgPatches
{
	class kr_weapons_firearms_vssk
	{
		units[] = {};
		weapons[] = {};
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
	class kr_vssk_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 5000;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 0.655;
		chamberSize = 1;
		chamberedRound = "";
		magazineSwitchTime = 0.38;
		ejectType = 0;
		opticsFlare = 0;
		chamberableFrom[] = {"kr_Ammo_127x55_PS12","kr_Ammo_127x55_PS12A","kr_Ammo_127x55_PS12B","kr_Ammo_127x55_PS12HP"};
		magazines[] = {"Mag_127x55_vssk_10Rnd"};
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = 
		{
			"hide_barrel",
			"sights",
			"fold",
			"unfold"
		};
		modes[] = {"Single"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\vssk\data\vssk.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\vssk\data\vssk_co.paa"};
		
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 35;
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"ASH12_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\vssk\data\vssk.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\vssk\data\vssk_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\vssk\data\vssk_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\vssk\data\vssk_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\vssk\data\vssk_destruct.rvmat"}}
					};
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
				position[] = {-0.3,0,0};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {-0.3,0,-0.02};
				orientation[] = {0,0,0};
			};
		};
	};

	class kr_vssk: kr_vssk_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_vssk";
		descriptionShort = "$STR_weapons_rifles_vssk_dsc";
		model = "KR\weapons\kr_weaponpack_2\kr_weapons_firearms\vssk\vssk.p3d";
		initSpeedMultiplier = 1.5;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		barrelArmor = 6.8;
		itemSize[] = {10,3};
		attachments[] = {"kr_muzzle127_55_vssk","kr_bipod_vssk","weaponOptics","weaponWrap"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 35;
		};

		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "12.7x55";
		};

		class Single: Mode_Single
		{
			soundSetShot[] = {"VSSK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"VSSK_silencer_SoundSet","VSSK_silencerTail_SoundSet","VSSK_silencerInteriorTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
	};
};
