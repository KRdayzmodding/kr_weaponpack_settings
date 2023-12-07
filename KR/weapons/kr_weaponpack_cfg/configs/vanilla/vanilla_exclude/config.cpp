class CfgPatches
{
	class kr_weaponpack_vanilla_exclude
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_dz_magazines","DZ_Weapons_Firearms_AK74","DZ_Weapons_Firearms_AKM","DZ_Weapons_Firearms_AK101","DZ_Weapons_Firearms_M4","DZ_Weapons_Firearms_FAL","DZ_Weapons_Muzzles","DZ_Weapons_Supports","DZ_Weapons_Firearms_M249Para","DZ_Weapons_Firearms_groza","DZ_Weapons_Shotguns_MP133","DZ_Weapons_Firearms_MP5","DZ_Weapons_Firearms_SVD","DZ_Weapons_Firearms_MosinNagant","DZ_Weapons_Firearms_SaigaK"};
		magazines[] = {};
	};
};
class cfgWeapons
{
	class AK74_Base;
	class M4A1_Base;
	class Launcher_Base;
	class M249_Base;
	class AK101_Base;
	class AKM_Base;
	class FAL_Base;
	class Groza_Base;
	class Mp133Shotgun_Base;
	class SVD_Base;
	class MP5K_Base;
	class Saiga_Base;
	class SawedoffMosin9130_Base;
	class Mosin9130_Base;
	class Mosin9130: Mosin9130_Base
	{
		scope = 0;
	};
	class Mosin9130_Black: Mosin9130
	{
		scope = 0;
	};
	class Mosin9130_Green: Mosin9130
	{
		scope = 0;
	};
	class Mosin9130_Camo: Mosin9130
	{
		scope = 0;
	};
	class SawedoffMosin9130: SawedoffMosin9130_Base
	{
		scope = 0;
	};
	class SawedoffMosin9130_Black: SawedoffMosin9130
	{
		scope = 0;
	};
	class SawedoffMosin9130_Green: SawedoffMosin9130
	{
		scope = 0;
	};
	class SawedoffMosin9130_Camo: SawedoffMosin9130
	{
		scope = 0;
	};
	class Saiga: Saiga_Base
	{
		scope = 0;
	};
	class SVD: SVD_Base
	{
		scope = 0;
	};
	class MP5K: MP5K_Base
	{
		scope = 0;
	};
	class ak74: AK74_Base
	{
		scope = 0;
	};
	class AK74_Black: ak74
	{
		scope = 0;
	};
	class AK74_Green: ak74
	{
		scope = 0;
	};
	class aks74u: AK74_Base
	{
		scope = 0;
	};
	class AKS74U_Black: aks74u
	{
		scope = 0;
	};
	class AKS74U_Green: aks74u
	{
		scope = 0;
	};
	class ak101: AK101_Base
	{
		scope = 0;
	};
	class AK101_Black: ak101
	{
		scope = 0;
	};
	class AK101_Green: ak101
	{
		scope = 0;
	};
	class akm: AKM_Base
	{
		scope = 0;
	};
	class akm_TESTBED: akm
	{
		scope = 0;
	};
	class m4a1: M4A1_Base
	{
		scope = 0;
	};
	class M4A1_Green: m4a1
	{
		scope = 0;
	};
	class M4A1_Black: m4a1
	{
		scope = 0;
	};
	class UnderSlugGrenadeM4: Launcher_Base
	{
		scope = 0;
	};
	class fal: FAL_Base
	{
		scope = 0;
	};
	class m249: M249_Base
	{
		scope = 0;
	};
	class Groza: Groza_Base
	{
		scope = 0;
	};
	class Mp133Shotgun: Mp133Shotgun_Base
	{
		scope = 0;
	};
	class Mp133Shotgun_PistolGrip: Mp133Shotgun_Base
	{
		scope = 0;
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemSuppressor;
	class ItemOptics_Base;
	class Saiga_Bttstck: Inventory_Base
	{
		scope = 0;
	};
	class MP5_Compensator: ItemSuppressor
	{
		scope = 0;
	};
	class MP5k_StockBttstck: Inventory_Base
	{
		scope = 0;
	};
	class MP5_PlasticHndgrd: Inventory_Base
	{
		scope = 0;
	};
	class MP5_RailHndgrd: Inventory_Base
	{
		scope = 0;
	};
	class PUScopeOptic: ItemOptics_Base
	{
		scope = 0;
	};
	class Mosin_Compensator: ItemSuppressor
	{
		scope = 0;
	};
	class M4_Suppressor: ItemSuppressor
	{
		scope = 0;
	};
	class AK_Suppressor: ItemSuppressor
	{
		scope = 0;
	};
	class M4_OEBttstck: Inventory_Base
	{
		scope = 0;
	};
	class M4_OEBttstck_Black: M4_OEBttstck
	{
		scope = 0;
	};
	class M4_OEBttstck_Green: M4_OEBttstck
	{
		scope = 0;
	};
	class M4_MPBttstck: Inventory_Base
	{
		scope = 0;
	};
	class M4_MPBttstck_Black: M4_MPBttstck
	{
		scope = 0;
	};
	class M4_MPBttstck_Green: M4_MPBttstck
	{
		scope = 0;
	};
	class M4_CQBBttstck: Inventory_Base
	{
		scope = 0;
	};
	class M4_CQBBttstck_Black: M4_CQBBttstck
	{
		scope = 0;
	};
	class M4_CQBBttstck_Green: M4_CQBBttstck
	{
		scope = 0;
	};
	class AK_WoodBttstck: Inventory_Base
	{
		scope = 0;
	};
	class AK_WoodBttstck_Black: AK_WoodBttstck
	{
		scope = 0;
	};
	class AK_WoodBttstck_Camo: AK_WoodBttstck
	{
		scope = 0;
	};
	class AK74_WoodBttstck: Inventory_Base
	{
		scope = 0;
	};
	class AK74_WoodBttstck_Black: AK74_WoodBttstck
	{
		scope = 0;
	};
	class AK74_WoodBttstck_Camo: AK74_WoodBttstck
	{
		scope = 0;
	};
	class AK_FoldingBttstck: Inventory_Base
	{
		scope = 0;
	};
	class AK_FoldingBttstck_Black: AK_FoldingBttstck
	{
		scope = 0;
	};
	class AK_FoldingBttstck_Green: AK_FoldingBttstck
	{
		scope = 0;
	};
	class AK_PlasticBttstck: Inventory_Base
	{
		scope = 0;
	};
	class AK_PlasticBttstck_Black: AK_PlasticBttstck
	{
		scope = 0;
	};
	class AK_PlasticBttstck_Green: AK_PlasticBttstck
	{
		scope = 0;
	};
	class AKS74U_Bttstck: Inventory_Base
	{
		scope = 0;
	};
	class AKS74U_Bttstck_Black: AKS74U_Bttstck
	{
		scope = 0;
	};
	class AKS74U_Bttstck_Green: AKS74U_Bttstck
	{
		scope = 0;
	};
	class M4_PlasticHndgrd: Inventory_Base
	{
		scope = 0;
	};
	class M4_PlasticHndgrd_Black: M4_PlasticHndgrd
	{
		scope = 0;
	};
	class M4_PlasticHndgrd_Green: M4_PlasticHndgrd
	{
		scope = 0;
	};
	class M4_RISHndgrd: Inventory_Base
	{
		scope = 0;
	};
	class M4_RISHndgrd_Black: M4_RISHndgrd
	{
		scope = 0;
	};
	class M4_RISHndgrd_Green: M4_RISHndgrd
	{
		scope = 0;
	};
	class M4_MPHndgrd: Inventory_Base
	{
		scope = 0;
	};
	class M4_MPHndgrd_Black: M4_MPHndgrd
	{
		scope = 0;
	};
	class M4_MPHndgrd_Green: M4_MPHndgrd
	{
		scope = 0;
	};
	class AK_WoodHndgrd: Inventory_Base
	{
		scope = 0;
	};
	class AK_WoodHndgrd_Black: AK_WoodHndgrd
	{
		scope = 0;
	};
	class AK_WoodHndgrd_Camo: AK_WoodHndgrd
	{
		scope = 0;
	};
	class AK74_Hndgrd: Inventory_Base
	{
		scope = 0;
	};
	class AK74_Hndgrd_Black: AK74_Hndgrd
	{
		scope = 0;
	};
	class AK74_Hndgrd_Camo: AK74_Hndgrd
	{
		scope = 0;
	};
	class AK_RailHndgrd: Inventory_Base
	{
		scope = 0;
	};
	class AK_RailHndgrd_Black: AK_RailHndgrd
	{
		scope = 0;
	};
	class AK_RailHndgrd_Green: AK_RailHndgrd
	{
		scope = 0;
	};
	class AK_PlasticHndgrd: Inventory_Base
	{
		scope = 0;
	};
	class Fal_OeBttstck: Inventory_Base
	{
		scope = 0;
	};
	class Fal_FoldingBttstck: Inventory_Base
	{
		scope = 0;
	};
	class M249_Hndgrd: Inventory_Base
	{
		scope = 0;
	};
	class M249_RisHndgrd: Inventory_Base
	{
		scope = 0;
	};
	class M249_Bipod: Inventory_Base
	{
		scope = 0;
	};
	class Groza_LowerReceiver: Inventory_Base
	{
		scope = 0;
	};
	class GrozaGL_LowerReceiver: Inventory_Base
	{
		scope = 0;
	};
	class Groza_Barrel_Short: ItemSuppressor
	{
		scope = 0;
	};
	class Groza_Barrel_Grip: ItemSuppressor
	{
		scope = 0;
	};
	class Groza_Barrel_Suppressor: ItemSuppressor
	{
		scope = 0;
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_SVD_10Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_Saiga_5Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_Saiga_8Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_Saiga_Drum20Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_MP5_15Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_MP5_30Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AK74_30Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AK74_30Rnd_Black: Mag_AK74_30Rnd
	{
		scope = 0;
	};
	class Mag_AK74_30Rnd_Green: Mag_AK74_30Rnd
	{
		scope = 0;
	};
	class Mag_AK74_45Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_STANAG_30Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_STANAGCoupled_30Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_STANAG_60Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_CMAG_10Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_CMAG_10Rnd_Black: Mag_CMAG_10Rnd
	{
		scope = 0;
	};
	class Mag_CMAG_10Rnd_Green: Mag_CMAG_10Rnd
	{
		scope = 0;
	};
	class Mag_CMAG_20Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_CMAG_20Rnd_Black: Mag_CMAG_20Rnd
	{
		scope = 0;
	};
	class Mag_CMAG_20Rnd_Green: Mag_CMAG_20Rnd
	{
		scope = 0;
	};
	class Mag_CMAG_30Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_CMAG_30Rnd_Black: Mag_CMAG_30Rnd
	{
		scope = 0;
	};
	class Mag_CMAG_30Rnd_Green: Mag_CMAG_30Rnd
	{
		scope = 0;
	};
	class Mag_CMAG_40Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_CMAG_40Rnd_Black: Mag_CMAG_40Rnd
	{
		scope = 0;
	};
	class Mag_CMAG_40Rnd_Green: Mag_CMAG_40Rnd
	{
		scope = 0;
	};
	class Mag_FAL_20Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AKM_30Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AKM_Palm30Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AKM_Palm30Rnd_Black: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AKM_Palm30Rnd_Green: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AKM_Drum75Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AKM_Drum75Rnd_Green: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AKM_Drum75Rnd_Black: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AKM_Drum_TEST: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AK101_30Rnd: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AK101_30Rnd_Black: Magazine_Base
	{
		scope = 0;
	};
	class Mag_AK101_30Rnd_Green: Magazine_Base
	{
		scope = 0;
	};
};
