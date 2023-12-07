class CfgPatches
{
	class kr_weapons_shotguns_toz34_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","DZ_Weapons_Firearms","kr_data","kr_weapons_shotguns_toz34"};
	};
};
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
		chamberableFrom[] = {"KR_Ammo_buckshot_5","KR_Ammo_buckshot_7","KR_Ammo_buckshot_8","KR_Ammo_RIP","KR_Ammo_FTX_custom","KR_Ammo_lead_slug","KR_Ammo_AP20","KR_Ammo_Grizzly40","KR_Ammo_frag_12","KR_Ammo_devastator","Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
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
			chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Mag_308WinSnaploader_2Rnd"};
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
	};
	class kr_toz34: kr_toz34_Base
	{
		barrelArmor = 1.6;
		initSpeedMultiplier = 1.05;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1};
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
			chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Mag_308WinSnaploader_2Rnd"};
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
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "12x76";
		};
	};
	class kr_toz34_sawed: kr_toz34_Base
	{
		barrelArmor = 1.6;
		initSpeedMultiplier = 1.05;
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {1.8,1.8,1};
		class kr_discription
		{
			kr_tier = 1;
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
	};
};
