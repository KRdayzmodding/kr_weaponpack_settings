class CfgPatches
{
	class kr_weapons_rifles_kr_mcmillan_cs5
	{
		units[] = {};
		weapons[] = {"kr_mcmillan_cs5"};
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
	class kr_mcmillan_cs5_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 4400;
		model = "\KR\weapons\kr_weaponpack\kr_weapons_rifles\mcmillan_cs5\mcmillan_cs5.p3d";
		attachments[] = {"kr_bipod","kr_foregrip","weaponOpticsB","weaponOptics","kr_ar_pistolgrip","kr_ar_bttstck","weaponFlashlight","weaponWrap"};
		itemSize[] = {8,3};
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		WeaponLength = 0.853;
		barrelArmor = 4;
		initSpeedMultiplier = 1.2;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","kr_Ammo_308Win_AP","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};
		magazines[] = {"Mag_762x51_mcmillan_cs5_10Rnd","Mag_762x51_mcmillan_cs5_20Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.8,0.8,0.8};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		hiddenSelectionsTextures[] = {"\KR\weapons\kr_weaponpack\kr_weapons_rifles\mcmillan_cs5\data\mcmillan_cs5_co.paa"};
		hiddenSelectionsMaterials[] = {"\KR\weapons\kr_weaponpack\kr_weapons_rifles\mcmillan_cs5\data\mcmillan_cs5.rvmat"};
		class NoiseShoot
		{
			strength = 10;
			type = "sound";
		};
		modes[] = {"Single"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 29;
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"SCOUT_silencer_SoundSet","SCOUT_silencerTail_SoundSet","SCOUT_silencerInteriorTail_SoundSet"};
			envShootingDecrease = 0.05;
			reloadTime = 1;
			dispersion = 0.00285;
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
				maxOverheatingValue = 15;
				shotsToStartOverheating = 5;
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
		weaponStateAnim = "dz/anims/anm/player/reloads/SSG82/w_SSG82_states.anm";
	};
	class kr_mcmillan_cs5: kr_mcmillan_cs5_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_mcmillan_cs5";
		descriptionShort = "$STR_weapons_rifles_mcmillan_cs5_dsc";
		barrelArmor = 4;
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		class Single: Mode_Single
		{
			soundSetShot[] = {"SCOUT_silencer_SoundSet","SCOUT_silencerTail_SoundSet","SCOUT_silencerInteriorTail_SoundSet"};
			envShootingDecrease = 0.05;
			reloadTime = 1;
			dispersion = 0.00285;
			magazineSlot = "magazine";
		};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "7.62x51 (.308)";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = 
					{
						{1.0,{"\KR\weapons\kr_weaponpack\kr_weapons_rifles\mcmillan_cs5\data\mcmillan_cs5.rvmat"}},
						{0.7,{"\KR\weapons\kr_weaponpack\kr_weapons_rifles\mcmillan_cs5\data\mcmillan_cs5.rvmat"}},
						{0.5,{"\KR\weapons\kr_weaponpack\kr_weapons_rifles\mcmillan_cs5\data\mcmillan_cs5_damage.rvmat"}},
						{0.3,{"\KR\weapons\kr_weaponpack\kr_weapons_rifles\mcmillan_cs5\data\mcmillan_cs5_damage.rvmat"}},
						{0.0,{"\KR\weapons\kr_weaponpack\kr_weapons_rifles\mcmillan_cs5\data\mcmillan_cs5_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
