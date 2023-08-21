class CfgPatches
{
	class Backpackfix
	{
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Bag_Base;

	class B_RadioBag_01_base_F: Bag_Base
	{
	};
	class B_RadioBag_01_black_F: B_RadioBag_01_base_F
	{
		maximumLoad = 320;
		mass = 50;
	};
	class B_RadioBag_01_digi_F: B_RadioBag_01_base_F
	{
		maximumLoad = 320;
		mass = 50;
	};
	class B_RadioBag_01_eaf_F: B_RadioBag_01_base_F
	{
		maximumLoad = 320;
		mass = 50;
	};
	class B_RadioBag_01_ghex_F: B_RadioBag_01_base_F
	{
		maximumLoad = 320;
		mass = 50;
	};
	class B_RadioBag_01_hex_F: B_RadioBag_01_base_F
	{
		maximumLoad = 320;
		mass = 50;
	};
	class B_RadioBag_01_mtp_F: B_RadioBag_01_base_F
	{
		maximumLoad = 320;
		mass = 50;
	};
	class B_RadioBag_01_oucamo_F: B_RadioBag_01_base_F
	{
		maximumLoad = 320;
		mass = 50;
	};
	class B_RadioBag_01_tropic_F: B_RadioBag_01_base_F
	{
		maximumLoad = 320;
		mass = 50;
	};
	class B_RadioBag_01_wdl_F: B_RadioBag_01_base_F
	{
		maximumLoad = 320;
		mass = 50;
	};
	class B_CivilianBackpack_01_Base_F: Bag_Base
	{
	};	
	class B_CivilianBackpack_01_Everyday_Black_F: B_CivilianBackpack_01_Base_F
	{
	};	
	class debug_pack: B_CivilianBackpack_01_Everyday_Black_F
	{
		maximumLoad = 1337;
		mass = 1;
	};

	class B_TacticalPack_Base: Bag_Base
	{
	};
	class B_TacticalPack_blk: B_TacticalPack_Base
	{
	};	
	class debug_pack2: B_TacticalPack_blk
	{
		maximumLoad = 9001;
		mass = 1;
	};

	class B_ViperHarness_base_F: Bag_Base
	{
	};
	class B_ViperHarness_blk_F: B_ViperHarness_base_F
	{
	};	
	class debug_pack3: B_ViperHarness_blk_F
	{
		maximumLoad = 9001;
		mass = 1;
	};


};
