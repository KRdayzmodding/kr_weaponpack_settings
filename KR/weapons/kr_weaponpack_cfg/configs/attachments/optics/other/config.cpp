class CfgPatches
{
	class kr_attachmetns_optics_other
	{
		units[] = {"kr_optics_pu_scope","kr_optics_F2000_scope","kr_scope_g36_carryHandle","kr_scope_g36_carryHandle_reddot","kr_ironsight_sight_snake_eyes","kr_ironsight_sight_truglo_tfx","kr_ironsight_sight_zev_tech"};
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
	class kr_optics_pu_scope: ItemOptics_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_puscope";
		descriptionShort = "$STR_kr_weapons_attachments_optics_puscope_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\optics\other\scope_mosin_scope_pu.p3d";
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 16;
		reversed = 0;
		weight = 800;
		itemSize[] = {3,1};
		inventorySlot[] = {"kr_weaponOpticsMosin","weaponOpticsMosin"};
		simulation = "itemoptics";
		dispersionModifier = 0;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
/*
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
*/
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_Mosin";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\other\data\pu.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\other\data\pu_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\other\data\pu_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\other\data\pu_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack\attachments\optics\other\data\pu_destruct.rvmat"}}};
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
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/2.5";
			opticsZoomMax = "0.3926/2.5";
			opticsZoomInit = "0.3926/2.5";
			distanceZoomMin = 100;
			distanceZoomMax = 1300;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.28,0.01};
			PPLensProperties[] = {1.0,0.1,0.0,0.0};
			PPBlurProperties = 0.2;
		};
	};
	class kr_optics_F2000_scope: ItemOptics_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_f2000";
		descriptionShort = "$STR_kr_weapons_attachments_optics_f2000_dsc";
		model = "\kr\weapons\kr_weaponpack\attachments\optics\other\scope_f2000_scope.p3d";
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 970;
		itemSize[] = {4,2};
		inventorySlot[] = {"kr_weaponOpticsF2000"};
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.0015;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.75,0.75,0.75};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "FN F2000";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","kr\weapons\kr_weaponpack\attachments\optics\other\data\f2000_scope.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","kr\weapons\kr_weaponpack\attachments\optics\other\data\f2000_scope_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","kr\weapons\kr_weaponpack\attachments\optics\other\data\f2000_scope_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","kr\weapons\kr_weaponpack\attachments\optics\other\data\f2000_scope_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","kr\weapons\kr_weaponpack\attachments\optics\other\data\f2000_scope_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.0;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/1.6";
			opticsZoomMax = "0.3926/2.5";
			opticsZoomInit = "0.3926/1.6";
			discretefov[] = {"0.3926/1.6","0.3926/2.5"};
			distanceZoomMin = 50;
			distanceZoomMax = 300;
			discreteDistance[] = {50,100,200,300};
			discreteDistanceInitIndex = 1;
			PPMaskProperties[] = {0.5,0.5,0.08,0.01};
			PPLensProperties[] = {1.4,0.1,0.0,0.0};
			PPBlurProperties = 0.05;
			PPMaskProperties_x2[] = {0.5,0.5,0.135,0.01};
			PPLensProperties_x2[] = {1.4,0.1,0.0,0.0};
			PPBlurProperties_x2 = 0.15;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
	};
	class kr_scope_g36_carryHandle: ItemOptics_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_g36_carryHandle";
		descriptionShort = "$STR_kr_weapons_attachments_optics_g36_carryHandle_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\other\scope_g36_carryHandle.p3d";
		reversed = 0;
		weight = 680;
		itemSize[] = {3,1};
		rotationFlags = 17;
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.6,0.6,0.6};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		inventorySlot[] = {"kr_weaponOpticsG36"};
		simpleHiddenSelections[] = {"hide"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "H&K G36";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\other\data\g36_optic.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\other\data\g36_optic_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\other\data\g36_optic_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\other\data\g36_optic_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\other\data\g36_optic_destruct.rvmat"}}};
				};
			};
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
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "KR\weapons\kr_weaponpack_2\attachments\optics\other\opticview_g36_carryHandle.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/2";
			opticsZoomMax = "0.3926/2";
			opticsZoomInit = "0.3926/2";
			discretefov[] = {"0.3926/2"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.42,0.1};
			PPLensProperties[] = {0.3,0.02,0.0,0.0};
			PPBlurProperties = 0.35;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
	};
	class kr_scope_g36_carryHandle_reddot: ItemOptics_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_g36_carryHandle_reddot";
		descriptionShort = "$STR_kr_weapons_attachments_optics_g36_carryHandle_reddot_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\other\scope_g36_carryHandle_reddot.p3d";
		simpleHiddenSelections[] = {"hide"};
		reversed = 0;
		weight = 680;
		itemSize[] = {3,2};
		dispersionModifier = -0.0015;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.75,0.75,0.75};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		inventorySlot[] = {"kr_weaponOpticsG36"};
		rotationFlags = 17;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "H&K G36";
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\other\data\g36_optic_reddot.rvmat"}},{0.7,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\other\data\g36_optic_reddot_worn.rvmat"}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\other\data\g36_optic_reddot_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\other\data\g36_optic_reddot_badlydamage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","KR\weapons\kr_weaponpack_2\attachments\optics\other\data\g36_optic_reddot_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "KR\weapons\kr_weaponpack_2\attachments\optics\other\opticview_g36_carryHandle.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.42,0.35};
			PPLensProperties[] = {0.3,0.02,0.0,0.0};
			PPBlurProperties = 0.35;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
	};
	class kr_ironsight_sight_snake_eyes: ItemOptics_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_ironsight_snake_eyes";
		descriptionShort = "$STR_kr_weapons_attachments_optics_ironsight_snake_eyes_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\other\sight_snake_eyes.p3d";
		inventorySlot[] = {"kr_pistolOptics_g17"};
		simpleHiddenSelections[] = {"attached","detached"};
		reversed = 0;
		weight = 20;
		itemSize[] = {1,1};
		dispersionModifier = -0.002;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {};
		hiddenSelections[] = {};
		rotationFlags = 17;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_snake_eyes.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_snake_eyes_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_snake_eyes_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_snake_eyes_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_snake_eyes_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.0;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.0,0.0,0.0,0.0};
			PPLensProperties[] = {0,0.0,0,0};
			PPDOFProperties[] = {0,0.1,20,200,4,10};
			PPBlurProperties = 0.0;
		};
	};
	class kr_ironsight_sight_truglo_tfx: ItemOptics_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_ironsight_truglo_tfx";
		descriptionShort = "$STR_kr_weapons_attachments_optics_ironsight_truglo_tfx_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\other\sight_truglo_tfx.p3d";
		inventorySlot[] = {"kr_pistolOptics_g17"};
		simpleHiddenSelections[] = {"attached","detached"};
		reversed = 0;
		weight = 20;
		itemSize[] = {1,1};
		dispersionModifier = -0.0015;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {};
		hiddenSelections[] = {};
		rotationFlags = 17;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_truglo_tfx.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_truglo_tfx_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_truglo_tfx_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_truglo_tfx_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_truglo_tfx_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.0;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.0,0.0,0.0,0.0};
			PPLensProperties[] = {0,0.0,0,0};
			PPDOFProperties[] = {0,0.1,20,200,4,10};
			PPBlurProperties = 0.0;
		};
	};
	class kr_ironsight_sight_zev_tech: ItemOptics_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_ironsight_zev_tech";
		descriptionShort = "$STR_kr_weapons_attachments_optics_ironsight_zev_tech_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\other\sight_zev_tech.p3d";
		inventorySlot[] = {"kr_pistolOptics_g17"};
		simpleHiddenSelections[] = {"attached","detached"};
		reversed = 0;
		weight = 20;
		itemSize[] = {1,1};
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {};
		hiddenSelections[] = {};
		rotationFlags = 17;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_zev_tech.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_zev_tech_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_zev_tech_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_zev_tech_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\optics\other\data\sight_zev_tech_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.0;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.0,0.0,0.0,0.0};
			PPLensProperties[] = {0,0.0,0,0};
			PPDOFProperties[] = {0,0.1,20,200,4,10};
			PPBlurProperties = 0.0;
		};
	};

	class kr_optics_AUG_a1: ItemOptics
	{
		scope = 1;
		model = "\KR\weapons\kr_weaponpack_2\attachments\optics\other\scope_aug_a1.p3d";
		weight = 1;
		inventorySlot[] = {"kr_weaponOpticsAUG"};
		reversed = 0;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.5236/1.5";
			opticsZoomMax = "0.5236/1.5";
			opticsZoomInit = "0.5236/1.5";
			distanceZoomMin = 50;
			distanceZoomMax = 400;
			discreteDistance[] = {50,100,150,200,300,400};
			discreteDistanceInitIndex = 1;
			PPMaskProperties[] = {0.5,0.5,0.185,0.01};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0.1;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 400;
			discreteDistance[] = {50,100,150,200,300,400};
			discreteDistanceInitIndex = 1;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
	};
};
