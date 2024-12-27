class CfgPatches
{
	class kr_weaponpack_pistols_pm
	{
		units[] = {};
		weapons[] = {"kr_pm"};
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
	class kr_pm_Base: Pistol_Base
	{
		scope = 0;
		weight = 760;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.55,10,200,4,10};
		WeaponLength = 0.19;
		ShoulderDistance = 0.4;
		barrelArmor = 15;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_9x18_pm_8Rnd","Mag_9x18_pm_84Rnd"};
		chamberableFrom[] = {"Ammo_380","kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz"};
		ejectType = 1;
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {1.2,1.2,1.2};
		simpleHiddenSelections[] = {"hide_pgrip"};
		hiddenSelections[] = {"camo"};
		class NoiseShoot
		{
			strength = 40;
			type = "shot";
		};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"pm_Shot_SoundSet","Makarov_Tail_SoundSet","Makarov_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Makarov_silencerPro_SoundSet","Makarov_silencerTail_SoundSet","Makarov_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.1;
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
		weaponStateAnim = "dz\anims\anm\player\reloads\IJ70\w_IJ70_states.anm";
	};
	class kr_pm: kr_pm_Base
	{
		scope = 2;
		displayName = "$STR_weapons_pistols_pm";
		descriptionShort = "$STR_weapons_pistols_pm_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\pm\pm.p3d";
		attachments[] = {"kr_pgrip_pm"};
		itemSize[] = {2,2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\pm\data\pm_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x18";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 205;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\pm\data\pm.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\pm\data\pm_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\pm\data\pm_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\pm\data\pm_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\pm\data\pm_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxypm: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\pm\pm.p3d";
	};
};