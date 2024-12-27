class CfgPatches
{
	class kr_attachments_support
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
	class Inventory_Base;
	class kr_support_Base: Inventory_Base
	{
		scope = 0;
		reversed = 0;
		rotationFlags = 17;
		hiddenSelections[] = {"camo"};
		isMeleeWeapon = 1;
		absorbency = 0.0;
		isLong = 0;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		soundImpactType = "metal";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
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
	class kr_hguard_Base: kr_support_Base{};
	class kr_stock_Base: kr_support_Base{};
	class kr_pgrip_Base: kr_support_Base{};
	class kr_receiver_Base: kr_support_Base{};
	class kr_ak_receiver_Base: kr_receiver_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_ak_receiver"};
		itemSize[] = {3,1};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
		};
	};
	class kr_ak_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		simpleHiddenSelections[] = {"hide_mount"};
		inventorySlot[] = {"kr_ak_hndgrd"};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
		};
	};
	class kr_ak_hguard_t1_Base: kr_ak_hguard_Base
	{
		recoilModifier[] = {0.6,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 1;
		};
	};
	class kr_ak_hguard_t2_Base: kr_ak_hguard_Base
	{
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 2;
		};
	};
	class kr_ak_hguard_t3_Base: kr_ak_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 3;
		};
	};
	class kr_ak_hguard_t4_Base: kr_ak_hguard_Base
	{
		recoilModifier[] = {0.25,0.7,0.7};
		swayModifier[] = {0.3,0.3,0.3};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 18;
		};
		class kr_description
		{
			kr_type = "AKM, AK74/100";
			kr_tier = 4;
		};
	};
	class kr_ak_pgrip_Base: kr_pgrip_Base
	{
		scope = 0;
		itemSize[] = {1,1};
		inventorySlot[] = {"kr_ak_pistolgrip"};
		soundImpactType = "plastic";
		class kr_description
		{
			kr_type = "AK";
		};
	};
	class kr_ak_pgrip_t1_Base: kr_ak_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.95,0.95,0.7};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_type = "AK";
			kr_tier = 1;
		};
	};
	class kr_ak_pgrip_t2_Base: kr_ak_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.85,0.85,0.7};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_type = "AK";
			kr_tier = 2;
		};
	};
	class kr_ak_pgrip_t3_Base: kr_ak_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.75,0.75,0.7};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_type = "AK";
			kr_tier = 3;
		};
	};
	class kr_ak_pgrip_t4_Base: kr_ak_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.65,0.65,0.65};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_type = "AK";
			kr_tier = 4;
		};
	};
	class kr_ak_stock_Base: kr_stock_Base
	{
		scope = 0;
		itemSize[] = {2,1};
		soundImpactType = "metal";
		class kr_description
		{
			kr_type = "AK";
		};
	};
	class kr_ak_stock_t1_Base: kr_ak_stock_Base
	{
		recoilModifier[] = {1.0,0.7,0.5};
		swayModifier[] = {0.9,0.9,0.9};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 1;
		};
	};
	class kr_ak_stock_t2_Base: kr_ak_stock_Base
	{
		recoilModifier[] = {0.8,0.5,0.45};
		swayModifier[] = {0.85,0.85,0.85};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 2;
		};
	};
	class kr_ak_stock_t3_Base: kr_ak_stock_Base
	{
		recoilModifier[] = {0.75,0.35,0.35};
		swayModifier[] = {0.75,0.65,0.55};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_tier = 3;
		};
	};
	class kr_rpk16_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_rpk16_hndgrd"};
		soundImpactType = "plastic";
		simpleHiddenSelections[] = {"hide_mount"};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "RPK16";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
	};
	class kr_rpk16_fstock_Base: kr_stock_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_rpk16_stock"};
		soundImpactType = "metal";
		class kr_description
		{
			kr_tier = 2;
			kr_type = "RPK16";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
	};
	class kr_m200_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_m200_hndgrd"};
		simpleHiddenSelections[] = {"hide_mount"};
		itemSize[] = {3,1};
		class kr_description
		{
			kr_type = "M200";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
	};
	class kr_mp5_hndgrd_Base: kr_stock_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_mp5_hndgrd"};
		itemSize[] = {3,2};
		class kr_description
		{
			kr_type = "mp5";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
	};
	class kr_g28_hndgrd_Base: kr_stock_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_g28_hndgrd"};
		itemSize[] = {3,2};
		class kr_description
		{
			kr_type = "g28";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
	};
	class kr_m200_stock_Base: kr_stock_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_m200_stock"};
		itemSize[] = {3,2};
		class kr_description
		{
			kr_type = "M200";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
	};
	class kr_mp5_stock_Base: kr_stock_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_mp5_stock"};
		itemSize[] = {3,2};
		class kr_description
		{
			kr_type = "mp5";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
	};
	class kr_sg550_stock_Base: kr_stock_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_sg550_stock"};
		itemSize[] = {2,1};
		class kr_description
		{
			kr_type = "SG550";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
	};
	class kr_sg550_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		simpleHiddenSelections[] = {};
		inventorySlot[] = {"kr_sg550_hndgrd"};
		itemSize[] = {3,1};
		soundImpactType = "metal";
		class kr_description
		{
			kr_tier = 1;
			kr_type = "SG550";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
	};
	class kr_sg550_pgrip_Base: kr_pgrip_Base
	{
		scope = 0;
		itemSize[] = {1,1};
		inventorySlot[] = {"kr_sg550_pistolgrip"};
		soundImpactType = "plastic";
		class kr_description
		{
			kr_tier = 3;
			kr_type = "SG550/552";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
	};
	class kr_ar_stock_Base: kr_stock_Base
	{
		inventorySlot[] = {"kr_ar_bttstck"};
		itemSize[] = {2,2};
		soundImpactType = "plastic";
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AR/any";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
	};
	class kr_ar_stock_t1_Base: kr_ar_stock_Base
	{
		recoilModifier[] = {0.9,0.6,0.55};
		swayModifier[] = {0.95,0.95,0.85};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_type = "AR/any";
			kr_tier = 1;
		};
	};
	class kr_ar_stock_t2_Base: kr_ar_stock_Base
	{
		recoilModifier[] = {0.85,0.55,0.5};
		swayModifier[] = {0.9,0.9,0.75};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_type = "AR/any";
			kr_tier = 2;
		};
	};
	class kr_ar_stock_t3_Base: kr_ar_stock_Base
	{
		recoilModifier[] = {0.8,0.5,0.45};
		swayModifier[] = {0.85,0.85,0.65};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_type = "AR/any";
			kr_tier = 3;
		};
	};
	class kr_ar_stock_t4_Base: kr_ar_stock_Base
	{
		recoilModifier[] = {0.75,0.45,0.35};
		swayModifier[] = {0.8,0.8,0.55};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 16;
		};
		class kr_description
		{
			kr_type = "AR/any";
			kr_tier = 4;
		};
	};
	class kr_ar_pgrip_Base: kr_pgrip_Base
	{
		scope = 0;
		itemSize[] = {1,1};
		inventorySlot[] = {"kr_ar_pistolgrip"};
		soundImpactType = "plastic";
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AR";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 16;
		};
	};
	class kr_ar_pgrip_t1_Base: kr_ar_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.95,0.95,0.7};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AR";
		};
	};
	class kr_ar_pgrip_t2_Base: kr_ar_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.85,0.85,0.7};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "AR";
		};
	};
	class kr_ar_pgrip_t3_Base: kr_ar_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.8,0.8,0.7};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 8;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "AR";
		};
	};
	class kr_ar_pgrip_t4_Base: kr_ar_pgrip_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {0.75,0.75,0.7};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "AR";
		};
	};
	class kr_ar15_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		simpleHiddenSelections[] = {"hide_mount"};
		inventorySlot[] = {"kr_ar15_hndgrd"};
		itemSize[] = {3,1};
		soundImpactType = "metal";
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AR15";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
	};
	class kr_ar15_hguard_t1_Base: kr_ar15_hguard_Base
	{
		recoilModifier[] = {0.55,0.9,0.9};
		swayModifier[] = {0.55,0.55,0.55};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AR15";
		};
	};
	class kr_ar15_hguard_t2_Base: kr_ar15_hguard_Base
	{
		recoilModifier[] = {0.5,0.85,0.85};
		swayModifier[] = {0.5,0.5,0.5};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "AR15";
		};
	};
	class kr_ar15_hguard_t3_Base: kr_ar15_hguard_Base
	{
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.45,0.45,0.45};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "AR15";
		};
	};
	class kr_ar15_hguard_t4_Base: kr_ar15_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "AR15";
		};
	};
	class kr_hk416_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_hk416_hndgrd"};
		simpleHiddenSelections[] = {"hide_mount"};
		itemSize[] = {3,1};
		soundImpactType = "metal";
		class kr_description
		{
			kr_tier = 1;
			kr_type = "HK416";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_hk416_hguard_t1_Base: kr_hk416_hguard_Base
	{
		recoilModifier[] = {0.5,0.85,0.85};
		swayModifier[] = {0.5,0.5,0.5};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "HK416";
		};
	};
	class kr_hk416_hguard_t2_Base: kr_hk416_hguard_Base
	{
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.45,0.45,0.45};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "HK416";
		};
	};
	class kr_hk416_hguard_t3_Base: kr_hk416_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "HK416";
		};
	};
	class kr_ar10_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_ar10_hndgrd"};
		itemSize[] = {4,1};
		simpleHiddenSelections[] = {"hide_mount"};
		soundImpactType = "metal";
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AR10";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_ar10_hguard_t1_Base: kr_ar10_hguard_Base
	{
		recoilModifier[] = {0.6,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AR10";
		};
	};
	class kr_ar10_hguard_t2_Base: kr_ar10_hguard_Base
	{
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "AR10";
		};
	};
	class kr_ar10_hguard_t3_Base: kr_ar10_hguard_Base
	{
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 9;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "AR10";
		};
	};
	class kr_mk18_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_mk18_hndgrd"};
		simpleHiddenSelections[] = {"hide_mount"};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "MK18";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_fal_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_fal_hndgrd"};
		itemSize[] = {4,1};
		simpleHiddenSelections[] = {"hide_mount"};
		soundImpactType = "metal";
		class kr_description
		{
			kr_tier = 1;
			kr_type = "FAL";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_fal_hguard_t1_Base: kr_fal_hguard_Base
	{
		recoilModifier[] = {0.45,0.75,0.85};
		swayModifier[] = {0.65,0.65,0.65};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 1;
		};
	};
	class kr_fal_hguard_t2_Base: kr_fal_hguard_Base
	{
		recoilModifier[] = {0.4,0.7,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_tier = 2;
		};
	};
	class kr_fal_hguard_t3_Base: kr_fal_hguard_Base
	{
		recoilModifier[] = {0.38,0.68,0.78};
		swayModifier[] = {0.4,0.4,0.4};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_tier = 3;
		};
	};
	class kr_fal_stock_Base: kr_stock_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_fal_stock"};
		itemSize[] = {3,2};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "FAL";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_fal_pgrip_Base: kr_pgrip_Base
	{
		scope = 0;
		itemSize[] = {1,1};
		inventorySlot[] = {"kr_fal_pistolgrip"};
		soundImpactType = "plastic";
		class kr_description
		{
			kr_tier = 1;
			kr_type = "FAL";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_fal_receiver_Base: kr_receiver_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_fal_receiver"};
		itemSize[] = {3,1};
		class kr_description
		{
			kr_type = "FAL";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_scar_stock_Base: kr_stock_Base
	{
		scope = 0;
		itemSize[] = {3,2};
		inventorySlot[] = {"kr_scar_parts"};
		soundImpactType = "metal";
		recoilModifier[] = {1.0,0.7,0.5};
		swayModifier[] = {0.8,0.8,0.8};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "SCAR";
		};
	};
	class kr_val_stock_Base: kr_stock_Base
	{
		scope = 0;
		inventorySlot[] = {"kr_val_stock"};
		itemSize[] = {3,2};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "val";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_val_pgrip_Base: kr_pgrip_Base
	{
		scope = 0;
		itemSize[] = {1,1};
		inventorySlot[] = {"kr_val_pistolgrip"};
		soundImpactType = "metal";
		class kr_description
		{
			kr_tier = 1;
			kr_type = "val";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_svd_stock_Base: kr_stock_Base
	{
		scope = 0;
		itemSize[] = {2,1};
		inventorySlot[] = {"kr_svd_stock"};
		soundImpactType = "metal";
		recoilModifier[] = {1.0,0.7,0.5};
		swayModifier[] = {0.8,0.8,0.8};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "СВДС";
		};
	};
	class kr_svd_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		simpleHiddenSelections[] = {"hide_mount"};
		inventorySlot[] = {"kr_svd_hndgrd"};
		class kr_description
		{
			kr_type = "СВД, СВДС";
			kr_tier = 1;
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_svd_hguard_t1_Base: kr_svd_hguard_Base
	{
		recoilModifier[] = {0.6,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_type = "СВД, СВДС";
			kr_tier = 1;
		};
	};
	class kr_svd_hguard_t2_Base: kr_svd_hguard_Base
	{
		recoilModifier[] = {0.55,0.8,0.8};
		swayModifier[] = {0.65,0.65,0.65};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_type = "СВД, СВДС";
			kr_tier = 2;
		};
	};
	class kr_svd_hguard_t3_Base: kr_svd_hguard_Base
	{
		recoilModifier[] = {0.45,0.75,0.75};
		swayModifier[] = {0.6,0.6,0.6};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 5;
		};
		class kr_description
		{
			kr_type = "СВД, СВДС";
			kr_tier = 3;
		};
	};
	class kr_svd_hguard_t4_Base: kr_svd_hguard_Base
	{
		recoilModifier[] = {0.4,0.7,0.7};
		swayModifier[] = {0.5,0.5,0.5};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
		class kr_description
		{
			kr_type = "СВД, СВДС";
			kr_tier = 4;
		};
	};
	class kr_saiga_hguard_Base: kr_hguard_Base
	{
		scope = 0;
		simpleHiddenSelections[] = {"hide_mount"};
		inventorySlot[] = {"kr_saiga_hndgrd"};
		class kr_description
		{
			kr_type = "Сайга12к";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 7;
		};
	};
	class kr_foregrip_Base: kr_support_Base
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		rotationFlags = 17;
		weight = 130;
		itemSize[] = {1,2};
		inventorySlot[] = {"kr_foregrip"};
		isMeleeWeapon = 1;
		recoilModifier[] = {0.8,0.6,0.8};
		swayModifier[] = {0.8,0.6,0.6};
		soundImpactType = "plastic";
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
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_forRaild";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
	};
	class kr_foregrip_t1_Base: kr_foregrip_Base
	{
		recoilModifier[] = {0.7,0.9,0.9};
		swayModifier[] = {0.75,0.75,0.75};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 2;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "#STR_kr_GUI_forRaild";
		};
	};
	class kr_foregrip_t2_Base: kr_foregrip_Base
	{
		recoilModifier[] = {0.6,0.8,0.8};
		swayModifier[] = {0.7,0.7,0.7};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_type = "#STR_kr_GUI_forRaild";
		};
	};
	class kr_foregrip_t3_Base: kr_foregrip_Base
	{
		recoilModifier[] = {0.5,0.7,0.7};
		swayModifier[] = {0.65,0.65,0.65};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 6;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "#STR_kr_GUI_forRaild";
		};
	};
	class kr_foregrip_t4_Base: kr_foregrip_Base
	{
		recoilModifier[] = {0.4,0.6,0.6};
		swayModifier[] = {0.6,0.6,0.6};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 8;
			kr_type = "#STR_kr_GUI_forRaild";
		};
	};
	class kr_muzzle_adapter_Base: Inventory_Base
	{
		scope = 0;
		class kr_description
		{
			kr_tier = 1;
			kr_type = "Адаптер";
			kr_caliber = "";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
	};
	class kr_tt_grip_Base: kr_pgrip_Base
	{
		scope = 0;
		itemSize[] = {1,1};
		inventorySlot[] = {"kr_tt_grip"};
		soundImpactType = "plastic";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_type = "TT";
		};
	};
};
