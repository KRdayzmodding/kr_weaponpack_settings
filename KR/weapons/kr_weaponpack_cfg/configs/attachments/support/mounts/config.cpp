class CfgPatches
{
    class kr_attachmetns_optics_dovetail_cfg
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={"DZ_Data","kr_data","kr_attachmetns_optics_dovetail"};
    };
};

class cfgVehicles
{
	class Inventory_Base;

	class kr_mount_dovetail_zenit_b13v: Inventory_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "Ласточкин Хвост";
		};
	};

	class kr_mount_mosin_aim_sports_mng: Inventory_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "Крепление Кочетова";
		};
	};

	class kr_mount_mosin_aim_sports_tri_rail: Inventory_Base
	{
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		class kr_discription
		{
			kr_tier = 2;
			kr_type = "Крепление Кочетова";
		};
	};


	class kr_mount_nadir_a4 : Inventory_Base
    {
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};

		class kr_discription
		{
			kr_tier = 2;
			kr_type = "Глушитель 9A-91";
		};
    };
};