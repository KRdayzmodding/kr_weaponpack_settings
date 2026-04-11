class CfgPatches
{
	class kr_weapons_firearms_ak308
	{
		units[] = {};
		weapons[] = {};
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
	class kr_ak308_Base: kr_ak_Base
	{
		scope = 0;
		displayName = "$STR_weapons_firearms_ak308";
		descriptionShort = "$STR_weapons_firearms_ak308_dsc";
		attachments[] = {"kr_muzzleAK308","kr_ak12_hndgrd","kr_ak_pistolgrip","kr_ak308_receiver","kr_ak_fstock","weaponHolo1","weaponOptics","kr_ak_handle","weaponWrap","kr_proxyParts"};
		chamberableFrom[] = {"kr_Ammo_762x51_bpz_fmj","kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"Mag_762x51_ak308_std_20Rnd","Mag_762x51_ak308_promag_24Rnd"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak308\data\ak308_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak308\data\ak308.rvmat"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_sight","hide_fgrip_1","hide_light_1"};
		
		class kr_firearms
		{
			handguardSlotName = "kr_ak12_hndgrd";
			buttstockSlotName = "kr_ak_fstock";
			receiverSlotName = "kr_ak308_receiver";
			proxyPart = "kr_proxy_ak308_parts";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 90;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,200,300};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 50;
			distanceZoomMax = 300;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak308\data\ak308.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak308\data\ak308_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak308\data\ak308_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak308\data\ak308_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak308\data\ak308_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_ak308: kr_ak308_Base
	{
		scope = 2;
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak308\ak308.p3d";
		weight = 2850;
		WeaponLength = 0.691;
		barrelArmor = 10.244;
		itemSize[] = {8,3};
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.9,0.9,0.9};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "7.62x51 NATO (.308)";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		modes[] = {"SemiAuto","Burst","FullAuto"};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.0029;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			burst = 3;
			dispersion = 0.0029;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.0029;
			magazineSlot = "magazine";
		};
	};
};
