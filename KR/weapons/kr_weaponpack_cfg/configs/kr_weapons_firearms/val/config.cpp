class CfgPatches
{
	class kr_weapons_firearms_val
	{
		units[] = {};
		weapons[] = {"kr_VAL"};
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
	class kr_VAL_Base: Rifle_Base
	{
		scope = 0;
		weight = 2600;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,150,4,10};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_9x39_sp5","kr_Ammo_9x39_pab9","kr_Ammo_9x39_sp6","kr_Ammo_9x39_bp","kr_Ammo_9x39_HP","Ammo_9x39","Ammo_9x39AP"};
		magazines[] = {"Mag_VSS_10Rnd","Mag_VAL_20Rnd","Mag_9x39_6l24_10Rnd","Mag_9x39_6l25_20Rnd","Mag_9x39_sr3m_30Rnd"};
		WeaponLength = 0.78;
		barrelArmor = 15.0;
		magazineSwitchTime = 0.38;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.2,1.2,1.2};
		initSpeedMultiplier = 0.95;
		simpleHiddenSelections[] = {"hide_barrel","hide_pistolgrip"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\val\data\val_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\val\data\val.rvmat"};
		hiddenSelections[] = {"camo"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 7;
			type = "sound";
		};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"VAL_Shot_SoundSet","VAL_Tail_SoundSet","VAL_InteriorTail_SoundSet"};
			envShootingDecrease = 0.05;
			reloadTime = 0.12;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.0038;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"VAL_Shot_SoundSet","VAL_Tail_SoundSet","VAL_InteriorTail_SoundSet"};
			reloadTime = 0.09;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.0038;
			magazineSlot = "magazine";
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
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.1,0,0};
				orientation[] = {0,-17,0};
			};
			class Melee
			{
				position[] = {-0.1,-0.01,0};
				orientation[] = {0,20,0};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\VSS\w_VSS_states.anm";
	};
	class kr_VAL: kr_VAL_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_val";
		descriptionShort = "$STR_weapons_firearms_val_dsc";
		attachments[] = {"kr_val_mount","kr_s_mount_1","weaponOpticsAK","kr_val_stock","kr_val_pistolgrip","kr_ak_pistolgrip","weaponOpticsDT","weaponWrap"};
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\val\val.p3d";
		itemSize[] = {8,3};

		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x39";
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\val\data\val.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\val\data\val_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\val\data\val_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\val\data\val_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\val\data\val_destruct.rvmat"}}};
				};
			};
		};
	};
};
