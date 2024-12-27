class CfgPatches
{
	class kr_weapons_shotguns_toz34
	{
		units[] = {};
		weapons[] = {"kr_toz34","kr_toz34_sawed"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","DZ_Weapons_Firearms","kr_data"};
	};
};
class kr_Gunplay_Base;
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_Double;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Rifle_Base;
	class kr_toz34_Base: Rifle_Base
	{
		scope = 0;
		weight = 2820;
		itemSize[] = {9,3};
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator","Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {};
		DisplayMagazine = 0;
		winchesterTypeOpticsMount = 1;
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 0.85;
		barrelArmor = 1.6;
		initSpeedMultiplier = 1.05;
		muzzles[] = {"this","SecondMuzzle"};
		ejectType = 3;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1};
		hiddenSelections[] = {"camo"};
		simpleHiddenSelections[] = {"bullet","bullet2","hide_barrel"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\toz34\data\toz34_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\toz34\data\toz34.rvmat"};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		modes[] = {"Single","Double"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"IZH43_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			reloadTime = 1.0;
			firespreadangle = 1.5;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class Double: Mode_Double
		{
			soundSetShot[] = {"IZH43_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			reloadTime = 1.0;
			firespreadangle = 1.5;
			dispersion = 0.01;
			magazineSlot = "magazine";
		};
		class SecondMuzzle: Muzzle_Base
		{
			chamberSize = 1;
			muzzlePos = "usti hlavne_2";
			muzzleEnd = "konec hlavne_2";
			cartridgePos = "nabojnicestart_2";
			cartridgeVel = "nabojniceend_2";
			magazines[] = {};
			chamberableFrom[] = {"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator","Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
			barrelArmor = 1.6;
			initSpeedMultiplier = 1.05;
			irDistance = 0.0;
			irLaserPos = "laser pos";
			irLaserEnd = "laser dir";
			modes[] = {"Single","Double"};
			class Single: Mode_Single
			{
				soundSetShot[] = {"IZH43_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
				reloadTime = 1.0;
				firespreadangle = 1.5;
				dispersion = 0.00075;
				magazineSlot = "magazine";
			};
			class Double: Mode_Double
			{
				soundSetShot[] = {"IZH43_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
				reloadTime = 1.0;
				firespreadangle = 1.5;
				dispersion = 0.01;
				magazineSlot = "magazine";
			};
			class OpticsInfo: OpticsInfoShotgun
			{
				memoryPointCamera = "eye";
				modelOptics = "-";
				distanceZoomMin = 50;
				distanceZoomMax = 200;
				discreteDistance[] = {50,100,200};
				discreteDistanceInitIndex = 0;
			};
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 200;
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\toz34\data\toz34.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\toz34\data\toz34_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\toz34\data\toz34_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\toz34\data\toz34_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\toz34\data\toz34_destruct.rvmat"}}};
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
					muzzleIndex = 0;
				};
				class SmokeCloud2
				{
					overrideParticle = "weapon_shot_winded_smoke";
					muzzleIndex = 0;
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle = "weapon_shot_winded_smoke";
					onlyWithinHealthLabel[] = {3,4};
					muzzleIndex = 0;
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp133_01";
					illuminateWorld = 1;
					muzzleIndex = 0;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
					onlyWithinHealthLabel[] = {3,4};
					muzzleIndex = 0;
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					onlyWithinHealthLabel[] = {3,4};
					muzzleIndex = 0;
				};
				class SmokeCloud_2
				{
					overrideParticle = "weapon_shot_winded_smoke";
					overridePoint = "Usti hlavne_2";
					muzzleIndex = 1;
				};
				class SmokeCloud2_2
				{
					overrideParticle = "weapon_shot_winded_smoke";
					overridePoint = "Usti hlavne_2";
					muzzleIndex = 1;
				};
				class SmokeCloud3BadlyDamaged_2
				{
					overrideParticle = "weapon_shot_winded_smoke";
					overridePoint = "Usti hlavne_2";
					onlyWithinHealthLabel[] = {3,4};
					muzzleIndex = 1;
				};
				class MuzzleFlash_2
				{
					overrideParticle = "weapon_shot_mp133_01";
					overridePoint = "Usti hlavne_2";
					illuminateWorld = 1;
					muzzleIndex = 1;
				};
				class BadlyDamagedChamberSmoke_2
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart_2";
					overrideDirectionPoint = "Nabojniceend";
					onlyWithinHealthLabel[] = {3,4};
					muzzleIndex = 1;
				};
				class BadlyDamagedChamberSmokeRaise_2
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart_2";
					onlyWithinHealthLabel[] = {3,4};
					muzzleIndex = 1;
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
		weaponStateAnim = "dz\anims\anm\player\reloads\B95\w_B95_states.anm";
		boneRemap[] = {"release","Weapon_Bone_02","barrel","Weapon_Bone_01","trigger","Weapon_Trigger","ejector","Weapon_Bone_03","bullet","Weapon_Bullet","bullet2","Weapon_Bone_04","snaploader","Weapon_Bone_05"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
	};
	class kr_toz34: kr_toz34_Base
	{
		scope = 2;
		displayName = "$STR_weapons_shotguns_toz34";
		descriptionShort = "$STR_weapons_shotguns_toz34_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\toz34\toz34.p3d";
		attachments[] = {"weaponWrap"};
		barrelArmor = 24.0;
		initSpeedMultiplier = 1.05;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1};
		class Single: Mode_Single
		{
			soundSetShot[] = {"IZH43_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			reloadTime = 1.0;
			firespreadangle = 1.0;
			dispersion = 0.00099;
			magazineSlot = "magazine";
		};
		class Double: Mode_Double
		{
			soundSetShot[] = {"IZH43_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			reloadTime = 1.0;
			firespreadangle = 1.5;
			dispersion = 0.00099;
			magazineSlot = "magazine";
		};
		class SecondMuzzle: Muzzle_Base
		{
			chamberSize = 1;
			muzzlePos = "usti hlavne_2";
			muzzleEnd = "konec hlavne_2";
			cartridgePos = "nabojnicestart_2";
			cartridgeVel = "nabojniceend_2";
			magazines[] = {};
			chamberableFrom[] = {"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator","Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
			barrelArmor = 24.0;
			initSpeedMultiplier = 1.05;
			irDistance = 0.0;
			irLaserPos = "laser pos";
			irLaserEnd = "laser dir";
			modes[] = {"Single","Double"};
			class Single: Mode_Single
			{
				soundSetShot[] = {"IZH43_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
				reloadTime = 1.0;
				firespreadangle = 1.0;
				dispersion = 0.00099;
				magazineSlot = "magazine";
			};
			class Double: Mode_Double
			{
				soundSetShot[] = {"IZH43_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
				reloadTime = 1.0;
				firespreadangle = 1.5;
				dispersion = 0.00099;
				magazineSlot = "magazine";
			};
			class OpticsInfo: OpticsInfoShotgun
			{
				memoryPointCamera = "eye";
				modelOptics = "-";
				distanceZoomMin = 50;
				distanceZoomMax = 200;
				discreteDistance[] = {50,100,200};
				discreteDistanceInitIndex = 0;
			};
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "12x76";
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {0,0.01,-0.03};
				orientation[] = {0,-30,0};
			};
			class Melee
			{
				position[] = {0,0,0};
				orientation[] = {0,30,0};
			};
		};
	};
	class kr_toz34_sawed: kr_toz34_Base
	{
		scope = 2;
		displayName = "$STR_weapons_shotguns_toz34_sawed";
		descriptionShort = "$STR_weapons_shotguns_toz34_sawed_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_shotguns\toz34\toz34_sawed.p3d";
		weight = 2000;
		itemSize[] = {5,2};
		barrelArmor = 17.5;
		initSpeedMultiplier = 1.05;
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {1.8,1.8,1};
		WeaponLength = 0.56;
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "12x76";
		};
		class Single: Single
		{
			dispersion = 0.0025;
		};
		class Double: Double
		{
			dispersion = 0.003;
		};
		class SecondMuzzle: SecondMuzzle
		{
			initSpeedMultiplier = 0.75;
			class Single: Single
			{
				dispersion = 0.0025;
			};
			class Double: Double
			{
				dispersion = 0.003;
			};
		};
		attachments[] = {};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.05,-0.01,0.01};
				orientation[] = {0,0,-10};
			};
			class Melee
			{
				position[] = {-0.05,-0.01,-0.03};
				orientation[] = {0,0,-10};
			};
		};
	};
};
