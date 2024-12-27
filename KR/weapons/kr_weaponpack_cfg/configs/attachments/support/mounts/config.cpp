class CfgPatches
{
	class kr_attachmetns_support_mounts
	{
		units[] = {"kr_mount_dovetail_zenit_b13v","kr_mount_mosin_aim_sports_mng","kr_mount_mosin_aim_sports_tri_rail","kr_mount_nadir_a4","kr_mount_val_toz_6p29","kr_mount_mp443_zenit_b8","kr_mount_g17_aimtech_tiger_shark","kr_mount_um_tactical","kr_mount_m9a3","kr_mount_shotgun_etmi_019","kr_mount_toprail_optics","kr_mount_shotgun_deltatech_sprut"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class Inventory_Base;
	class kr_mount_dovetail_caa_xd_rgl: Inventory_Base
	{
		scope = 0;
		displayName = "$STR_kr_weapons_attachments_mount_dovetail_caa_xd_rgl";
		descriptionShort = "$STR_kr_weapons_attachments_mount_dovetail_caa_xd_rgl_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\mounts\mount_dovetail_caa_xd_rgl.p3d";
		inventorySlot[] = {"weaponOpticsAK"};
		itemSize[] = {2,1};
		weight = 225;
		rotationFlags = 32;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\caa_xd_rgl_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\caa_xd_rgl.rvmat"};
		isMount = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Ласточкин Хвост";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\caa_xd_rgl.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\caa_xd_rgl_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\caa_xd_rgl_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\caa_xd_rgl_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\caa_xd_rgl_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mount_dovetail_zenit_b13v: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_dovetail_zenit_b13v";
		descriptionShort = "$STR_kr_weapons_attachments_mount_dovetail_zenit_b13v_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\mounts\mount_dovetail_zenit_b13v.p3d";
		inventorySlot[] = {"weaponOpticsAK"};
		itemSize[] = {2,1};
		weight = 225;
		rotationFlags = 32;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\zenit_b13v_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\zenit_b13v.rvmat"};
		isMount = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Ласточкин Хвост";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\zenit_b13v.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\zenit_b13v_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\zenit_b13v_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\zenit_b13v_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\zenit_b13v_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mount_mosin_aim_sports_mng: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_mosin_aim_sports_mng";
		descriptionShort = "$STR_kr_weapons_attachments_mount_mosin_aim_sports_mng_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\mounts\mount_mosin_aim_sports_mng.p3d";
		inventorySlot[] = {"kr_mosin_mount"};
		itemSize[] = {2,1};
		weight = 74;
		rotationFlags = 32;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_mng_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_mng.rvmat"};
		isMount = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Крепление Кочетова";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_mng.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_mng_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_mng_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_mng_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_mng_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mount_mosin_aim_sports_tri_rail: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_mosin_aim_sports_tri_rail";
		descriptionShort = "$STR_kr_weapons_attachments_mount_mosin_aim_sports_tri_rail_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\mounts\mount_mosin_aim_sports_tri_rail.p3d";
		inventorySlot[] = {"kr_mosin_mount"};
		itemSize[] = {2,2};
		weight = 180;
		rotationFlags = 32;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_tri_rail_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_tri_rail.rvmat"};
		isMount = 1;
		attachments[] = {"kr_light_right","kr_light_left"};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "Крепление Кочетова";
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
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_tri_rail.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_tri_rail_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_tri_rail_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_tri_rail_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\aim_sports_tri_rail_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mount_nadir_a4: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_nadirka_a4";
		descriptionShort = "$STR_kr_weapons_attachments_mount_nadirka_a4_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\mounts\mount_muzzle_a4_nadirka.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"kr_s_mount_1","kr_s_mount_2"};
		attachments[] = {"kr_light_left"};
		weight = 70;
		itemSize[] = {1,1};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		simpleHiddenSelections[] = {"val","9a91"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\a4_nadirka_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\a4_nadirka.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Глушитель 9A-91";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\a4_nadirka.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\a4_nadirka_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\a4_nadirka_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\a4_nadirka_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\a4_nadirka_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class kr_mount_val_toz_6p29: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_toz_6p29";
		descriptionShort = "$STR_kr_weapons_attachments_mount_toz_6p29_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\mounts\mount_val_toz_6p29m.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"kr_val_mount"};
		attachments[] = {"kr_light_right","kr_foregrip","kr_light_left"};
		weight = 70;
		itemSize[] = {2,1};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\toz_6p29m_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mounts\data\toz_6p29m.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "Крепление ТОЗ для Вал";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\toz_6p29m.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\toz_6p29m_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\toz_6p29m_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\toz_6p29m_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mounts\data\toz_6p29m_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class kr_mount_mp443_zenit_b8: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_zenit_b8";
		descriptionShort = "$STR_kr_weapons_attachments_mount_zenit_b8_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\mounts\mount_mp443_zenit_b8.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"kr_mp443_mount"};
		attachments[] = {"kr_light_pistol"};
		weight = 70;
		itemSize[] = {2,1};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.05,1.05,1.05};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\zenit_b8_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\zenit_b8.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "MP443";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\zenit_b8.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\zenit_b8_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\zenit_b8_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\zenit_b8_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\zenit_b8_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class kr_mount_g17_aimtech_tiger_shark: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_aimtech_tiger_shark";
		descriptionShort = "$STR_kr_weapons_attachments_mount_aimtech_tiger_shark_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\mounts\mount_aimtech_tiger_shark.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"kr_mount_g17"};
		attachments[] = {};
		weight = 70;
		itemSize[] = {2,1};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.05,1.05,1.05};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\aimtech_tiger_shark_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\aimtech_tiger_shark.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
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
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\aimtech_tiger_shark.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\aimtech_tiger_shark_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\aimtech_tiger_shark_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\aimtech_tiger_shark_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\aimtech_tiger_shark_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class kr_mount_um_tactical: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_um_tactical";
		descriptionShort = "$STR_kr_weapons_attachments_mount_um_tactical_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\mounts\mount_um_tactical.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"kr_light_pistol"};
		attachments[] = {"kr_light_pistol"};
		weight = 70;
		itemSize[] = {2,1};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.05,1.05,1.05};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\um_tactical_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\um_tactical.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "пистолеты с креплением под фонарь";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\um_tactical.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\um_tactical_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\um_tactical_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\um_tactical_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\um_tactical_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class kr_mount_m9a3: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_m9a3";
		descriptionShort = "$STR_kr_weapons_attachments_mount_m9a3_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\mounts\mount_m9a3.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"kr_m9a3_mount"};
		attachments[] = {};
		weight = 20;
		itemSize[] = {1,1};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\m9a3_mount_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\m9a3_mount.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "M9A3";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\m9a3_mount.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\m9a3_mount_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\m9a3_mount_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\m9a3_mount_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\m9a3_mount_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class kr_mount_shotgun_etmi_019: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_shotgun_etmi_019";
		descriptionShort = "$STR_kr_weapons_attachments_mount_shotgun_etmi_019_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\mounts\mount_shotgun_etmi_019.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"kr_shotgun_barrel_mount"};
		attachments[] = {};
		weight = 20;
		itemSize[] = {1,1};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "MP133/153";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class kr_mount_toprail_optics: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_optics_toprail";
		descriptionShort = "$STR_kr_weapons_attachments_mount_optics_toprail_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\mounts\mount_shotgun_toprail.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"kr_optics_top_mount"};
		attachments[] = {};
		weight = 20;
		itemSize[] = {1,1};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "Optics mount";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\mp_mounts_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class kr_mount_shotgun_deltatech_sprut: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mount_shotgun_deltatech_sprut";
		descriptionShort = "$STR_kr_weapons_attachments_mount_shotgun_deltatech_sprut_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\mounts\mount_shotgun_deltatech_sprut.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"kr_shotgun_mag_mount"};
		attachments[] = {"kr_light_right","kr_light_left","kr_light_bot"};
		weight = 20;
		itemSize[] = {1,1};
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\deltatech_sprut_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\deltatech_sprut.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "MP133/153";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\deltatech_sprut.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\deltatech_sprut_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\deltatech_sprut_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\deltatech_sprut_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\mounts\data\deltatech_sprut_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
};
