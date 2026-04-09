class CfgPatches
{
	class kr_attachments_ak12_parts
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
	class kr_rpk16_fstock_Base;
	class kr_rpk16_hguard_Base;
	class kr_ak_receiver_Base;
	
	class kr_ak12_fstock_tube: kr_rpk16_fstock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak12_fld_bttstck_tube";
		descriptionShort = "$STR_kr_weapons_attachments_ak12_fld_bttstck_tube_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\ak12_stock_tube.p3d";
		weight = 142;
		attachments[] = {"kr_ar_bttstck"};
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		itemSize[] = {2,1};
		haveTube = 1;
		isTube = 1;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock.rvmat"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_ak12_fstock_evo: kr_rpk16_fstock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak12_fld_bttstck_evo";
		descriptionShort = "$STR_kr_weapons_attachments_ak12_fld_bttstck_evo_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\ak12_stock_evo.p3d";
		weight = 397;
		recoilModifier[] = {1,1,0.7};
		swayModifier[] = {1,0.7,0.8};
		itemSize[] = {2,1};
		haveTube = 0;
		isTube = 0;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_evo_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_evo.rvmat"};
		soundImpactType = "plastic";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_evo.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_evo_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_evo_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_evo_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_stock_evo_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_ak12_hguard_std: kr_rpk16_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak12_handguard_std";
		descriptionShort = "$STR_kr_weapons_attachments_ak12_handguard_std_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\ak12_handguard.p3d";
		weight = 167;
		itemSize[] = {2,1};
		inventorySlot[] = {"kr_ak12_hndgrd"};
		attachments[] = {"kr_foregrip","kr_rail_mount"};
		recoilModifier[] = {0.7,0.8,1};	
		swayModifier[] = {0.7,1,0.8};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_handguard.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_firearms
		{
			grip = 1;
			light = 0;
			holo = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_handguard.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_handguard_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_handguard_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_handguard_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_handguard_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak12_hguard_std_raild: kr_ak12_hguard_std
	{
		displayName = "$STR_kr_weapons_attachments_ak12_handguard_std_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};

		class kr_firearms
		{
			grip = 1;
			light = 1;
			holo = 1;
		};
	};


	class kr_ak_receiver_ak12: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_receiver_ak12";
		descriptionShort = "$STR_kr_weapons_attachments_ak_receiver_ak12_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\ak12_receiver.p3d";
		weight = 90;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_receiver_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_receiver.rvmat"};
		itemSize[] = {3,1};
		inventorySlot[] = {"kr_ak12_receiver"};
		simpleHiddenSelections[]={"hide_sight"};
		
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};

		class kr_firearms
		{
			optic = 0;
			receiver = 0;
			sight = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "AK12";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_receiver.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_receiver_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_receiver_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_receiver_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak12_parts\data\ak12_receiver_destruct.rvmat"}}};
				};
			};
		};
	};
};
