class CfgPatches
{
	class kr_weapons_firearms_g36
	{
		units[] = {};
		weapons[] = {"kr_g36","kr_g36k","kr_g36c"};
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
	class kr_g36_Base: Rifle_Base
	{
		scope = 0;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		attachments[] = {"kr_muzzle556","kr_g36_handguard","kr_g36_ckit","weaponOptics","kr_weaponOpticsG36","kr_g36_stock","weaponWrap"};
		simpleHiddenSelections[] = 
		{
			"hide_barrel",
			"magazine",
			"hide_magwell",
			"hide_rails",
			"hide_sights",
			"hide_sights1"
		};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		magazines[] = {"Mag_556x45_g36_std_30Rnd","Mag_556x45_g36_std_60Rnd","Mag_STANAG_30Rnd","Mag_STANAGCoupled_30Rnd","Mag_STANAG_60Rnd","Mag_CMAG_10Rnd","Mag_CMAG_20Rnd","Mag_CMAG_30Rnd","Mag_CMAG_40Rnd","Mag_CMAG_10Rnd_Green","Mag_CMAG_20Rnd_Green","Mag_CMAG_30Rnd_Green","Mag_CMAG_40Rnd_Green","Mag_CMAG_10Rnd_Black","Mag_CMAG_20Rnd_Black","Mag_CMAG_30Rnd_Black","Mag_CMAG_40Rnd_Black","Mag_556x45_magpulp_60Rnd","Mag_556x45_colt_ar15_std_30Rnd","Mag_556x45_fn_mk16_std_30Rnd","Mag_556x45_hk_polymer_30Rnd","Mag_556x45_hk_gen_2_pm_30Rnd","Mag_556x45_magpulm3_10Rnd","Mag_556x45_magpulm3_20Rnd","Mag_556x45_magpulm3_30Rnd_blck","Mag_556x45_magpulm3_30Rnd_tan","Mag_556x45_magpulm3_40Rnd_Base","Mag_556x45_magpulm3_40Rnd_blck","Mag_556x45_magpulm3_40Rnd_tan","Mag_556x45_steel_maritime_30Rnd","Mag_556x45_srfr_mag5_60Rnd","Mag_556x45_srfr_mag5_100Rnd","Mag_556x45_troy_battlemag_30Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		hiddenSelections[] = {"camo"};
		spawnDamageRange[] = {0.0,0.6};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36k_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36k.rvmat"};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.56x45";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet","g36_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"},{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet","g36_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"},{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 270;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36k.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36k.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36k_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36k_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36k_destruct.rvmat"}}};
				};
			};
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 50;
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
					overrideParticle = "weapon_shot_mosin_compensator_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {0.01,0,0};
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
					onlyWithinOverheatLimits[] = {0.0,0.4};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.4,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.2,0,0};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\AK101\w_AK101_states.anm";
	};
	class kr_g36: kr_g36_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_g36";
		descriptionShort = "$STR_weapons_firearms_g36_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\g36.p3d";
		WeaponLength = 0.92;
		itemSize[] = {8,3};
		weight = 3800;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,0.8,1.0};
		barrelArmor = 20;
		initSpeedMultiplier = 1.3;
		attachments[] = {"kr_muzzle556","kr_g36_handguard","kr_g36_ckit","weaponOptics","kr_weaponOpticsG36","kr_g36_stock","weaponWrap"};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.56x45";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet","g36_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"},{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet","g36_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"},{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
	};
	class kr_g36k: kr_g36_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_g36k";
		descriptionShort = "$STR_weapons_firearms_g36k_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\g36k.p3d";
		WeaponLength = 0.56;
		itemSize[] = {7,3};
		weight = 3200;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,0.7,1.0};
		barrelArmor = 15.0;
		initSpeedMultiplier = 1.1;
		attachments[] = {"kr_muzzle556","kr_g36k_handguard","kr_g36_ckit","weaponOptics","kr_weaponOpticsG36","kr_g36_stock","weaponWrap"};
		modes[] = {"SemiAuto","FullAuto"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class NoiseShoot
		{
			strength = 90;
			type = "shot";
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet","g36_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"},{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0035;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet","g36_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"},{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0035;
			magazineSlot = "magazine";
		};
	};
	class kr_g36c: kr_g36_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_g36c";
		descriptionShort = "$STR_weapons_firearms_g36c_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\g36c.p3d";
		WeaponLength = 0.468;
		itemSize[] = {6,3};
		weight = 2800;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.85,0.6,0.85};
		barrelArmor = 12;
		initSpeedMultiplier = 0.9;
		attachments[] = {"kr_muzzle556","kr_g36c_handguard","kr_g36_ckit","weaponOptics","kr_weaponOpticsG36","kr_g36_stock","weaponWrap"};
		modes[] = {"SemiAuto","FullAuto"};
		simpleHiddenSelections[] = 
		{
			"hide_barrel",
			"magazine",
			"hide_magwell",
			"hide_rails"
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36c_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36c.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 80;
			type = "shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 270;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36c.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36c.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36c_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36c_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\g36\data\g36c_destruct.rvmat"}}};
				};
			};
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.56x45";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet","g36_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"},{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet","g36_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"},{"g36_silencer_SoundSet","g36_silencerTail_SoundSet","g36_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
	};
};
