class CfgPatches
{
	class kr_weaponpack_pistols_p226
	{
		units[] = {};
		weapons[] = {"kr_p226r"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;

class kr_Gunplay_Base;
class cfgWeapons
{
	class Pistol_Base;
	class kr_p226r_Base: Pistol_Base
	{
		scope = 0;
		weight = 690;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.55,10,200,4,10};
		WeaponLength = 0.21;
		ShoulderDistance = 0.4;
		barrelArmor = 7;
		initSpeedMultiplier = 1.1;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_9x19_p226r_15Rnd","Mag_9x19_p226r_20Rnd"};
		chamberableFrom[] = {"kr_Ammo_9x19_gt","kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_rip","kr_Ammo_9x19_quakemaker","Ammo_9x19"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		simpleHiddenSelections[] = {"hide_bolt","hide_pgrip"};
		hiddenSelections[] = {"camo"};
		class NoiseShoot
		{
			strength = 65;
			type = "shot";
		};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"p226_Shot_SoundSet","CZ75_Tail_SoundSet","CZ75_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"p226_silencerPro_SoundSet","CZ75_silencerTail_SoundSet","CZ75_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
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
					overrideParticle = "weapon_shot_cz75_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {0,0,0};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 8;
				shotsToStartOverheating = 8;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,1};
					positionOffset[] = {0,0,0};
					onlyWithinRainLimits[] = {0,1};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\CZ75\w_CZ75_states.anm";
	};
	class kr_p226r: kr_p226r_Base
	{
		scope = 2;
		displayName = "$STR_weapons_pistols_p226";
		descriptionShort = "$STR_weapons_pistols_p226_dsc";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\p226\p226r.p3d";
		attachments[] = {"kr_muzzle9_19","kr_light_pistol","PistolHolo1","kr_receiver_p226r","kr_pgrip_p226r"};
		itemSize[] = {3,2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\p226\data\p226r_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\p226\data\p226r.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\p226\data\p226r_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\p226\data\p226r_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\p226\data\p226r_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_pistols\p226\data\p226r_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyp226r: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_pistols\p226\p226r.p3d";
	};
};
