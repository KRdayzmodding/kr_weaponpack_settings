class CfgPatches
{
	class kr_ammunition_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports","kr_data","kr_ammunition"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base;
	class KR_Ammo_lapua338_Base;

    class KR_Ammo_devastator: Ammunition_Base
    {
        weight = 35;
        count = 10;

		class kr_discription
		{
			kr_tier = 5;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
    };

    class KR_Ammo_frag_12: Ammunition_Base
    {
        weight = 35;
        count = 10;

		class kr_discription
		{
			kr_tier = 5;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
    };

    class KR_Ammo_Grizzly40: Ammunition_Base
    {
        weight = 35;
        count = 10;

		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
    };

	class KR_Ammo_AP20: Ammunition_Base
	{
		weight = 35;
		count = 10;

		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
	};

	class KR_Ammo_lead_slug: Ammunition_Base
	{
		weight = 35;
		count = 10;

		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
	};

	class KR_Ammo_FTX_custom: Ammunition_Base
	{
		weight = 35;
		count = 10;

		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
	};

	class KR_Ammo_RIP: Ammunition_Base
	{
		weight = 35;
		count = 10;

		class kr_discription
		{
			kr_tier = 4;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 100;
		};
	};

	class KR_Ammo_buckshot_5: Ammunition_Base
	{
		weight = 35;
		count = 10;

		class kr_discription
		{
			kr_tier = 0;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 50;
		};
	};
	class KR_Ammo_buckshot_7: Ammunition_Base
	{
		weight = 35;
		count = 10;

		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 50;
		};
	};

	class KR_Ammo_buckshot_8: Ammunition_Base
	{
		weight = 35;
		count = 10;

		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
			kr_range = 50;
		};
	};

	class KR_Ammo_lapua338_AP: KR_Ammo_lapua338_Base
	{
		iconCartridge = 3;
		weight = 10;
		count = 20;
	};
	class KR_Ammo_lapua338_FMJ: KR_Ammo_lapua338_Base
	{
		iconCartridge = 3;
		weight = 10;
		count = 20;
	};
	class KR_Ammo_lapua338_TAC: KR_Ammo_lapua338_Base{};
	class KR_Ammo_lapua338_UPZ: KR_Ammo_lapua338_Base
	{
		iconCartridge = 3;
		weight = 10;
		count = 20;
	};
	class KR_Ammo_556x45_AP: Ammunition_Base
	{
		iconCartridge = 2;
		weight = 4;
		count = 20;
	};
	class KR_Ammo_762x54_AP: Ammunition_Base
	{
		iconCartridge = 2;
		weight = 9;
		count = 20;
	};
	class KR_Ammo_762x39_AP: Ammunition_Base
	{
		iconCartridge = 2;
		weight = 8;
		count = 20;
	};
	class KR_Ammo_308Win_AP: Ammunition_Base
	{
		iconCartridge = 2;
		weight = 10;
		count = 20;
	};
	class KR_Ammo_545x39_AP: Ammunition_Base
	{
		iconCartridge = 2;
		weight = 4;
		count = 20;
	};
};

class CfgAmmo
{
	class Bullet_Base;
	class Bullet_12x76_Base;
	class Shotgun_Base;

	class Bullet_AP20: Bullet_12x76_Base
	{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 500;
		typicalSpeed = 600;
		damageBarrel = 750.0;
		damageBarrelDestroyed = 750.0;
		weight = 0.028;


		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.5;
            defaultDamageOverride[] = {{0.7,1.0}};
            
