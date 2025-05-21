class CfgPatches
{
	class kr_attachmetns_optics_picatinny
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics;
	class ItemOptics_Base;
	class kr_ItemOpticsPicatinny_base: ItemOptics_Base
	{
		scope = 0;
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT"};
		simpleHiddenSelections[] = {"hide"};
		animClass = "Binoculars";
		debug_ItemCategory = 3;
		rotationFlags = 16;
		simulation = "itemoptics";
		hideIronsights = 0;
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};

/////////////////////////////HOLOSIGHTS

/////// T1
	class kr_holosight_belomo_pk06: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_belomo_pk6";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_belomo_pk6_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_belomo_pk6.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","PistolHolo1","PistolHolo2"};
		reversed = 0;
		weight = 90;
		itemSize[] = {2,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\belomo_pk6.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\belomo_pk6_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\belomo_pk6_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\belomo_pk6_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\belomo_pk6_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\belomo_pk_06_1_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			PPDOFProperties[] = {0,0.1,20,200,4,10};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_burris_fast_fire: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_burris_fast_fire";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_burris_fast_fire_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\holosight_burris_fast_fire.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","PistolHolo1","PistolHolo2"};
		reversed = 0;
		weight = 90;
		itemSize[] = {2,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\burris_fast_fire.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\burris_fast_fire_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\burris_fast_fire_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\burris_fast_fire_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\burris_fast_fire_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack_2\attachments\optics\reticles\trijicon_rmr_mark_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			PPDOFProperties[] = {0,0.1,20,200,4,10};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_aimpoint_pro: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_aimpoint_pro";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_aimpoint_pro_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_aimpoint_pro.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
		reversed = 0;
		weight = 370;
		itemSize[] = {2,1};
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.95};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\aimpoint_pro.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\aimpoint_pro_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\aimpoint_pro_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\aimpoint_pro_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\aimpoint_pro_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 200;
			discreteDistance[] = {50,100,150,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\aimpoint_micro_ca.paa";
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class kr_holosight_aksion_ekp_8: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_aksion_ekp_8";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_aksion_ekp_8_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_aksion_ekp_8.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
		reversed = 0;
		weight = 273;
		itemSize[] = {2,1};
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.95};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\aksion_ekp_8.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\aksion_ekp_8_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\aksion_ekp_8_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\aksion_ekp_8_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\aksion_ekp_8_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\ekp_8_reticle1_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};

