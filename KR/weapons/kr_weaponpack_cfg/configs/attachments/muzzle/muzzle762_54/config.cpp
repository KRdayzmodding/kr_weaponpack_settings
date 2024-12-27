class CfgPatches
{
	class kr_weapatt_muzzle762_54
	{
		units[] = {"kr_muzzle762_54_flashhider_svd_std","kr_muzzle762_54_adapter_762_39_wt1052","kr_muzzle762_54_adapter_762_51_tiger_rock","kr_muzzle762_54_flashhider_tacfire_tanker_st","kr_muzzle762_54_flashhider_tpp","kr_muzzle762_54_flashhider_witt_machine","kr_muzzle762_54_suppressor_bramit"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};
class cfgVehicles
{
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	class kr_muzzle_adapter_Base;
	class kr_suppressor_t1_Base;
	class kr_muzzle762_54_flashhider_svd_std: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_54_flashhider_svd_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_54_flashhider_svd_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\muzzle762_54_flashhider_svd_std.p3d";
		weight = 60;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle762_54"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\svd_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\svd_std.rvmat"};
		class kr_description
		{
			kr_caliber = "7.62x54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\svd_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\svd_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\svd_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\svd_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\svd_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_54_adapter_762_39_wt1052: kr_muzzle_adapter_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_54_adapter_762_39_wt1052";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_54_adapter_762_39_wt1052_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\muzzle762_54_adapter_762_39_wt1052.p3d";
		weight = 60;
		inventorySlot[] = {"kr_muzzle762_54_mosin"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\wt1052_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\wt1052.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "Мосина. Переходник";
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\wt1052.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\wt1052_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\wt1052_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\wt1052_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\wt1052_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_54_adapter_762_51_tiger_rock: kr_muzzle_adapter_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_54_adapter_762_51_tiger_rock";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_54_adapter_762_51_tiger_rock_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\muzzle762_54_adapter_762_51_tiger_rock.p3d";
		weight = 60;
		inventorySlot[] = {"kr_muzzle762_54_mosin"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tiger_rock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tiger_rock.rvmat"};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "Мосина. Переходник";
			kr_caliber = ".308";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tiger_rock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tiger_rock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tiger_rock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tiger_rock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tiger_rock_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_54_flashhider_tacfire_tanker_st: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_54_flashhider_tacfire_tanker_st";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_54_flashhider_tacfire_tanker_st_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\muzzle762_54_flashhider_tacfire_tanker_st.p3d";
		weight = 60;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle762_54_mosin"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tacfire_tanker_st_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tacfire_tanker_st.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tacfire_tanker_st.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tacfire_tanker_st_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tacfire_tanker_st_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tacfire_tanker_st_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tacfire_tanker_st_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_54_flashhider_tpp: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_54_flashhider_tpp";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_54_flashhider_tpp_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\muzzle762_54_flashhider_tpp.p3d";
		weight = 60;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle762_54_mosin"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tpp_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tpp.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tpp.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tpp_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tpp_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tpp_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\tpp_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_54_flashhider_witt_machine: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_54_flashhider_witt_machine";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_54_flashhider_witt_machine_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\muzzle762_54_flashhider_witt_machine.p3d";
		weight = 60;
		itemModelLength = 0.098;
		inventorySlot[] = {"kr_muzzle762_54_mosin"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\witt_machine_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\witt_machine.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\witt_machine.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\witt_machine_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\witt_machine_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\witt_machine_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\witt_machine_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_54_suppressor_bramit: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_54_suppressor_bramit";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_54_suppressor_bramit_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\muzzle762_54_suppressor_bramit.p3d";
		weight = 60;
		itemModelLength = 0.177;
		inventorySlot[] = {"kr_muzzle762_54_mosin"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\bramit_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\bramit.rvmat"};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x51/54";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\bramit.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\bramit_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\bramit_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\bramit_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_54\data\bramit_destruct.rvmat"}}};
				};
			};
		};
	};
};