			class Health
			{
				damage = 130;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 50;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_lead_slug: Bullet_12x76_Base
	{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 500;
		typicalSpeed = 600;
		damageBarrel = 500.0;
		damageBarrelDestroyed = 500.0;
		weight = 0.028;


		class DamageApplied
		{
            defaultDamageOverride[] = {{0.65,1.0}};
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.2;
            
			class Health
			{
				damage = 120;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 50;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_FTX_custom: Bullet_12x76_Base
	{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 360;
		typicalSpeed = 450;
		damageBarrel = 550.0;
		damageBarrelDestroyed = 550.0;
		weight = 0.028;


		class DamageApplied
		{
            defaultDamageOverride[] = {{0.4,1.0}};
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.1;
            
			class Health
			{
				damage = 165;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_RIP: Bullet_12x76_Base
	{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 400;
		typicalSpeed = 500;
		damageBarrel = 750.0;
		damageBarrelDestroyed = 750.0;
		weight = 0.028;


		class DamageApplied
		{
            defaultDamageOverride[] = {{0.4,1.0}};
			type = "Projectile";
			dispersion = 0.5;
			bleedThreshold = 0.3;

			class Health
			{
				damage = 210;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_Grizzly40: Bullet_12x76_Base
	{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 520;
		typicalSpeed = 600;
		damageBarrel = 690.0;
		damageBarrelDestroyed = 690.0;
		weight = 0.028;


		class DamageApplied
		{
            defaultDamageOverride[] = {{0.6,1.0}};
			type = "Projectile";
			dispersion = 0.2;
			bleedThreshold = 0.8;

			class Health
			{
				damage = 190;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
			};
		};

		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_buckshot_5: Shotgun_Base
	{
		initSpeed = 360;
		typicalSpeed = 400;
		caliber = 0.5;
		dispersion = 0.02;
		projectilesCount = 15;
		damageBarrel = 400.0;
		damageBarrelDestroyed = 400.0;
		weight = 0.005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.7,1.0}};
			class Health
			{
				damage = 15;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
		class NoiseHit
		{
			strength = 2;
			type = "shot";
		};
	};
	class Bullet_buckshot_7: Shotgun_Base
	{
		initSpeed = 360;
		typicalSpeed = 400;
		caliber = 0.5;
		dispersion = 0.02;
		projectilesCount = 12;
		damageBarrel = 550.0;
		damageBarrelDestroyed = 550.0;
		weight = 0.005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.7,1.0}};
			class Health
			{
				damage = 25;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 15;
			};
		};
		class NoiseHit
		{
			strength = 3;
			type = "shot";
		};
	};
	class Bullet_buckshot_8: Shotgun_Base
	{
		initSpeed = 360;
		typicalSpeed = 400;
		caliber = 0.5;
		dispersion = 0.07;
		projectilesCount = 10;
		damageBarrel = 550.0;
		damageBarrelDestroyed = 550.0;
		weight = 0.005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.6,1.0}};
			class Health
			{
				damage = 45;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 25;
			};
		};
		class NoiseHit
		{
			strength = 5;
			type = "shot";
		};
	};

	class Bullet_338kr_Base: Bullet_Base
	{
		hit = 12;
		airLock = 1;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		damageBarrelDestroyed = 500;
		weight = 0.01;


		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_338kr_AP: Bullet_338kr_Base
	{
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		initSpeed = 869;
		typicalSpeed = 900;
		hit = 50;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 150;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class Bullet_338kr_FMJ: Bullet_338kr_Base
	{
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		initSpeed = 869;
		typicalSpeed = 900;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class Bullet_338kr_TAC: Bullet_338kr_Base
	{
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		initSpeed = 869;
		typicalSpeed = 900;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class Bullet_338kr_UPZ: Bullet_338kr_Base
	{
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		initSpeed = 869;
		typicalSpeed = 900;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class Bullet_556x45_KRAP: Bullet_Base
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 850;
		typicalSpeed = 1000;
		caliber = 1;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 0;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.004;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 90;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_762x54_KRAP: Bullet_Base
	{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 785;
		typicalSpeed = 865;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 150;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_762x39_KRAP: Bullet_Base
	{
		hit = 9.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 640;
		typicalSpeed = 740;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.008;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 110;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_308Win_KRAP: Bullet_Base
	{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 770;
		typicalSpeed = 940;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.01;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 150;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_545x39_KRAP: Bullet_Base
	{
		hit = 7.2;
		typicalSpeed = 880;
		initSpeed = 880;
		caliber = 0.9;
		deflecting = 10;
		damageBarrel = 214.28572;
		damageBarrelDestroyed = 214.28572;
		weight = 0.00343;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 115;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 115;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class KR_Bullet_408CheyTac_Base;
	class KR_Bullet_408cheytac : KR_Bullet_408CheyTac_Base
	{
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
	};
};
