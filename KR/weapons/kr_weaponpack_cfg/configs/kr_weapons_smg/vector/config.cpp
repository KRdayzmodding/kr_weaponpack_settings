class CfgPatches
{
	class kr_weapons_smg_vector
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
	class Launcher_Base;
	class kr_vector_Base: Rifle_Base
	{
		scope = 0;
		weight = 2276;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.6,50,125,4,10};
		WeaponLength = 0.6;
		ObstructionDistance = 0.526;
		ShoulderDistance = 0.05;
		barrelArmor = 8.0;
		initSpeedMultiplier = 1.2;
		chamberSize = 1;
		chamberedRound = "";
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		simpleHiddenSelections[] = {"hide_sights"};
		hiddenSelections[] = {"camo"};
		class NoiseShoot
		{
			strength = 60;
			type = "shot";
		};
		modes[] = {"SemiAuto","FullAuto"};

		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
		weaponStateAnim = "KR\weapons\kr_weaponpack\anm\weapons\vector\vector_state.anm";
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.1,0,0.03};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {-0.1,0,-0.04};
				orientation[] = {0,0,0};
			};
		};
	};
	class kr_vector9: kr_vector_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_vector_9";
		descriptionShort = "$STR_weapons_firearms_vector_9_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\vector_9.p3d";
		attachments[] = {"kr_muzzle9_19","weaponOptics","kr_vector_stock","kr_foregrip","kr_light_right","weaponWrap"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_9_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_9.rvmat"};
		initSpeedMultiplier = 1.2;
		barrelArmor = 11;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		itemSize[] = {3,3};
		chamberableFrom[] = {"kr_Ammo_9x19_gt","kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_rip","kr_Ammo_9x19_quakemaker","Ammo_9x19"};
		magazines[] = {"Mag_9x19_glock17_std_17Rnd","Mag_9x19_glock17_pmag_21Rnd","Mag_9x19_glock17_33Rnd","Mag_9x19_glock17_50Rnd"};

		modes[] = {"SemiAuto", "Burst", "FullAuto"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_firearms
		{
			handguardSlotName = "";
			buttstockSlotName = "kr_vector_stock";
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "9x19";
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_9.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_9_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_9_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_9_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_9_destruct.rvmat"}}};
				};
			};
		};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Bizon_Shot_SoundSet","Bizon_Tail_SoundSet","Bizon_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Bizon_silencer_SoundSet","Bizon_silencerTail_SoundSet","Bizon_silencerInteriorTail_SoundSet"},{"Bizon_silencerHomeMade_SoundSet","Bizon_silencerHomeMadeTail_SoundSet","Bizon_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};

		class Burst: Mode_Burst
		{
			soundSetShot[] = {"Bizon_Shot_SoundSet","Bizon_Tail_SoundSet","Bizon_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Bizon_silencer_SoundSet","Bizon_silencerTail_SoundSet","Bizon_silencerInteriorTail_SoundSet"},{"Bizon_silencerHomeMade_SoundSet","Bizon_silencerHomeMadeTail_SoundSet","Bizon_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.002;
			burst = 2;
			magazineSlot = "magazine";
		};

		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Bizon_Shot_SoundSet","Bizon_Tail_SoundSet","Bizon_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Bizon_silencer_SoundSet","Bizon_silencerTail_SoundSet","Bizon_silencerInteriorTail_SoundSet"},{"Bizon_silencerHomeMade_SoundSet","Bizon_silencerHomeMadeTail_SoundSet","Bizon_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.002;
			magazineSlot = "magazine";
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

	class kr_vector45: kr_vector_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_vector_45";
		descriptionShort = "$STR_weapons_firearms_vector_45_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\vector_45.p3d";
		attachments[] = {"kr_muzzle45ACP","weaponOptics","kr_vector_stock","kr_foregrip","kr_light_right","weaponWrap"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_45_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_45.rvmat"};
		initSpeedMultiplier = 1.2;
		barrelArmor = 11;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		itemSize[] = {3,3};
		chamberableFrom[] = {"Ammo_45ACP"};
		magazines[] = {"Mag_45ACP_glock21_std_13Rnd","Mag_45ACP_magex_g30_30Rnd"};
		modes[] = {"SemiAuto","Burst","FullAuto"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_firearms
		{
			handguardSlotName = "";
			buttstockSlotName = "kr_vector_stock";
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".45 ACP";
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_45.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_45_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_45_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_45_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_smg\vector\data\vector_45_destruct.rvmat"}}
					};
				};
			};
		};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Bizon_Shot_SoundSet","Bizon_Tail_SoundSet","Bizon_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Bizon_silencer_SoundSet","Bizon_silencerTail_SoundSet","Bizon_silencerInteriorTail_SoundSet"},{"Bizon_silencerHomeMade_SoundSet","Bizon_silencerHomeMadeTail_SoundSet","Bizon_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"Bizon_Shot_SoundSet","Bizon_Tail_SoundSet","Bizon_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Bizon_silencer_SoundSet","Bizon_silencerTail_SoundSet","Bizon_silencerInteriorTail_SoundSet"},{"Bizon_silencerHomeMade_SoundSet","Bizon_silencerHomeMadeTail_SoundSet","Bizon_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.002;
			burst = 2;
			magazineSlot = "magazine";
		};

		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Bizon_Shot_SoundSet","Bizon_Tail_SoundSet","Bizon_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Bizon_silencer_SoundSet","Bizon_silencerTail_SoundSet","Bizon_silencerInteriorTail_SoundSet"},{"Bizon_silencerHomeMade_SoundSet","Bizon_silencerHomeMadeTail_SoundSet","Bizon_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.002;
			magazineSlot = "magazine";
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
};