/////// T2
	class kr_holosight_monstrum_compact: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_monstrum_compact";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_monstrum_compact_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_monstrum_compact.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
		reversed = 0;
		weight = 425;
		itemSize[] = {2,1};
		dispersionModifier = -0.0006;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.94};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\monstrum_compact.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\monstrum_compact_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\monstrum_compact_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\monstrum_compact_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\monstrum_compact_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\monstrum_compact_1_ca.paa";
			opticsZoomMin = "0.5236/2";
			opticsZoomMax = "0.5236/2";
			opticsZoomInit = "0.5236/2";
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.135,0.01};
			PPLensProperties[] = {0.75,0.02,0.0,0.0};
			PPBlurProperties = 0.05;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_leupold_deltapoint: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_leupold_deltapoint";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_leupold_deltapoint_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\holosight_leupold_deltapoint.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","PistolHolo1","PistolHolo2"};
		reversed = 0;
		weight = 90;
		itemSize[] = {2,1};
		dispersionModifier = -0.0003;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\leupold_deltapoint.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\leupold_deltapoint_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\leupold_deltapoint_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\leupold_deltapoint_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\leupold_deltapoint_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack_2\attachments\optics\reticles\deltapoint_mark_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			PPDOFProperties[] = {0,0.1,20,200,4,10};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_valday_1p87: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_valday_1p87";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_valday_1p87_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_valday_1p87.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
		reversed = 0;
		weight = 297;
		itemSize[] = {2,1};
		dispersionModifier = -0.0006;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.94};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_1p87.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_1p87_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_1p87_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_1p87_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_1p87_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\valday_1p87_red_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_trijicon_rmr: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_trijicon_rmr";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_trijicon_rmr_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\holosight_trijicon_rmr.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","PistolHolo1","PistolHolo2"};
		reversed = 0;
		weight = 90;
		itemSize[] = {2,1};
		dispersionModifier = -0.0003;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\trijicon_rmr.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\trijicon_rmr_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\trijicon_rmr_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\trijicon_rmr_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\trijicon_rmr_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack_2\attachments\optics\reticles\trijicon_rmr_mark_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			PPDOFProperties[] = {0,0.1,20,200,4,10};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};

	/////// T3
	class kr_holosight_eotech_xps3: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_eotech_xps3";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_eotech_xps3_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_eotech_xps3.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
		reversed = 0;
		weight = 255;
		itemSize[] = {2,1};
		dispersionModifier = -0.0007;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.93};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\eotech_xps3.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\eotech_xps3_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\eotech_xps3_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\eotech_xps3_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\eotech_xps3_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\eotech_xps3_1_red_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_OKP_7: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_OKP_7";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_OKP_7_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_OKP_7.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
		reversed = 0;
		weight = 255;
		itemSize[] = {2,1};
		dispersionModifier = -0.0007;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.93};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\OKP_7.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\OKP_7_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\OKP_7_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\OKP_7_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\OKP_7_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\okp7_reticle1_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_valday_krechet: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_valday_krechet";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_valday_krechet_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_valday_krechet.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
		reversed = 0;
		weight = 350;
		itemSize[] = {2,1};
		dispersionModifier = -0.0007;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.93};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_krechet.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_krechet_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_krechet_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_krechet_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_krechet_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\valday_krechet_red_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_vortex_razor_amg_uh1: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_holosight_vortex_razor_amg_uh1";
		descriptionShort = "$STR_kr_weapons_attachments_optics_holosight_vortex_razor_amg_uh1_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_vortex_razor_amg_uh1.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
		reversed = 0;
		weight = 334;
		itemSize[] = {2,1};
		dispersionModifier = -0.0007;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.93};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\vortex_razor_amg_uh1.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\vortex_razor_amg_uh1_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\vortex_razor_amg_uh1_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\vortex_razor_amg_uh1_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\vortex_razor_amg_uh1_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\vortex_razor_amg_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};

	/////// T4
	class kr_holosight_es_hco: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_es_hco";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_es_hco_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_es_hco.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
		reversed = 0;
		weight = 433;
		itemSize[] = {2,1};
		dispersionModifier = -0.0008;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.92};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\es_hco.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\es_hco_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\es_hco_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\es_hco_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\es_hco_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\elcan_specter_hco_red_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_holosun_aems: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_reflex_holosun_aems";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_holosun_aems_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_holosun_aems.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
		reversed = 0;
		weight = 433;
		itemSize[] = {2,1};
		dispersionModifier = -0.0008;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.92};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\holosun_aems.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\holosun_aems_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\holosun_aems_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\holosun_aems_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\holosun_aems_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\holosun_aems_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_holosun_aems_v2: kr_holosight_holosun_aems
	{
		displayName = "$STR_kr_weapons_attachments_optics_reflex_holosun_aems_v2";
		descriptionShort = "$STR_kr_weapons_attachments_optics_reflex_holosun_aems_v2_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\holosight_holosun_aems_v2.p3d";
		class kr_description
		{
			kr_tier = 6;
			kr_type = "#STR_Picattinny";
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\important_reticle_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
	};

/////////////////////////////SCOPES

/////// T1
	class kr_scope_elcan_specter_dr4: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_scope_elcan_specter_dr4";
		descriptionShort = "$STR_kr_weapons_attachments_scope_elcan_specter_dr4_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\scope_elcan_specter_dr4.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT"};
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 16;
		reversed = 0;
		weight = 640;
		itemSize[] = {2,1};
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.0009;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.9};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\elcan_specter_dr4.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\elcan_specter_dr4_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\elcan_specter_dr4_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\elcan_specter_dr4_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\elcan_specter_dr4_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.6/3";
			opticsZoomMax = "0.6/3";
			opticsZoomInit = "0.6/3";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.23,0.01};
			PPLensProperties[] = {1.2,0.0,0.0,0.0};
			PPBlurProperties = 0.3;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = "0.6/2";
			opticsZoomMax = "0.6/2";
			opticsZoomInit = "0.6/2";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
	};
	class kr_scope_acog_ta01nsn: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_scope_acog_ta01nsn";
		descriptionShort = "$STR_kr_weapons_attachments_scope_acog_ta01nsn_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\scope_acog_ta01nsn.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT"};
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 16;
		reversed = 0;
		weight = 510;
		itemSize[] = {2,1};
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.0009;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.9};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\acog_ta01nsn.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\acog_ta01nsn_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\acog_ta01nsn_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\acog_ta01nsn_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\acog_ta01nsn_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/3";
			opticsZoomMax = "0.3926/3";
			opticsZoomInit = "0.3926/3";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.29,0.01};
			PPLensProperties[] = {1.4,0.01,0.0,0.0};
			PPBlurProperties = 0.45;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 25;
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
	};

