class CfgPatches
{
	class DZ_Weapons_Optics_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Optics"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class ItemOptics;
	class ItemOptics_Base: ItemOptics{};
	class StarlightOptic: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT"};
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
	};
	class ACOGOptic: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT"};
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
	};
	class ACOGOptic_6x: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT"};
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
	};
	class BUISOptic: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
	};
	class M68Optic: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
	};
	class M4_T3NRDSOptic: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
	};
	class ReflexOptic: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOptics","weaponOptics1","weaponOptics2","weaponOpticsDT","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5"};
	};
	class M4_CarryHandleOptic: ItemOptics_Base{};
	class FNP45_MRDSOptic: ItemOptics_Base{};
	class PUScopeOptic: ItemOptics_Base{};
	class KashtanOptic: ItemOptics_Base{};
	class LongrangeOptic: ItemOptics_Base{};
	class HuntingOptic: ItemOptics_Base{};
	class PistolOptic: ItemOptics_Base{};
	class PSO1Optic: ItemOptics_Base{};
	class PSO11Optic: ItemOptics_Base{};
	class GrozaOptic: ItemOptics_Base{};
	class KobraOptic: ItemOptics_Base{};
	class KazuarOptic: ItemOptics_Base{};
};
