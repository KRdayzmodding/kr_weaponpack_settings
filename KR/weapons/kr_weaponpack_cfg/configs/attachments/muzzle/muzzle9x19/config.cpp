class CfgPatches
{
	class kr_weapatt_muzzle9x19
	{
		units[] = {"kr_muzzle9_19_flashhider_pp19_vityaz_std","kr_muzzle9_19_flashhider_saiga9_std","kr_muzzle9x19_suppressor_rotor_43","kr_muzzle9x19_suppressor_vityaz_std","kr_muzzle9x19_suppressor_sig_srd_9","kr_muzzle9x19_suppressor_osprey_9","kr_muzzle9_19_flashhider_alphawolf_bullnosed","kr_muzzle9_19_flashhider_double_diamond","kr_muzzle9_19_flashhider_lone_wolf","kr_muzzle9_19_flashhider_port_gen_3","kr_muzzle9_19_flashhider_decelerator_3","kr_muzzle9_19_suppressor_fd917","kr_muzzle9_19_flashhider_tj"};
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
	class kr_muzzle9_19_flashhider_pp19_vityaz_std: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_pp19_vityaz_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_pp19_vityaz_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\muzzle9_19_flashhider_pp19_vityaz_std.p3d";
		weight = 60;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\pp19_vityaz_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\pp19_vityaz_std.rvmat"};
		class kr_description
		{
			kr_caliber = "9x19: Saiga9, PP19-01";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\pp19_vityaz_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\pp19_vityaz_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\pp19_vityaz_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\pp19_vityaz_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\pp19_vityaz_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9_19_flashhider_saiga9_std: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_saiga9_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_saiga9_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\muzzle9_19_flashhider_saiga9_std.p3d";
		weight = 60;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\saiga9_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\saiga9_std.rvmat"};
		class kr_description
		{
			kr_caliber = "9x19: Saiga9, PP19-01";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\saiga9_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\saiga9_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\saiga9_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\saiga9_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\saiga9_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9x19_suppressor_rotor_43: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9x19_suppressor_rotor_43";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9x19_suppressor_rotor_43_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\muzzle9_19_suppressor_rotor_43.p3d";
		weight = 60;
		itemModelLength = 0.16;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\rotor_43_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\rotor_43.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\rotor_43.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\rotor_43_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\rotor_43_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\rotor_43_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\rotor_43_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9x19_suppressor_vityaz_std: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9x19_suppressor_vityaz_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9x19_suppressor_vityaz_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\muzzle9_19_suppressor_vityaz_std.p3d";
		weight = 60;
		itemModelLength = 0.16;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\vityaz_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\vityaz_std.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19: Saiga9, PP19-01";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\vityaz_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\vityaz_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\vityaz_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\vityaz_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\vityaz_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9x19_suppressor_sig_srd_9: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9x19_suppressor_sig_srd_9";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9x19_suppressor_sig_srd_9_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\muzzle9_19_suppressor_sig_srd_9.p3d";
		weight = 60;
		itemModelLength = 0.16;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\sig_srd_9_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\sig_srd_9.rvmat"};
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
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\sig_srd_9.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\sig_srd_9_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\sig_srd_9_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\sig_srd_9_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\sig_srd_9_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9x19_suppressor_osprey_9: kr_suppressor_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9x19_suppressor_osprey_9";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9x19_suppressor_osprey_9_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\muzzle9_19_suppressor_osprey_9.p3d";
		weight = 60;
		itemModelLength = 0.16;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\osprey_9_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\osprey_9.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x19";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\osprey_9.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\osprey_9_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\osprey_9_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\osprey_9_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle9x19\data\osprey_9_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9_19_flashhider_alphawolf_bullnosed: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_alphawolf_bullnosed";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_alphawolf_bullnosed_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\muzzle9_19_flashhider_alphawolf_bullnosed.p3d";
		weight = 60;
		itemModelLength = 0.043;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\alphawolf_bullnosed_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\alphawolf_bullnosed.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19: Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\alphawolf_bullnosed.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\alphawolf_bullnosed_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\alphawolf_bullnosed_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\alphawolf_bullnosed_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\alphawolf_bullnosed_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9_19_flashhider_double_diamond: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_double_diamond";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_double_diamond_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\muzzle9_19_flashhider_double_diamond.p3d";
		weight = 60;
		itemModelLength = 0.034;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\double_diamond_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\double_diamond.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19: Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\double_diamond.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\double_diamond_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\double_diamond_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\double_diamond_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\double_diamond_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9_19_flashhider_lone_wolf: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_lone_wolf";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_lone_wolf_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\muzzle9_19_flashhider_lone_wolf.p3d";
		weight = 60;
		itemModelLength = 0.034;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\lone_wolf_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\lone_wolf.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19: Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\lone_wolf.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\lone_wolf_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\lone_wolf_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\lone_wolf_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\lone_wolf_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9_19_flashhider_port_gen_3: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_port_gen_3";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_port_gen_3_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\muzzle9_19_flashhider_port_gen_3.p3d";
		weight = 60;
		itemModelLength = 0.054;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\port_gen_3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\port_gen_3.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x19: Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\port_gen_3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\port_gen_3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\port_gen_3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\port_gen_3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\port_gen_3_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9_19_flashhider_decelerator_3: kr_muzzle_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_decelerator_3";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_decelerator_3_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\muzzle9_19_flashhider_decelerator_3.p3d";
		weight = 60;
		itemModelLength = 0.045;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\decelerator_3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\decelerator_3.rvmat"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "9x19: Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\decelerator_3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\decelerator_3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\decelerator_3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\decelerator_3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\decelerator_3_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9_19_suppressor_fd917: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_19_suppressor_fd917";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_19_suppressor_fd917_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\muzzle9_19_suppressor_fd917.p3d";
		weight = 350;
		itemModelLength = 0.165;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\fd917_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\fd917.rvmat"};
		attachments[] = {"kr_light_pistol"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x19: Glock17";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\fd917.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\fd917_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\fd917_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\fd917_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\fd917_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle9_19_flashhider_tj: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_tj";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle9_19_flashhider_tj_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\muzzle9_19_flashhider_tj.p3d";
		weight = 60;
		itemModelLength = 0.025;
		inventorySlot[] = {"kr_muzzle9_19"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\tj_compensator_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\tj_compensator.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19: SIG P226r";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\tj_compensator.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\tj_compensator_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\tj_compensator_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\tj_compensator_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle9x19\data\tj_compensator_destruct.rvmat"}}};
				};
			};
		};
	};
};