/////// T2
	class kr_scope_sig_bravo4: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_scope_sig_bravo4";
		descriptionShort = "$STR_kr_weapons_attachments_optics_scope_sig_bravo4_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\scope_sig_bravo4.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT"};
		reversed = 0;
		weight = 419;
		itemSize[] = {2,1};
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,0.95,1.0};
		swayModifier[] = {1.0,1.0,0.88};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\sig_bravo4.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\sig_bravo4_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\sig_bravo4_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\sig_bravo4_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\sig_bravo4_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/3";
			opticsZoomMax = "0.3926/3";
			opticsZoomInit = "0.3926/3";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.26,0.01};
			PPLensProperties[] = {2.0,0.01,0.0,0.0};
			PPBlurProperties = 0.15;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_scope_leupold_mark4_hamr: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_scope_leupold_mark4_hamr";
		descriptionShort = "$STR_kr_weapons_attachments_scope_leupold_mark4_hamr_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\scope_leupold_mark4_hamr.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT"};
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 16;
		reversed = 0;
		weight = 411;
		itemSize[] = {2,1};
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,0.95,1.0};
		swayModifier[] = {1.0,1.0,0.88};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\leupold_mark4_hamr.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\leupold_mark4_hamr_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\leupold_mark4_hamr_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\leupold_mark4_hamr_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\leupold_mark4_hamr_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.6/4";
			opticsZoomMax = "0.6/4";
			opticsZoomInit = "0.6/4";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.28,0.01};
			PPLensProperties[] = {1.2,0.01,0.0,0.0};
			PPBlurProperties = 0.3;
		};
	};

/////// T3
	class kr_scope_acog_ta11: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_scope_acog_ta11";
		descriptionShort = "$STR_kr_weapons_attachments_scope_acog_ta11_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\scope_acog_ta11.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT"};
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 16;
		reversed = 0;
		weight = 520;
		itemSize[] = {2,1};
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.0012;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,0.92,1.0};
		swayModifier[] = {1.0,1.0,0.85};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\acog_ta11.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\acog_ta11_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\acog_ta11_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\acog_ta11_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\acog_ta11_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/3.5";
			opticsZoomMax = "0.3926/3.5";
			opticsZoomInit = "0.3926/3.5";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.27,0.01};
			PPLensProperties[] = {0.5,0.02,0.0,0.0};
			PPBlurProperties = 0.1;
		};
	};
	class kr_scope_valday_ps320: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_scope_valday_ps320";
		descriptionShort = "$STR_kr_weapons_attachments_scope_valday_ps320_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\scope_valday_ps320.p3d";
		inventorySlot[] = {"weaponOpticsB","weaponOpticsB1","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT"};
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		attachments[] = {"BatteryD"};
		rotationFlags = 16;
		reversed = 0;
		weight = 570;
		itemSize[] = {2,1};
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.0012;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,0.92,1.0};
		swayModifier[] = {1.0,1.0,0.85};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";

		hiddenSelections[] = {"reddot","reticle_nonglow"};
		hiddenSelectionsTextures[] = {"","KR\weapons\kr_weaponpack\attachments\optics\reticles\valday_ps320_ca.paa"};
		hiddenSelectionsMaterials[] = {"","dz\weapons\attachments\optics\data\default_black.rvmat"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_ps320.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_ps320_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_ps320_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_ps320_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\valday_ps320_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyescope";
			cameraDir = "cameradir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur3"};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\valday_ps320_glow_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\tritium_medium.rvmat";
			/*
			opticsZoomMin = "0.1";
			opticsZoomMax = "0.3926/6";
			opticsZoomInit = "0.3926/6";
			discretefov[] = {"0.1","0.3926/6"};
			*/
			opticsZoomMin = "0.3926/1.0";
			opticsZoomMax = "0.3926/6.0";
			opticsZoomInit = "0.3926/6.0";
			discretefov[] = {"0.07/0.4","0.3926/6.0"};
			distanceZoomMin = 300;
			distanceZoomMax = 900;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 2;
			PPMaskProperties[] = {0.5, 0.5, 0.2, 0.01};
			PPLensProperties[] = {0.8, 0.0, 0.0, 0.0};
			PPBlurProperties = 0.1;

			PPMaskProperties_x6[] = {0.5, 0.5, 0.55, 0.01};
			PPLensProperties_x6[] = {0.9, 0.0, 0.0, 0.0};
			PPBlurProperties_x6 = 0.45;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};

