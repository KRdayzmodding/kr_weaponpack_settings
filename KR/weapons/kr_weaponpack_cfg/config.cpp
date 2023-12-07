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
		type="mod";
		author="Kramtsov, Orng";

		class defs
		{
			class imageSets
			{
				files[] = 
				{
					"KR/weapons/kr_weaponpack_cfg/data/icons/kr_weapons_icons.imageset",
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

    class Slot_kr_bipod
	{
		name = "kr_bipod";
		displayName = "#STR_kr_slot_bipod";
		ghostIcon = "set:kr_weapon_icons image:kr_bipod";
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
		ghostIcon = "set:kr_weapon_icons image:kr_silencer_any";
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
		ghostIcon = "set:kr_weapon_icons image:kr_silencer_any";
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
	
	// class Slot_weapon_tube
	// {
	// 	name = "weapon_tube";
	// 	displayName = "#STR_kr_slot_weapon_tube";
	// 	ghostIcon = "set:kr_weapon_icons image:kr_buttstock_tube";
	// };

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

//  ================ м200 =======================

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
	
//  ================ МП5 =======================
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

	class Slot_kr_scar_stock
	{
		name = "kr_scar_stock";
		displayName = "#STR_kr_slot_kr_scar_stock";
		ghostIcon = "set:kr_weapon_icons image:kr_scar_stock";
	};
//  ================ СВД =======================
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
//  ================ МОСИН =======================
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
//  ================ ВАНИЛЬНЫЕ СЛОТЫ =======================

	class Slot_weaponButtstockAK
	{
		name = "weaponButtstockAK";
		displayName = "#STR_kr_slot_ak_bttstck";
		ghostIcon = "set:kr_weapon_icons image:kr_ak_stock";
	};


	////////////Оптика
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
//////////////////////
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
//////////////////////
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

	class Slot_WeaponHolo1
	{
		name = "WeaponHolo1";
		displayName = "#STR_kr_slot_weaponHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_holosight";
	};
	class Slot_WeaponHolo2
	{
		name = "WeaponHolo2";
		displayName = "#STR_kr_slot_weaponHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_holosight";
	};
	class Slot_WeaponHolo3
	{
		name = "WeaponHolo3";
		displayName = "#STR_kr_slot_weaponHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_holosight";
	};
	class Slot_WeaponHolo4
	{
		name = "WeaponHolo4";
		displayName = "#STR_kr_slot_weaponHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_holosight";
	};
	class Slot_WeaponHolo5
	{
		name = "WeaponHolo5";
		displayName = "#STR_kr_slot_weaponHolo";
		ghostIcon = "set:kr_weapon_icons image:kr_holosight";
	};

	class Slot_weaponOpticsAK
	{
		name = "weaponOpticsAK";
		displayName = "#STR_kr_slot_ak_optics";
		ghostIcon = "set:kr_weapon_icons image:kr_scope_ak";
	};

////////////////////////////////////
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
		displayName = "#STR_kr_slot_s_mount";
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
		displayName = "#STR_kr_slot_muzzle";
		ghostIcon = "set:kr_weapon_icons image:kr_muzzle_9_39_9a91";
	};

    class Slot_kr_foregrip
	{
		name = "kr_foregrip";
		displayName = "#STR_kr_slot_foregrip";
		ghostIcon = "set:kr_weapon_icons image:kr_foregrip";
	};
};