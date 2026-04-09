class CfgPatches
{
	class kr_weapons_firearms_ak12
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class kr_Gunplay_Base;
class cfgWeapons
{
	class kr_ak_Base;
	class kr_ak50_Base: kr_ak_Base
	{
		scope = 0;
		displayName = "$STR_weapons_firearms_ak50";
		descriptionShort = "$STR_weapons_firearms_ak50_dsc";
		attachments[] = {"kr_muzzle50bmgAK","kr_bipod","kr_light_right","kr_ak50_receiver","kr_ak_pistolgrip","weaponOpticsB","weaponWrap"};
		chamberableFrom[] = {"kr_Ammo_50BMG","kr_Ammo_50BMG_AP","kr_Ammo_50BMG_E","kr_Ammo_50BMG_ET","kr_Ammo_50BMG_T"};
		magazines[] = {"Mag_50bmg_m82_10Rnd"};

		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_1_co.paa","KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_2_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_1.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_2.rvmat"};
		hiddenSelections[] = {"camo1","camo2"};
		simpleHiddenSelections[] = 
		{
			"hide_pistolgrip",
			"fold",
			"unfold",
			"hide_barrel"
		};
		
		class kr_firearms
		{
			handguardSlotName = "";
			buttstockSlotName = "";
			receiverSlotName = "kr_ak50_receiver";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 80;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,200,300};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 50;
			distanceZoomMax = 300;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_1.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_2.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_1_worn.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_2_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_1_damage.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_2_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_1_badlydamage.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_2_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_1_destruct.rvmat","KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\data\ak50_2_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class kr_ak50: kr_ak50_Base
	{
		scope = 2;
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\AK50\ak50.p3d";
		weight = 11000;
		WeaponLength = 1.245;
		barrelArmor = 10.0;
		itemSize[] = {12,3};
		initSpeedMultiplier = 1.1;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.8,0.8,0.8};
		modes[] = {"SemiAuto"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 18;
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M82_Shot_SoundSet","M82_Shot_iterior_SoundSet","M82_Tail_SoundSet","M82_InteriorTail_SoundSet","M82_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"M82_silencer_SoundSet","M82_silencerTail_SoundSet","M82_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.135;
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
		class kr_description
		{
			kr_tier = 7;
			kr_caliber = ".50BMG";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "kr_weapon_shot_50BMG_smoke";
				};
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "kr_weapon_shot_50BMG";
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
	};
};