/////////////////////////////OPTICS

/////// T1
	class kr_optics_sb_pm2: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_sb_pm2";
		descriptionShort = "$STR_kr_weapons_attachments_optics_sb_pm2_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\optic_sb_pm2.p3d";
		reversed = 0;
		weight = 1150;
		itemSize[] = {3,1};
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.9,1.0,0.9};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		hideIronsights = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\sb_pm2.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\sb_pm2_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\sb_pm2_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\sb_pm2_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\sb_pm2_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "KR\weapons\kr_weaponpack\attachments\optics\picatinny\opticview_sb_pm2.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/12";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/12"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.43,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties = 0.3;
		};
	};
	class kr_optics_hunting: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_HuntingOptic0";
		descriptionShort = "$STR_cfgVehicles_HuntingOptic1";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\optic_kr_hunting.p3d";
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 700;
		itemSize[] = {4,1};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.9,1.0,0.9};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		hideIronsights = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\hunting.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\hunting_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\hunting_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\hunting_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\hunting_destruct.rvmat"}}
					};				
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "\DZ\weapons\attachments\optics\opticview_longrange.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/12";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/12"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.43,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties = 0.3;
		};
	};

/////// T2
class kr_optics_vomz_pilad: kr_ItemOpticsPicatinny_base
{
	scope = 2;
	displayName = "$STR_kr_weapons_attachments_optics_vomz_pilad";
	descriptionShort = "$STR_kr_weapons_attachments_optics_vomz_pilad_dsc";
	model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\optic_vomz_pilad.p3d";
	reversed = 0;
	weight = 550;
	itemSize[] = {3,1};
	dispersionModifier = -0.0012;
	dispersionCondition = "true";
	recoilModifier[] = {1.0,0.9,1.0};
	swayModifier[] = {0.88,1.0,0.88};
	memoryPointCamera = "eyeScope";
	cameraDir = "cameraDir";
	hideIronsights = 1;
	class kr_Gunplay: kr_Gunplay_Base
	{
		ergonomics = -12;
	};
	class kr_description
	{
		kr_tier = 2;
		kr_type = "#STR_Picattinny";
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 50;
				healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\vomz_pilad.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\vomz_pilad_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\vomz_pilad_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\vomz_pilad_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\vomz_pilad_destruct.rvmat"}}};
			};
		};
	};
	class OpticsInfo
	{
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		useModelOptics = 1;
		modelOptics = "KR\weapons\kr_weaponpack\attachments\optics\picatinny\opticview_vomz_pilad.p3d";
		preloadOpticType = "Preload2DOptic_Longrange";
		opticsDisablePeripherialVision = 0.67;
		opticsFlare = 1;
		opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
		opticsZoomMin = "0.32/4";
		opticsZoomMax = "0.32/4";
		opticsZoomInit = "0.32/4";
		discretefov[] = {"0.32/4"};
		discreteInitIndex = 0;
		distanceZoomMin = 100;
		distanceZoomMax = 1000;
		discreteDistance[] = {200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 0;
		PPMaskProperties[] = {0.5,0.5,0.43,0.1};
		PPLensProperties[] = {0.3,0.15,0,0};
		PPBlurProperties = 0.3;
	};
};

