class CfgPatches
{
	class kr_weapons_firearms_9a91
	{
		units[] = {};
		weapons[] = {"kr_9a91"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","DZ_Weapons_Firearms","kr_data"};
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
	class Rifle_Base;
	class kr_9a91_Base: Rifle_Base
	{
		scope = 0;
		displayName = "$STR_weapons_firearms_9a91";
		descriptionShort = "$STR_weapons_firearms_9a91_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\9A91\9A91.p3d";
		weight = 2100;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,180.1,4,10};
		WeaponLength = 0.4;
		barrelArmor = 17;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_9x39_sp5","kr_Ammo_9x39_HP","kr_Ammo_9x39_pab9","kr_Ammo_9x39_sp6","kr_Ammo_9x39_bp","Ammo_9x39","Ammo_9x39AP"};
		magazines[] = {"Mag_9x39_9a91_20Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 1;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		initSpeedMultiplier = 0.88;
		reloadAction = "ReloadVSS";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\9A91\data\9a91.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\9A91\data\9a91.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\9A91\data\9a91_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\9A91\data\9a91_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\9A91\data\9a91_destruct.rvmat"}}};
				};
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class NoiseShoot
		{
			strength = 75;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
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
					overrideParticle = "weapon_shot_vss_01";
					positionOffset[] = {-0.05,0,0};
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
				maxOverheatingValue = 30;
				shotsToStartOverheating = 15;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
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
	class kr_9a91: kr_9a91_Base
	{
		scope = 2;
		itemSize[] = {6,3};
		attachments[] = {"kr_muzzle_9_39_9a91","weaponOpticsAK","kr_9a91_stock","weaponOpticsDT","PistolHolo1","weaponWrap"};
		simpleHiddenSelections[] = {"hide_muzzle"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\9A91\data\9a91_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\9A91\data\9a91.rvmat"};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x39";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"9A91_Shot_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"9A91_silencer_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"9A91_Shot_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"9A91_silencer_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
	};
};
