class CfgPatches
{
	class TTT_Snipernvg_cup
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"ttt_main",
			"A3_Weapons_F_Acc",
			"A3_Weapons_F_Mark_Acc",
			"cup_weapons_west_attachments"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class CUP_optic_Elcan_SpecterDR: ItemCore
	{
		descriptionShort="Best scope ever<br/>Magnification: 1-4x<br/>NightVision";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
};
