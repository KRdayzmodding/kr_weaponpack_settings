class CfgPatches
{
	class kr_weapons_shotguns_m870
	{
		units[] = {};
		weapons[] = {"kr_m870","kr_m870_mag7","kr_m870_mag10"};
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
class cfgWeapons
{
	class Shotgun_Base;
	class kr_m870_Base: Shotgun_Base
	{
		scope = 0;
		descriptionShort = "$STR_weapons_shotguns_m870_dsc";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberedRound = "";
		animName = "ShotgunMp133";
		chamberableFrom[] = {"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator","Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {};
		DisplayMagazine = 0;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		ejectType = 0;
		cartridgeCreateTime[] = {0.55,0.82};
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = {"hide_stock","hide_mag","hide_mag_7","hide_mag_10","hide_pump"};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"kr_mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"kr_mp133_silencer_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.003;
			firespreadangle = 1.1;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25,50,75,100};
			discreteDistanceInitIndex = 1;
			modelOptics = "-";
			distanceZoomMin = 25;
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
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
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
	};
	class kr_m870: kr_m870_Base
	{
		scope = 2;
		displayName = "$STR_weapons_shotguns_m870";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\m870\m870.p3d";
		attachments[] = {"kr_muzzle12_76","kr_m870_pump","weaponOptics","kr_m870_stock","weaponWrap"};
		itemSize[] = {8,3};
		weight = 3300;
		chamberSize = 5;
		initSpeedMultiplier = 1.75;
		WeaponLength = 1.03525;
		barrelArmor = 12.0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.3,2.3,1.2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\m870\data\m870_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\m870\data\m870.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "12x76";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\m870\data\m870.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\m870\data\m870_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\m870\data\m870_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\m870\data\m870_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\m870\data\m870_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_m870_mag7: kr_m870
	{
		chamberSize = 8;

		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
		};
	};
	class kr_m870_mag10: kr_m870
	{
		chamberSize = 11;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12x76";
		};
	};
};
