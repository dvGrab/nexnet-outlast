#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.OnInputSourceChanged
	 */
	struct UCustomizationItemGrid_C_OnInputSourceChanged_Params
	{
	public:
		bool                                                       bIsGamepad;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.GetThumbnailWidget
	 */
	struct UCustomizationItemGrid_C_GetThumbnailWidget_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Thumbnail;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemBought
	 */
	struct UCustomizationItemGrid_C_OnItemBought_Params
	{
	public:
		struct FUICustomizationItem                                ItemBought;                                              // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemEquipped
	 */
	struct UCustomizationItemGrid_C_OnItemEquipped_Params
	{
	public:
		struct FUICustomizationItem                                New_Equipped_Item;                                       // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.TryUpdateEquippedOptionWidget
	 */
	struct UCustomizationItemGrid_C_TryUpdateEquippedOptionWidget_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     New_Option;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.GamepadNav_HandleGridNavigation
	 */
	struct UCustomizationItemGrid_C_GamepadNav_HandleGridNavigation_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1VUE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.AddItems
	 */
	struct UCustomizationItemGrid_C_AddItems_Params
	{
	public:
		TArray<struct FUICustomizationItem>                        Items;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ECustomizationMenuCategory                                 Category;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2AR9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemReleased
	 */
	struct UCustomizationItemGrid_C_OnItemReleased_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemPressed
	 */
	struct UCustomizationItemGrid_C_OnItemPressed_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemUnhovered
	 */
	struct UCustomizationItemGrid_C_OnItemUnhovered_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemHovered
	 */
	struct UCustomizationItemGrid_C_OnItemHovered_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemClicked
	 */
	struct UCustomizationItemGrid_C_OnItemClicked_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.RefreshItemInfos
	 */
	struct UCustomizationItemGrid_C_RefreshItemInfos_Params
	{
	public:
		TArray<struct FUICustomizationItem>                        Items;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.ManageEmptyThumbnails
	 */
	struct UCustomizationItemGrid_C_ManageEmptyThumbnails_Params
	{	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.GetLastEmptyItemIndex
	 */
	struct UCustomizationItemGrid_C_GetLastEmptyItemIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.SetEquippedOptionWidget
	 */
	struct UCustomizationItemGrid_C_SetEquippedOptionWidget_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.Construct
	 */
	struct UCustomizationItemGrid_C_Construct_Params
	{	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.Event_InputSourceChanged
	 */
	struct UCustomizationItemGrid_C_Event_InputSourceChanged_Params
	{
	public:
		bool                                                       bIsGamepad;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.ExecuteUbergraph_CustomizationItemGrid
	 */
	struct UCustomizationItemGrid_C_ExecuteUbergraph_CustomizationItemGrid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemReleased__DelegateSignature
	 */
	struct UCustomizationItemGrid_C_EventOnItemReleased__DelegateSignature_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemPressed__DelegateSignature
	 */
	struct UCustomizationItemGrid_C_EventOnItemPressed__DelegateSignature_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemUnhovered__DelegateSignature
	 */
	struct UCustomizationItemGrid_C_EventOnItemUnhovered__DelegateSignature_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemHovered__DelegateSignature
	 */
	struct UCustomizationItemGrid_C_EventOnItemHovered__DelegateSignature_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemClicked__DelegateSignature
	 */
	struct UCustomizationItemGrid_C_EventOnItemClicked__DelegateSignature_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
