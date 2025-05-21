class CfgPatches
{
	class kr_weapatt_muzzle545
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};



class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_suppressor_t2_Base;
	class kr_suppressor_t3_Base;
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	class kr_muzzle_t4_Base;
	class kr_muzzle545_flashhider_rpk16_std: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle545_flashhider_rpk16_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle545_flashhider_rpk16_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\muzzle545_flashhider_rpk16_std.p3d";
		weight = 90;
		itemModelLength = 0.085;
		barrelArmor = 15000;
		noiseShootModifier = -0.1;
		dispersionModifier = -0.0005;
		recoilModifier[] = {0.97,0.97,0.9};
		swayModifier[] = {1.0,1.0,1.0};
		inventorySlot[] = {"kr_muzzle545"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\rpk16_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\rpk16_std.rvmat"};

		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\rpk16_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\rpk16_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\rpk16_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\rpk16_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\rpk16_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle545_flashhider_hexagon_reactor: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle545_flashhider_hexagon_reactor";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle545_flashhider_hexagon_reactor_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\muzzle545_flashhider_hexagon_reactor.p3d";
		weight = 95;
		itemModelLength = 0.065;
		barrelArmor = 15000;
		noiseShootModifier = 0;
		dispersionModifier = -0.0009;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		inventorySlot[] = {"kr_muzzle545"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_reactor_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_reactor.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_reactor.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_reactor_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_reactor_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_reactor_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_reactor_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle545_flashhider_srvv_mbr_jet: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle545_flashhider_srvv_mbr_jet";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle545_flashhider_srvv_mbr_jet_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\muzzle545_flashhider_srvv_mbr_jet.p3d";
		weight = 110;
		itemModelLength = 0.09;
		barrelArmor = 12000;
		noiseShootModifier = -0.13;
		dispersionModifier = -0.0005;
		recoilModifier[] = {0.95,0.95,0.87};
		swayModifier[] = {1.0,1.0,1.0};
		inventorySlot[] = {"kr_muzzle545"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\srvv_mbr_jet_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\srvv_mbr_jet.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.45x39";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 9;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\srvv_mbr_jet.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\srvv_mbr_jet_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\srvv_mbr_jet_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\srvv_mbr_jet_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\srvv_mbr_jet_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle545_suppressor_hexagon_wafflemaker: kr_suppressor_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle545_suppressor_hexagon_wafflemaker";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle545_suppressor_hexagon_wafflemaker_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\muzzle545_suppressor_hexagon_wafflemaker.p3d";
		weight = 290;
		itemModelLength = 0.16;
		inventorySlot[] = {"kr_muzzle545"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_wafflemaker_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_wafflemaker.rvmat"};
		barrelArmor = 5000;
		noiseShootModifier = -0.98;
		dispersionModifier = 0;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.1,1.1,1.1};
		class kr_description
		{
			
			kr_tier = 3;
			kr_caliber = "5.45x39";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_wafflemaker.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_wafflemaker_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_wafflemaker_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_wafflemaker_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\hexagon_wafflemaker_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle545_suppressor_pbs4: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle545_suppressor_pbs4";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle545_suppressor_pbs4_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\muzzle545_suppressor_pbs4.p3d";
		weight = 700;
		itemModelLength = 0.255;
		inventorySlot[] = {"kr_muzzle545"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\pbs4_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\pbs4.rvmat"};
		barrelArmor = 7000;
		noiseShootModifier = -0.93;
		dispersionModifier = 0.0002;
		recoilModifier[] = {1.0,1.0,0.9};
		swayModifier[] = {1.2,1.2,1.2};
		class kr_description
		{
			
			kr_tier = 1;
			kr_caliber = "5.45x39";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\pbs4.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\pbs4_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\pbs4_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\pbs4_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\pbs4_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle545_suppressor_tgpa: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle545_suppressor_tgpa";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle545_suppressor_tgpa_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\muzzle545_suppressor_tgpa.p3d";
		weight = 700;
		itemModelLength = 0.209;
		inventorySlot[] = {"kr_muzzle545"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\tgpa_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\tgpa.rvmat"};
		barrelArmor = 6000;
		noiseShootModifier = -0.95;
		dispersionModifier = 0.0001;
		recoilModifier[] = {1.0,0.9,0.6};
		swayModifier[] = {1.0,1.2,1.2};
		class kr_description
		{
			
			kr_tier = 2;
			kr_caliber = "5.45x39";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\tgpa.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\tgpa_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\tgpa_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\tgpa_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle545\data\tgpa_destruct.rvmat"}}};
				};
			};
		};
	};
};
