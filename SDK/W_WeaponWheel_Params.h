#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function W_WeaponWheel.W_WeaponWheel_C.RemoveNullItemsFromAllCategories
	 */
	struct UW_WeaponWheel_C_RemoveNullItemsFromAllCategories_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RemoveNullItemsFromCategory
	 */
	struct UW_WeaponWheel_C_RemoveNullItemsFromCategory_Params
	{
	public:
		class FName                                                WeaponWheelCategoryName;                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0CUI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtBack
	 */
	struct UW_WeaponWheel_C_IsItemAtBack_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9YMA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtFront
	 */
	struct UW_WeaponWheel_C_IsItemAtFront_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtIndex
	 */
	struct UW_WeaponWheel_C_IsItemAtIndex_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.ClearStats
	 */
	struct UW_WeaponWheel_C_ClearStats_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.UpdateDebugInformation
	 */
	struct UW_WeaponWheel_C_UpdateDebugInformation_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RemoveExecutableItemFromCategory
	 */
	struct UW_WeaponWheel_C_RemoveExecutableItemFromCategory_Params
	{
	public:
		class UClass*                                              NewWeaponWheelScript;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AtIndex;                                                 // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4JP3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.AddExecutableItemToCategory
	 */
	struct UW_WeaponWheel_C_AddExecutableItemToCategory_Params
	{
	public:
		class UClass*                                              NewWeaponWheelScript;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AtIndex;                                                 // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.ShuffleItemsInCategory
	 */
	struct UW_WeaponWheel_C_ShuffleItemsInCategory_Params
	{
	public:
		class FName                                                CategoryName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.GetCurrentICategorytemCount
	 */
	struct UW_WeaponWheel_C_GetCurrentICategorytemCount_Params
	{
	public:
		int32_t                                                    Return_Value;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.GetCurrentItemSelectionIndex
	 */
	struct UW_WeaponWheel_C_GetCurrentItemSelectionIndex_Params
	{
	public:
		int32_t                                                    Return_Value;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToAnotherCategory (Index)
	 */
	struct UW_WeaponWheel_C_MoveItemToAnotherCategory_Index_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                FromCategory;                                            // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ToCategory;                                              // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewIndexInCategory;                                      // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToAnotherCategory
	 */
	struct UW_WeaponWheel_C_MoveItemToAnotherCategory_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ToCategory;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewIndexInCategory;                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J9JJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToNewSpot (Index)
	 */
	struct UW_WeaponWheel_C_MoveItemToNewSpot_Index_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                CategoryName;                                            // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewIndex;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToNewSpot
	 */
	struct UW_WeaponWheel_C_MoveItemToNewSpot_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GJ0O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToBack
	 */
	struct UW_WeaponWheel_C_MoveItemToBack_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToFront
	 */
	struct UW_WeaponWheel_C_MoveItemToFront_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToBack (Index)
	 */
	struct UW_WeaponWheel_C_MoveItemToBack_Index_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                CategoryName;                                            // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U4YQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToFront (Index)
	 */
	struct UW_WeaponWheel_C_MoveItemToFront_Index_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                CategoryName;                                            // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ORK6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RemoveAssistant
	 */
	struct UW_WeaponWheel_C_RemoveAssistant_Params
	{
	public:
		class ABaseItem*                                           AssistantItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RemoveTabletDevice
	 */
	struct UW_WeaponWheel_C_RemoveTabletDevice_Params
	{
	public:
		class ABaseItem*                                           TabletDeviceItem;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RemoveTactical Devices
	 */
	struct UW_WeaponWheel_C_RemoveTactical_Devices_Params
	{
	public:
		class ABaseItem*                                           DoorDeviceItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RemoveGrenade
	 */
	struct UW_WeaponWheel_C_RemoveGrenade_Params
	{
	public:
		class ABaseItem*                                           GrenadeItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RemoveSecondaryWeapon
	 */
	struct UW_WeaponWheel_C_RemoveSecondaryWeapon_Params
	{
	public:
		class ABaseItem*                                           SecondaryWeaponItem;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RemovePrimaryWeapon
	 */
	struct UW_WeaponWheel_C_RemovePrimaryWeapon_Params
	{
	public:
		class ABaseItem*                                           PrimaryWeaponItem;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RemoveItemFromCategory
	 */
	struct UW_WeaponWheel_C_RemoveItemFromCategory_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Wheel_Category;                                          // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.AddItemToCategory
	 */
	struct UW_WeaponWheel_C_AddItemToCategory_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Wheel_Category;                                          // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.AddTabletDevice
	 */
	struct UW_WeaponWheel_C_AddTabletDevice_Params
	{
	public:
		class ABaseItem*                                           TabletDevice_Item;                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.AddTactical Device
	 */
	struct UW_WeaponWheel_C_AddTactical_Device_Params
	{
	public:
		class ABaseItem*                                           Tactical_Device_Item;                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.AddAssistants
	 */
	struct UW_WeaponWheel_C_AddAssistants_Params
	{
	public:
		class ABaseItem*                                           Assistants;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.AddGrenade
	 */
	struct UW_WeaponWheel_C_AddGrenade_Params
	{
	public:
		class ABaseItem*                                           GrenadeItem;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.AddSecondaryWeapon
	 */
	struct UW_WeaponWheel_C_AddSecondaryWeapon_Params
	{
	public:
		class ABaseItem*                                           SecondayWeaponItem;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.AddPrimaryWeapon
	 */
	struct UW_WeaponWheel_C_AddPrimaryWeapon_Params
	{
	public:
		class ABaseItem*                                           PrimaryWeaponItem;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RefreshMultiItemWidget
	 */
	struct UW_WeaponWheel_C_RefreshMultiItemWidget_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.IsWheelCursorVisible
	 */
	struct UW_WeaponWheel_C_IsWheelCursorVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.OnRadialMenuInitialized
	 */
	struct UW_WeaponWheel_C_OnRadialMenuInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I35G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.OnRadialSectorCreated
	 */
	struct UW_WeaponWheel_C_OnRadialSectorCreated_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAngle;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.ExecuteRadial
	 */
	struct UW_WeaponWheel_C_ExecuteRadial_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.ShowWheel
	 */
	struct UW_WeaponWheel_C_ShowWheel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.HideWheel
	 */
	struct UW_WeaponWheel_C_HideWheel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.NotifyAllStatsOnWheelCreated
	 */
	struct UW_WeaponWheel_C_NotifyAllStatsOnWheelCreated_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.NotifyAllCategoriesOnWheelCreated
	 */
	struct UW_WeaponWheel_C_NotifyAllCategoriesOnWheelCreated_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.FindDataTableRowNameFromItemName
	 */
	struct UW_WeaponWheel_C_FindDataTableRowNameFromItemName_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RowName;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.StatEnumToName
	 */
	struct UW_WeaponWheel_C_StatEnumToName_Params
	{
	public:
		unsigned char                                              Item_Stat;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ODL4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Stat_Name;                                               // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RefreshStats
	 */
	struct UW_WeaponWheel_C_RefreshStats_Params
	{
	public:
		TArray<class UClass*>                                      ItemStats;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FItemLookupTable                                    ItemDataTable;                                           // 0x0010(0x05A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.RefreshCategory
	 */
	struct UW_WeaponWheel_C_RefreshCategory_Params
	{
	public:
		TArray<class ABaseItem*>                                   New_Category_Items;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UWeaponWheelScript*>                          NewWeaponWheelScripts;                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                Category_Name;                                           // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StartingItemIndex;                                       // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.UpdateTabletDevices
	 */
	struct UW_WeaponWheel_C_UpdateTabletDevices_Params
	{
	public:
		TArray<class ABaseItem*>                                   NewTabletDevices;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    StartingItemIndex;                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.UpdateTacticalDevices
	 */
	struct UW_WeaponWheel_C_UpdateTacticalDevices_Params
	{
	public:
		TArray<class ABaseItem*>                                   NewDoorDevices;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    StartingItemIndex;                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.UpdateAssistants
	 */
	struct UW_WeaponWheel_C_UpdateAssistants_Params
	{
	public:
		TArray<class ABaseItem*>                                   NewAssistants;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    StartingItemIndex;                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.UpdateGrenades
	 */
	struct UW_WeaponWheel_C_UpdateGrenades_Params
	{
	public:
		TArray<class ABaseItem*>                                   NewGrenades;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    StartingItemIndex;                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.UpdateSecondaryWeapons
	 */
	struct UW_WeaponWheel_C_UpdateSecondaryWeapons_Params
	{
	public:
		TArray<class ABaseItem*>                                   NewSecondaryWeapons;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    StartingItemIndex;                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.UpdatePrimaryWeapons
	 */
	struct UW_WeaponWheel_C_UpdatePrimaryWeapons_Params
	{
	public:
		TArray<class ABaseItem*>                                   New_Primary_Weapons;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    StartingItemIndex;                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.PreviousItem
	 */
	struct UW_WeaponWheel_C_PreviousItem_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.NextItem
	 */
	struct UW_WeaponWheel_C_NextItem_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.PopulateAllCategories
	 */
	struct UW_WeaponWheel_C_PopulateAllCategories_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.PopulateCategory
	 */
	struct UW_WeaponWheel_C_PopulateCategory_Params
	{
	public:
		TArray<class ABaseItem*>                                   Items;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                Category_Name;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.PlaceWidgetInWheel
	 */
	struct UW_WeaponWheel_C_PlaceWidgetInWheel_Params
	{
	public:
		class UCanvasPanelSlot*                                    Canvas_Slot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCoreUObject_FVector2D                              Positionn;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.SelectItem
	 */
	struct UW_WeaponWheel_C_SelectItem_Params
	{
	public:
		class UW_WeaponWheel_RadialSelection_C*                    ItemToSelect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Play_Animation;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Play_Sound;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Refresh_Stats;                                           // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x000B(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_57V0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.CreateWheelStat
	 */
	struct UW_WeaponWheel_C_CreateWheelStat_Params
	{
	public:
		class UClass*                                              ItemStatClass;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FillSpeed;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEasingFunc                                                EasingFunction;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TIAP[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemLookupTable                                    LookupTable;                                             // 0x0010(0x05A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UW_WeaponWheel_ItemStat_C*                           ItemStatWidget;                                          // 0x05B0(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.CreateWheelCategory
	 */
	struct UW_WeaponWheel_C_CreateWheelCategory_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Category_Name;                                           // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QQ40[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCanvasPanelSlot*                                    Canvas_Panel_Slot;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.Construct
	 */
	struct UW_WeaponWheel_C_Construct_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.Tick
	 */
	struct UW_WeaponWheel_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.OnItemSelcted
	 */
	struct UW_WeaponWheel_C_OnItemSelcted_Params
	{
	public:
		bool                                                       Play_Animation;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.OnItemDeselected
	 */
	struct UW_WeaponWheel_C_OnItemDeselected_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.OnSectorSelected
	 */
	struct UW_WeaponWheel_C_OnSectorSelected_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.OnSectorDeselected
	 */
	struct UW_WeaponWheel_C_OnSectorDeselected_Params
	{
	public:
		int32_t                                                    DeselectedIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.OnRadialMenuCreated
	 */
	struct UW_WeaponWheel_C_OnRadialMenuCreated_Params
	{	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.PreConstruct
	 */
	struct UW_WeaponWheel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.ExecuteUbergraph_W_WeaponWheel
	 */
	struct UW_WeaponWheel_C_ExecuteUbergraph_W_WeaponWheel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.ItemDeselected__DelegateSignature
	 */
	struct UW_WeaponWheel_C_ItemDeselected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Category_Index;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Category_Name;                                           // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Item_Index;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Item_Name;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.ItemSelected__DelegateSignature
	 */
	struct UW_WeaponWheel_C_ItemSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Category_Index;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Category_Name;                                           // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Item_Index;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Item_Name;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.CategorySelected__DelegateSignature
	 */
	struct UW_WeaponWheel_C_CategorySelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Category_Index;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Category_Name;                                           // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel.W_WeaponWheel_C.CategoryDeselected__DelegateSignature
	 */
	struct UW_WeaponWheel_C_CategoryDeselected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Category_Index;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Category_Name;                                           // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
