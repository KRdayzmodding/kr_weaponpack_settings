class CfgPatches
{
	class kr_weapons_firearms_ak102
	{
		units[] = {};
		weapons[] = {"kr_ak102"};
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
	class kr_ak102_Base: kr_ak_Base
	{
		scope = 0;
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\ak102\ak102.p3d";
		attachments[] = {"kr_muzzle556","kr_ak_hndgrd","weaponOpticsAK","kr_ak_receiver","kr_ak_pistolgrip","kr_ak_fstock","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","weaponOptics","weaponOptics1","weaponOpticsDT","kr_ak_handle","weaponWrap"};
		weight = 2400;
		WeaponLength = 0.56;
		itemSize[] = {8,3};
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon","kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};
		magazines[] = {"Mag_556x45_CWP_30Rnd","Mag_556x45_6L29_30Rnd"};
		barrelArmor = 5.1;
		initSpeedMultiplier = 1.1;
		recoilModifier[] = {1.1,1.05,1.1};
		swayModifier[] = {1.2,1.0,1.15};
		isShort = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_firearms
		{
			receiverSlotName = "kr_ak_receiver";
			handguardSlotName = "kr_ak_hndgrd";
			buttstockSlotName = "kr_ak_fstock";
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.56x45";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.003;
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.003;
		};
		class NoiseShoot
		{
			strength = 70;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 300;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak102\data\ak102.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak102\data\ak102_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak102\data\ak102_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak102\data\ak102_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak102\data\ak102_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak102: kr_ak102_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_ak102";
		descriptionShort = "$STR_weapons_firearms_ak102_dsc";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak102\data\ak102_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak102\data\ak102.rvmat"};
	};
};
