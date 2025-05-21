class CfgPatches
{
	class kr_weapatt_muzzle762_39
	{
		units[] = {"kr_muzzle762_39_flashhider_akm_std","kr_muzzle762_39_flashhider_izhmash_akml","kr_muzzle762_39_flashhider_spike_tactical","kr_muzzle762_39_flashhider_srvv","kr_muzzle762_39_flashhider_venom_antidote","kr_muzzle762_39_suppressor_hexagon_akm","kr_muzzle762_39_suppressor_hexagon_dtkp","kr_muzzle762_39_suppressor_pbs1","kr_muzzle762_39_suppressor_zenit_dtk4m"};
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
	class kr_muzzle762_39_flashhider_akm_std: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_39_flashhider_akm_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_39_flashhider_akm_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\muzzle762_39_flashhider_akm_std.p3d";
		weight = 20;
		itemModelLength = 0.032;
		inventorySlot[] = {"kr_muzzle762_39"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\akm_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\akm_std.rvmat"};
		recoilModifier[] = {0.98,0.98,0.93};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0003;
		noiseShootModifier = -0.05;
		barrelArmor = 20000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};

		class kr_description
		{
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\akm_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\akm_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\akm_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\akm_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\akm_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_39_flashhider_izhmash_akml: kr_muzzle_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_39_flashhider_izhmash_akml";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_39_flashhider_izhmash_akml_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\muzzle762_39_flashhider_izhmash_akml.p3d";
		weight = 50;
		itemModelLength = 0.088;
		inventorySlot[] = {"kr_muzzle762_39"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\izhmash_akml_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\izhmash_akml.rvmat"};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0008;
		noiseShootModifier = 0;
		barrelArmor = 20000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};

		class kr_description
		{
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\izhmash_akml.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\izhmash_akml_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\izhmash_akml_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\izhmash_akml_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\izhmash_akml_destruct.rvmat"}}};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					illuminateWorld = 1;
				};
			};
		};
	};
	class kr_muzzle762_39_flashhider_spike_tactical: kr_muzzle_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_39_flashhider_spike_tactical";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_39_flashhider_spike_tactical_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\muzzle762_39_flashhider_spike_tactical.p3d";
		weight = 76;
		itemModelLength = 0.093;
		barrelArmor = 15000;
		inventorySlot[] = {"kr_muzzle762_39"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\spike_tactical_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\spike_tactical.rvmat"};
		recoilModifier[] = {0.97,0.97,0.9};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.1;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};

		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\spike_tactical.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\spike_tactical_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\spike_tactical_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\spike_tactical_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\spike_tactical_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_39_flashhider_srvv: kr_muzzle_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_39_flashhider_srvv";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_39_flashhider_srvv_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\muzzle762_39_flashhider_srvv.p3d";
		weight = 435;
		itemModelLength = 0.095;
		inventorySlot[] = {"kr_muzzle762_39"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\srvv_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\srvv.rvmat"};
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
			kr_tier = 3;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\srvv.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\srvv_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\srvv_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\srvv_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\srvv_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_muzzle762_39_flashhider_venom_antidote: kr_muzzle_t4_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_39_flashhider_venom_antidote";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_39_flashhider_venom_antidote_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\muzzle762_39_flashhider_venom_antidote.p3d";
		weight = 435;
		itemModelLength = 0.082;
		inventorySlot[] = {"kr_muzzle762_39"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\venom_antidote_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\venom_antidote.rvmat"};
		recoilModifier[] = {0.93,0.93,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.15;
		barrelArmor = 9000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};

		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\venom_antidote.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\venom_antidote_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\venom_antidote_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\venom_antidote_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\venom_antidote_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_39_suppressor_hexagon_akm: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_39_suppressor_hexagon_akm";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_39_suppressor_hexagon_akm_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\muzzle762_39_suppressor_hexagon_akm.p3d";
		weight = 60;
		itemModelLength = 0.201;
		inventorySlot[] = {"kr_muzzle762_39"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_akm_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_akm.rvmat"};
		recoilModifier[] = {1.0,1.0,0.9};
		swayModifier[] = {1.2,1.2,1.2};
		dispersionModifier = 0.0002;
		noiseShootModifier = -0.93;
		barrelArmor = 7000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};

		class kr_description
		{
			kr_caliber = "7.62x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_akm.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_akm_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_akm_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_akm_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_akm_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_39_suppressor_hexagon_dtkp: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_39_suppressor_hexagon_dtkp";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_39_suppressor_hexagon_dtkp_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\muzzle762_39_suppressor_hexagon_dtkp.p3d";
		weight = 60;
		itemModelLength = 0.209;
		inventorySlot[] = {"kr_muzzle762_39"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_dtkp_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_dtkp.rvmat"};
		recoilModifier[] = {1.0,0.9,0.9};
		swayModifier[] = {1.2,1.0,1.2};
		dispersionModifier = 0.0001;
		noiseShootModifier = -0.95;
		barrelArmor = 6000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};

		class kr_description
		{
			kr_caliber = "7.62x39";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_dtkp.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_dtkp_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_dtkp_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_dtkp_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\hexagon_dtkp_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_39_suppressor_pbs1: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_39_suppressor_pbs1";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_39_suppressor_pbs1_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\muzzle762_39_suppressor_pbs1.p3d";
		weight = 60;
		itemModelLength = 0.194;
		inventorySlot[] = {"kr_muzzle762_39"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\pbs1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\pbs1.rvmat"};
		recoilModifier[] = {1.0,0.9,0.9};
		swayModifier[] = {1.0,1.2,1.2};
		dispersionModifier = 0.0001;
		noiseShootModifier = -0.95;
		barrelArmor = 6000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};

		class kr_description
		{
			kr_caliber = "7.62x39";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\pbs1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\pbs1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\pbs1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\pbs1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\pbs1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_muzzle762_39_suppressor_zenit_dtk4m: kr_suppressor_t3_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle762_39_suppressor_zenit_dtk4m";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle762_39_suppressor_zenit_dtk4m_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\muzzle762_39_suppressor_zenit_dtk4m.p3d";
		weight = 60;
		itemModelLength = 0.205;
		inventorySlot[] = {"kr_muzzle762_39"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\zenit_dtk4m_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\zenit_dtk4m.rvmat"};
		recoilModifier[] = {0.93,0.93,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		dispersionModifier = 0;
		noiseShootModifier = -0.98;
		barrelArmor = 5000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};

		class kr_description
		{
			kr_caliber = "7.62x39";
			kr_tier = 3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\zenit_dtk4m.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\zenit_dtk4m_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\zenit_dtk4m_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\zenit_dtk4m_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle762_39\data\zenit_dtk4m_destruct.rvmat"}}};
				};
			};
		};
	};
};