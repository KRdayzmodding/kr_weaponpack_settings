class CfgPatches
{
	class DZ_Characters_Vests_test
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Vests"};
	};
};
class CfgVehicles
{
	class PlateCarrierVest;
	class kr_test_PC_09: PlateCarrierVest
	{
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.109804,0.976471,0.258824,1.0,CO)","#(argb,8,8,3)color(0.109804,0.976471,0.258824,1.0,CO)","#(argb,8,8,3)color(0.109804,0.976471,0.258824,1.0,CO)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.0;
					};
				};
			};
		};
	};
	class kr_test_PC_05: PlateCarrierVest
	{
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.992157,0.866667,0,1.0,CO)","#(argb,8,8,3)color(0.992157,0.866667,0,1.0,CO)","#(argb,8,8,3)color(0.992157,0.866667,0,1.0,CO)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.0;
					};
				};
			};
		};
	};
	class kr_test_PC_01: PlateCarrierVest
	{
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.913725,0.0784314,0.0784314,1.0,CO)","#(argb,8,8,3)color(0.913725,0.0784314,0.0784314,1.0,CO)","#(argb,8,8,3)color(0.913725,0.0784314,0.0784314,1.0,CO)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.0;
					};
				};
			};
		};
	};
};
