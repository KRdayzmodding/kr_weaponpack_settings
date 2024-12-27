class CfgPatches
{
	class kr_weapons_shotguns_mp153
	{
		units[] = {};
		weapons[] = {"kr_mp153"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
	};
};
class kr_Gunplay_Base;
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Rifle_Base;
	class kr_mp153_Base: Rifle_Base
	{
		scope = 0;
		displayName = "$STR_weapons_shotguns_mp153";
		descriptionShort = "$STR_weapons_shotguns_mp153_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\mp153\mp153.p3d";
		weight = 3500;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.6,50,160,4,10};
		DisplayMagazine = 0;
		WeaponLength = 1.11042;
		barrelArmor = 1.667;
		initSpeedMultiplier = 1.1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator","Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.4,2.4,1.3};
		simpleHiddenSelections[] = {"hide_barrel"};
		cursor = "aimBowGhost";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\mp153\data\mp153_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\mp153\data\mp153.rvmat"};
		reloadAction = "ReloadSks";
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
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
		weaponStateAnim = "dz\anims\anm\player\reloads\SKS\w_SKS_states.anm";
		boneRemap[] = {"bolt","Weapon_Bolt","trigger","Weapon_Trigger","bullet","Weapon_Bullet","follower","Weapon_Bone_02","clip","Weapon_Magazine","cliprounds","Weapon_Bone_01"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
	};
	class kr_mp153: kr_mp153_Base
	{
		scope = 2;
		attachments[] = {"kr_muzzle12_76","kr_shotgun_mag_mount","kr_shotgun_barrel_mount","weaponOptics","kr_optics_top_mount","weaponHolo1","weaponWrap"};
		barrelArmor = 13.7;
		initSpeedMultiplier = 1.1;
		chamberSize = 5;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.4,2.4,1.3};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"kr_mp153_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"kr_mp133_silencer_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.3;
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12x76";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\mp153\data\mp153.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\mp153\data\mp153_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\mp153\data\mp153_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\mp153\data\mp153_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\mp153\data\mp153_destruct.rvmat"}}};
				};
			};
		};
	};
};
