class CfgPatches
{
    class kr_attachmetns_mp5_mount_cfg
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={"DZ_Data","kr_data","kr_attachmetns_mp5_mount"};
    };
};

class cfgVehicles
{
	class Inventory_Base;

	class kr_mount_mp5_bt: Inventory_Base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_type = "HK MP5/MP5SD";
		};
	};

	class kr_mount_mp5_hk_mfi: Inventory_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "HK MP5";
		};
	};
};