class CfgPatches
{
	class kr_attachmetns_optics_dovetail
	{
		units[] = {"kr_holosight_ekp_8_02","kr_holosight_okp7","kr_holosight_pk_1","kr_holosight_pk_aa","kr_scope_pso1","kr_scope_pso1m2_1","kr_optics_npz_1p29","kr_optics_npz_nspum"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class ItemOptics_Base;
	class kr_ItemOpticsDovetail_base: ItemOptics_Base
	{
		scope = 0;
		inventorySlot[] = {"weaponOpticsAK"};
		simpleHiddenSelections[] = {"hide"};
		animClass = "Binoculars";
		debug_ItemCategory = 3;
		rotationFlags = 16;
		simulation = "itemoptics";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		attachments[] = {"BatteryD"};
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
	class kr_holosight_ekp_8_02: kr_ItemOpticsDovetail_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_ekp_8_02";
		descriptionShort = "$STR_kr_weapons_attachments_optics_ekp_8_02_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\optics\dovetail\holosight_ekp_8_02.p3d";
		rotationFlags = 16;
		reversed = 0;
		weight = 273;
		itemSize[] = {2,2};
		dispersionModifier = -0.0005;
		dispersionCondition = "false";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Dovetail";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra.rvmat"}},{0.7,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra.rvmat"}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_destruct.rvmat"}}};
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
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\ekp_8_reticle2_ca.paa";
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_okp7: kr_ItemOpticsDovetail_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_okp7";
		descriptionShort = "$STR_kr_weapons_attachments_optics_okp7_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\optics\dovetail\holosight_okp7.p3d";
		rotationFlags = 16;
		reversed = 0;
		weight = 295;
		itemSize[] = {2,2};
		dispersionModifier = -0.0005;
		dispersionCondition = "false";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Dovetail";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra.rvmat"}},{0.7,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra.rvmat"}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_destruct.rvmat"}}};
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
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\okp7_reticle2_ca.paa";
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_holosight_pk_1: kr_ItemOpticsDovetail_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_pk_1";
		descriptionShort = "$STR_kr_weapons_attachments_optics_pk_1_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\optics\dovetail\holosight_pk_1.p3d";
		rotationFlags = 16;
		reversed = 0;
		weight = 520;
		itemSize[] = {2,2};
		dispersionModifier = -0.0005;
		dispersionCondition = "false";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {};
		attachments[] = {};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "#STR_Dovetail";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra.rvmat"}},{0.7,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra.rvmat"}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_destruct.rvmat"}}};
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
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\npz_pk_1_reticle_ca.paa";
		};
	};
	class kr_holosight_pk_aa: kr_ItemOpticsDovetail_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_pk_aa";
		descriptionShort = "$STR_kr_weapons_attachments_optics_pk_aa_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\optics\dovetail\holosight_pk_aa.p3d";
		rotationFlags = 16;
		reversed = 0;
		weight = 450;
		itemSize[] = {2,2};
		dispersionModifier = -0.0005;
		dispersionCondition = "false";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_Dovetail";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra.rvmat"}},{0.7,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra.rvmat"}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat","DZ\weapons\attachments\optics\data\Red_dot_kobra_destruct.rvmat"}}};
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
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\pk_aa_reticle_ca.paa";
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_scope_pso1: kr_ItemOpticsDovetail_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_pso1";
		descriptionShort = "$STR_kr_weapons_attachments_optics_pso1_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\optics\dovetail\scope_pso_1.p3d";
		debug_ItemCategory = 3;
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 600;
		itemSize[] = {3,2};
		simulation = "itemoptics";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		dispersionModifier = -0.001;
		dispersionCondition = "false";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot","reticle_nonglow"};
		hiddenSelectionsTextures[] = {"","KR\weapons\kr_weaponpack\attachments\optics\reticles\pso_1_reticle_ca.paa"};
		hiddenSelectionsMaterials[] = {"","dz\weapons\attachments\optics\data\default_black.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Dovetail";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\data\svd_scope.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\data\svd_scope_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\data\svd_scope_destruct.rvmat"}}};
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
			opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur3"};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\pso_1_reticle_glow_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\tritium_medium.rvmat";
			opticsZoomMin = "0.3926/4*5/4";
			opticsZoomMax = "0.3926/4*5/4";
			opticsZoomInit = "0.3926/4*5/4";
			distanceZoomMin = 50;
			distanceZoomMax = 300;
			discreteDistance[] = {50,75,100,125,150,200,250,300};
			discreteDistanceInitIndex = 5;
			PPMaskProperties[] = {0.5,0.5,0.36,0.045};
			PPLensProperties[] = {0.75,0.25,0,0};
			PPBlurProperties = 0.6;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_scope_pso1m2_1: kr_ItemOpticsDovetail_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_pso1m2_1";
		descriptionShort = "$STR_kr_weapons_attachments_optics_pso1m2_1_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\optics\dovetail\scope_pso_1m2_1.p3d";
		debug_ItemCategory = 3;
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 600;
		itemSize[] = {3,2};
		simulation = "itemoptics";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		dispersionModifier = -0.001;
		dispersionCondition = "false";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot","reticle_nonglow"};
		hiddenSelectionsTextures[] = {"","KR\weapons\kr_weaponpack\attachments\optics\reticles\pso_1m2_1_reticle_ca.paa"};
		hiddenSelectionsMaterials[] = {"","dz\weapons\attachments\optics\data\default_black.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_Dovetail";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\data\svd_scope.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\data\svd_scope_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\data\svd_scope_destruct.rvmat"}}};
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
			opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur3"};
			opticSightTexture = "KR\weapons\kr_weaponpack\attachments\optics\reticles\pso_1m2_1_reticle_glow_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\tritium_medium.rvmat";
			opticsZoomMin = "0.3926/4*5/4";
			opticsZoomMax = "0.3926/4*5/4";
			opticsZoomInit = "0.3926/4*5/4";
			distanceZoomMin = 50;
			distanceZoomMax = 300;
			discreteDistance[] = {50,75,100,125,150,200,250,300};
			discreteDistanceInitIndex = 5;
			PPMaskProperties[] = {0.5,0.5,0.36,0.045};
			PPLensProperties[] = {0.75,0.25,0,0};
			PPBlurProperties = 0.6;
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_optics_npz_1p29: kr_ItemOpticsDovetail_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_npz_1p29";
		descriptionShort = "$STR_kr_weapons_attachments_optics_npz_1p29_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\optics\dovetail\optic_npz_1p29.p3d";
		weight = 795;
		itemSize[] = {4,3};
		inventorySlot[] = {"weaponOpticsDT","weaponOpticsAK"};
		dispersionModifier = -0.001;
		dispersionCondition = "false";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		repairableWithKits[] = {};
		repairCosts[] = {};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Dovetail";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\optic_1PN-51.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\optic_1PN-51_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\optics\data\optic_1PN-51_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "KR\weapons\kr_weaponpack\attachments\optics\dovetail\npz_1p29_opticview.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.1;
			opticsFlare = 0;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.4/4.0";
			opticsZoomMax = "0.4/4.0";
			opticsZoomInit = "0.4/4.0";
			distanceZoomMin = 50;
			distanceZoomMax = 300;
			discreteDistance[] = {50,75,100,125,150,200,250,300};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.9,0.1};
			PPLensProperties[] = {0.0,0.0,0,0};
			PPBlurProperties = 0.75;
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
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class kr_optics_npz_nspum: kr_ItemOpticsDovetail_base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_optics_npz_nspum";
		descriptionShort = "$STR_kr_weapons_attachments_optics_npz_nspum_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\optics\dovetail\optic_npz_nspum.p3d";
		weight = 1900;
		itemSize[] = {4,3};
		inventorySlot[] = {"weaponOpticsDT","weaponOpticsAK"};
		dispersionModifier = -0.001;
		dispersionCondition = "false";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope_temp";
		cameraDir = "cameraDir";
		NVOptic = 1;
		repairableWithKits[] = {};
		repairCosts[] = {};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_Dovetail";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\optic_1PN-51.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\optic_1PN-51_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\optics\data\optic_1PN-51_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "KR\weapons\kr_weaponpack\attachments\optics\dovetail\npz_nspum_opticview.p3d";
			preloadOpticType = "Preload2DOptic_1PN51";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/3.5";
			opticsZoomMax = "0.3926/3.5";
			opticsZoomInit = "0.3926/3.5";
			distanceZoomMin = 50;
			distanceZoomMax = 20;
			discreteDistance[] = {50,100,150,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.1};
			PPLensProperties[] = {-1.25,1.0,0,0};
			PPBlurProperties = 0.75;
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
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
};
