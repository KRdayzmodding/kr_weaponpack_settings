class CfgPatches
{
	class kr_weapons_firearms_ak12
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
	class kr_ak12_Base: kr_ak_Base
	{
		scope = 0;
		displayName = "$STR_weapons_firearms_ak12";
		descriptionShort = "$STR_weapons_firearms_ak12_dsc";
		attachments[] = {"kr_muzzleAK12","kr_ak12_hndgrd","kr_ak_pistolgrip","kr_ak12_receiver","kr_ak_fstock","weaponHolo1","weaponOptics","kr_ak_handle","weaponWrap"};
		chamberableFrom[] = {"kr_Ammo_545x39_T","kr_Ammo_545x39_PRS","kr_Ammo_545x39_US","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_PS","kr_Ammo_545x39_BT","kr_Ammo_545x39_HP","kr_Ammo_545x39_BS","Ammo_545x39Tracer","Ammo_545x39"};
		magazines[] = {"Mag_545x39_6L18_45Rnd","Mag_545x39_6L20_30Rnd","Mag_545x39_6L23_30Rnd","Mag_545x39_6L23_plum_30Rnd","Mag_545x39_6L26_45Rnd","Mag_545x39_6L31_60Rnd","Mag_545x39_ak12_std_30Rnd","Mag_545x39_magpul_pmag_30Rnd","Mag_545x39_ak12_drum_95Rnd","Mag_545x39_saiga_545_10Rnd"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak12\data\ak12_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak12\data\ak12.rvmat"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_sight","hide_fgrip_1","hide_light_1"};
		
		class kr_firearms
		{
			handguardSlotName = "kr_ak12_hndgrd";
			buttstockSlotName = "kr_ak_fstock";
			receiverSlotName = "kr_ak12_receiver";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 80;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak12\data\ak12.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak12\data\ak12_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak12\data\ak12_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak12\data\ak12_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak12\data\ak12_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_ak12: kr_ak12_Base
	{
		scope = 2;
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\ak12\ak12.p3d";
		weight = 2850;
		WeaponLength = 0.645;
		barrelArmor = 8.244;
		itemSize[] = {8,3};
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.8,0.8,0.8};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.45x39";
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
