class CfgPatches
{
	class kr_weapons_rifles_CSR50
	{
		units[] = {"kr_CSR50_Bipod"};
		weapons[] = {"kr_CSR50"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_weapon_sounds_sounds"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;

class kr_Gunplay_Base;
class cfgWeapons
{
	class BoltActionRifle_Base;
	class kr_CSR50_Base: BoltActionRifle_Base
	{
		scope = 0;
		displayName = "$STR_weapons_rifles_csr50";
		descriptionShort = "$STR_weapons_rifles_csr50_dsc";
		model = "KR\weapons\kr_weaponpack\kr_weapons_rifles\CSR50\CSR50.p3d";
		attachments[] = {"kr_csr50_bipods","kr_ar_pistolgrip","weaponOpticsB","weaponOptics","weaponWrap"};
		itemSize[] = {14,3};
		weight = 9600;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		WeaponLength = 1.47;
		DisplayMagazine = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_50BMG","kr_Ammo_50BMG_AP","kr_Ammo_50BMG_E","kr_Ammo_50BMG_ET","kr_Ammo_50BMG_T"};
		magazineSwitchTime = 0.4;
		ejectType = 0;
		barrelArmor = 20;
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.8,1,1};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 30;
		};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = ".50BMG";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"csr50_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.0018;
			magazineSlot = "magazine";
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
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_50BMG";
					overrideDirectionVector[] = {180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
		class NoiseShoot
		{
			strength = 120;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class kr_CSR50: kr_CSR50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\CSR50\data\CSR50_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\CSR50\data\CSR50.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\CSR50\data\csr50.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\CSR50\data\csr50_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\CSR50\data\csr50_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\CSR50\data\csr50_destruct.rvmat"}}};
				};
			};
		};
	};
};