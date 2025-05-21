class CfgPatches
{
	class kr_weapons_shotguns_ks23
	{
		units[] = {};
		weapons[] = {"kr_ks23"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class kr_Gunplay_Base;
class cfgWeapons
{
	class Shotgun_Base;
	class kr_ks23_Base: Shotgun_Base
	{
		scope = 0;
		descriptionShort = "$STR_weapons_shotguns_ks23_dsc";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberedRound = "";
		animName = "ShotgunMp133";
		chamberableFrom[] = {"kr_Ammo_23x75_shrapnel_10","kr_Ammo_23x75_shrapnel_25","kr_Ammo_23x75_barrikade"};
		magazines[] = {};
		DisplayMagazine = 0;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		ejectType = 0;
		cartridgeCreateTime[] = {0.55,0.82};
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class NoiseShoot
		{
			strength = 120;
			type = "shot";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"kr_ks23_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			reloadTime = 1;
			dispersion = 0.0025;
			firespreadangle = 1.1;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {10,25,50,100};
			discreteDistanceInitIndex = 2;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.03,-0.01,0.01};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {-0.03,0,-0.03};
				orientation[] = {0,0,0};
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
				class SmokeCloud2
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle = "weapon_shot_winded_smoke";
					onlyWithinHealthLabel[] = {3,4};
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp133_01";
					illuminateWorld = 1;
					ignoreIfSuppressed = 1;
				};
				class MuzzleFlash1
				{
					overrideParticle = "weapon_shot_pellets";
					illuminateWorld = 1;
					ignoreIfSuppressed = 1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
					onlyWithinHealthLabel[] = {3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					onlyWithinHealthLabel[] = {3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 4;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 3;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
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
		weaponStateAnim = "dz\anims\anm\player\reloads\mp133\w_mp133_states.anm";
		boneRemap[] = {"bolt","Weapon_Bolt","pump","Weapon_Bone_01","feedRamp","Weapon_Bone_02","trigger","Weapon_Trigger","bullet","Weapon_Bullet","boltrelease","Weapon_Bone_03"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 50;
		};
	};
	class kr_ks23: kr_ks23_Base
	{
		scope = 2;
		displayName = "$STR_weapons_shotguns_ks23";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\ks23\ks23.p3d";
		attachments[] = {"weaponOptics","weaponWrap"};
		itemSize[] = {7,3};
		weight = 5000;
		chamberSize = 4;
		initSpeedMultiplier = 1.0;
		WeaponLength = 0.65;
		barrelArmor = 22;
		recoilModifier[] = {2,2,2};
		swayModifier[] = {1,1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\ks23\data\ks23_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\ks23\data\ks23.rvmat"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "23x75";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\ks23\data\ks23.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\ks23\data\ks23_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\ks23\data\ks23_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\ks23\data\ks23_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\ks23\data\ks23_destruct.rvmat"}}};
				};
			};
		};
	};
};
