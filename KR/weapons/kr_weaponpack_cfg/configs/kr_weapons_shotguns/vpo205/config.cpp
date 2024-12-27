class CfgPatches
{
	class kr_weapons_shotguns_vpo205
	{
		units[] = {};
		weapons[] = {"kr_vpo205_305","kr_vpo205_430","kr_vpo205_570"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class kr_Gunplay_Base;
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class kr_ak_Base;
	class kr_vpo205_Base: kr_ak_Base
	{
		scope = 0;
		descriptionShort = "$STR_weapons_shotguns_vpo205_dsc";
		attachments[] = {"kr_muzzle12_76","kr_ak_hndgrd","kr_ak_pistolgrip","kr_ak_fstock","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","weaponOptics","weaponWrap"};
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator","Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {"Mag_12x76_izhmash_Sb5_5Rnd","Mag_12x76_vpo205_std_8Rnd","Mag_12x76_promag_sai_02_10Rnd","Mag_12x76_maxrounds_powermag_20Rnd"};
		magazineSwitchTime = 0.2;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		ejectType = 1;
		reloadAction = "ReloadAKM";
		modes[] = {"SemiAuto"};
		isShort = 1;
		class kr_firearms
		{
			handguardSlotName = "kr_ak_hndgrd";
			buttstockSlotName = "kr_ak_fstock";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle = "weapon_shot_winded_smoke";
					onlyWithinHealthLabel[] = {3,4};
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp133_01";
					illuminateWorld = 1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
					onlyWithinHealthLabel[] = {3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					onlyWithinHealthLabel[] = {3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 4;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 3;
				class SmokingBarrel
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
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25,50,75,100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 100;
		};
	};
	class kr_vpo205_305: kr_vpo205_Base
	{
		scope = 2;
		displayName = "$STR_weapons_shotguns_vpo205";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\vpo205_305.p3d";
		WeaponLength = 0.825;
		weight = 3900;
		barrelArmor = 11.8;
		itemSize[] = {6,3};
		initSpeedMultiplier = 1.5;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205.rvmat"};
		recoilModifier[] = {2.0,2.2,3.2};
		swayModifier[] = {2.1,2.1,2.0};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Saiga12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"kr_saiga12_silencer_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00099;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_vpo205_430: kr_vpo205_Base
	{
		scope = 2;
		displayName = "$STR_weapons_shotguns_vpo205_430";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\vpo205_430.p3d";
		WeaponLength = 0.95;
		weight = 4300;
		barrelArmor = 13.1;
		itemSize[] = {7,3};
		initSpeedMultiplier = 1.35;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205.rvmat"};
		recoilModifier[] = {2.1,2.3,3.2};
		swayModifier[] = {2.5,2.5,2.2};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12x76";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Saiga12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"kr_saiga12_silencer_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0009;
			firespreadangle = 1.2;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_vpo205_570: kr_vpo205_Base
	{
		scope = 2;
		displayName = "$STR_weapons_shotguns_vpo205_570";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\vpo205_570.p3d";
		WeaponLength = 1.09;
		weight = 4700;
		barrelArmor = 14.8;
		itemSize[] = {9,3};
		initSpeedMultiplier = 1.2;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205.rvmat"};
		recoilModifier[] = {2.3,2.5,3.5};
		swayModifier[] = {2.8,2.8,2.5};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "12x76";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Saiga12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"kr_saiga12_silencer_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00085;
			firespreadangle = 1.0;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\vpo205\data\vpo205_destruct.rvmat"}}};
				};
			};
		};
	};
};
