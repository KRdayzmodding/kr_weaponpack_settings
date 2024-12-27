class CfgPatches
{
	class kr_weaponpack_pistols_aps
	{
		units[] = {};
		weapons[] = {"kr_aps","kr_apb"};
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
	class kr_aps_Base: Pistol_Base
	{
		scope = 0;
		WeaponLength = 0.24;
		weight = 1500;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {0,0.55,10,280,4,10};
		ShoulderDistance = 0.4;
		barrelArmor = 8;
		initSpeedMultiplier = 0.8;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_9x18_apb_20Rnd"};
		chamberableFrom[] = {"Ammo_380","kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.2,1.2,0.8};
		itemSize[] = {3,2};
		hiddenSelections[] = {"camo"};
		class NoiseShoot
		{
			strength = 45;
			type = "shot";
		};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"aps_Shot_SoundSet","Makarov_Tail_SoundSet","Makarov_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"apb_silencerPro_SoundSet","Makarov_silencerTail_SoundSet","Makarov_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"aps_Shot_SoundSet","Makarov_Tail_SoundSet","Makarov_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"apb_silencerPro_SoundSet","Makarov_silencerTail_SoundSet","Makarov_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.099;
			dispersion = 0.0099;
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
	class kr_aps: kr_aps_Base
	{
		scope = 2;
		displayName = "$STR_weapons_pistols_aps";
		descriptionShort = "$STR_weapons_pistols_aps_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\aps.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_apb: kr_aps_Base
	{
		scope = 2;
		displayName = "$STR_weapons_pistols_apb";
		descriptionShort = "$STR_weapons_pistols_apb_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\apb.p3d";
		attachments[] = {"kr_muzzle9_18"};
		WeaponLength = 0.272;
		weight = 1600;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x18";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\data\aps_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyapb: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\apb.p3d";
	};
	class Proxyaps: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\aps\aps.p3d";
	};
};
