class CfgPatches
{
	class kr_weapons_firearms_smle
	{
		units[] = {};
		weapons[] = {"LeeEnfield"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
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
	class kr_LeeEnfield_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope = 0;
		displayName = "$STR_kr_weapons_rifles_smle";
		descriptionShort = "$STR_kr_weapons_rifles_smle_dsc";
		animName = "Mosin9130";
		weight = 4000;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,20,130,4,10};
		DisplayMagazine = 0;
		WeaponLength = 1.1;
		ObstructionDistance = 1.013;
		barrelArmor = 6.0;
		initSpeedMultiplier = 1.0;
		chamberSize = 10;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_303_British_T", "kr_Ammo_303_British", "kr_Ammo_303_British_AP", "kr_Ammo_303_British_HP"};
		magazines[] = {};
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.0,2.0,0.7};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\smle\data\smle.rvmat"};
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
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\smle\data\smle.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\smle\data\smle_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\smle\data\smle_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\smle\data\smle_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\smle\data\smle_destruct.rvmat"}}
					};
				};
			};
		};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Mosin9130_Shot_SoundSet","Mosin9130_Shot_iterior_SoundSet","Mosin9130_Tail_SoundSet","Mosin9130_InteriorTail_SoundSet","Mosin9130_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"Mosin9130_silencerHomeMade_SoundSet","Mosin9130_silencerHomeMadeTail_SoundSet","Mosin9130_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0.0012;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300,400,500};
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
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 1;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 0.5;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.1,1};
					positionOffset[] = {0.0,0,0};
					onlyWithinRainLimits[] = {0,0.2};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\cz550\w_CZ550_states.anm";
	};

	class kr_LeeEnfield: kr_LeeEnfield_Base
	{
		scope = 2;
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_rifles\smle\smle.p3d";
		itemSize[] = {10,3};
		attachments[] = {"weaponWrap","kr_weaponOpticsSmle"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\smle\data\smle_co.paa"};

		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".303 British";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
	};
};
