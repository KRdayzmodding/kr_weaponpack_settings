class CfgPatches
{
	class kr_weapons_AUG
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
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
	class Rifle_Base;
	class kr_AUG_Base: Rifle_Base
	{
		scope = 0;
		weight = 3600;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","Ammo_556x45","Ammo_556x45Tracer"};
		magazineSwitchTime = 0.38;
		initSpeedMultiplier = 1.0;
		ejectType = 1;
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		WeaponLength = 0.736;
		barrelArmor = 11;
		class NoiseShoot
		{
			strength = 85;
			type = "shot";
		};
		modes[] = {"SemiAuto","Burst","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},
			{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},
			{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.1;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},
			{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		
		class OpticsInfo: OpticsInfoRifle
		{
			modelOptics = "-";
			opticsZoomMin = 0.28;
			opticsZoomMax = 0.28;
			opticsZoomInit = 0.28;
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 1;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
		};

		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.2,0,0};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {-0.15,0,-0.02};
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
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {0.32,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 12;
				shotsToStartOverheating = 4;
				overheatingDecayInterval = 0.7;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					positionOffset[] = {0.43,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.7};
					positionOffset[] = {0.43,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.7,1.0};
					positionOffset[] = {0.43,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.43,0,0};
					onlyWithinRainLimits[] = {0.2,0.6};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.43,0,0};
					onlyWithinRainLimits[] = {0.6,1};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\AUG\w_aug_states.anm";
	};

	class kr_AUG_A1: kr_AUG_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_AUG_A1";
		descriptionShort = "$STR_weapons_firearms_AUG_A1_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\aug_a1.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		weight = 4400;
		WeaponLength = 0.73;
		magazines[] = {"Mag_556x45_aug_30Rnd","Mag_556x45_aug_10Rnd","Mag_556x45_aug_42Rnd"};
		attachments[] = {"kr_muzzle556","kr_weaponOpticsAUG","weaponWrap"};
		simpleHiddenSelections[] = {"hide_barrel"};
		initSpeedMultiplier = 1.3;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a1.rvmat"};
		itemSize[] = {8,3};
		spawnDamageRange[] = {0.0,0.6};
		
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},
			{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},
			{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.07;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},
			{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 50;
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 270;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a1.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a1_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a1_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a1_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a1_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class kr_AUG_A3: kr_AUG_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_AUG_A3";
		descriptionShort = "$STR_weapons_firearms_AUG_A3_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\aug_a3.p3d";
		weight = 4400;
		WeaponLength = 0.73;
		magazines[] = {"Mag_556x45_aug_30Rnd","Mag_556x45_aug_10Rnd","Mag_556x45_aug_42Rnd"};
		attachments[] = {"kr_muzzle556","weaponOptics","kr_light_right","weaponWrap"};
		simpleHiddenSelections[] = {"hide_barrel","hide_sights"};
		initSpeedMultiplier = 1.15;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a3.rvmat"};
		itemSize[] = {8,3};
		spawnDamageRange[] = {0.0,0.6};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},
			{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0035;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},
			{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.07;
			dispersion = 0.0035;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},
			{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.0035;
			magazineSlot = "magazine";
		};
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 50;
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 270;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a3.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a3_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a3_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a3_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aug\data\aug_a3_destruct.rvmat"}}
					};
				};
			};
		};
	};
};