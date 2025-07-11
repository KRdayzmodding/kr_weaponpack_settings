class CfgPatches
{
	class kr_weaponpack_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","kr_data"};
	};
};
class CfgMods
{
	class kr_weaponpack_cfg_scr
	{
		type = "mod";
		author = "Kramtsov Arms";
		defines[] = 
		{
			//"KR_DAMAGE_DEBUG" //Запускает дебагер урона
		};

		class defs
		{
			class imageSets
			{
				files[] = {"KR/weapons/kr_weaponpack_cfg/data/icons/kr_weapons_icons.imageset"};
			};

			class worldScriptModule
			{
				value="";
				files[]=
				{
					"KR/weapons/kr_weaponpack_cfg/scripts/4_World"
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_kr_spas12_stock
	{
		name = "kr_spas12_stock";
		displayName = "#STR_kr_slot_spas12_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_spas12_stock";
	};
	class Slot_kr_ar_pistolgrip
	{
		name = "kr_ar_pistolgrip";
		displayName = "#STR_kr_slot_m4_pistolgrip";
		ghostIcon = "set:kr_weapon_icons image:kr_pistolgrip";
	};
	class Slot_kr_fal_pistolgrip
	{
		name = "kr_fal_pistolgrip";
		displayName = "#STR_kr_slot_fal_pistolgrip";
		ghostIcon = "set:kr_weapon_icons image:kr_fal_pistolgrip";
	};
	class Slot_kr_ak_pistolgrip
	{
		name = "kr_ak_pistolgrip";
		displayName = "#STR_kr_slot_ak_pistolgrip";
		ghostIcon = "set:kr_weapon_icons image:kr_pistolgrip";
	};
	class Slot_kr_muzzle50bmg
	{
		name = "kr_muzzle50bmg";
		displayName = "#STR_kr_slot_muzzle50bmg";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_50bmg";
	};
	class Slot_kr_muzzle366
	{
		name = "kr_muzzle366";
		displayName = "#STR_kr_slot_muzzle366";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_366";
	};
	class Slot_kr_muzzle545
	{
		name = "kr_muzzle545";
		displayName = "#STR_kr_slot_muzzle545";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_545";
	};
	class Slot_kr_muzzle556
	{
		name = "kr_muzzle556";
		displayName = "#STR_kr_slot_muzzle556";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_556";
	};
	class Slot_kr_muzzle338
	{
		name = "kr_muzzle338";
		displayName = "#STR_kr_slot_muzzle338";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_338lm";
	};
	class Slot_kr_muzzle308
	{
		name = "kr_muzzle308";
		displayName = "#STR_kr_slot_muzzle308";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_308";
	};
	class Slot_kr_muzzle762_39
	{
		name = "kr_muzzle762_39";
		displayName = "#STR_kr_slot_muzzle762_39";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_762";
	};
	class Slot_kr_muzzle762_39_sks
	{
		name = "kr_muzzle762_39_sks";
		displayName = "#STR_kr_slot_muzzle762_39_sks";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_762_sks";
	};
	class Slot_kr_muzzle762_54
	{
		name = "kr_muzzle762_54";
		displayName = "#STR_kr_slot_muzzle762_54";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_762_54";
	};
	class Slot_kr_muzzle762_54_mosin
	{
		name = "kr_muzzle762_54_mosin";
		displayName = "#STR_kr_slot_muzzle762_54_mosin";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_762_54_mosin";
	};
	class Slot_kr_muzzle12_76
	{
		name = "kr_muzzle12_76";
		displayName = "#STR_kr_slot_kr_muzzle12_76";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_12";
	};
	class Slot_kr_muzzle127_55
	{
		name = "kr_muzzle127_55";
		displayName = "#STR_kr_slot_muzzle127_55";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_127x55";
	};
	class Slot_kr_muzzle9_19
	{
		name = "kr_muzzle9_19";
		displayName = "#STR_kr_slot_muzzle9_19";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_9_19";
	};
	class Slot_kr_muzzle9_18
	{
		name = "kr_muzzle9_18";
		displayName = "#STR_kr_slot_muzzle9_18";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_9_18";
	};
	class Slot_kr_ak_stock
	{
		name = "kr_ak_stock";
		displayName = "#STR_kr_slot_ak_bttstck";
		ghostIcon = "set:kr_weapon_icons image:kr_ak_stock";
	};
	class Slot_kr_ak_fstock
	{
		name = "kr_ak_fstock";
		displayName = "#STR_kr_slot_ak_fbttstck";
		ghostIcon = "set:kr_weapon_icons image:kr_ak_fstock";
	};
	class Slot_kr_aks74u_hndgrd
	{
		name = "kr_aks74u_hndgrd";
		displayName = "#STR_kr_slot_aks74u_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_ak_handguard";
	};
	class Slot_kr_ak_receiver
	{
		name = "kr_ak_receiver";
		displayName = "#STR_kr_slot_ak_receiver";
		ghostIcon = "set:kr_weapon_icons image:kr_ak_receiver";
	};
	class Slot_kr_ak_hndgrd
	{
		name = "kr_ak_hndgrd";
		displayName = "#STR_kr_slot_ak_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_ak_handguard";
	};
	class Slot_kr_saiga_hndgrd
	{
		name = "kr_saiga_hndgrd";
		displayName = "#STR_kr_slot_saiga_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_saiga_hndgrd";
	};
	class Slot_kr_pp19_receiver
	{
		name = "kr_pp19_receiver";
		displayName = "#STR_kr_slot_pp19_receiver";
		ghostIcon = "set:kr_weapon_icons image:kr_ak_receiver";
	};
	class Slot_kr_ar15_tube
	{
		name = "kr_ar15_tube";
		displayName = "#STR_kr_slot_kr_ar15_tube";
		ghostIcon = "set:kr_weapon_icons image:kr_buttstock_tube";
	};
	class Slot_kr_ar15_charging
	{
		name = "kr_ar15_charging";
		displayName = "#STR_kr_slot_kr_ar15_charging";
		ghostIcon = "set:kr_weapon_icons image:kr_katana";
	};
	class Slot_katana
	{
		name = "katana";
		displayName = "#STR_kr_slot_katana";
		ghostIcon = "set:kr_weapon_icons image:kr_katana";
	};
	class Slot_kr_ar10_hndgrd
	{
		name = "kr_ar10_hndgrd";
		displayName = "#STR_kr_slot_ar10_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_ar10_handguard";
	};

	class Slot_kr_ar10_ar15_hndgrd
	{
		name = "kr_ar10_ar15_hndgrd";
		displayName = "#STR_kr_slot_handguard";
		ghostIcon = "set:kr_weapon_icons image:kr_ar10_ar15_handguard";
	};

	class Slot_kr_rpk16_hndgrd
	{
		name = "kr_rpk16_hndgrd";
		displayName = "#STR_kr_slot_rpk16_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_rpk16_handguard";
	};
	class Slot_kr_mk18_hndgrd
	{
		name = "kr_mk18_hndgrd";
		displayName = "#STR_kr_slot_mk18_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_mk18_handguard";
	};
	class Slot_kr_rpk16_stock
	{
		name = "kr_rpk16_stock";
		displayName = "#STR_kr_slot_rpk16_bttstck";
		ghostIcon = "set:kr_weapon_icons image:kr_buttstock_tube";
	};
	class Slot_kr_ar_bttstck
	{
		name = "kr_ar_bttstck";
		displayName = "#STR_kr_slot_kr_ar_bttstck";
		ghostIcon = "set:kr_weapon_icons image:kr_m4_stock";
	};
	class Slot_kr_hk416_hndgrd
	{
		name = "kr_hk416_hndgrd";
		displayName = "#STR_kr_slot_hk416_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_hk416_handguard";
	};
	class Slot_kr_fal_stock
	{
		name = "kr_fal_stock";
		displayName = "#STR_kr_slot_fal_bttstck";
		ghostIcon = "set:kr_weapon_icons image:kr_fal_stock";
	};
	class Slot_kr_fal_hndgrd
	{
		name = "kr_fal_hndgrd";
		displayName = "#STR_kr_slot_fal_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_fal_handguard";
	};
	class Slot_kr_ar15_hndgrd
	{
		name = "kr_ar15_hndgrd";
		displayName = "#STR_kr_slot_ar15_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_m4_handguard";
	};
	class Slot_kr_m16_hndgrd
	{
		name = "kr_m16_hndgrd";
		displayName = "#STR_kr_slot_m16_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_m16_handguard";
	};
	class Slot_kr_g28_hndgrd
	{
		name = "kr_g28_hndgrd";
		displayName = "#STR_kr_slot_g28_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_hk417_handguard";
	};
	class Slot_kr_fal_receiver
	{
		name = "kr_fal_receiver";
		displayName = "#STR_kr_slot_fal_receiver";
		ghostIcon = "set:kr_weapon_icons image:kr_fal_receiver";
	};
	class Slot_kr_ak_buttpad
	{
		name = "kr_ak_buttpad";
		displayName = "#STR_kr_slot_ak_buttpad";
		ghostIcon = "set:kr_weapon_icons image:kr_ak_buttpad";
	};
	class Slot_kr_ak_handle
	{
		name = "kr_ak_handle";
		displayName = "#STR_kr_slot_kr_ak_handle";
		ghostIcon = "set:kr_weapon_icons image:none";
	};
	class Slot_kr_pt_lock
	{
		name = "kr_pt_lock";
		displayName = "#STR_kr_slot_pt_lock";
		ghostIcon = "set:kr_weapon_icons image:kr_pt_lock";
	};
	class Slot_kr_rail_mount
	{
		name = "kr_rail_mount";
		displayName = "#STR_kr_slot_rail_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_rail_mount";
	};
	class Slot_kr_m200_hndgrd
	{
		name = "kr_m200_hndgrd";
		displayName = "#STR_kr_slot_m200_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_m200_hndgrd";
	};
	class Slot_kr_m200_stock
	{
		name = "kr_m200_stock";
		displayName = "#STR_kr_slot_kr_m200_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_m200_stock";
	};
	class Slot_kr_mp5_stock
	{
		name = "kr_mp5_stock";
		displayName = "#STR_kr_slot_kr_mp5_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_mp5_stock";
	};
	class Slot_kr_mp5_hndgrd
	{
		name = "kr_mp5_hndgrd";
		displayName = "#STR_kr_slot_kr_mp5_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_mp5_hndgrd";
	};
	class Slot_kr_mp5_mount
	{
		name = "kr_mp5_mount";
		displayName = "#STR_kr_slot_kr_mp5_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_mp5_mount";
	};
	class Slot_kr_val_stock
	{
		name = "kr_val_stock";
		displayName = "#STR_kr_slot_kr_val_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_val_stock";
	};
	class Slot_kr_val_pistolgrip
	{
		name = "kr_val_pistolgrip";
		displayName = "#STR_kr_slot_kr_val_pistolgrip";
		ghostIcon = "set:kr_weapon_icons image:kr_val_pistolgrip";
	};
	class Slot_kr_val_mount
	{
		name = "kr_val_mount";
		displayName = "#STR_kr_slot_kr_val_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_val_mount";
	};
	class Slot_kr_scar_stock
	{
		name = "kr_scar_stock";
		displayName = "#STR_kr_slot_kr_scar_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_scar_stock";
	};
	class Slot_kr_svd_stock
	{
		name = "kr_svd_stock";
		displayName = "#STR_kr_slot_kr_svd_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_svd_stock";
	};
	class Slot_kr_svd_hndgrd
	{
		name = "kr_svd_hndgrd";
		displayName = "#STR_kr_slot_svd_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_svd_hndgrd";
	};
	class Slot_kr_mosin_mount
	{
		name = "kr_mosin_mount";
		displayName = "#STR_kr_slot_mosin_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_mosin_mount";
	};
	class Slot_kr_mosin_buttpad
	{
		name = "kr_mosin_buttpad";
		displayName = "#STR_kr_slot_mosin_buttpad";
		ghostIcon = "set:kr_weapon_icons image:kr_mosin_buttpad";
	};
	class Slot_weaponButtstockAK
	{
		name = "weaponButtstockAK";
		displayName = "#STR_kr_slot_ak_bttstck";
		ghostIcon = "set:kr_weapon_icons image:kr_ak_stock";
	};
	class Slot_weaponOptics
	{
		name = "weaponOptics";
		displayName = "#STR_kr_slot_nato_optics";
		ghostIcon = "set:kr_weapon_icons image:kr_scope_m4";
	};
	class Slot_weaponOptics1
	{
		name = "weaponOptics1";
		displayName = "#STR_kr_slot_nato_optics";
		ghostIcon = "set:kr_weapon_icons image:kr_scope_m4";
	};
	class Slot_weaponOptics2
	{
		name = "weaponOptics2";
		displayName = "#STR_kr_slot_nato_optics";
		ghostIcon = "set:kr_weapon_icons image:kr_scope_m4";
	};
	class Slot_weaponOpticsDT
	{
		name = "weaponOpticsDT";
		displayName = "#STR_kr_slot_nato_optics";
		ghostIcon = "set:kr_weapon_icons image:kr_scope_m4";
	};
	class Slot_weaponOpticsB
	{
		name = "weaponOpticsB";
		displayName = "#STR_kr_slot_nato_optics";
		ghostIcon = "set:kr_weapon_icons image:kr_scope_optic";
	};
	class Slot_weaponOpticsB1
	{
		name = "weaponOpticsB1";
		displayName = "#STR_kr_slot_nato_optics";
		ghostIcon = "set:kr_weapon_icons image:kr_scope_optic";
	};
	class Slot_kr_weaponOpticsF2000
	{
		name = "kr_weaponOpticsF2000";
		displayName = "#STR_kr_slot_nato_optics";
		ghostIcon = "set:kr_weapon_icons image:kr_scope_m4";
	};
	class Slot_kr_weaponOpticsMosin
	{
		name = "kr_weaponOpticsMosin";
		displayName = "#STR_kr_slot_weaponOpticsMosin";
		ghostIcon = "set:kr_weapon_icons image:kr_opticMosin";
	};
	class Slot_weaponHolo1
	{
		name = "weaponHolo1";
		displayName = "#STR_kr_slot_weaponHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_holosight";
	};
	class Slot_weaponHolo2
	{
		name = "weaponHolo2";
		displayName = "#STR_kr_slot_weaponHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_holosight";
	};
	class Slot_weaponHolo3
	{
		name = "weaponHolo3";
		displayName = "#STR_kr_slot_weaponHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_holosight";
	};
	class Slot_weaponHolo4
	{
		name = "weaponHolo4";
		displayName = "#STR_kr_slot_weaponHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_holosight";
	};
	class Slot_weaponHolo5
	{
		name = "weaponHolo5";
		displayName = "#STR_kr_slot_weaponHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_holosight";
	};
	class Slot_weaponOpticsAK
	{
		name = "weaponOpticsAK";
		displayName = "#STR_kr_slot_ak_optics";
		ghostIcon = "set:kr_weapon_icons image:kr_scope_ak";
	};
	class Slot_PistolHolo1
	{
		name = "PistolHolo1";
		displayName = "#STR_kr_slot_PistolHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_pistolHolo";
	};
	class Slot_PistolHolo2
	{
		name = "PistolHolo2";
		displayName = "#STR_kr_slot_PistolHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_pistolHolo";
	};
	class Slot_kr_meds
	{
		name = "kr_meds";
		displayName = "#STR_kr_slot_meds";
		ghosticon = "";
	};
	class Slot_kr_tape
	{
		name = "kr_tape";
		displayName = "#STR_kr_slot_tape";
		ghosticon = "";
	};
	class Slot_kr_s_mount_1
	{
		name = "kr_s_mount_1";
		displayName = "#STR_kr_slot_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_s_mount";
	};
	class Slot_kr_s_mount_2
	{
		name = "kr_s_mount_2";
		displayName = "#STR_kr_slot_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_s_mount";
	};
	class Slot_kr_9a91_stock
	{
		name = "kr_9a91_stock";
		displayName = "#STR_kr_slot_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_9a91_stock";
	};
	class Slot_kr_muzzle_9_39_9a91
	{
		name = "kr_muzzle_9_39_9a91";
		displayName = "#STR_kr_slot_muzzle_9_39_9a91";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_9_39_9a91";
	};
	class Slot_kr_foregrip
	{
		name = "kr_foregrip";
		displayName = "#STR_kr_slot_foregrip";
		ghostIcon = "set:kr_weapon_icons image:kr_foregrip";
	};
	class Slot_kr_bipod
	{
		name = "kr_bipod";
		displayName = "#STR_kr_slot_bipod";
		ghostIcon = "set:kr_weapon_icons image:kr_bipod";
	};
	class Slot_kr_pointer_1
	{
		name = "kr_pointer_1";
		displayName = "#STR_kr_slot_kr_pointer_1";
		ghostIcon = "set:kr_weapon_icons image:kr_pointer_1";
	};
	class Slot_kr_light_bot
	{
		name = "kr_light_bot";
		displayName = "#STR_kr_slot_kr_light";
		ghostIcon = "set:kr_weapon_icons image:kr_light_bot";
	};
	class Slot_kr_light_right
	{
		name = "kr_light_right";
		displayName = "#STR_kr_slot_kr_light";
		ghostIcon = "set:kr_weapon_icons image:kr_light_right";
	};
	class Slot_kr_light_left
	{
		name = "kr_light_left";
		displayName = "#STR_kr_slot_kr_light";
		ghostIcon = "set:kr_weapon_icons image:kr_light_left";
	};
	class Slot_kr_light_pistol
	{
		name = "kr_light_pistol";
		displayName = "#STR_kr_slot_light_pistol";
		ghostIcon = "set:kr_weapon_icons image:kr_light_pistol";
	};
	class Slot_kr_shotgun_mp_mag
	{
		name = "kr_shotgun_mp_mag";
		displayName = "#STR_kr_slot_shotgun_mp_mag";
		ghostIcon = "set:kr_weapon_icons image:kr_shotgun_mp_mag";
	};
	class Slot_kr_sg550_pistolgrip
	{
		name = "kr_sg550_pistolgrip";
		displayName = "#STR_kr_slot_sg550_pistolgrip";
		ghostIcon = "set:kr_weapon_icons image:kr_sg550_pistolgrip";
	};
	class Slot_kr_sg550_hndgrd
	{
		name = "kr_sg550_hndgrd";
		displayName = "#STR_kr_slot_sg550_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_sg550_hndgrd";
	};
	class Slot_kr_sg552_hndgrd
	{
		name = "kr_sg552_hndgrd";
		displayName = "#STR_kr_slot_sg552_hndgrd";
		ghostIcon = "set:kr_weapon_icons image:kr_sg552_hndgrd";
	};
	class Slot_kr_sg550_stock
	{
		name = "kr_sg550_stock";
		displayName = "#STR_kr_slot_sg550_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_sg550_stock";
	};
	class Slot_kr_g36_stock
	{
		name = "kr_g36_stock";
		displayName = "#STR_kr_slot_g36_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_g36_stock";
	};
	class Slot_kr_g36c_handguard
	{
		name = "kr_g36c_handguard";
		displayName = "#STR_kr_slot_g36c_handguard";
		ghostIcon = "set:kr_weapon_icons image:kr_g36c_handguard";
	};
	class Slot_kr_g36k_handguard
	{
		name = "kr_g36k_handguard";
		displayName = "#STR_kr_slot_g36k_handguard";
		ghostIcon = "set:kr_weapon_icons image:kr_g36k_handguard";
	};
	class Slot_kr_g36_handguard
	{
		name = "kr_g36_handguard";
		displayName = "#STR_kr_slot_g36_handguard";
		ghostIcon = "set:kr_weapon_icons image:kr_g36_handguard";
	};
	class Slot_kr_weaponOpticsG36
	{
		name = "kr_weaponOpticsG36";
		displayName = "#STR_kr_slot_g36_optic";
		ghostIcon = "set:kr_weapon_icons image:none";
	};
	class Slot_kr_g36_ckit
	{
		name = "kr_g36_ckit";
		displayName = "#STR_kr_slot_g36_ckit";
		ghostIcon = "set:kr_weapon_icons image:kr_g36_ckit";
	};
	class Slot_kr_g36_bipods
	{
		name = "kr_g36_bipods";
		displayName = "#STR_kr_slot_g36_bipods";
		ghostIcon = "set:kr_weapon_icons image:kr_g36_bipods";
	};
	class Slot_kr_tt_laser
	{
		name = "kr_tt_laser";
		displayName = "#STR_kr_slot_tt_laser";
		ghostIcon = "set:kr_weapon_icons image:kr_tt_laser";
	};
	class Slot_kr_tt_grip
	{
		name = "kr_tt_grip";
		displayName = "#STR_kr_slot_tt_grip";
		ghostIcon = "set:kr_weapon_icons image:kr_pgrip_p226r";
	};
	class Slot_kr_muzzle762_25
	{
		name = "kr_muzzle762_25";
		displayName = "#STR_kr_slot_muzzle762_25";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle762_25";
	};
	class Slot_kr_mp443_mount
	{
		name = "kr_mp443_mount";
		displayName = "#STR_kr_slot_kr_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_mp443_mount";
	};
	class Slot_kr_pistolOptics_g17
	{
		name = "kr_pistolOptics_g17";
		displayName = "#STR_kr_slot_ironsights";
		ghostIcon = "set:kr_weapon_icons image:kr_ironsights";
	};
	class Slot_kr_receiver_g17
	{
		name = "kr_receiver_g17";
		displayName = "#STR_kr_slot_kr_receiver_g17";
		ghostIcon = "set:kr_weapon_icons image:kr_receiver_g17";
	};
	class Slot_kr_pgrip_g17
	{
		name = "kr_pgrip_g17";
		displayName = "#STR_kr_slot_kr_pistolgrip";
		ghostIcon = "set:kr_weapon_icons image:kr_g17_pgrip";
	};
	class Slot_kr_mount_g17
	{
		name = "kr_mount_g17";
		displayName = "#STR_kr_slot_kr_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_mount_g17";
	};
	class Slot_kr_receiver_p226r
	{
		name = "kr_receiver_p226r";
		displayName = "#STR_kr_slot_kr_receiver_p226r";
		ghostIcon = "set:kr_weapon_icons image:kr_receiver_p226r";
	};
	class Slot_kr_pgrip_p226r
	{
		name = "kr_pgrip_p226r";
		displayName = "#STR_kr_slot_kr_pistolgrip";
		ghostIcon = "set:kr_weapon_icons image:kr_pgrip_p226r";
	};
	class Slot_kr_m9a3_mount
	{
		name = "kr_m9a3_mount";
		displayName = "#STR_kr_slot_kr_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_pointer_1";
	};
	class Slot_kr_pgrip_pm
	{
		name = "kr_pgrip_pm";
		displayName = "#STR_kr_slot_kr_pistolgrip";
		ghostIcon = "set:kr_weapon_icons image:kr_pgrip_p226r";
	};
	class Slot_kr_m3s_stock
	{
		name = "kr_m3s_stock";
		displayName = "#STR_kr_slot_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_m3s_stock";
	};
	class Slot_kr_m3s_mag
	{
		name = "kr_m3s_mag";
		displayName = "#STR_kr_slot_shotgun_mag";
		ghostIcon = "set:kr_weapon_icons image:kr_shotgun_mag";
	};
	class Slot_kr_m870_stock
	{
		name = "kr_m870_stock";
		displayName = "#STR_kr_slot_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_m870_stock";
	};
	class Slot_kr_m870_pump
	{
		name = "kr_m870_pump";
		displayName = "#STR_kr_slot_handguard";
		ghostIcon = "set:kr_weapon_icons image:kr_m870_pump";
	};
	class Slot_kr_shotgun_barrel_mount
	{
		name = "kr_shotgun_barrel_mount";
		displayName = "#STR_kr_slot_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_mount_barrel";
	};
	class Slot_kr_optics_top_mount
	{
		name = "kr_optics_top_mount";
		displayName = "#STR_kr_slot_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_optics_top_mount";
	};
	class Slot_kr_shotgun_mag_mount
	{
		name = "kr_shotgun_mag_mount";
		displayName = "#STR_kr_slot_mount";
		ghostIcon = "set:kr_weapon_icons image:kr_mount_mag";
	};
	class Slot_kr_sg550_bipods
	{
		name = "kr_sg550_bipods";
		displayName = "#STR_kr_slot_sg550_bipods";
		ghostIcon = "set:kr_weapon_icons image:kr_bipod";
	};
	class Slot_kr_csr50_bipods
	{
		name = "kr_csr50_bipods";
		displayName = "#STR_kr_slot_csr50_bipods";
		ghostIcon = "set:kr_weapon_icons image:kr_bipod";
	};

	class Slot_kr_an_94_stock
	{
		name = "kr_an_94_stock";
		displayName = "#STR_kr_slot_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_an_94_stock";
	};

	class Slot_kr_ax50_stock
	{
		name = "kr_ax50_stock";
		displayName = "#STR_kr_slot_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_ax50_stock";
	};
	class Slot_kr_ax50_handguard
	{
		name = "kr_ax50_handguard";
		displayName = "#STR_kr_slot_handguard";
		ghostIcon = "set:kr_weapon_icons image:kr_ax50_handguard";
	};

	class Slot_kr_weaponOpticsAUG
	{
		name = "kr_weaponOpticsAUG";
		displayName = "";
		ghostIcon = "";
		show = "false";
	};

	class Slot_kr_spear_stock
	{
		name = "kr_spear_stock";
		displayName = "#STR_kr_slot_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_spear_stock";
	};
	class Slot_kr_spear_handguard
	{
		name = "kr_spear_handguard";
		displayName = "#STR_kr_slot_handguard";
		ghostIcon = "set:kr_weapon_icons image:kr_spear_handguard";
	};

	class Slot_kr_amb17_stock
	{
		name = "kr_amb17_stock";
		displayName = "#STR_kr_slot_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_amb17_stock";
	};

	class Slot_kr_m82_bipods
	{
		name = "kr_m82_bipods";
		displayName = "#STR_kr_slot_bipod";
		ghostIcon = "set:kr_weapon_icons image:kr_m82_bipods";
	};

	class Slot_kr_mrad_stock
	{
		name = "kr_mrad_stock";
		displayName = "#STR_kr_slot_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_mrad_stock";
	};

	class Slot_kr_svch_stock
	{
		name = "kr_svch_stock";
		displayName = "#STR_kr_slot_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_svch_stock";
	};

	class Slot_kr_muzzle127_55_vssk
	{
		name = "kr_muzzle127_55_vssk";
		displayName = "#STR_kr_slot_muzzle127_55";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle127_55_vssk";
	};
	class Slot_kr_bipod_vssk
	{
		name = "kr_bipod_vssk";
		displayName = "#STR_kr_slot_bipod";
		ghostIcon = "set:kr_weapon_icons image:kr_bipod_vssk";
	};

	class Slot_kr_sks_receiver
	{
		name = "kr_sks_receiver";
		displayName = "#STR_kr_slot_receiver";
		ghostIcon = "set:kr_weapon_icons image:kr_sks_receiver";
	};

	class Slot_kr_sks_hndgrd
	{
		name = "kr_sks_hndgrd";
		displayName = "#STR_kr_slot_handguard";
		ghostIcon = "set:kr_weapon_icons image:kr_sks_handguard";
	};
};
