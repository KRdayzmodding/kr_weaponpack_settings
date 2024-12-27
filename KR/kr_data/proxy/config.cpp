class CfgPatches
{
	class kr_slots
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;

	class Proxypp19_receiver: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_pp19_receiver";
		model = "\KR\kr_data\proxy\weapons\attachments\support\pp19_receiver.p3d";
	};

	class Proxyak_receiver: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_ak_receiver";
		model = "\KR\kr_data\proxy\weapons\attachments\support\ak_receiver.p3d";
	};

	class Proxyak_bttstck: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_ak_stock";
		model = "\KR\kr_data\proxy\weapons\attachments\support\ak_bttstck.p3d";
	};

	class Proxyar_stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_ar_bttstck";
		model = "\KR\kr_data\proxy\weapons\attachments\support\ar_stock.p3d";
	};

	class Proxyak_fld_bttstck: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_ak_fstock";
		model = "\KR\kr_data\proxy\weapons\attachments\support\ak_fld_bttstck.p3d";
	};
	
	class Proxyaks74u_hndgrd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_aks74u_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\aks74u_hndgrd.p3d";
	};

	class Proxyak_pistolgrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_ak_pistolgrip";
		model = "\KR\kr_data\proxy\weapons\attachments\support\ak_pistolgrip.p3d";
	};

	class Proxyak_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_ak_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\ak_handguard.p3d";
	};

	class Proxyar_pistolgrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_ar_pistolgrip";
		model = "KR\kr_data\proxy\weapons\attachments\support\ar_pistolgrip.p3d";
	};

	class Proxyar10_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_ar10_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\ar10_handguard.p3d";
	};

	class Proxyhk416_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_hk416_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\hk416_handguard.p3d";
	};

	class Proxyar15_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_ar15_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\ar15_handguard.p3d";
	};

	class Proxyg28_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_g28_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\g28_handguard.p3d";
	};

	class Proxyfal_pistolgrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_fal_pistolgrip";
		model = "KR\kr_data\proxy\weapons\attachments\support\fal_pistolgrip.p3d";
	};

	class Proxyfal_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_fal_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\fal_handguard.p3d";
	};

	class Proxysaiga_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_saiga_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\saiga_handguard.p3d";
	};

	class Proxyfal_bttstck: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_fal_stock";
		model = "\KR\kr_data\proxy\weapons\attachments\support\fal_bttstck.p3d";
	};

	class Proxyfal_receiver: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_fal_receiver";
		//model = "\KR\weapons\kr_weaponpack\attachments\support\fal_parts\fal_receiver.p3d"; // не бей
	};

	class Proxym200_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_m200_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\m200_handguard.p3d";
	};
	class Proxym200_bttstck: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_m200_stock";
		model = "\KR\kr_data\proxy\weapons\attachments\support\m200_bttstck.p3d";
	};

	class Proxymp5_bttstck: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_mp5_stock";
		model = "\KR\kr_data\proxy\weapons\attachments\support\mp5_bttstck.p3d";
	};
	class Proxymp5_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_mp5_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\mp5_handguard.p3d";
	};
	class Proxymp5_mount: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_mp5_mount";
		model = "\KR\kr_data\proxy\weapons\attachments\support\mp5_mount.p3d";
	};

	class Proxyval_bttstck: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_val_stock";
		model = "\KR\kr_data\proxy\weapons\attachments\support\val_bttstck.p3d";
	};
	class Proxyval_pistolgrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_val_pistolgrip";
		model = "\KR\kr_data\proxy\weapons\attachments\support\val_pistolgrip.p3d";
	};
	class Proxyval_mount: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_val_mount";
		model = "\KR\kr_data\proxy\weapons\attachments\support\val_mount.p3d";
	};

	class Proxysvd_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_svd_hndgrd";
		model = "\KR\kr_data\proxy\weapons\attachments\support\svd_handguard.p3d";
	};

	class Proxysvd_stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_svd_stock";
		model = "\KR\kr_data\proxy\weapons\attachments\support\svd_stock.p3d";
	};

	class Proxyscar_stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_scar_stock";
		model = "\KR\kr_data\proxy\weapons\attachments\support\scar_stock.p3d"; 
	};

	////////////////////МАЗЗЛЫ
	class Proxykr_muzzle9x19: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_muzzle9_19";
		model = "KR\kr_data\proxy\weapons\attachments\muzzles\kr_muzzle9x19.p3d";
	};

	class Proxykr_muzzle366: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_muzzle366";
		model = "KR\kr_data\proxy\weapons\attachments\muzzles\kr_muzzle366.p3d";
	};

	class Proxykr_muzzle308: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_muzzle308";
		model = "KR\kr_data\proxy\weapons\attachments\muzzles\kr_muzzle308.p3d";
	};

	class Proxykr_muzzle12x76: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_muzzle12_76";
		model = "KR\kr_data\proxy\weapons\attachments\muzzles\kr_muzzle12x76.p3d";
	};
	class Proxykr_muzzle545: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_muzzle545";
		model = "KR\kr_data\proxy\weapons\attachments\muzzles\kr_muzzle545.p3d";
	};
	class Proxykr_muzzle556: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_muzzle556";
		model = "KR\kr_data\proxy\weapons\attachments\muzzles\kr_muzzle556.p3d";
	};
	class Proxykr_muzzle762_39: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_muzzle762_39";
		model = "KR\kr_data\proxy\weapons\attachments\muzzles\kr_muzzle762_39.p3d";
	};
	class Proxykr_muzzle762_54: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_muzzle762_54";
		model = "KR\kr_data\proxy\weapons\attachments\muzzles\kr_muzzle762_54.p3d";
	};

	class Proxykr_muzzle762_54_mosin: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_muzzle762_54_mosin";
		model = "KR\kr_data\proxy\weapons\attachments\muzzles\kr_muzzle762_54_mosin.p3d";
	};

	///////////////////////Мосинка
	class Proxymosin_buttpad: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_mosin_buttpad";
		model = "KR\kr_data\proxy\weapons\attachments\support\mosin_buttpad.p3d";
	};
	class Proxymosin_mount: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_mosin_mount";
		model = "KR\kr_data\proxy\weapons\attachments\support\mosin_mount.p3d";
	};

	class Proxymount_1: ProxyAttachment
	{
		inventorySlot = "kr_s_mount_1";
		model = "KR\kr_data\proxy\weapons\attachments\support\mount_1.p3d";
	};
	class Proxymount_2: ProxyAttachment
	{
		inventorySlot = "kr_s_mount_2";
		model = "KR\kr_data\proxy\weapons\attachments\support\mount_2.p3d";
	};
	///////////////////////
	class Proxyforegrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_foregrip";
		model = "\KR\kr_data\proxy\weapons\attachments\support\foregrip.p3d";
	};
	class Proxybipod: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_bipod";
		model = "\KR\kr_data\proxy\weapons\attachments\support\bipod.p3d";
	};
	///////////////////////Оптика
	class Proxymount_dovetail: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsAK";
		model = "KR\kr_data\proxy\weapons\attachments\support\mount_dovetail.p3d";
	};

	class Proxykr_WeaponOptics: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponOptics.p3d";
	};

	class Proxykr_WeaponOptics1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics1";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponOptics1.p3d";
	};
	class Proxykr_WeaponOptics2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics2";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponOptics2.p3d";
	};

	class Proxykr_WeaponOpticsDT: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsDT";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponOpticsDT.p3d";
	};

	class Proxykr_WeaponOpticsB: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsB";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponOpticsB.p3d";
	};

	class Proxykr_WeaponOpticsB1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsB1";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponOpticsB1.p3d";
	};

	class Proxykr_WeaponHolo1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHolo1";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponHolo1.p3d";
	};
	class Proxykr_WeaponHolo2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHolo2";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponHolo2.p3d";
	};
	class Proxykr_WeaponHolo3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHolo3";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponHolo3.p3d";
	};
	class Proxykr_WeaponHolo4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHolo4";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponHolo4.p3d";
	};
	class Proxykr_WeaponHolo5: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHolo5";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponHolo5.p3d";
	};
	class Proxykr_PistolHolo1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "PistolHolo1";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_PistolHolo1.p3d";
	};
	class Proxykr_PistolHolo2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "PistolHolo2";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_PistolHolo2.p3d";
	};
	class Proxykr_WeaponOpticsMosin: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_weaponOpticsMosin";
		model = "KR\kr_data\proxy\weapons\attachments\optics\kr_WeaponOpticsMosin.p3d";
	};

	class Proxykr_pointer_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_pointer_1";
		model = "KR\kr_data\proxy\weapons\attachments\lights\kr_pointer_1.p3d";
	};
	class Proxykr_light_bot: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_light_bot";
		model = "KR\kr_data\proxy\weapons\attachments\lights\kr_light_bot.p3d";
	};
	class Proxykr_light_left: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_light_left";
		model = "KR\kr_data\proxy\weapons\attachments\lights\kr_light_left.p3d";
	};
	class Proxykr_light_right: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_light_right";
		model = "KR\kr_data\proxy\weapons\attachments\lights\kr_light_right.p3d";
	};
	class Proxykr_light_pistol: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "kr_light_pistol";
		model = "KR\kr_data\proxy\weapons\attachments\lights\kr_light_pistol.p3d";
	};
};