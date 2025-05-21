class CfgPatches
{
	class kr_weapatt_muzzle12x76
	{
		units[] = {"kr_muzzle12x76_flashhider_vpo205_std","kr_muzzle12x76_flashhider_css_monster_caw","kr_muzzle12x76_flashhider_rh_gk_02","kr_muzzle12x76_suppressor_hexagon_12k","kr_muzzle12x76_suppressor_silencerco_salvo"};
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
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	
	class kr_muzzle12x76_flashhider_vpo205_std: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_vpo205_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_vpo205_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\muzzle12x76_flashhider_vpo205_std.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle12_76"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std.rvmat"};
		
		recoilModifier[] = {0.98,0.98,0.93};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.05;
		barrelArmor = 20000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};

		class kr_description
		{
			kr_caliber = "12x76";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\vpo205_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle12x76_flashhider_monster_claw: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_css_monster_claw";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_css_monster_claw_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\muzzle12x76_flashhider_css_monster_caw.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle12_76"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw.rvmat"};
		recoilModifier[] = {0.97,0.97,0.9};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.01;
		barrelArmor = 15000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};

		class kr_description
		{
			kr_caliber = "12x76";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\css_monster_caw_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle12x76_flashhider_rh_gk_02: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_rh_gk_02";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle12x76_flashhider_rh_gk_02_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\muzzle12x76_flashhider_rh_gk_02.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle12_76"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02.rvmat"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.001;
		noiseShootModifier = 0;
		barrelArmor = 12000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};

		class kr_description
		{
			kr_caliber = "12x76";
			kr_tier = 3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\rh_gk_02_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle12x76_suppressor_hexagon_12k: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle12x76_suppressor_hexagon_12k";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle12x76_suppressor_hexagon_12k_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\muzzle12x76_suppressor_hexagon_12k.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle12_76"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k.rvmat"};
		noiseShootModifier = -0.8;
		recoilModifier[] = {1.0,1.0,0.9};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = 0.0006;
		barrelArmor = 7000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};

		class kr_description
		{
			kr_caliber = "12x76";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 8;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\hexagon_12k_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle12x76_suppressor_silencerco_salvo: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle12x76_suppressor_silencerco_salvo";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle12x76_suppressor_silencerco_salvo_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\muzzle12x76_suppressor_silencerco_salvo.p3d";
		weight = 60;
		itemModelLength = 0.068;
		inventorySlot[] = {"kr_muzzle12_76"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo.rvmat"};
		noiseShootModifier = -0.9;
		recoilModifier[] = {0.9,0.9,1.0};
		swayModifier[] = {1.2,1.0,1.2};
		dispersionModifier = 0.0001;
		barrelArmor = 6000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};

		class kr_description
		{
			kr_caliber = "12x76";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 8;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle12x76\data\silencerco_salvo_destruct.rvmat"}}};
				};
			};
		};
	};
};
