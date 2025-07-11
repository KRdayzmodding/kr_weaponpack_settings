class CfgPatches
{
	class kr_weaponpack_pistols_tt
	{
		units[] = {};
		weapons[] = {"kr_tt"};
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
	class kr_tt_Base: Pistol_Base
	{
		scope = 0;
		weight = 854;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.9,10,250,4,10};
		WeaponLength = 0.21;
		ShoulderDistance = 0.4;
		barrelArmor = 12;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		simpleHiddenSelections[] = {"hide_grip"};
		magazines[] = {"Mag_762x25_tt_std_8Rnd"};
		chamberableFrom[] = {"kr_Ammo_762x25_PT_gz","kr_Ammo_762x25_PST_gz","kr_Ammo_762x25_FMJ43","kr_Ammo_762x25_AKBS","kr_Ammo_762x25_HP"};
		magazineSwitchTime = 0.1;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		class NoiseShoot
		{
			strength = 65;
			type = "shot";
		};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Colt1911_Shot_SoundSet","Colt1911_Tail_SoundSet","Colt1911_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Colt1911_silencerPro_SoundSet","Colt1911_silencerTail_SoundSet","Colt1911_silencerInteriorTail_SoundSet"}};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\1911\w_1911_states.anm";
	};
	class kr_tt: kr_tt_Base
	{
		scope = 2;
		displayName = "$STR_weapons_pistols_tt";
		descriptionShort = "$STR_weapons_pistols_tt_dsc";
		hiddenSelections[] = {"camo"};
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\tt.p3d";
		attachments[] = {"kr_muzzle762_25","kr_tt_laser","kr_tt_grip"};
		itemSize[] = {3,2};
		simpleHiddenSelections[] = {"hide_grip"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x25";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 250;
				healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\data\tt_destruct.rvmat"}}};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxytt: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\tt\tt.p3d";
	};
};
