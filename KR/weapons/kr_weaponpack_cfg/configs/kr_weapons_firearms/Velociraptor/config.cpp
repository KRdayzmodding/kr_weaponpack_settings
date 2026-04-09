class CfgPatches
{
	class kr_weapons_firearms_velociraptor
	{
		units[] = {};
		weapons[] = {"kr_velociraptor"};
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
	class kr_velociraptor_Base: kr_ak_Base
	{
		scope = 0;
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\velociraptor\velociraptor.p3d";
		attachments[] = {"weaponOpticsAK","kr_ak_receiver_v","kr_ak_pistolgrip","kr_ak_stock","weaponHolo1","weaponOpticsDT","kr_ak_handle","weaponWrap"};
		weight = 3300;
		WeaponLength = 0.66;
		itemSize[] = {8,3};
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_300_m62","kr_Ammo_300_ap","kr_Ammo_300_vmax","kr_Ammo_300_bpz_fmj"};
		kr_bannedAmmo[] = {"Bullet_556x45","Bullet_556x45Tracer","Bullet_556x45_FMJ","Bullet_556x45_m855","Bullet_556x45_m855a1","Bullet_556x45_m856","Bullet_556x45_m995","Bullet_556x45_warmageddon"};
		magazines[] = {"Mag_556x45_CWP_30Rnd","Mag_556x45_6L29_30Rnd","Mag_556x45_molot_45Rnd"};
		barrelArmor = 8.6;
		initSpeedMultiplier = 1.15;
		recoilModifier[] = {0.7,0.7,1.0};
		swayModifier[] = {1.1,1.1,1.1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 0.09;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"};
			soundSetShotExt[] = {};
			reloadTime = 0.12;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".300 Blackout";
		};
		class kr_firearms
		{
			receiverSlotName = "kr_ak_receiver_v";
			handguardSlotName = "";
			buttstockSlotName = "kr_ak_stock";
		};
		class NoiseShoot
		{
			strength = 10;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 300;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\velociraptor\data\velociraptor.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\velociraptor\data\velociraptor_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\velociraptor\data\velociraptor_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\velociraptor\data\velociraptor_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\velociraptor\data\velociraptor_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_velociraptor: kr_velociraptor_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_velociraptor";
		descriptionShort = "$STR_weapons_firearms_velociraptor_dsc";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\velociraptor\data\velociraptor_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\velociraptor\data\velociraptor.rvmat"};
		class NoiseShoot
		{
			strength = 5;
			type = "sound";
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
};
