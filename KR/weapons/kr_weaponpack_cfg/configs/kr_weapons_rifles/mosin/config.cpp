class CfgPatches
{
	class kr_weapons_rifles_mosin
	{
		units[] = {};
		weapons[] = {"kr_Mosin_514mm","kr_Mosin_730mm","kr_Mosin_sawed"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data"};
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
	class BoltActionRifle_InnerMagazine_Base;
	class kr_Mosin_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope = 0;
		descriptionShort = "$STR_weapons_rifles_mosin_514mm_dsc";
		animName = "Mosin9130";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		DisplayMagazine = 0;
		chamberSize = 5;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer","kr_Ammo_762x54r_bs","kr_Ammo_762x54r_bthp","kr_Ammo_762x54r_fmj","kr_Ammo_762x54r_lps","kr_Ammo_762x54r_ps","kr_Ammo_762x54r_snb","kr_Ammo_762x54r_t46m","kr_Ammo_762x54_AP"};
		magazines[] = {};
		ejectType = 0;
		simpleHiddenSelections[] = {"hide_sight"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x54R";
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_destruct.rvmat"}}};
				};
			};
		};
		modes[] = {"Single"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300};
			discreteDistanceInitIndex = 0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {0,0,-0.06};
				orientation[] = {0,-40,0};
			};
			class Melee
			{
				position[] = {0,0,0.04};
				orientation[] = {0,40,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mosin9130_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.03,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 3;
				overheatingDecayInterval = 4;
				class BarrelSmoke
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
		weaponStateAnim = "dz\anims\anm\player\reloads\Mosin_1903\w_mosin1903_states.anm";
	};
	class kr_Mosin_514mm: kr_Mosin_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_mosin_514mm";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\mosin_514.p3d";
		itemSize[] = {9,3};
		attachments[] = {"kr_muzzle762_54_mosin","kr_mosin_mount","kr_weaponOpticsMosin","kr_mosin_buttpad","weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","kr_muzzle762_39","kr_muzzle308","weaponFlashlight","weaponBayonetMosin","weaponWrap"};
		weight = 3000;
		WeaponLength = 1.02;
		barrelArmor = 8.1;
		initSpeedMultiplier = 1.05;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.5,2.5,1.3};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin.rvmat"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Mosin_silencerHomeMade_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1.0;
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
	};
	class kr_Mosin_730mm: kr_Mosin_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_mosin_730mm";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\mosin_730.p3d";
		itemSize[] = {11,3};
		attachments[] = {"kr_muzzle762_54_mosin","kr_mosin_mount","kr_weaponOpticsMosin","kr_mosin_buttpad","weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","kr_muzzle762_39","kr_muzzle308","weaponFlashlight","weaponBayonetMosin","weaponWrap"};
		weight = 3700;
		WeaponLength = 1.236;
		barrelArmor = 10.0;
		initSpeedMultiplier = 1.15;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.5,2.5,1.3};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x54R";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Mosin_silencerHomeMade_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1.0;
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
	};
	class kr_Mosin_sawed: kr_Mosin_Base
	{
		scope = 2;
		displayName = "$STR_weapons_rifles_mosin_sawed";
		descriptionShort = "$STR_weapons_rifles_mosin_sawed_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\mosin_sawed.p3d";
		itemSize[] = {5,2};
		attachments[] = {"kr_muzzle308","kr_mosin_mount","weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponFlashlight","weaponWrap"};
		weight = 1200;
		WeaponLength = 0.53;
		barrelArmor = 5.0;
		initSpeedMultiplier = 0.8;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.5,2.5,1.3};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_sawed_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_sawed.rvmat"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Mosin_silencerHomeMade_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1.0;
			dispersion = 0.005;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_sawed.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_sawed.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_sawed_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_sawed_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\mosin\data\mosin_sawed_destruct.rvmat"}}};
				};
			};
		};
	};
};
