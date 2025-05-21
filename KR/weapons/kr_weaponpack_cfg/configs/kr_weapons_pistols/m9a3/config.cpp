class CfgPatches
{
	class kr_weaponpack_pistols_m9a3
	{
		units[] = {};
		weapons[] = {"kr_m9a3","kr_m9a3_blk"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;

class kr_Gunplay_Base;
class cfgWeapons
{
	class Pistol_Base;
	class kr_m9a3_Base: Pistol_Base
	{
		scope = 0;
		weight = 850;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.55,10,185,4,10};
		WeaponLength = 0.226;
		ShoulderDistance = 0.4;
		barrelArmor = 10;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_9x19_m9a3_17Rnd","Mag_9x19_m9a3_blk_17Rnd"};
		chamberableFrom[] = {"Ammo_9x19","kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_rip","kr_Ammo_9x19_quakemaker"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		class NoiseShoot
		{
			strength = 70;
			type = "shot";
		};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"p226_Shot_SoundSet","WaltherP1_Tail_SoundSet","WaltherP1_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"p226_silencerPro_SoundSet","WaltherP1_silencerTail_SoundSet","WaltherP1_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
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
					overrideParticle = "weapon_shot_cz75_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {0,0,0};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 15;
				shotsToStartOverheating = 15;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,1};
					positionOffset[] = {0,0,0};
					onlyWithinRainLimits[] = {0,1};
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
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		weaponStateAnim = "dz\anims\anm\player\reloads\CZ75\w_CZ75_states.anm";
	};
	class kr_m9a3: kr_m9a3_Base
	{
		scope = 2;
		displayName = "$STR_weapons_pistols_m9";
		descriptionShort = "$STR_weapons_pistols_m9_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\m9a3\m9a3.p3d";
		attachments[] = {"kr_muzzle9_19","kr_light_pistol","PistolHolo2","kr_m9a3_mount","PistolHolo1"};
		itemSize[] = {3,2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\m9a3\data\m9a3_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\m9a3\data\m9a3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\m9a3\data\m9a3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\m9a3\data\m9a3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\m9a3\data\m9a3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\m9a3\data\m9a3_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_m9a3_blk: kr_m9a3
	{
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\m9a3\data\m9a3_blk_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxym9a3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\m9a3\m9a3.p3d";
	};
};
