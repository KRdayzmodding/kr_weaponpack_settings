class CfgPatches
{
	class kr_weaponpack_pistols_glock19
	{
		units[] = {};
		weapons[] = {"kr_glock19"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols","kr_data"};
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
	class kr_glock19_Base: Pistol_Base
	{
		scope = 0;
		weight = 625;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.55,10,100,4,10};
		WeaponLength = 0.185;
		ShoulderDistance = 0.4;
		barrelArmor = 7;
		initSpeedMultiplier = 1.15;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_9x19_glock17_std_17Rnd","Mag_9x19_glock17_pmag_21Rnd","Mag_9x19_glock17_33Rnd","Mag_9x19_glock17_50Rnd"};
		chamberableFrom[] = {"kr_Ammo_9x19_gt","kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_rip","kr_Ammo_9x19_quakemaker","Ammo_9x19"};
		ejectType = 1;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {"camo"};
		class NoiseShoot
		{
			strength = 50;
			type = "shot";
		};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"glock17_Shot_SoundSet","Glock19_Tail_SoundSet","Glock19_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"glock17_silencerPro_SoundSet","Glock19_silencerTail_SoundSet","Glock19_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.005;
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
					overrideParticle = "weapon_shot_fnx_01";
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
		weaponStateAnim = "dz\anims\anm\player\reloads\Glock\w_Glock19_states.anm";
	};
	class kr_glock19: kr_glock19_Base
	{
		scope = 2;
		displayName = "$STR_weapons_pistols_glock19";
		descriptionShort = "$STR_weapons_pistols_glock19_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\glock19\glock19.p3d";
		attachments[] = {"kr_light_pistol","PistolHolo2","kr_mount_g17","PistolHolo1"};
		itemSize[] = {3,2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\glock19\data\glock19_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x19";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 210;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\glock19\data\glock19.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\glock19\data\glock19_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\glock19\data\glock19_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\glock19\data\glock19_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\glock19\data\glock19_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyglock19: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\glock19\glock19.p3d";
	};
};