/////// T3
class kr_optics_burris_fullfield_tac30: kr_ItemOpticsPicatinny_base
{
	scope = 2;
	displayName = "$STR_kr_weapons_attachments_optics_burris_fullfield_tac30";
	descriptionShort = "$STR_kr_weapons_attachments_optics_burris_fullfield_tac30_dsc";
	model = "\KR\weapons\kr_weaponpack\attachments\optics\picatinny\optic_burris_fullfield_tac30.p3d";
	reversed = 0;
	weight = 680;
	itemSize[] = {3,1};
	dispersionModifier = -0.0013;
	dispersionCondition = "true";
	recoilModifier[] = {1.0,0.88,1.0};
	swayModifier[] = {0.86,1.0,0.86};
	memoryPointCamera = "eyeScope";
	cameraDir = "cameraDir";
	hideIronsights = 1;
	class kr_Gunplay: kr_Gunplay_Base
	{
		ergonomics = -13;
	};
	class kr_description
	{
		kr_tier = 3;
		kr_type = "#STR_Picattinny";
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 50;
				healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\burris_fullfield_tac30.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\burris_fullfield_tac30_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\burris_fullfield_tac30_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\burris_fullfield_tac30_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\picatinny\data\burris_fullfield_tac30_destruct.rvmat"}}};
			};
		};
	};
	class OpticsInfo
	{
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		useModelOptics = 1;
		modelOptics = "KR\weapons\kr_weaponpack\attachments\optics\picatinny\opticview_burris_fullfield_tac30.p3d";
		preloadOpticType = "Preload2DOptic_Longrange";
		opticsDisablePeripherialVision = 0.67;
		opticsFlare = 1;
		opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
		opticsZoomMin = "0.3926/1";
		opticsZoomMax = "0.3926/4";
		opticsZoomInit = "0.3926/4";
		discretefov[] = {"0.3926/1","0.3926/4"};
		discreteInitIndex = 0;
		distanceZoomMin = 200;
		distanceZoomMax = 800;
		discreteDistance[] = {200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 0;
		PPMaskProperties[] = {0.5,0.5,0.43,0.1};
		PPLensProperties[] = {0.3,0.15,0,0};
		PPBlurProperties = 0.3;
	};
};


/////// T4
	class kr_optics_vortex_viper: kr_ItemOpticsPicatinny_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_vortex_viper";
		descriptionShort = "$STR_kr_weapons_attachments_optics_vortex_viper_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\optic_vortex_viper.p3d";
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 1400;
		itemSize[] = {5,1};
		simulation = "itemoptics";
		dispersionModifier = -0.0015;
		dispersionCondition = "true";
		recoilModifier[] = {1.0,0.86,1.0};
		swayModifier[] = {0.84,1.0,0.84};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		hideIronsights = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_Picattinny";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\vortex_viper.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\vortex_viper_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\vortex_viper_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\vortex_viper_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\data\vortex_viper_destruct.rvmat"}}
					};				
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "KR\weapons\kr_weaponpack_2\attachments\optics\picatinny\opticview_vortex_viper.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.15;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/8";
			opticsZoomMax = "0.3926/24";
			opticsZoomInit = "0.3926/8";
			discretefov[] = {"0.3926/8","0.3926/16","0.3926/24"};
			discreteInitIndex = 0;
			distanceZoomMin = 300;
			distanceZoomMax = 1200;
			discreteDistance[] = {300,500,600,700,750,800,850,900,950,1000,1050,1100,1150,1200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.0,0.0,0.0,0.0};
			PPLensProperties[] = {0.0,0.0,0,0};
			PPBlurProperties = 0.0;
		};
	};
};