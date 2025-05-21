class CfgPatches
{
	class kr_attachments_p226r_parts
	{
		units[] = {"kr_receiver_p226r_axelson_tactical_mk25","kr_receiver_p226r_legion_full_size","kr_receiver_p226r_emperor_scorpion","kr_pgrip_p226_axelson_tactical_mk25","kr_pgrip_p226_chain_link_g10","kr_pgrip_p226_emperor_scorpion","kr_pgrip_p226_stainless_elite","kr_pgrip_p226_rubber_w_grooves"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_support_Base;
	class kr_pgrip_Base;
	class kr_p226r_reciever_Base: kr_support_Base
	{
		scope = 0;
		simpleHiddenSelections[] = {};
		hiddenSelections[] = {"camo"};
		itemSize[] = {2,1};
		weight = 250;
		inventorySlot[] = {"kr_receiver_p226r"};
		class kr_description
		{
			kr_type = "SIG P226R";
		};
	};
	class kr_pgrip_p226_Base: kr_pgrip_Base
	{
		scope = 0;
		weight = 50;
		itemSize[] = {1,1};
		attachments[] = {};
		inventorySlot[] = {"kr_pgrip_p226r"};
		soundImpactType = "plastic";
		simpleHiddenSelections[] = {};
		hiddenSelections[] = {"camo"};
		class kr_description
		{
			kr_type = "SIG P226R";
		};
	};
	class kr_receiver_p226r_axelson_tactical_mk25: kr_p226r_reciever_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_p226r_receiver_axelson_tactical_mk25";
		descriptionShort = "$STR_kr_weapons_attachments_p226r_receiver_axelson_tactical_mk25_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\receiver_p226_axelson_tactical_mk25.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\axelson_tactical_mk25_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\axelson_tactical_mk25.rvmat"};
		recoilModifier[] = {0.95,0.95,0.95};	
		swayModifier[] = {0.95,0.95,0.95};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "SIG P226R";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\axelson_tactical_mk25.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\axelson_tactical_mk25_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\axelson_tactical_mk25_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\axelson_tactical_mk25_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\axelson_tactical_mk25_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_receiver_p226r_legion_full_size: kr_p226r_reciever_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_p226r_receiver_legion_full_size";
		descriptionShort = "$STR_kr_weapons_attachments_p226r_receiver_legion_full_size_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\receiver_p226_legion_full_size.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\legion_full_size_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\legion_full_size.rvmat"};
		recoilModifier[] = {0.9,0.9,0.9};	
		swayModifier[] = {0.9,0.9,0.9};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "SIG P226R";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\legion_full_size.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\legion_full_size_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\legion_full_size_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\legion_full_size_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\legion_full_size_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_receiver_p226r_emperor_scorpion: kr_p226r_reciever_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_p226r_receiver_emperor_scorpion";
		descriptionShort = "$STR_kr_weapons_attachments_p226r_receiver_emperor_scorpion_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\receiver_p226_emperor_scorpion.p3d";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\emperor_scorpion_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\emperor_scorpion.rvmat"};
		recoilModifier[] = {0.97,0.97,0.97};	
		swayModifier[] = {0.97,0.97,0.97};
		
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 13;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "SIG P226R";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\emperor_scorpion.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\emperor_scorpion_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\emperor_scorpion_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\emperor_scorpion_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\emperor_scorpion_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_pgrip_p226_axelson_tactical_mk25: kr_pgrip_p226_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_p226_grip_axelson_tactical_mk25";
		descriptionShort = "$STR_kr_weapons_attachments_p226_grip_axelson_tactical_mk25_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\pgrip_p226_axelson_tactical_mk25.p3d";
		recoilModifier[] = {0.97,0.97,0.97};	
		swayModifier[] = {0.97,0.97,0.97};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_axelson_tactical_mk25_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_axelson_tactical_mk25.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "SIG P226R";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_axelson_tactical_mk25.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_axelson_tactical_mk25_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_axelson_tactical_mk25_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_axelson_tactical_mk25_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_axelson_tactical_mk25_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_pgrip_p226_chain_link_g10: kr_pgrip_p226_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_p226_grip_chain_link_g10";
		descriptionShort = "$STR_kr_weapons_attachments_p226_grip_chain_link_g10_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\pgrip_p226_chain_link_g10.p3d";
		recoilModifier[] = {0.95,0.95,0.95};	
		swayModifier[] = {0.95,0.95,0.95};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_chain_link_g10_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_chain_link_g10.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "SIG P226R";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_chain_link_g10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_chain_link_g10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_chain_link_g10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_chain_link_g10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_chain_link_g10_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_pgrip_p226_emperor_scorpion: kr_pgrip_p226_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_p226_grip_emperor_scorpion";
		descriptionShort = "$STR_kr_weapons_attachments_p226_grip_emperor_scorpion_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\pgrip_p226_emperor_scorpion.p3d";
		recoilModifier[] = {0.9,0.9,0.9};	
		swayModifier[] = {0.9,0.9,0.9};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_emperor_scorpion_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_emperor_scorpion.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "SIG P226R";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_emperor_scorpion.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_emperor_scorpion_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_emperor_scorpion_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_emperor_scorpion_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_emperor_scorpion_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_pgrip_p226_stainless_elite: kr_pgrip_p226_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_p226_grip_stainless_elite";
		descriptionShort = "$STR_kr_weapons_attachments_p226_grip_stainless_elite_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\pgrip_p226_stainless_elite.p3d";
		recoilModifier[] = {0.85,0.85,0.85};	
		swayModifier[] = {0.85,0.85,0.85};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_stainless_elite_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_stainless_elite.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "SIG P226R";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_stainless_elite.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_stainless_elite_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_stainless_elite_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_stainless_elite_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_stainless_elite_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_pgrip_p226_rubber_w_grooves: kr_pgrip_p226_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_p226_grip_rubber_w_grooves";
		descriptionShort = "$STR_kr_weapons_attachments_p226_grip_rubber_w_grooves_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\pgrip_p226_rubber_w_grooves.p3d";
		recoilModifier[] = {0.8,0.8,0.8};	
		swayModifier[] = {0.8,0.8,0.8};	
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_rubber_w_grooves_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_rubber_w_grooves.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "SIG P226R";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_rubber_w_grooves.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_rubber_w_grooves_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_rubber_w_grooves_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_rubber_w_grooves_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\p226_parts\data\pgrip_rubber_w_grooves_destruct.rvmat"}}};
				};
			};
		};
	};
};
