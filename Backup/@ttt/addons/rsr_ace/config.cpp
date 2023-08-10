class CfgPatches
{
	class rsr_ace
	{
		requiredAddons[]=
		{
			"rsr_core",
			"ace_common"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_APC_Tracked_01_CRV_F;
	class rsr_bergepanzer_flecktarn: B_APC_Tracked_01_CRV_F
	{
		transportRepair=0;
		transportAmmo=0;
		transportFuel=0;
		ace_refuel_fuelCargo=3000;
	};
	class O_Truck_03_repair_F;
	class O_Truck_03_ammo_F;
	class O_Truck_03_fuel_F;
	class rsr_wisent_repair_flecktarn: O_Truck_03_repair_F
	{
		transportRepair=0;
	};
	class rsr_wisent_ammo_flecktarn: O_Truck_03_ammo_F
	{
		transportAmmo=0;
	};
	class rsr_wisent_fuel_flecktarn: O_Truck_03_fuel_F
	{
		transportFuel=0;
		ace_refuel_fuelCargo=10000;
	};
};
class cfgMods
{
	author="Reddiem";
	timepacked="1562885822";
};
