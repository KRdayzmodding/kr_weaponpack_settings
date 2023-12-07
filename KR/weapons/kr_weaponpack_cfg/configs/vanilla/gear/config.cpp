class CfgPatches
{
	class kr_DZ_Gear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical","DZ_Gear_Consumables"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class BandageDressing: Inventory_Base
	{
		inventorySlot[] += {"kr_meds"};
	};
	class DuctTape: Inventory_Base
	{
		inventorySlot[] += {"kr_tape"};
	};
};
