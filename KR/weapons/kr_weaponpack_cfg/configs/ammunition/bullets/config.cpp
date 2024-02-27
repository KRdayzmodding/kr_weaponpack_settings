class CfgPatches
{
	class kr_weaponpack_ammunition_bullets_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Projectiles","kr_data","kr_weaponpack_ammunition_bullets"};
	};
};

class Entity;

class CfgAmmo
{
	class Bullet_Base;
	class Shotgun_Base;

	class kr_Bullet_9x18_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 5.5;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.8;
		deflecting = 30;
		initSpeed = 300;
		typicalSpeed = 300;
		airFriction = -0.0015;
		damageBarrel = 150;
		damageBarrelDestroyed = 150;
		weight = 0.006;
		hitAnimation = 0;
		unconRefillModifier = 6;
		
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 50;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_9x18_sp7_gz : kr_Bullet_9x18_Base
	{
		scope = 1;
		casing = "FxCartridge_9x18_sp7_gz";
		round = "FxRound_9x18_sp7_gz";
		spawnPileType = "kr_Ammo_9x18_sp7_gz";
		initSpeed = 420;
		typicalSpeed = 420;
		damageBarrel = 225;
		damageBarrelDestroyed = 225;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.01;
				armorDamage = 0.25;
				damage = 90,5;
			};
			class Blood
			{
				damage = 250;
			};
			class Shock
			{
				damage = 55;
			};
		};
	};
	class Bullet_9x18_ppt_gz : kr_Bullet_9x18_Base
	{
		scope = 1;
		casing = "FxCartridge_9x18_ppt_gz";
		round = "FxRound_9x18_ppt_gz";
		spawnPileType = "kr_Ammo_9x18_ppt_gz";
		initSpeed = 301;
		typicalSpeed = 301;
		damageBarrel = 195;
		damageBarrelDestroyed = 195;
		weight = 0.0084;
		unconRefillModifier = 6;
		model = "\dz\weapons\projectiles\tracer_red.p3d";
		tracerScale = 1;
		tracerStartTime = 0.075;
		tracerEndTime = 3;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.075;
				armorDamage = 0.55;
				damage = 69,4;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 35;
			};
		};
	};
	class Bullet_9x18_pso_gz : kr_Bullet_9x18_Base
	{
		scope = 1;
		casing = "FxCartridge_9x18_pso_gz";
		round = "FxRound_9x18_pso_gz";
		spawnPileType = "kr_Ammo_9x18_pso_gz";
		initSpeed = 315;
		typicalSpeed = 315;
		damageBarrel = 150;
		damageBarrelDestroyed = 150;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.25;
				armorDamage = 0.65;
				damage = 54;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};
	class Bullet_9x18_pst_gz : kr_Bullet_9x18_Base
	{
		scope = 1;
		casing = "FxCartridge_9x18_pst_gz";
		round = "FxRound_9x18_pst_gz";
		spawnPileType = "kr_Ammo_9x18_pst_gz";
		initSpeed = 298;
		typicalSpeed = 298;
		damageBarrel = 171;
		damageBarrelDestroyed = 171;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.8;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.12;
				armorDamage = 0.85;
				damage = 58.8;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 35;
			};
		};
	};
	class Bullet_9x18_pmm_gz : kr_Bullet_9x18_Base
	{
		scope = 1;
		casing = "FxCartridge_9x18_pmm_gz";
		round = "FxRound_9x18_pmm_gz";
		spawnPileType = "kr_Ammo_9x18_pmm_gz";
		initSpeed = 420;
		typicalSpeed = 420;
		damageBarrel = 240;
		damageBarrelDestroyed = 240;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.75;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.31;
				armorDamage = 0.6;
				damage = 68;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};
	class Bullet_9x18_pbm_gz : kr_Bullet_9x18_Base
	{
		scope = 1;
		casing = "FxCartridge_9x18_pbm_gz";
		round = "FxRound_9x18_pbm_gz";
		spawnPileType = "kr_Ammo_9x18_pbm_gz";
		initSpeed = 519;
		typicalSpeed = 519;
		damageBarrel = 255;
		damageBarrelDestroyed = 255;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.95;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.53;
				armorDamage = 0.8;
				damage = 47;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};

	class kr_Bullet_9x19_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.8;
		deflecting = 30;
		initSpeed = 350;
		typicalSpeed = 350;
		airFriction = -0.0023;
		damageBarrel = 175;
		damageBarrelDestroyed = 175;
		weight = 0.0084;
		impactBehaviour = 0;
		hitAnimation = 0;
		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 40;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
    class Bullet_9x19_quakemaker : kr_Bullet_9x19_Base
    {
        scope = 1;
		casing = "FxCartridge_9x19_quakemaker";
		round = "FxRound_9x19_quakemaker";
		spawnPileType = "kr_Ammo_9x19_quakemaker";
		initSpeed = 290;
		typicalSpeed = 290;
		damageBarrel = 263;
		damageBarrelDestroyed = 263;
		weight = 0.0084;
		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.6;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.08;
				armorDamage = 0.15;
				damage = 100;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };
    class Bullet_9x19_rip : kr_Bullet_9x19_Base
    {
        scope = 1;
		casing = "FxCartridge_9x19_rip";
		round = "FxRound_9x19_rip";
		spawnPileType = "kr_Ammo_9x19_rip";
		initSpeed = 381;
		typicalSpeed = 381;
		damageBarrel = 315;
		damageBarrelDestroyed = 315;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.8;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.01;
				armorDamage = 0.22;
				damage = 120;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };
    class Bullet_9x19_pso_gz : kr_Bullet_9x19_Base
    {
        scope = 1;
		casing = "FxCartridge_9x19_pso_gz";
		round = "FxRound_9x19_pso_gz";
		spawnPileType = "kr_Ammo_9x19_pso_gz";
		initSpeed = 340;
		typicalSpeed = 340;
		damageBarrel = 193;
		damageBarrelDestroyed = 193;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.05;
				armorDamage = 0.7;
				damage = 69.4;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };
    class Bullet_9x19_gt : kr_Bullet_9x19_Base
    {
        scope = 1;
		casing = "FxCartridge_9x19_gt";
		round = "FxRound_9x19_gt";
		spawnPileType = "kr_Ammo_9x19_gt";
		initSpeed = 365;
		typicalSpeed = 365;
		damageBarrel = 192;
		damageBarrelDestroyed = 192;
		weight = 0.0084;
		unconRefillModifier = 6;
		model = "\dz\weapons\projectiles\tracer_green.p3d";
		tracerScale = 1;
		tracerStartTime = 0.075;
		tracerEndTime = 3;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.03;
				armorDamage =0.7;
				damage = 68;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };
    class Bullet_9x19_7n21 : kr_Bullet_9x19_Base
    {
        scope = 1;
		casing = "FxCartridge_9x19_7n21";
		round = "FxRound_9x19_7n21";
		spawnPileType = "kr_Ammo_9x19_7n21";
		initSpeed = 457;
		typicalSpeed = 457;
		damageBarrel = 380;
		damageBarrelDestroyed = 380;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.1;
				armorDamage = 0.85;
				damage = 63;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };
    class Bullet_9x19_7n31 : kr_Bullet_9x19_Base
    {
        scope = 1;
		casing = "FxCartridge_9x19_7n31";
		round = "FxRound_9x19_7n31";
		spawnPileType = "kr_Ammo_9x19_7n31";
		initSpeed = 457;
		typicalSpeed = 457;
		damageBarrel = 472;
		damageBarrelDestroyed = 472;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.4;
				armorDamage = 0.29;
				damage = 61;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };
    class Bullet_9x19_ap_63 : kr_Bullet_9x19_Base
    {
        scope = 1;
		casing = "FxCartridge_9x19_ap_63";
		round = "FxRound_9x19_ap_63";
		spawnPileType = "kr_Ammo_9x19_ap_63";
		initSpeed = 365;
		typicalSpeed = 365;
		damageBarrel = 380;
		damageBarrelDestroyed = 380;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.43;
				armorDamage = 0.3;
				damage = 61;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };

	class kr_Bullet_762x25_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 5.5;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.8;
		deflecting = 30;
		initSpeed = 345;
		typicalSpeed = 345;
		airFriction = -0.0015;
		damageBarrel = 200;
		damageBarrelDestroyed = 200;
		weight = 0.006;
		hitAnimation = 0;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 50;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 35;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_762x25_FMJ43 : kr_Bullet_762x25_Base
	{
		scope = 1;
		casing = "FxCartridge_762x25_FMJ43";
		round = "FxRound_762x25_FMJ43";
		spawnPileType = "kr_Ammo_762x25_FMJ43";
		initSpeed = 427;
		typicalSpeed = 427;
		damageBarrel = 200;
		damageBarrelDestroyed = 200;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.1;
				armorDamage = 0.8;
				damage = 70.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};
	class Bullet_762x25_AKBS : kr_Bullet_762x25_Base
	{
		scope = 1;
		casing = "FxCartridge_762x25_AKBS";
		round = "FxRound_762x25_AKBS";
		spawnPileType = "kr_Ammo_762x25_AKBS";
		initSpeed = 425;
		typicalSpeed = 425;
		damageBarrel = 228;
		damageBarrelDestroyed = 228;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.2;
				armorDamage = 0.9;
				damage = 68;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};
	class Bullet_762x25_PT_gz : kr_Bullet_762x25_Base
	{
		scope = 1;
		casing = "FxCartridge_762x25_PT_gz";
		round = "FxRound_762x25_PT_gz";
		spawnPileType = "kr_Ammo_762x25_PT_gz";
		initSpeed = 415;
		typicalSpeed = 415;
		damageBarrel = 300;
		damageBarrelDestroyed = 300;
		weight = 0.0084;
		unconRefillModifier = 6;
		model = "\dz\weapons\projectiles\tracer_red.p3d";
		tracerScale = 1;
		tracerStartTime = 0.075;
		tracerEndTime = 3;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.2;
				armorDamage = 1.0;
				damage = 64.7;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};
	class Bullet_762x25_PST_gz : kr_Bullet_762x25_Base
	{
		scope = 1;
		casing = "FxCartridge_762x25_PST_gz";
		round = "FxRound_762x25_PST_gz";
		spawnPileType = "kr_Ammo_762x25_PST_gz";
		initSpeed = 430;
		typicalSpeed = 430;
		damageBarrel = 280;
		damageBarrelDestroyed = 280;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.1;
				armorDamage = 1.3;
				damage = 58.8;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};

	class kr_Bullet_545x39_Base: Bullet_Base
	{
		scope = 0;
		spawnPileType = "Ammo_545x39";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 7.2;
		airFriction = -0.00125;
		typicalSpeed = 800;
		initSpeed = 800;
		caliber = 0.9;
		deflecting = 10;
		damageBarrel = 225;
		damageBarrelDestroyed = 225;
		weight = 0.00343;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 55;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 45;
				damageOverride[] = {{0.9,1.0}};
			};
		};

		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
    class Bullet_545x39_PRS : kr_Bullet_545x39_Base
    {
        scope = 1;
		casing = "FxCartridge_545x39_PRS";
		round = "FxRound_545x39_PRS";
		spawnPileType = "kr_Ammo_545x39_PRS";
		initSpeed = 866;
		typicalSpeed = 866;
		damageBarrel = 256.5;
		damageBarrelDestroyed = 256.5;
		weight = 0.0084;
		unconRefillModifier = 6;
		
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.8,1.0}};
			class Health
			{
				armorPenetration = 0.2;
				armorDamage = 0.5;
				damage = 82;
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
    };
    class Bullet_545x39_US : kr_Bullet_545x39_Base
    {
        scope = 1;
		casing = "FxCartridge_545x39_US";
		round = "FxRound_545x39_US";
		spawnPileType = "kr_Ammo_545x39_US";
		initSpeed = 303;
		typicalSpeed = 303;
		damageBarrel = 180;
		damageBarrelDestroyed = 180;
		weight = 0.0084;
		unconRefillModifier = 6;
		
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.8,1.0}};
			class Health
			{
				armorPenetration = 0.2;
				armorDamage = 1.1;
				damage = 74;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 75;
			};
		};
    };
    class Bullet_545x39_T : kr_Bullet_545x39_Base
    {
        scope = 1;
		casing = "FxCartridge_545x39_T";
		round = "FxRound_545x39_T";
		spawnPileType = "kr_Ammo_545x39_T";
		initSpeed = 883;
		typicalSpeed = 883;
		damageBarrel = 301.5;
		damageBarrelDestroyed = 301.5;
		weight = 0.0084;
		unconRefillModifier = 6;
		model = "\dz\weapons\projectiles\tracer_green.p3d";
		tracerScale = 1;
		tracerStartTime = 0.075;
		tracerEndTime = 3;
		
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.8,1.0}};
			class Health
			{
				armorPenetration = 0.1;
				armorDamage = 1.0;
				damage = 67;
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
    };
    class Bullet_545x39_FMJ : kr_Bullet_545x39_Base
    {
        scope = 1;
		casing = "FxCartridge_545x39_FMJ";
		round = "FxRound_545x39_FMJ";
		spawnPileType = "kr_Ammo_545x39_FMJ";
		initSpeed = 884;
		typicalSpeed = 884;
		damageBarrel = 225.0;
		damageBarrelDestroyed = 225.0;
		weight = 0.0084;
		unconRefillModifier = 6;
		
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.8,1.0}};
			class Health
			{
				armorPenetration = 0.1;
				armorDamage = 1.0;
				damage = 64.4;
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
    };
    class Bullet_545x39_PS : kr_Bullet_545x39_Base
    {
        scope = 1;
		casing = "FxCartridge_545x39_PS";
		round = "FxRound_545x39_PS";
		spawnPileType = "kr_Ammo_545x39_PS";
		initSpeed = 890;
		typicalSpeed = 890;
		damageBarrel = 247.5;
		damageBarrelDestroyed = 247.5;
		weight = 0.0084;
		unconRefillModifier = 6;
		
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.8,1.0}};
			class Health
			{
				armorPenetration = 0.4;
				armorDamage = 1.2;
				damage = 62;
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
    };
    class Bullet_545x39_BT : kr_Bullet_545x39_Base
    {
        scope = 1;
		casing = "FxCartridge_545x39_BT";
		round = "FxRound_545x39_BT";
		spawnPileType = "kr_Ammo_545x39_BT";
		initSpeed = 880;
		typicalSpeed = 880;
		damageBarrel = 337.5;
		damageBarrelDestroyed = 337.5;
		weight = 0.0084;
		unconRefillModifier = 6;
		model = "\dz\weapons\projectiles\tracer_red.p3d";
		tracerScale = 1;
		tracerStartTime = 0.075;
		tracerEndTime = 3;
		
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.8,1.0}};
			class Health
			{
				armorPenetration = 0.55;
				armorDamage = 0.95;
				damage = 56.4;
			};
			class Blood
			{
				damage = 50;
			};
			class Shock
			{
				damage = 100;
			};
		};
    };
    class Bullet_545x39_BS : kr_Bullet_545x39_Base
    {
        scope = 1;
		casing = "FxCartridge_545x39_BS";
		round = "FxRound_545x39_BS";
		spawnPileType = "kr_Ammo_545x39_BS";
		initSpeed = 830;
		typicalSpeed = 830;
		damageBarrel = 326.0;
		damageBarrelDestroyed = 326.0;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.8,1.0}};
			class Health
			{
				armorPenetration = 0.7;
				armorDamage = 0.57;
				damage = 50.5;
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
    };

	class kr_Bullet_556x45_Base: Bullet_Base
	{
		scope = 0;
		spawnPileType = "";
		casing = "";
		round = "";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 850;
		typicalSpeed = 850;
		airFriction = -0.00125;
		caliber = 1;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.004;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 50;
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
    class Bullet_556x45_warmageddon : kr_Bullet_556x45_Base
    {
        scope = 1;
		casing = "FxCartridge_556x45_warmageddon";
		round = "FxRound_556x45_warmageddon";
		spawnPileType = "kr_Ammo_556x45_warmageddon";
		initSpeed = 936;
		typicalSpeed = 936;
		damageBarrel = 375;
		damageBarrelDestroyed = 375;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.1;
				armorDamage = 0.35;
				damage = 103.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 70;
			};
		};
    };
    class Bullet_556x45_m856 : kr_Bullet_556x45_Base
    {
        scope = 1;
		casing = "FxCartridge_556x45_m856";
		round = "FxRound_556x45_m856";
		spawnPileType = "kr_Ammo_556x45_m856";
		initSpeed = 872;
		typicalSpeed = 872;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.0084;
		unconRefillModifier = 6;
		model = "\dz\weapons\projectiles\tracer_red.p3d";
		tracerScale = 1;
		tracerStartTime = 0.075;
		tracerEndTime = 3;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.1;
				armorDamage = 0.7;
				damage = 75;
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
    };
	class Bullet_556x45_FMJ : kr_Bullet_556x45_Base
	{
		scope = 1;
		casing = "FxCartridge_556x45_FMJ";
		round = "FxRound_556x45_FMJ";
		spawnPileType = "kr_Ammo_556x45_FMJ";
		initSpeed = 957;
		typicalSpeed = 957;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.12;
				armorDamage = 0.8;
				damage = 69.4;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};
	class Bullet_556x45_m855 : kr_Bullet_556x45_Base
	{
		scope = 1;
		casing = "FxCartridge_556x45_m855";
		round = "FxRound_556x45_m855";
		spawnPileType = "kr_Ammo_556x45_m855";
		initSpeed = 922;
		typicalSpeed = 922;
		damageBarrel = 285;
		damageBarrelDestroyed = 285;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.45;
				armorDamage = 1.1;
				damage = 57;
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
	};
    class Bullet_556x45_m855a1 : kr_Bullet_556x45_Base
    {
        scope = 1;
		casing = "FxCartridge_556x45_m855a1";
		round = "FxRound_556x45_m855a1";
		spawnPileType = "kr_Ammo_556x45_m855a1";
		initSpeed = 922;
		typicalSpeed = 922;
		damageBarrel = 437.5;
		damageBarrelDestroyed = 437.5;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.56;
				armorDamage = 0.8;
				damage = 57.6;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };
    class Bullet_556x45_m995 : kr_Bullet_556x45_Base
    {
        scope = 1;
		casing = "FxCartridge_556x45_m995";
		round = "FxRound_556x45_m995";
		spawnPileType = "kr_Ammo_556x45_m995";
		initSpeed = 1013;
		typicalSpeed = 1013;
		damageBarrel = 437.5;
		damageBarrelDestroyed = 437.5;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.8;
				armorDamage = 0.55;
				damage = 49.4;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };

	class kr_Bullet_366TKM_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 9.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 550;
		typicalSpeed = 550;
		airFriction = -0.0015;
		caliber = 1.0;
		deflecting = 10;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 100;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.8,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_366TKM_Geksa : kr_Bullet_366TKM_Base
	{
		scope = 1;
		casing = "FxCartridge_366TKM_Geksa";
		round = "FxRound_366TKM_Geksa";
		spawnPileType = "kr_Ammo_366TKM_Geksa";
		initSpeed = 550;
		typicalSpeed = 550;
		damageBarrel = 472.5;
		damageBarrelDestroyed = 472.5;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.1;
				armorDamage = 0.55;
				damage = 129.4;
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
	};
	class Bullet_366TKM_FMJ : kr_Bullet_366TKM_Base
	{
		scope = 1;
		casing = "FxCartridge_366TKM_FMJ";
		round = "FxRound_366TKM_FMJ";
		spawnPileType = "kr_Ammo_366TKM_FMJ";
		initSpeed = 580;
		typicalSpeed = 580;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.2;
				armorDamage = 0.8;
				damage = 115;
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
	};
	class Bullet_366TKM_EKO : kr_Bullet_366TKM_Base
	{
		scope = 1;
		casing = "FxCartridge_366TKM_EKO";
		round = "FxRound_366TKM_EKO";
		spawnPileType = "kr_Ammo_366TKM_EKO";
		initSpeed = 770;
		typicalSpeed = 770;
		damageBarrel = 455;
		damageBarrelDestroyed = 455;
		weight = 0.0084;
		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.3;
				armorDamage = 1.1;
				damage = 85.8;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 60;
			};
		};
	};
	class Bullet_366TKM_custom_ap : kr_Bullet_366TKM_Base
	{
		scope = 1;
		casing = "FxCartridge_366TKM_custom_ap";
		round = "FxRound_366TKM_custom_ap";
		spawnPileType = "kr_Ammo_366TKM_custom_ap";
		initSpeed = 602;
		typicalSpeed = 602;
		damageBarrel = 665;
		damageBarrelDestroyed = 665;
		weight = 0.0084;
		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.4;
				armorDamage = 0.54;
				damage = 105.8;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 75;
			};
		};
	};

	class kr_Bullet_762x39_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 9.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 720;
		typicalSpeed = 720;
		airFriction = -0.0015;
		caliber = 1.0;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 50;
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
	class Bullet_762x39_fmj : kr_Bullet_762x39_Base
	{
		scope = 1;
		casing = "FxCartridge_762x39_fmj";
		round = "FxRound_762x39_fmj";
		spawnPileType = "kr_Ammo_762x39_fmj";
		initSpeed = 775;
		typicalSpeed = 775;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.2;
				armorDamage = 1;
				damage = 74;
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
	};
	class Bullet_762x39_t45m : kr_Bullet_762x39_Base
	{
		scope = 1;
		casing = "FxCartridge_762x39_t45m";
		round = "FxRound_762x39_t45m";
		spawnPileType = "kr_Ammo_762x39_t45m";
		initSpeed = 720;
		typicalSpeed = 720;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.0084;
		model = "\dz\weapons\projectiles\tracer_red.p3d";
		tracerScale = 1;
		tracerStartTime = 0.075;
		tracerEndTime = 3;
		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.2;
				armorDamage = 1.0;
				damage = 75;
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
	};
	class Bullet_762x39_us : kr_Bullet_762x39_Base
	{
		scope = 1;
		casing = "FxCartridge_762x39_us";
		round = "FxRound_762x39_us";
		spawnPileType = "kr_Ammo_762x39_us";
		initSpeed = 303;
		typicalSpeed = 303;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.09;
				armorDamage = 1.8;
				damage = 65,8;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 70;
			};
		};
	};
	class Bullet_762x39_ps : kr_Bullet_762x39_Base
	{
		scope = 1;
		casing = "FxCartridge_762x39_ps";
		round = "FxRound_762x39_ps";
		spawnPileType = "kr_Ammo_762x39_ps";
		initSpeed = 717;
		typicalSpeed = 717;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.0084;
		unconRefillModifier = 6;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.3;
				armorDamage = 1.3;
				damage = 67;
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
	};
	class Bullet_762x39_pp : kr_Bullet_762x39_Base
	{
		scope = 1;
		casing = "FxCartridge_762x39_pp";
		round = "FxRound_762x39_pp";
		spawnPileType = "kr_Ammo_762x39_pp";
		initSpeed = 730;
		typicalSpeed = 730;
		damageBarrel = 675;
		damageBarrelDestroyed = 675;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.6;
				armorDamage = 1.3;
				damage = 64;
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
	};
	class Bullet_762x39_bp : kr_Bullet_762x39_Base
	{
		scope = 1;
		casing = "FxCartridge_762x39_bp";
		round = "FxRound_762x39_bp";
		spawnPileType = "kr_Ammo_762x39_bp";
		initSpeed = 730;
		typicalSpeed = 730;
		damageBarrel = 725;
		damageBarrelDestroyed = 725;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.7;
				armorDamage = 1.0;
				damage = 58;
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
	};
	class Bullet_762x39_mai_ap : kr_Bullet_762x39_Base
	{
		scope = 1;
		casing = "FxCartridge_762x39_mai_ap";
		round = "FxRound_762x39_mai_ap";
		spawnPileType = "kr_Ammo_762x39_mai_ap";
		initSpeed = 875;
		typicalSpeed = 875;
		damageBarrel = 850;
		damageBarrelDestroyed = 850;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 1.0;
				armorDamage = 0.8;
				damage = 55;
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
	};

	class kr_Bullet_762x51_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 800;
		typicalSpeed = 920;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 570;
		damageBarrelDestroyed = 570;
		weight = 0.01;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 70;
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
    class Bullet_762x51_ultra_nosler : kr_Bullet_762x51_Base
    {
        scope = 1;
		casing = "FxCartridge_762x51_ultra_nosler";
		round = "FxRound_762x51_ultra_nosler";
		spawnPileType = "kr_Ammo_762x51_ultra_nosler";
		initSpeed = 822;
		typicalSpeed = 822;
		damageBarrel = 649.8;
		damageBarrelDestroyed = 649.8;
		weight = 0.0084;
		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.15;
				armorDamage = 0.75;
				damage = 107;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 65;
			};
		};
    };
    class Bullet_762x51_tpz_sp : kr_Bullet_762x51_Base
    {
        scope = 1;
		casing = "FxCartridge_762x51_tpz_sp";
		round = "FxRound_762x51_tpz_sp";
		spawnPileType = "kr_Ammo_762x51_tpz_sp";
		initSpeed = 833;
		typicalSpeed = 833;
		damageBarrel = 741;
		damageBarrelDestroyed = 741;
		weight = 0.0084;
		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.35;
				armorDamage = 1.0;
				damage = 102;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 66;
			};
		};
    };
    class Bullet_762x51_bpz_fmj : kr_Bullet_762x51_Base
    {
        scope = 1;
		casing = "FxCartridge_762x51_bpz_fmj";
		round = "FxRound_762x51_bpz_fmj";
		spawnPileType = "kr_Ammo_762x51_bpz_fmj";
		initSpeed = 840;
		typicalSpeed = 84;
		damageBarrel = 570;
		damageBarrelDestroyed = 570;
		weight = 0.0084;
		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.2;
				armorDamage = 1.0;
				damage = 98;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 60;
			};
		};
    };
    class Bullet_762x51_m80 : kr_Bullet_762x51_Base
    {
        scope = 1;
		casing = "FxCartridge_762x51_m80";
		round = "FxRound_762x51_m80";
		spawnPileType = "kr_Ammo_762x51_m80";
		initSpeed = 833;
		typicalSpeed = 833;
		damageBarrel = 741;
		damageBarrelDestroyed = 741;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.5;
				armorDamage = 4.6;
				damage = 80;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 70;
			};
		};
    };
    class Bullet_762x51_m61 : kr_Bullet_762x51_Base
    {
        scope = 1;
		casing = "FxCartridge_762x51_m61";
		round = "FxRound_762x51_m61";
		spawnPileType = "kr_Ammo_762x51_m61";
		initSpeed = 849;
		typicalSpeed = 849;
		damageBarrel = 1026;
		damageBarrelDestroyed = 1026;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.7;
				armorDamage = 0.6;
				damage = 82;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 65;
			};
		};
    };
    class Bullet_762x51_m993 : kr_Bullet_762x51_Base
    {
        scope = 1;
		casing = "FxCartridge_762x51_m993";
		round = "FxRound_762x51_m993";
		spawnPileType = "kr_Ammo_762x51_m993";
		initSpeed = 910;
		typicalSpeed = 910;
		damageBarrel = 1140;
		damageBarrelDestroyed = 1140;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 1.0;
				armorDamage = 0.4;
				damage = 79;
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
    };



	class kr_Bullet_9x39_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.9;
		deflecting = 20;
		typicalSpeed = 280;
		airFriction = -0.0015;
		initSpeed = 280;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.017;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 75;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.9,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_9x39_bp : kr_Bullet_9x39_Base
	{
		scope = 1;
		casing = "FxCartridge_9x39_bp";
		round = "FxRound_9x39_bp";
		spawnPileType = "kr_Ammo_9x39_bp";
		initSpeed = 295;
		typicalSpeed = 295;
		damageBarrel = 577;
		damageBarrelDestroyed = 577;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 1.0;
				armorDamage = 2.0;			
				damage = 58;
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
	};
    class Bullet_9x39_pab9 : kr_Bullet_9x39_Base
    {
        scope = 1;
		casing = "FxCartridge_9x39_pab9";
		round = "FxRound_9x39_pab9";
		spawnPileType = "kr_Ammo_9x39_pab9";
		initSpeed = 320.0;
		typicalSpeed = 320.0;
		damageBarrel = 647.5;
		damageBarrelDestroyed = 647.5;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 1.2;
				armorDamage = 2.0;			
				damage = 62;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };
    class Bullet_9x39_sp5 : kr_Bullet_9x39_Base
    {
        scope = 1;
		casing = "FxCartridge_9x39_sp5";
		round = "FxRound_9x39_sp5";
		spawnPileType = "kr_Ammo_9x39_sp5";
		initSpeed = 305;
		typicalSpeed = 305;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.15;
				armorDamage = 4.0;			
				damage = 90;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };
    class Bullet_9x39_sp6 : kr_Bullet_9x39_Base
    {
        scope = 1;
		casing = "FxCartridge_9x39_sp6";
		round = "FxRound_9x39_sp6";
		spawnPileType = "kr_Ammo_9x39_sp6";
		initSpeed = 305;
		typicalSpeed = 305;
		damageBarrel = 507.5;
		damageBarrelDestroyed = 507.5;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.9;
				armorDamage = 2.0;			
				damage = 60;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
    };

	class kr_Bullet_127x55_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.9;
		deflecting = 20;
		typicalSpeed = 280;
		airFriction = -0.0015;
		initSpeed = 280;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.017;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 75;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.9,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_127x55_PS12 : kr_Bullet_127x55_Base
	{
		scope = 1;
		casing = "FxCartridge_127x55_PS12";
		round = "FxRound_127x55_PS12";
		spawnPileType = "kr_Ammo_127x55_PS12";
		initSpeed = 285;
		typicalSpeed = 285;
		damageBarrel = 560;
		damageBarrelDestroyed = 560;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.7;
				armorDamage = 10.0;
				damage = 115;
			};
			class Blood
			{
				damage = 300;
			};
			class Shock
			{
				damage = 200;
			};
		};
	};
	class Bullet_127x55_PS12A : kr_Bullet_127x55_Base
	{
		scope = 1;
		casing = "FxCartridge_127x55_PS12A";
		round = "FxRound_127x55_PS12A";
		spawnPileType = "kr_Ammo_127x55_PS12A";
		initSpeed = 290;
		typicalSpeed = 290;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.4;
				armorDamage = 4.0;
				damage =165;
			};
			class Blood
			{
				damage = 300;
			};
			class Shock
			{
				damage = 200;
			};
		};
	};
	class Bullet_127x55_PS12B : kr_Bullet_127x55_Base
	{
		scope = 1;
		casing = "FxCartridge_127x55_PS12B";
		round = "FxRound_127x55_PS12B";
		spawnPileType = "kr_Ammo_127x55_PS12B";
		initSpeed = 300;
		typicalSpeed = 300;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 1.5;
				armorDamage = 3.3;
				damage = 102;
			};
			class Blood
			{
				damage = 300;
			};
			class Shock
			{
				damage = 200;
			};
		};
	};

	class kr_Bullet_338LM_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 785;
		typicalSpeed = 865;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
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
				damageOverride[] = {{0.86,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_338LM_ap : kr_Bullet_338LM_Base
	{
		scope = 1;
		casing = "FxCartridge_338LM_ap";
		round = "FxRound_338LM_ap";
		spawnPileType = "kr_Ammo_338LM_ap";
		initSpeed = 849;
		typicalSpeed = 849;
		damageBarrel = 1400;
		damageBarrelDestroyed = 1400;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 4.0;
				armorDamage = 3.5;
				damage = 220;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class Bullet_338LM_upz : kr_Bullet_338LM_Base
	{
		scope = 1;
		casing = "FxCartridge_338LM_upz";
		round = "FxRound_338LM_upz";
		spawnPileType = "kr_Ammo_338LM_upz";
		initSpeed = 730;
		typicalSpeed = 730;
		damageBarrel = 1120;
		damageBarrelDestroyed = 1120;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.1;
				armorDamage = 5.0;
				damage = 250;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class Bullet_338LM_fmj : kr_Bullet_338LM_Base
	{
		scope = 1;
		casing = "FxCartridge_338LM_fmj";
		round = "FxRound_338LM_fmj";
		spawnPileType = "kr_Ammo_338LM_fmj";
		initSpeed = 900;
		typicalSpeed = 900;
		damageBarrel = 700;
		damageBarrelDestroyed = 700;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 0.8;
				armorDamage = 8.9;
				damage = 200;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class Bullet_338LM_tac_x : kr_Bullet_338LM_Base
	{
		scope = 1;
		casing = "FxCartridge_338LM_tac_x";
		round = "FxRound_338LM_tac_x";
		spawnPileType = "kr_Ammo_338LM_tac_x";
		initSpeed = 730;
		typicalSpeed = 730;
		damageBarrel = 980;
		damageBarrelDestroyed = 980;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				armorPenetration = 1.5;
				armorDamage = 3.3;
				damage = 350;
			};
			class Blood
			{
				damage = 350;
			};
			class Shock
			{
				damage = 100;
			};
		};
	};
	class kr_Bullet_408CheyTac_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 785;
		typicalSpeed = 865;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
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
				damageOverride[] = {{0.86,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_408CheyTac : kr_Bullet_408CheyTac_Base
	{
		scope = 1;
		casing = "FxCartridge_408CheyTac";
		round = "FxRound_408CheyTac";
		spawnPileType = "kr_Ammo_408CheyTac";
		initSpeed = 1110;
		typicalSpeed = 1110;
		damageBarrel = 1200;
		damageBarrelDestroyed = 1200;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.3,1.0}};
			class Health
			{
				armorPenetration = 1.7;
				armorDamage = 10.0;
				damage = 600;
			};
			class Blood
			{
				damage = 700;
			};
			class Shock
			{
				damage = 400;
			};
		};
	};

	class kr_Bullet_50BMG_Base: Bullet_Base
	{
		scope = 0;
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 785;
		typicalSpeed = 865;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
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
				damageOverride[] = {{0.86,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_50BMG : kr_Bullet_50BMG_Base
	{
		scope = 1;
		casing = "FxCartridge_50BMG";
		round = "FxRound_50BMG";
		spawnPileType = "kr_Ammo_50BMG";
		initSpeed = 730;
		typicalSpeed = 730;
		damageBarrel = 3500;
		damageBarrelDestroyed = 3500;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.3,1.0}};
			class Health
			{
				armorPenetration = 2.0;
				armorDamage = 5.0;
				damage = 700;
			};
			class Blood
			{
				damage = 1500;
			};
			class Shock
			{
				damage = 500;
			};
		};
	};
	class Bullet_50BMG_AP : kr_Bullet_50BMG_Base
	{
		scope = 1;
		casing = "FxCartridge_50BMG_AP";
		round = "FxRound_50BMG_AP";
		spawnPileType = "kr_Ammo_50BMG_AP";
		initSpeed = 770;
		typicalSpeed = 770;
		damageBarrel = 5000;
		damageBarrelDestroyed = 5000;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.3,1.0}};
			class Health
			{
				armorPenetration = 2.0;
				armorDamage = 8.0;
				damage = 700;
			};
			class Blood
			{
				damage = 1500;
			};
			class Shock
			{
				damage = 500;
			};
		};
	};
	class Bullet_50BMG_T : kr_Bullet_50BMG_Base
	{
		scope = 1;
		casing = "FxCartridge_50BMG_T";
		round = "FxRound_50BMG_T";
		spawnPileType = "kr_Ammo_50BMG_T";
		initSpeed = 650;
		typicalSpeed = 650;
		damageBarrel = 2500;
		damageBarrelDestroyed = 2500;
		weight = 0.0084;

		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.3,1.0}};
			class Health
			{
				armorPenetration = 2.0;
				armorDamage = 8.0;
				damage = 700;
			};
			class Blood
			{
				damage = 700;
			};
			class Shock
			{
				damage = 400;
			};
		};
	};
	class Bullet_50bmg_ET: kr_Bullet_50bmg_Base
	{
		scope = 2;
		casing = "FxCartridge_50BMG_ET";
		round = "FxRound_50BMG_ET";
		spawnPileType = "kr_Ammo_50bmg_ET";
		hit = 30;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 4;
		airLock = 1;
		typicalSpeed = 1700;
		initSpeed = 1700;
		airFriction = -0.0012;
		caliber = 9;
		deflecting = 20;
		damageBarrel = 300;
		damageBarrelDestroyed = 3000;
		weight = 0.035;
		impactBehaviour = 1;
		model = "\dz\weapons\projectiles\tracer_red.p3d";
		tracerScale = 5;
		tracerStartTime = 0.001;
		tracerEndTime = 15;
		indirectHit = 1;
		indirectHitRange = 10;
		indirectHitRangeMultiplier = 1;
		explosive = 1;
		soundSetExplosion[] = {"Grenade_explosion_SoundSet","Grenade_Tail_SoundSet"};
		
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage = 1000;
			};
			class Blood
			{
				damage = 400;
			};
			class Shock
			{
				damage = 400;
			};
		};
	};
	class Bullet_50bmg_E: kr_Bullet_50BMG_Base
	{
		scope = 2;
		casing = "FxCartridge_50BMG_E";
		round = "FxRound_50BMG_E";
		spawnPileType = "kr_Ammo_50bmg_E";
		hit = 30;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 4;
		airLock = 1;
		typicalSpeed = 700;
		initSpeed = 700;
		airFriction = -0.0012;
		caliber = 9;
		deflecting = 20;
		damageBarrel = 3000;
		damageBarrelDestroyed = 3000;
		weight = 0.035;
		impactBehaviour = 1;
		indirectHit = 1;
		indirectHitRange = 10;
		indirectHitRangeMultiplier = 1;
		explosive = 1;
		soundSetExplosion[] = {"Grenade_explosion_SoundSet","Grenade_Tail_SoundSet"};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage = 300;
			};
			class Blood
			{
				damage = 400;
			};
			class Shock
			{
				damage = 400;
			};
		};
	};

	class kr_Bullet_12x76_Base: Bullet_Base
	{
		scope = 0;
		proxyShape = "";
		casing = "";
		round = "";
		spawnPileType = "";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 380;
		typicalSpeed = 420;
		airFriction = -0.005;
		caliber = 1;
		deflecting = 0;
		damageBarrel = 600.0;
		damageBarrelDestroyed = 600.0;
		weight = 0.028;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 1.75;
		class SoundSetsGroundHits
		{
			default[] = {"Shell_12ga_default_SoundSet"};
			asphalt_ext[] = {"Shell_12ga_default_SoundSet"};
			asphalt_destroyed_ext[] = {"Shell_12ga_default_SoundSet"};
			asphalt_int[] = {"Shell_12ga_default_int_SoundSet"};
			asphalt_destroyed_int[] = {"Shell_12ga_default_int_SoundSet"};
			asphalt_felt[] = {"Shell_12ga_default_SoundSet"};
			asphalt_felt_int[] = {"Shell_12ga_default_int_SoundSet"};
			cp_broadleaf_dense1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_broadleaf_dense2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_broadleaf_sparse1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_broadleaf_sparse2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_common1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_common2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_moss1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_moss2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_concrete1[] = {"Shell_12ga_default_SoundSet"};
			cp_concrete2[] = {"Shell_12ga_default_SoundSet"};
			concrete_ext[] = {"Shell_12ga_default_SoundSet"};
			concrete_stairs_ext[] = {"Shell_12ga_default_SoundSet"};
			concrete_int[] = {"Shell_12ga_default_int_SoundSet"};
			concrete_stairs[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_ext[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_int[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_roof_ext[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_roof_int[] = {"Shell_12ga_default_SoundSet"};
			cp_dirt[] = {"Shell_12ga_dirt_SoundSet"};
			dirt_ext[] = {"Shell_12ga_dirt_SoundSet"};
			dirt_int[] = {"Shell_12ga_dirt_int_SoundSet"};
			cp_grass[] = {"Shell_12ga_grass_SoundSet"};
			grass_dry_ext[] = {"Shell_12ga_grass_SoundSet"};
			grass_dry_int[] = {"Shell_12ga_grass_int_SoundSet"};
			cp_grass_tall[] = {"Shell_12ga_grass_SoundSet"};
			cp_gravel[] = {"Shell_12ga_gravel_SoundSet"};
			gravel_small_ext[] = {"Shell_12ga_gravel_SoundSet"};
			gravel_small_int[] = {"Shell_12ga_gravel_int_SoundSet"};
			gravel_large_ext[] = {"Shell_12ga_gravel_SoundSet"};
			gravel_large_int[] = {"Shell_12ga_gravel_int_SoundSet"};
			lino_ext[] = {"Shell_12ga_default_SoundSet"};
			lino_int[] = {"Shell_12ga_default_SoundSet"};
			metal_thick_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_stairs_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_thick_int[] = {"Shell_12ga_metal_int_SoundSet"};
			metal_thin_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_thin_int[] = {"Shell_12ga_metal_int_SoundSet"};
			metal_thin_mesh_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_thin_mesh_int[] = {"Shell_12ga_metal_int_SoundSet"};
			cp_rock[] = {"Shell_12ga_default_SoundSet"};
			rubble_large_ext[] = {"Shell_12ga_gravel_SoundSet"};
			rubble_large_int[] = {"Shell_12ga_gravel_SoundSet"};
			rubble_small_ext[] = {"Shell_12ga_gravel_SoundSet"};
			rubble_small_int[] = {"Shell_12ga_gravel_SoundSet"};
			sand_ext[] = {"Shell_12ga_sand_SoundSet"};
			sand_int[] = {"Shell_12ga_sand_int_SoundSet"};
			stone_ext[] = {"Shell_12ga_sand_SoundSet"};
			stone_int[] = {"Shell_12ga_sand_int_SoundSet"};
			textile_carpet_ext[] = {"Shell_12ga_carpet_SoundSet"};
			textile_carpet_int[] = {"Shell_12ga_carpet_int_SoundSet"};
			trash_ext[] = {"Shell_12ga_default_SoundSet"};
			trash_int[] = {"Shell_12ga_default_SoundSet"};
			wood_parquet_ext[] = {"Shell_12ga_wood_SoundSet"};
			wood_parquet_int[] = {"Shell_12ga_wood_int_SoundSet"};
			wood_planks_ext[] = {"Shell_12ga_wood_SoundSet"};
			wood_planks_stairs_ext[] = {"Shell_12ga_wood_SoundSet"};
			wood_planks_int[] = {"Shell_12ga_wood_int_SoundSet"};
			wood_planks_stairs_int[] = {"Shell_12ga_wood_int_SoundSet"};
			fresh_water_ext[] = {"Shell_12ga_water_SoundSet"};
			fresh_water_int[] = {"Shell_12ga_water_int_SoundSet"};
			water_int[] = {"Shell_12ga_water_int_SoundSet"};
			water[] = {"Shell_12ga_water_int_SoundSet"};
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				armorPenetration = 0.01;
				armorDamage = 1;
				damage = 110;
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
	class Bullet_12x76_devastator: kr_Bullet_12x76_Base
	{
		scope = 1;
		proxyShape = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_devastator.p3d";
		casing = "FxCartridge_12x76_devastator";
		round = "FxRound_12x76_devastator";
		spawnPileType = "kr_Ammo_12x76_devastator";
		initSpeed = 200;
		typicalSpeed = 250;
		airFriction = -0.03;
		damageBarrel = 1440.0;
		damageBarrelDestroyed = 1440.0;
		projectilesCount = 10;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.5;
			class Health
			{
				armorPenetration = 1.0;
				armorDamage = 2;
				damage = 30;
			};
			class Blood
			{
				damage = 20;
			};
			class Shock
			{
				damage = 70;
			};
		};
	};
	class Bullet_12x76_frag_12: kr_Bullet_12x76_Base
	{
		scope = 1;
		proxyShape = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_frag_12.p3d";
		casing = "FxCartridge_12x76_frag_12";
		round = "FxRound_12x76_frag_12";
		spawnPileType = "kr_Ammo_12x76_frag_12";
		initSpeed = 300;
		typicalSpeed = 330;
		airFriction = -0.002;
		damageBarrel = 1360.0;
		damageBarrelDestroyed = 1360.0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.5;
			class Health
			{
				armorPenetration = 1.0;
				armorDamage = 2;
				damage = 45;
			};
			class Blood
			{
				damage = 70;
			};
			class Shock
			{
				damage = 25;
			};
		};
	};
	class Bullet_12x76_AP20: kr_Bullet_12x76_Base
	{
		scope = 1;
		proxyShape = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_AP20.p3d";
		casing = "FxCartridge_12x76_AP20";
		round = "FxRound_12x76_AP20";
		spawnPileType = "kr_Ammo_12x76_AP20";
		initSpeed = 460;
		typicalSpeed = 510;
		airFriction = -0.005;
		damageBarrel = 1760.0;
		damageBarrelDestroyed = 1760.0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.5;
			defaultDamageOverride[] = {{0.7,1.0}};
			class Health
			{
				armorPenetration = 1.5;
				armorDamage = 3.0;
				damage = 120;
			};
			class Blood
			{
				damage = 250;
			};
			class Shock
			{
				damage = 90;
			};
		};
	};
	class Bullet_12x76_lead_slug: kr_Bullet_12x76_Base
	{
		scope = 1;
		proxyShape = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_lead_slug.p3d";
		casing = "FxCartridge_12x76_lead_slug";
		round = "FxRound_12x76_lead_slug";
		spawnPileType = "kr_Ammo_12x76_lead_slug";
		initSpeed = 340;
		typicalSpeed = 370;
		airFriction = -0.002;
		damageBarrel = 1200.0;
		damageBarrelDestroyed = 1200.0;

		class DamageApplied
		{
			defaultDamageOverride[] = {{0.65,1.0}};
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.2;
			class Health
			{
				armorPenetration = 0.5;
				armorDamage = 1;
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
	};
	class Bullet_12x76_FTX_custom: kr_Bullet_12x76_Base
	{
		scope = 1;
		proxyShape = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_FTX_custom.p3d";
		casing = "FxCartridge_12x76_FTX_custom";
		round = "FxRound_12x76_FTX_custom";
		spawnPileType = "kr_Ammo_12x76_FTX_custom";
		initSpeed = 440;
		typicalSpeed = 480;
		airFriction = -0.008;
		damageBarrel = 1280.0;
		damageBarrelDestroyed = 1280.0;

		class DamageApplied
		{
			defaultDamageOverride[] = {{0.4,1.0}};
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.1;
			class Health
			{
				armorPenetration = 0.3;
				armorDamage = 1;
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 95;
			};
		};
	};
	class Bullet_12x76_RIP: kr_Bullet_12x76_Base
	{
		scope = 1;
		proxyShape = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_RIP.p3d";
		casing = "FxCartridge_12x76_RIP";
		round = "FxRound_12x76_RIP";
		spawnPileType = "kr_Ammo_12x76_RIP";
		initSpeed = 370;
		typicalSpeed = 410;
		airFriction = -0.03;
		damageBarrel = 1440.0;
		damageBarrelDestroyed = 1440.0;

		class DamageApplied
		{
			defaultDamageOverride[] = {{0.4,1.0}};
			type = "Projectile";
			dispersion = 0.5;
			bleedThreshold = 0.3;
			class Health
			{
				armorPenetration = 0.3;
				armorDamage = 0.8;
				damage = 265;
			};
			class Blood
			{
				damage = 500;
			};
			class Shock
			{
				damage = 50;
			};
		};
	};
	class Bullet_12x76_Grizzly40: kr_Bullet_12x76_Base
	{
		scope = 1;
		proxyShape = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_Grizzly40.p3d";
		casing = "FxCartridge_12x76_Grizzly40";
		round = "FxRound_12x76_Grizzly40";
		spawnPileType = "kr_Ammo_12x76_Grizzly40";
		initSpeed = 360;
		typicalSpeed = 390;
		airFriction = -0.009;
		damageBarrel = 1280.0;
		damageBarrelDestroyed = 1280.0;

		class DamageApplied
		{
			defaultDamageOverride[] = {{0.6,1.0}};
			type = "Projectile";
			dispersion = 0.2;
			bleedThreshold = 0.8;
			class Health
			{
				armorPenetration = 0.3;
				armorDamage = 0.8;
				damage = 190;
			};
			class Blood
			{
				damage = 300;
			};
			class Shock
			{
				damage = 65;
			};
		};
	};
	class Bullet_12x76_buckshot_5: Shotgun_Base
	{
		scope = 1;
		proxyShape = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_5.p3d";
		muzzleFlashParticle = "weapon_shot_pellets";
		casing = "FxCartridge_12x76_buckshot_5";
		round = "FxRound_12x76_buckshot_5";
		spawnPileType = "kr_Ammo_12x76_buckshot_5";
		initSpeed = 380;
		typicalSpeed = 415;
		airFriction = -0.00575;
		caliber = 0.5;
		deflecting = 0;
		dispersion = 0.02;
		projectilesCount = 15;
		damageBarrel = 800.0;
		damageBarrelDestroyed = 800.0;
		weight = 0.005;
		impactBehaviour = 0;
		hitAnimation = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.7,1.0}};
			class Health
			{
				armorPenetration = 0.3;
				armorDamage = 0.4;
				damage = 15;
			};
			class Blood
			{
				damage = 25;
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
	class Bullet_12x76_buckshot_7: Shotgun_Base
	{
		scope = 1;
		proxyShape = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_7.p3d";
		muzzleFlashParticle = "weapon_shot_pellets";
		casing = "FxCartridge_12x76_buckshot_7";
		round = "FxRound_12x76_buckshot_7";
		spawnPileType = "kr_Ammo_12x76_buckshot_7";
		initSpeed = 330;
		typicalSpeed = 360;
		airFriction = -0.00575;
		caliber = 0.5;
		deflecting = 0;
		dispersion = 0.02;
		projectilesCount = 12;
		damageBarrel = 960.0;
		damageBarrelDestroyed = 960.0;
		weight = 0.005;
		impactBehaviour = 0;
		hitAnimation = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.7,1.0}};
			class Health
			{
				armorPenetration = 0.4;
				armorDamage = 0.3;
				damage = 25;
			};
			class Blood
			{
				damage = 35;
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
	class Bullet_12x76_buckshot_8: Shotgun_Base
	{
		scope = 1;
		proxyShape = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_8.p3d";
		muzzleFlashParticle = "weapon_shot_pellets";
		casing = "FxCartridge_12x76_buckshot_8";
		round = "FxRound_12x76_buckshot_8";
		spawnPileType = "kr_Ammo_12x76_buckshot_8";
		initSpeed = 300;
		typicalSpeed = 330;
		airFriction = -0.1;
		caliber = 0.5;
		deflecting = 0;
		dispersion = 0.07;
		projectilesCount = 10;
		damageBarrel = 1120.0;
		damageBarrelDestroyed = 1120.0;
		weight = 0.005;
		impactBehaviour = 0;
		hitAnimation = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.6,1.0}};
			class Health
			{
				armorPenetration = 0.5;
				armorDamage = 0.25;
				damage = 45;
			};
			class Blood
			{
				damage = 45;
			};
			class Shock
			{
				damage = 17;
			};
		};
		class NoiseHit
		{
			strength = 5;
			type = "shot";
		};
	};
};

class cfgAmmoTypes
{
    class AType_Bullet_9x19_7n21
    {
        name="Bullet_9x19_7n21";
    };
    class AType_Bullet_9x19_7n31
    {
        name="Bullet_9x19_7n31";
    };
    class AType_Bullet_9x19_ap_63
    {
        name="Bullet_9x19_ap_63";
    };
    class AType_Bullet_9x19_gt
    {
        name="Bullet_9x19_gt";
    };
    class AType_Bullet_9x19_pso_gz
    {
        name="Bullet_9x19_pso_gz";
    };
    class AType_Bullet_9x19_quakemaker
    {
        name="Bullet_9x19_quakemaker";
    };
    class AType_Bullet_9x19_rip
    {
        name="Bullet_9x19_rip";
    };
	class AType_Bullet_9x18_ppt_gz
	{
		name="Bullet_9x18_ppt_gz";
	};
	class AType_Bullet_9x18_pbm_gz
	{
		name="Bullet_9x18_pbm_gz";
	};
	class AType_Bullet_9x18_pmm_gz
	{
		name="Bullet_9x18_pmm_gz";
	};
	class AType_Bullet_9x18_pso_gz
	{
		name="Bullet_9x18_pso_gz";
	};
	class AType_Bullet_9x18_pst_gz
	{
		name="Bullet_9x18_pst_gz";
	};
	class AType_Bullet_9x18_sp7_gz
	{
		name="Bullet_9x18_sp7_gz";
	};
    class AType_Bullet_545x39_BS
    {
        name="Bullet_545x39_BS";
    };
    class AType_Bullet_545x39_BT
    {
        name="Bullet_545x39_BT";
    };
    class AType_Bullet_545x39_FMJ
    {
        name="Bullet_545x39_FMJ";
    };
    class AType_Bullet_545x39_PRS
    {
        name="Bullet_545x39_PRS";
    };
    class AType_Bullet_545x39_PS
    {
        name="Bullet_545x39_PS";
    };
    class AType_Bullet_545x39_T
    {
        name="Bullet_545x39_T";
    };
    class AType_Bullet_545x39_US
    {
        name="Bullet_545x39_US";
    };
	class AType_Bullet_556x45_FMJ
	{
		name="Bullet_556x45_FMJ";
	};
	class AType_Bullet_556x45_m855
	{
		name="Bullet_556x45_m855";
	};
    class AType_Bullet_556x45_m855a1
    {
        name="Bullet_556x45_m855a1";
    };
    class AType_Bullet_556x45_m856
    {
        name="Bullet_556x45_m856";
    };
    class AType_Bullet_556x45_m995
    {
        name="Bullet_556x45_m995";
    };
    class AType_Bullet_556x45_warmageddon
    {
        name="Bullet_556x45_warmageddon";
    };
    class AType_Bullet_762x39_bp
    {
        name="Bullet_762x39_bp";
    };
    class AType_Bullet_762x39_fmj
    {
        name="Bullet_762x39_fmj";
    };
    class AType_Bullet_762x39_mai_ap
    {
        name="Bullet_762x39_mai_ap";
    };
    class AType_Bullet_762x39_pp
    {
        name="Bullet_762x39_pp";
    };
    class AType_Bullet_762x39_ps
    {
        name="Bullet_762x39_ps";
    };
    class AType_Bullet_762x39_t45m
    {
        name="Bullet_762x39_t45m";
    };
    class AType_Bullet_762x39_us
    {
        name="Bullet_762x39_us";
    };
    class AType_Bullet_762x51_bpz_fmj
    {
        name="Bullet_762x51_bpz_fmj";
    };
    class AType_Bullet_762x51_m61
    {
        name="Bullet_762x51_m61";
    };
    class AType_Bullet_762x51_m80
    {
        name="Bullet_762x51_m80";
    };
    class AType_Bullet_762x51_m993
    {
        name="Bullet_762x51_m993";
    };
    class AType_Bullet_762x51_tpz_sp
    {
        name="Bullet_762x51_tpz_sp";
    };
    class AType_Bullet_762x51_ultra_nosler
    {
        name="Bullet_762x51_ultra_nosler";
    };
    class AType_Bullet_762x54r_bs
    {
        name="Bullet_762x54r_bs";
    };
    class AType_Bullet_762x54r_bthp
    {
        name="Bullet_762x54r_bthp";
    };
    class AType_Bullet_762x54r_fmj
    {
        name="Bullet_762x54r_fmj";
    };
    class AType_Bullet_762x54r_lps
    {
        name="Bullet_762x54r_lps";
    };
    class AType_Bullet_762x54r_ps
    {
        name="Bullet_762x54r_ps";
    };
    class AType_Bullet_762x54r_snb
    {
        name="Bullet_762x54r_snb";
    };
    class AType_Bullet_762x54r_t46m
    {
        name="Bullet_762x54r_t46m";
    };
	class AType_Bullet_9x39_bp
	{
		name="Bullet_9x39_bp";
	};
    class AType_Bullet_9x39_pab9
    {
        name="Bullet_9x39_pab9";
    };
    class AType_Bullet_9x39_sp5
    {
        name="Bullet_9x39_sp5";
    };
    class AType_Bullet_9x39_sp6
    {
        name="Bullet_9x39_sp6";
    };
	class AType_Bullet_762x25_PT_gz
	{
		name="Bullet_762x25_PT_gz";
	};
	class AType_Bullet_762x25_PST_gz
	{
		name="Bullet_762x25_PST_gz";
	};
	class AType_Bullet_762x25_FMJ43
	{
		name="Bullet_762x25_FMJ43";
	};
	class AType_Bullet_762x25_AKBS
	{
		name="Bullet_762x25_AKBS";
	};
	class AType_Bullet_366TKM_custom_ap
	{
		name="Bullet_366TKM_custom_ap";
	};
	class AType_Bullet_366TKM_EKO
	{
		name="Bullet_366TKM_EKO";
	};
    class AType_Bullet_366TKM_FMJ
    {
        name="Bullet_366TKM_FMJ";
    };
    class AType_Bullet_366TKM_Geksa
    {
        name="Bullet_366TKM_Geksa";
    };
    class AType_Bullet_127x55_PS12
    {
        name="Bullet_127x55_PS12";
    };
    class AType_Bullet_127x55_PS12A
    {
        name="Bullet_127x55_PS12A";
    };
    class AType_Bullet_127x55_PS12B
    {
        name="Bullet_127x55_PS12B";
    };
    class AType_Bullet_338LM_ap
    {
        name="Bullet_338LM_ap";
    };
    class AType_Bullet_338LM_upz
    {
        name="Bullet_338LM_upz";
    };
    class AType_Bullet_338LM_fmj
    {
        name="Bullet_338LM_fmj";
    };
    class AType_Bullet_338LM_tac_x
    {
        name="Bullet_338LM_tac_x";
    };
    class AType_Bullet_408CheyTac
    {
        name="Bullet_408CheyTac";
    };
    class AType_Bullet_50BMG
    {
        name="Bullet_50BMG";
    };
    class AType_Bullet_50BMG_AP
    {
        name="Bullet_50BMG_AP";
    };
    class AType_Bullet_50BMG_T
    {
        name="Bullet_50BMG_T";
    };
	class AType_Bullet_50bmg_E
	{
		name = "Bullet_50bmg_E";
	};
	class AType_Bullet_50bmg_ET
	{
		name = "Bullet_50bmg_ET";
	};
	class AType_Bullet_12x76_devastator
	{
		name = "Bullet_12x76_devastator";
	};
	class AType_Bullet_12x76_frag_12
	{
		name = "Bullet_12x76_frag_12";
	};
	class AType_Bullet_12x76_Grizzly40
	{
		name = "Bullet_12x76_Grizzly40";
	};
	class AType_Bullet_12x76_AP20
	{
		name = "Bullet_12x76_AP20";
	};
	class AType_Bullet_12x76_lead_slug
	{
		name = "Bullet_12x76_lead_slug";
	};
	class AType_Bullet_12x76_FTX_custom
	{
		name = "Bullet_12x76_FTX_custom";
	};
	class AType_Bullet_12x76_RIP
	{
		name = "Bullet_12x76_RIP";
	};
	class AType_Bullet_12x76_buckshot_5
	{
		name = "Bullet_12x76_buckshot_5";
	};
	class AType_Bullet_12x76_buckshot_7
	{
		name = "Bullet_12x76_buckshot_7";
	};
	class AType_Bullet_12x76_buckshot_8
	{
		name = "Bullet_12x76_buckshot_8";
	};
};

class CfgVehicles
{
    class FxRound;
	class FxCartridge;

	class FxRound_9x19_7n21: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_7n21_SingleRound.p3d";
	};
	class FxCartridge_9x19_7n21: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_7n21_SingleRound.p3d";
	};
	class FxRound_9x19_7n31: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_7n31_SingleRound.p3d";
	};
	class FxCartridge_9x19_7n31: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_7n31_SingleRound.p3d";
	};
	class FxRound_9x19_ap_63: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_ap_63_SingleRound.p3d";
	};
	class FxCartridge_9x19_ap_63: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_ap_63_SingleRound.p3d";
	};
	class FxRound_9x19_gt: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_gt_SingleRound.p3d";
	};
	class FxCartridge_9x19_gt: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_gt_SingleRound.p3d";
	};
	class FxRound_9x19_pso_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_pso_gz_SingleRound.p3d";
	};
	class FxCartridge_9x19_pso_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_pso_gz_SingleRound.p3d";
	};
	class FxRound_9x19_quakemaker: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_quakemaker_SingleRound.p3d";
	};
	class FxCartridge_9x19_quakemaker: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_quakemaker_SingleRound.p3d";
	};
	class FxRound_9x19_rip: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_rip_SingleRound.p3d";
	};
	class FxCartridge_9x19_rip: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_rip_SingleRound.p3d";
	};
	class FxRound_9x18_ppt_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_ppt_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_ppt_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_ppt_gz_SingleRound.p3d";
	};
	class FxRound_9x18_pbm_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pbm_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_pbm_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pbm_gz_SingleRound.p3d";
	};
	class FxRound_9x18_pmm_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pmm_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_pmm_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pmm_gz_SingleRound.p3d";
	};
	class FxRound_9x18_pso_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pso_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_pso_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pso_gz_SingleRound.p3d";
	};
	class FxRound_9x18_pst_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pst_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_pst_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pst_gz_SingleRound.p3d";
	};
	class FxRound_9x18_sp7_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_sp7_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_sp7_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_sp7_gz_SingleRound.p3d";
	};
	class FxRound_545x39_BS: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_BS_SingleRound.p3d";
	};
	class FxCartridge_545x39_BS: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_BS_SingleRound.p3d";
	};
	class FxRound_545x39_BT: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_BT_SingleRound.p3d";
	};
	class FxCartridge_545x39_BT: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_BT_SingleRound.p3d";
	};
	class FxRound_545x39_FMJ: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_FMJ_SingleRound.p3d";
	};
	class FxCartridge_545x39_FMJ: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_FMJ_SingleRound.p3d";
	};
	class FxRound_545x39_PRS: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_PRS_SingleRound.p3d";
	};
	class FxCartridge_545x39_PRS: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_PRS_SingleRound.p3d";
	};
	class FxRound_545x39_PS: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_PS_SingleRound.p3d";
	};
	class FxCartridge_545x39_PS: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_PS_SingleRound.p3d";
	};
	class FxRound_545x39_T: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_T_SingleRound.p3d";
	};
	class FxCartridge_545x39_T: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_T_SingleRound.p3d";
	};
	class FxRound_545x39_US: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_US_SingleRound.p3d";
	};
	class FxCartridge_545x39_US: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_US_SingleRound.p3d";
	};
	class FxRound_556x45_FMJ: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_FMJ_SingleRound.p3d";
	};
	class FxCartridge_556x45_FMJ: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_FMJ_SingleRound.p3d";
	};
	class FxRound_556x45_m855: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m855_SingleRound.p3d";
	};
	class FxCartridge_556x45_m855: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m855_SingleRound.p3d";
	};
	class FxRound_556x45_m855a1: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m855a1_SingleRound.p3d";
	};
	class FxCartridge_556x45_m855a1: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m855a1_SingleRound.p3d";
	};
	class FxRound_556x45_m856: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m856_SingleRound.p3d";
	};
	class FxCartridge_556x45_m856: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m856_SingleRound.p3d";
	};
	class FxRound_556x45_m995: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m995_SingleRound.p3d";
	};
	class FxCartridge_556x45_m995: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m995_SingleRound.p3d";
	};
	class FxRound_556x45_warmageddon: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_warmageddon_SingleRound.p3d";
	};
	class FxCartridge_556x45_warmageddon: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_warmageddon_SingleRound.p3d";
	};
	class FxRound_762x39_bp: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_bp_SingleRound.p3d";
	};
	class FxCartridge_762x39_bp: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_bp_SingleRound.p3d";
	};
	class FxRound_762x39_fmj: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_fmj_SingleRound.p3d";
	};
	class FxCartridge_762x39_fmj: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_fmj_SingleRound.p3d";
	};
	class FxRound_762x39_mai_ap: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_mai_ap_SingleRound.p3d";
	};
	class FxCartridge_762x39_mai_ap: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_mai_ap_SingleRound.p3d";
	};
	class FxRound_762x39_pp: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_pp_SingleRound.p3d";
	};
	class FxCartridge_762x39_pp: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_pp_SingleRound.p3d";
	};
	class FxRound_762x39_ps: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_ps_SingleRound.p3d";
	};
	class FxCartridge_762x39_ps: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_ps_SingleRound.p3d";
	};
	class FxRound_762x39_t45m: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_t45m_SingleRound.p3d";
	};
	class FxCartridge_762x39_t45m: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_t45m_SingleRound.p3d";
	};
	class FxRound_762x39_us: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_us_SingleRound.p3d";
	};
	class FxCartridge_762x39_us: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_us_SingleRound.p3d";
	};
	class FxRound_762x51_bpz_fmj: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_bpz_fmj_SingleRound.p3d";
	};
	class FxCartridge_762x51_bpz_fmj: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_bpz_fmj_SingleRound.p3d";
	};
	class FxRound_762x51_m61: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m61_SingleRound.p3d";
	};
	class FxCartridge_762x51_m61: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m61_SingleRound.p3d";
	};
	class FxRound_762x51_m80: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m80_SingleRound.p3d";
	};
	class FxCartridge_762x51_m80: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m80_SingleRound.p3d";
	};
	class FxRound_762x51_m993: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m993_SingleRound.p3d";
	};
	class FxCartridge_762x51_m993: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m993_SingleRound.p3d";
	};
	class FxRound_762x51_tpz_sp: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_tpz_sp_SingleRound.p3d";
	};
	class FxCartridge_762x51_tpz_sp: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_tpz_sp_SingleRound.p3d";
	};
	class FxRound_762x51_ultra_nosler: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_ultra_nosler_SingleRound.p3d";
	};
	class FxCartridge_762x51_ultra_nosler: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_ultra_nosler_SingleRound.p3d";
	};
	class FxRound_762x54r_bs: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_bs_SingleRound.p3d";
	};
	class FxCartridge_762x54r_bs: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_bs_SingleRound.p3d";
	};
	class FxRound_762x54r_bthp: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_bthp_SingleRound.p3d";
	};
	class FxCartridge_762x54r_bthp: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_bthp_SingleRound.p3d";
	};
	class FxRound_762x54r_fmj: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_fmj_SingleRound.p3d";
	};
	class FxCartridge_762x54r_fmj: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_fmj_SingleRound.p3d";
	};
	class FxRound_762x54r_lps: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_lps_SingleRound.p3d";
	};
	class FxCartridge_762x54r_lps: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_lps_SingleRound.p3d";
	};
	class FxRound_762x54r_ps: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_ps_SingleRound.p3d";
	};
	class FxCartridge_762x54r_ps: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_ps_SingleRound.p3d";
	};
	class FxRound_762x54r_snb: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_snb_SingleRound.p3d";
	};
	class FxCartridge_762x54r_snb: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_snb_SingleRound.p3d";
	};
	class FxRound_762x54r_t46m: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_t46m_SingleRound.p3d";
	};
	class FxCartridge_762x54r_t46m: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_t46m_SingleRound.p3d";
	};
	class FxRound_9x39_bp: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_bp_SingleRound.p3d";
	};
	class FxCartridge_9x39_bp: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_bp_SingleRound.p3d";
	};
	class FxRound_9x39_pab9: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_pab9_SingleRound.p3d";
	};
	class FxCartridge_9x39_pab9: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_pab9_SingleRound.p3d";
	};
	class FxRound_9x39_sp5: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_sp5_SingleRound.p3d";
	};
	class FxCartridge_9x39_sp5: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_sp5_SingleRound.p3d";
	};
	class FxRound_9x39_sp6: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_sp6_SingleRound.p3d";
	};
	class FxCartridge_9x39_sp6: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_sp6_SingleRound.p3d";
	};
	class FxRound_762x25_PT_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_PT_gz_SingleRound.p3d";
	};
	class FxCartridge_762x25_PT_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_PT_gz_SingleRound.p3d";
	};
	class FxRound_762x25_PST_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_PST_gz_SingleRound.p3d";
	};
	class FxCartridge_762x25_PST_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_PST_gz_SingleRound.p3d";
	};
	class FxRound_762x25_FMJ43: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_FMJ43_SingleRound.p3d";
	};
	class FxCartridge_762x25_FMJ43: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_FMJ43_SingleRound.p3d";
	};
	class FxRound_762x25_AKBS: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_AKBS_SingleRound.p3d";
	};
	class FxCartridge_762x25_AKBS: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_AKBS_SingleRound.p3d";
	};
	class FxRound_366TKM_custom_ap: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_custom_ap_SingleRound.p3d";
	};
	class FxCartridge_366TKM_custom_ap: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_custom_ap_SingleRound.p3d";
	};
	class FxRound_366TKM_EKO: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_EKO_SingleRound.p3d";
	};
	class FxCartridge_366TKM_EKO: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_EKO_SingleRound.p3d";
	};
	class FxRound_366TKM_FMJ: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_FMJ_SingleRound.p3d";
	};
	class FxCartridge_366TKM_FMJ: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_FMJ_SingleRound.p3d";
	};
	class FxRound_366TKM_Geksa: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_Geksa_SingleRound.p3d";
	};
	class FxCartridge_366TKM_Geksa: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_Geksa_SingleRound.p3d";
	};
	class FxRound_127x55_PS12: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12_SingleRound.p3d";
	};
	class FxCartridge_127x55_PS12: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12_SingleRound.p3d";
	};
	class FxRound_127x55_PS12A: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12A_SingleRound.p3d";
	};
	class FxCartridge_127x55_PS12A: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12A_SingleRound.p3d";
	};
	class FxRound_127x55_PS12B: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12B_SingleRound.p3d";
	};
	class FxCartridge_127x55_PS12B: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12B_SingleRound.p3d";
	};
	class FxRound_338LM_ap: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_ap_SingleRound.p3d";
	};
	class FxCartridge_338LM_ap: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_ap_SingleRound.p3d";
	};
	class FxRound_338LM_upz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_upz_SingleRound.p3d";
	};
	class FxCartridge_338LM_upz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_upz_SingleRound.p3d";
	};
	class FxRound_338LM_fmj: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_fmj_SingleRound.p3d";
	};
	class FxCartridge_338LM_fmj: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_fmj_SingleRound.p3d";
	};
	class FxRound_338LM_tac_x: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_tac_x_SingleRound.p3d";
	};
	class FxCartridge_338LM_tac_x: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_tac_x_SingleRound.p3d";
	};
	class FxRound_408CheyTac: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\408CheyTac_SingleRound.p3d";
	};
	class FxCartridge_408CheyTac: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\408CheyTac_SingleRound.p3d";
	};
	class FxRound_50BMG: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_SingleRound.p3d";
	};
	class FxCartridge_50BMG: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_SingleRound.p3d";
	};
	class FxRound_50BMG_AP: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_AP_SingleRound.p3d";
	};
	class FxCartridge_50BMG_AP: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_AP_SingleRound.p3d";
	};
	class FxRound_50BMG_T: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_T_SingleRound.p3d";
	};
	class FxCartridge_50BMG_T: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_T_SingleRound.p3d";
	};
	class FxRound_50BMG_E: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_E_SingleRound.p3d";
	};
	class FxCartridge_50BMG_E: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_E_SingleRound.p3d";
	};
	class FxRound_50BMG_ET: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_ET_SingleRound.p3d";
	};
	class FxCartridge_50BMG_ET: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_ET_SingleRound.p3d";
	};
	class FxCartridge_12x76_devastator: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_devastator.p3d";
	};
	class FxRound_12x76_devastator: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_devastator.p3d";
	};
	class FxCartridge_12x76_frag_12: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_frag_12.p3d";
	};
	class FxRound_12x76_frag_12: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_frag_12.p3d";
	};
	class FxCartridge_12x76_Grizzly40: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_Grizzly40.p3d";
	};
	class FxRound_12x76_Grizzly40: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_Grizzly40.p3d";
	};
	class FxCartridge_12x76_AP20: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_AP20.p3d";
	};
	class FxRound_12x76_AP20: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_AP20.p3d";
	};
	class FxCartridge_12x76_lead_slug: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_lead_slug.p3d";
	};
	class FxRound_12x76_lead_slug: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_lead_slug.p3d";
	};
	class FxCartridge_12x76_FTX_custom: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_FTX_custom.p3d";
	};
	class FxRound_12x76_FTX_custom: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_FTX_custom.p3d";
	};
	class FxCartridge_12x76_RIP: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_RIP.p3d";
	};
	class FxRound_12x76_RIP: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_RIP.p3d";
	};
	class FxCartridge_12x76_buckshot_5: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_5.p3d";
	};
	class FxRound_12x76_buckshot_5: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_5.p3d";
	};
	class FxCartridge_12x76_buckshot_7: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_7.p3d";
	};
	class FxRound_12x76_buckshot_7: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_7.p3d";
	};
	class FxCartridge_12x76_buckshot_8: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_8.p3d";
	};
	class FxRound_12x76_buckshot_8: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_8.p3d";
	};
};