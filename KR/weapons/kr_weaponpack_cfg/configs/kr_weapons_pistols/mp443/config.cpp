class CfgPatches
{
	class kr_weaponpack_pistols_mp443
	{
		units[] = {};
		weapons[] = {"kr_mp443"};
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
	class kr_mp443_Base: Pistol_Base
	{
		scope = 0;
		weight = 850;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.55,10,100,4,10};
		WeaponLength = 0.191;
		ShoulderDistance = 0.4;
		barrelArmor = 15;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		hiddenSelections[] = {"camo"};
		magazines[] = {"Mag_9x19_mp443_std_18Rnd"};
		chamberableFrom[] = {"Ammo_9x19","kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_rip","kr_Ammo_9x19_quakemaker"};
		ejectType = 1;
		recoilModifier[] = {1.4,0.8,1};
		swayModifier[] = {1.5,1.5,0.8};
		class NoiseShoot
		{
			strength = 55;
			type = "shot";
		};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"mp443_Shot_SoundSet","CZ75_Tail_SoundSet","CZ75_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ75_silencerPro_SoundSet","CZ75_silencerTail_SoundSet","CZ75_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0009;
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
				maxOverheatingValue = 8;
				shotsToStartOverheating = 8;
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
	class kr_mp443: kr_mp443_Base
	{
		scope = 2;
		displayName = "$STR_weapons_pistols_mp443";
		descriptionShort = "$STR_weapons_pistols_mp443_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\mp443\mp443.p3d";
		attachments[] = {"kr_mp443_mount","PistolHolo1"};
		itemSize[] = {3,2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\mp443\data\mp_443_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 170;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\mp443\data\mp_443.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\mp443\data\mp_443_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\mp443\data\mp_443_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\mp443\data\mp_443_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\mp443\data\mp_443_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymp443: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\mp443\mp443.p3d";
	};
};
