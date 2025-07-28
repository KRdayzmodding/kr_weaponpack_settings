class CfgPatches
{
	class kr_weapons_firearms_sks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","kr_data"};
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
	class kr_SKS_Base: Rifle_Base
	{
		scope = 0;
		weight = 3850;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {0,0.6,50,160,4,10};
		DisplayMagazine = 0;
		WeaponLength = 1.06;
		ObstructionDistance = 0.876;
		barrelArmor = 10;
		initSpeedMultiplier = 1.1;
		chamberSize = 10;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_762x39_t45m","kr_Ammo_762x39_fmj","kr_Ammo_762x39_us","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_bp","kr_Ammo_762x39_HP","kr_Ammo_762x39_mai_ap","Ammo_762x39","Ammo_762x39Tracer"};
		magazines[] = {};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.4,2.4,0.9};
		simpleHiddenSelections[] = {"hide_barrel","hide_receiver","hide_mount","hide_handguard"};
		cursor = "aimBowGhost";
		hiddenSelections[] = {"camo","camo_body"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};

		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SKS_Shot_SoundSet","SKS_Shot_iterior_SoundSet","SKS_Tail_SoundSet","SKS_InteriorTail_SoundSet","SKS_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"SKS_silencer_SoundSet","SKS_silencerHomeMadeTail_SoundSet","SKS_silencerInteriorHomeMadeTail_SoundSet"},{"SKS_silencerHomeMade_SoundSet","SKS_silencerHomeMadeTail_SoundSet","SKS_silencerInteriorHomeMadeTail_SoundSet"}};
			envShootingDecrease = 0.8;
			envShootingDecreaseExt[] = {0.05,0.05};
			reloadTime = 0.12;
			recoil = "recoil_sks";
			recoilProne = "recoil_sks_prone";
			dispersion = 0.0028;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {0,0,0.05};
				orientation[] = {0,40,0};
			};
			class Melee
			{
				position[] = {0,0,-0.05};
				orientation[] = {0,-40,0};
			};
		};
		class AnimationSources
		{
			class Clip_rounds
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Clip
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
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
					overrideParticle = "weapon_shot_sks_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
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
				maxOverheatingValue = 8;
				shotsToStartOverheating = 4;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.6};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.6,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\SKS\w_SKS_states.anm";
		boneRemap[] = {"bolt","Weapon_Bolt","trigger","Weapon_Trigger","bullet","Weapon_Bullet","follower","Weapon_Bone_02","clip","Weapon_Magazine","cliprounds","Weapon_Bone_01"};
	};

	class kr_SKS: kr_SKS_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_sks";
		descriptionShort = "$STR_weapons_firearms_sks_dsc";
		model = "\kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\sks.p3d";
		attachments[] = {"kr_muzzle762_39","kr_muzzle762_39_sks","kr_sks_hndgrd","kr_weaponOpticsMosin","kr_sks_receiver","weaponOptics","weaponHolo1","weaponWrap","weaponBayonetSKS"};
		itemSize[] = {9,3};
		hiddenSelections[] = {"camo_body","camo","camo_mount"};
		hiddenSelectionsTextures[] = {"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_toz_body_co.paa","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_co.paa","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\mount_kochetov_co.paa"};
		hiddenSelectionsMaterials[] = {"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_toz_body.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\mount_kochetov.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_toz_body.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\mount_kochetov.rvmat"}},
						{0.7,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_toz_body_worn.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_worn.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\mount_kochetov_worn.rvmat"}},
						{0.5,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_toz_body_damage.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_damage.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\mount_kochetov_damage.rvmat"}},
						{0.3,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_toz_body_badlydamage.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_badlydamage.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\mount_kochetov_badlydamage.rvmat"}},
						{0.0,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_toz_body_destruct.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_destruct.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\mount_kochetov_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class kr_SKS_OP: kr_SKS_Base
	{
		scope = 2;
		model = "\kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\sks_op.p3d";
		displayName = "$STR_weapons_firearms_sks_op";
		descriptionShort = "$STR_weapons_firearms_sks_op_dsc";
		attachments[] = {"kr_muzzle762_39","kr_muzzle762_39_sks","kr_sks_hndgrd","weaponOpticsAK","weaponOpticsDT","kr_sks_receiver","weaponOptics","weaponHolo1","weaponWrap"};
		hiddenSelections[] = {"camo_body","camo"};
		hiddenSelectionsTextures[] = {"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_molot_body_co.paa","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_co.paa"};
		hiddenSelectionsMaterials[] = {"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_molot_body.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_molot_body.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main.rvmat"}},
						{0.7,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_molot_body_worn.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_worn.rvmat"}},
						{0.5,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_molot_body_damage.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_damage.rvmat"}},
						{0.3,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_molot_body_badlydamage.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_badlydamage.rvmat"}},
						{0.0,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_molot_body_destruct.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class kr_SKS_montecarlo: kr_SKS_Base
	{
		scope = 2;
		model = "\kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\sks_montecarlo.p3d";
		displayName = "$STR_weapons_firearms_sks_montecarlo";
		descriptionShort = "$STR_weapons_firearms_sks_montecarlo_dsc";
		attachments[] = {"kr_muzzle762_39","kr_muzzle762_39_sks","kr_sks_hndgrd","kr_sks_receiver","weaponOptics","weaponHolo1","weaponWrap"};
		hiddenSelections[] = {"camo_body","camo"};
		hiddenSelectionsTextures[] = {"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_montecarlo_body_co.paa","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_co.paa"};
		hiddenSelectionsMaterials[] = {"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_montecarlo_body.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main.rvmat"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.8,1.8,0.9};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x39";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_montecarlo_body.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main.rvmat"}},
						{0.7,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_montecarlo_body_worn.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_worn.rvmat"}},
						{0.5,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_montecarlo_body_damage.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_damage.rvmat"}},
						{0.3,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_montecarlo_body_badlydamage.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_badlydamage.rvmat"}},
						{0.0,{"kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_montecarlo_body_destruct.rvmat","kr\weapons\kr_weaponpack_2\kr_weapons_firearms\sks\data\sks_main_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
