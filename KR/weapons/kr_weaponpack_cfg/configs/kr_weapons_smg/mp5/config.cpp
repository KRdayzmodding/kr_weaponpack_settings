class CfgPatches
{
	class kr_weapons_smg_mp5
	{
		units[] = {};
		weapons[] = {"kr_mp5","kr_mp5k","kr_mp5sd"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
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
	class kr_mp5_base: Rifle_Base
	{
		scope = 0;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.75,40,180,4,10};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_rip","kr_Ammo_9x19_quakemaker","Ammo_9x19"};
		magazines[] = {"Mag_9x19_mp5_kurtz_std_20Rnd","Mag_9x19_mp5_std_curved_30Rnd","Mag_9x19_mp5_x_product_50Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		simpleHiddenSelections[] = {"hide_barrel","hide_stock"};
		hiddenSelections[] = {"camo"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 66;
			type = "shot";
		};
		modes[] = {"SemiAuto","Burst","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.1,0.01,0};
				orientation[] = {0,-8,0};
			};
			class Melee
			{
				position[] = {-0.1,0.01,-0.02};
				orientation[] = {0,0,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp5k_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.8};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\MP5\w_mp5k_states.anm";
	};
	class kr_mp5: kr_mp5_base
	{
		scope = 2;
		displayName = "$STR_weapons_smg_mp5";
		descriptionShort = "$STR_weapons_smg_mp5_dsc";
		weight = 2300;
		model = "KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\MP5.p3d";
		WeaponLength = 0.391;
		barrelArmor = 9;
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1.7,1.7,1.7};
		swayModifier[] = {2.1,2.1,1.9};
		attachments[] = {"kr_mp5_hndgrd","kr_mp5_mount","weaponOptics","weaponOptics1","kr_mp5_stock"};
		simpleHiddenSelections[] = {"hide_barrel","hide_stock"};
		class kr_firearms
		{
			barreltype = 1;
			handguardSlotName = "kr_mp5_hndgrd";
		};
		itemSize[] = {6,3};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5_CO.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mp5k: kr_mp5_base
	{
		scope = 2;
		displayName = "$STR_weapons_smg_mp5k";
		descriptionShort = "$STR_weapons_smg_mp5k_dsc";
		weight = 1840;
		model = "KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\MP5k.p3d";
		WeaponLength = 0.272;
		barrelArmor = 7.6;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.3,1.3,1.2};
		attachments[] = {"kr_mp5_hndgrd","kr_mp5_mount","weaponOptics"};
		class kr_firearms
		{
			barreltype = 2;
			handguardSlotName = "kr_mp5_hndgrd";
		};
		itemSize[] = {4,3};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5k_CO.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5k.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5k.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5k_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5k_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5k_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5k_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mp5sd: kr_mp5_base
	{
		scope = 2;
		displayName = "$STR_weapons_smg_mp5sd";
		descriptionShort = "$STR_weapons_smg_mp5sd_dsc";
		weight = 2700;
		model = "KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\MP5sd.p3d";
		WeaponLength = 0.477;
		barrelArmor = 5.7;
		initSpeedMultiplier = 0.9;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.5,1.5,1.7};
		attachments[] = {"kr_mp5_hndgrd","kr_mp5_mount","weaponOptics","weaponOptics1","kr_mp5_stock"};
		class kr_firearms
		{
			barreltype = 3;
			handguardSlotName = "kr_mp5_hndgrd";
		};
		itemSize[] = {6,3};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5sd_CO.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5sd.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x19";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"};
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5k.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5sd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5sd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5sd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_smg\mp5\data\mp5sd_destruct.rvmat"}}};
				};
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
					overrideParticle = "weapon_shot_vss_01";
					positionOffset[] = {-0.05,0,0};
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
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.8};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
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
	};
};
