class CfgPatches
{
	class kr_weapons_shotguns_saiga
	{
		units[] = {};
		weapons[] = {"kr_saiga12k"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class kr_Gunplay_Base;
class cfgWeapons
{
	class Rifle_Base;
	class kr_saiga_Base: Rifle_Base
	{
		scope = 0;
		weight = 3200;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator","Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {"Mag_12x76_izhmash_Sb5_5Rnd","Mag_12x76_vpo205_std_8Rnd","Mag_12x76_promag_sai_02_10Rnd","Mag_12x76_maxrounds_powermag_20Rnd"};
		magazineSwitchTime = 0.2;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		WeaponLength = 0.95;
		barrelArmor = 17;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		modes[] = {"SemiAuto","FullAuto"};
		hiddenSelections[] = {"camo"};
		initSpeedMultiplier = 1.1;
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"kr_saiga12_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"kr_saiga12_silencer_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.13;
			dispersion = 0.004;
			firespreadangle = 1.5;
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"kr_saiga12_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"kr_saiga12_silencer_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.004;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
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
				position[] = {0,0,0.1};
				orientation[] = {0,45,0};
			};
			class Melee
			{
				position[] = {0,0,-0.1};
				orientation[] = {0,-45,0};
			};
		};
		class Particles
		{

			class OnFire
			{
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
					positionOffset[] = {-0.05,0,0};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\Saiga\w_Saiga_states.anm";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
	};
	class kr_saiga12k: kr_saiga_Base
	{
		scope = 2;
		displayName = "$STR_weapons_shotguns_saiga";
		descriptionShort = "$STR_weapons_shotguns_saiga_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\saiga12k\saiga12k.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\saiga12k\data\saiga12k_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\saiga12k\data\saiga12k.rvmat"};
		itemSize[] = {7,3};
		barrelArmor = 17;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		initSpeedMultiplier = 1.1;
		attachments[] = {"kr_muzzle12_76","kr_saiga_hndgrd","weaponOpticsAK","kr_ak_pistolgrip","kr_ak_fstock","weaponHolo1","weaponHolo2","weaponOptics","weaponOptics1","weaponOpticsDT","weaponWrap"};
		class kr_firearms
		{
			receiverSlotName = "";
			handguardSlotName = "kr_saiga_hndgrd";
			buttstockSlotName = "kr_ak_fstock";
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
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\saiga12k\data\saiga12k.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\saiga12k\data\saiga12k_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\saiga12k\data\saiga12k_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\saiga12k\data\saiga12k_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\saiga12k\data\saiga12k_destruct.rvmat"}}};
				};
			};
		};
	};
};
