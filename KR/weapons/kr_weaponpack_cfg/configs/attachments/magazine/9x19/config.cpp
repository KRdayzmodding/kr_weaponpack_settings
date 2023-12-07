class CfgPatches
{
    class kr_magazine_9x19_cfg
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={"DZ_Data","kr_magazine_Base","kr_magazine_9x19"};
    };
};
class CfgMagazines
{

    class kr_magazine_Base;
    class kr_magazine_9x19_Base : kr_magazine_Base
    {
        scope = 0;
        ammo="Bullet_9x19";
        ammoItems[]={"Ammo_9x19", "Ammo_9x19Tracer","KR_Ammo_9x19_AP"};
    };

    class Mag_9x19_mp5_kurtz_std_20Rnd : kr_magazine_9x19_Base
    {
		class kr_discription
		{
			kr_tier = 0;
			kr_caliber = "9x19";
		};
    };

    class Mag_9x19_mp5_std_curved_30Rnd : kr_magazine_9x19_Base
    {
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "9x19";
		};
    };

    class Mag_9x19_mp5_x_product_50Rnd : kr_magazine_9x19_Base
    {
        class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "9x19";
		};
    };
};