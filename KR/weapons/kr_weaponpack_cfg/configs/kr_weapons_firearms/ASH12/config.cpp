class CfgPatches
{
	class kr_weapons_ASH12
	{
		units[] = {};
		weapons[] = {"kr_ASH12"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
	};
};
class kr_Gunplay_Base;
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class kr_ASH12_Base: Rifle_Base
	{
		scope = 0;
		displayName = "$STR_weapons_firearms_ASH12";
		descriptionShort = "$STR_weapons_firearms_ASH12_dsc";
		model = "KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\ASH12.p3d";
		weight = 2350;
		attachments[] = {"kr_muzzle127_55","kr_foregrip","weaponOpticsB","kr_light_right","weaponWrap"};
		chamberableFrom[] = {"kr_Ammo_127x55_PS12","kr_Ammo_127x55_PS12A","kr_Ammo_127x55_PS12B"};
		magazines[] = {"Mag_127x55_ash12_10Rnd","Mag_127x55_ash12_20Rnd"};
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.6,50,200,4,10};
		barrelArmor = 3.7;
		initSpeedMultiplier = 1.1;
		recoilModifier[] = {0.7,0.7,0.8};
		swayModifier[] = {2,1.3,1.1};
		chamberSize = 1;
		chamberedRound = "";
		magazineSwitchTime = 0.5;
		ejectType = 1;
		simpleHiddenSelections[] = {"folding_lowered","folding_raised","hide_muzzle","hide_sight","bullet"};
		reloadAction = "ReloadM4";
		hiddenSelections[] = {"camo","camo1"};
		itemSize[] = {8,3};
		WeaponLength = 0.715;
		modes[] = {"SemiAuto","FullAuto"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "12.7x55";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"ASH12_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"ASH12_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.092;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 130;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 200;
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
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 60;
				shotsToStartOverheating = 25;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12.rvmat","KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_worn.rvmat","KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_damage.rvmat","KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_badlydamage.rvmat","KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_destruct.rvmat","KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_destruct.rvmat"}}};
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.3,0,0};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {-0.3,0,-0.02};
				orientation[] = {0,0,0};
			};
		};
	};
	class kr_ASH12: kr_ASH12_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_co.paa","KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ash12_add_co.paa"};
	};
};
