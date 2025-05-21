class CfgPatches
{
	class kr_weapons_smg_pp19_01
	{
		units[] = {};
		weapons[] = {"kr_pp19_01","kr_saiga9"};
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
	class kr_pp19_01_Base: kr_ak_Base
	{
		scope = 0;
		weight = 2700;
		WeaponLength = 0.7;
		chamberableFrom[] = {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_rip","kr_Ammo_9x19_quakemaker","Ammo_9x19"};
		magazines[] = {"Mag_9x19_pp19_pufgun_sg919_20Rnd","Mag_9x19_pp19_pufgun_sg919_30Rnd","Mag_9x19_pp19_izhmash_sb7_10Rnd","Mag_9x19_pp19_izhmash_std_30Rnd"};
		isShort = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_firearms
		{
			receiverSlotName = "kr_pp19_receiver";
			handguardSlotName = "kr_ak_hndgrd";
			buttstockSlotName = "kr_ak_fstock";
		};
		class NoiseShoot
		{
			strength = 60;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,75,100,150,200};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 200;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.06,-0.02,0.03};
				orientation[] = {0,15,0};
			};
			class Melee
			{
				position[] = {-0.06,-0.02,-0.05};
				orientation[] = {0,-15,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz61_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
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
					onlyWithinOverheatLimits[] = {0.0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
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
	class kr_pp19_01: kr_pp19_01_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_pp19_01";
		descriptionShort = "$STR_weapons_firearms_pp19_01_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\pp19_01.p3d";
		attachments[] = {"kr_muzzle9_19","kr_ak_hndgrd","kr_pp19_receiver","kr_ak_pistolgrip","kr_ak_fstock","kr_ar_bttstck","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","weaponOpticsAK","weaponOptics","weaponOpticsDT","kr_ak_handle","weaponWrap"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\pp19_01_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\pp19_01.rvmat"};
		initSpeedMultiplier = 1.1;
		barrelArmor = 12;
		weight = 2300;
		WeaponLength = 0.435;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		itemSize[] = {6,3};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Bizon_Shot_SoundSet","Bizon_Tail_SoundSet","Bizon_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Bizon_silencer_SoundSet","Bizon_silencerTail_SoundSet","Bizon_silencerInteriorTail_SoundSet"},{"Bizon_silencerHomeMade_SoundSet","Bizon_silencerHomeMadeTail_SoundSet","Bizon_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Bizon_Shot_SoundSet","Bizon_Tail_SoundSet","Bizon_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Bizon_silencer_SoundSet","Bizon_silencerTail_SoundSet","Bizon_silencerInteriorTail_SoundSet"},{"Bizon_silencerHomeMade_SoundSet","Bizon_silencerHomeMadeTail_SoundSet","Bizon_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
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
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\pp19_01.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\pp19_01_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\pp19_01_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\pp19_01_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\pp19_01_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_saiga9: kr_pp19_01_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_saiga9";
		descriptionShort = "$STR_weapons_firearms_saiga9_dsc";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\saiga9.p3d";
		attachments[] = {"kr_muzzle9_19","kr_ak_hndgrd","kr_pp19_receiver","kr_ak_pistolgrip","kr_ak_fstock","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","weaponOptics","weaponOpticsDT","kr_ak_handle","weaponWrap"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\saiga9_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\saiga9.rvmat"};
		initSpeedMultiplier = 1.0;
		barrelArmor = 9;
		weight = 2450;
		WeaponLength = 0.541;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		itemSize[] = {7,3};
		modes[] = {"SemiAuto"};
		
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Bizon_Shot_SoundSet","Bizon_Tail_SoundSet","Bizon_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Bizon_silencer_SoundSet","Bizon_silencerTail_SoundSet","Bizon_silencerInteriorTail_SoundSet"},{"Bizon_silencerHomeMade_SoundSet","Bizon_silencerHomeMadeTail_SoundSet","Bizon_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
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
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\saiga9.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\saiga9_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\saiga9_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\saiga9_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_smg\pp19\data\saiga9_destruct.rvmat"}}};
				};
			};
		};
	};
};
