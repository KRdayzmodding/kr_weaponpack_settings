class CfgPatches
{
	class KR_DZ_Weapons_Projectiles_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Projectiles"};
		ammo[] = {"Bullet_12GaugePellets","Bullet_12GaugeSlug","Bullet_12GaugeRubberSlug","Bullet_12GaugeBeanbag","Bullet_556x45","Bullet_556x45Tracer","Bullet_545x39","Bullet_545x39Tracer","Bullet_762x54","Bullet_762x54Tracer","Bullet_308Win","Bullet_308WinTracer","Bullet_762x39","Bullet_762x39Tracer","Bullet_45ACP","Bullet_357","Bullet_9x19","Bullet_380","Bullet_22","Bullet_9x39AP","Bullet_9x39"};
	};
};
class Entity;
class CfgAmmo
{
	class ShotgunCore;
	class DefaultAmmo;
	class BulletCore;
	class Bullet_Base;
	class Shotgun_Base;
	class Bullet_12GaugePellets: Shotgun_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.6,1.0},{0.5,0.5},{0.4,0.1}};
			class Health
			{
				damage = 35;
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
	class Bullet_12GaugeSlug: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.6,1.0},{0.5,0.5},{0.4,0.1}};
			class Health
			{
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
	};
	class Bullet_12GaugeRubberSlug: Bullet_12GaugeSlug
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.05;
			bleedThreshold = 0.0;
			defaultDamageOverride[] = {{0.6,1.0},{0.5,0.5},{0.4,0.1}};
			class Health
			{
				damage = 0;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class Bullet_12GaugeBeanbag: Bullet_12GaugeSlug
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.1;
			bleedThreshold = 0.0;
			defaultDamageOverride[] = {{0.6,1.0},{0.5,0.5},{0.4,0.1}};
			class Health
			{
				damage = 0;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_556x45: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.68,1.0},{0.6,0.5},{0.47,0.25}};
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_556x45Tracer: Bullet_556x45{};
	class Bullet_545x39: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.7,1.0},{0.65,0.5},{0.5,0.25}};
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
				damage = 100;
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_545x39Tracer: Bullet_545x39{};
	class Bullet_762x54: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.6,1.0},{0.55,0.5},{0.49,0.25}};
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
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_762x54Tracer: Bullet_762x54{};
	class Bullet_308Win: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.6,1.0},{0.55,0.5},{0.5,0.25}};
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
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_308WinTracer: Bullet_308Win{};
	class Bullet_762x39: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.62,1.0},{0.47,0.5},{0.4,0.25}};
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_762x39Tracer: Bullet_762x39{};
	class Bullet_45ACP: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.97,1.0},{0.81,0.5},{0.74,0.25}};
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
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_357: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.77,1.0},{0.6,0.5},{0.47,0.25}};
			class Health
			{
				damage = 65;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_9x19: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.79,1.0},{0.7,0.5},{0.63,0.25}};
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
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_380: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0},{0.85,0.5},{0.81,0.25}};
			class Health
			{
				damage = 35;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 35;
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_22: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.8,1.0},{0.73,0.5},{0.65,0.25}};
			class Health
			{
				damage = 20;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 20;
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_9x39AP: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.55,1.0},{0.54,0.5},{0.53,0.25}};
			class Health
			{
				damage = 135;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
	class Bullet_9x39: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.55,1.0},{0.53,0.5},{0.51,0.25}};
			class Health
			{
				damage = 135;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.5,0.5}};
			};
		};
	};
};
