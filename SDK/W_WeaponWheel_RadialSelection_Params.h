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
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.CreateIcon
	 */
	struct UW_WeaponWheel_RadialSelection_C_CreateIcon_Params
	{
	public:
		struct FSlateBrush                                         InBrush;                                                 // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UImage*                                              ReturnValue;                                             // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems (Internal)
	 */
	struct UW_WeaponWheel_RadialSelection_C_RemoveNullItems_Internal_Params
	{
	public:
		TArray<class UObject*>                                     ItemArray;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems
	 */
	struct UW_WeaponWheel_RadialSelection_C_RemoveNullItems_Params
	{	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsInExecutablesArray
	 */
	struct UW_WeaponWheel_RadialSelection_C_IsInExecutablesArray_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JDIY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveExecutableItemFromCategory
	 */
	struct UW_WeaponWheel_RadialSelection_C_RemoveExecutableItemFromCategory_Params
	{
	public:
		class UWeaponWheelScript*                                  WeaponWheelScript;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddExecutableItemToCategory
	 */
	struct UW_WeaponWheel_RadialSelection_C_AddExecutableItemToCategory_Params
	{
	public:
		class UWeaponWheelScript*                                  WeaponWheelScript;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AtIndex;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShuffleItems
	 */
	struct UW_WeaponWheel_RadialSelection_C_ShuffleItems_Params
	{	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShiftItemToNewSpot
	 */
	struct UW_WeaponWheel_RadialSelection_C_ShiftItemToNewSpot_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToBack
	 */
	struct UW_WeaponWheel_RadialSelection_C_MoveToBack_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToFront
	 */
	struct UW_WeaponWheel_RadialSelection_C_MoveToFront_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.UpdateIcon
	 */
	struct UW_WeaponWheel_RadialSelection_C_UpdateIcon_Params
	{
	public:
		int32_t                                                    SelectionIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JYLT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         InBrush;                                                 // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Select
	 */
	struct UW_WeaponWheel_RadialSelection_C_Select_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YBNX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteRadial
	 */
	struct UW_WeaponWheel_RadialSelection_C_ExecuteRadial_Params
	{	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnDeselected
	 */
	struct UW_WeaponWheel_RadialSelection_C_OnDeselected_Params
	{
	public:
		bool                                                       Play_Animation;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0XK5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnSelected
	 */
	struct UW_WeaponWheel_RadialSelection_C_OnSelected_Params
	{
	public:
		bool                                                       Play_Animation;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CF9T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Previous
	 */
	struct UW_WeaponWheel_RadialSelection_C_Previous_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Next
	 */
	struct UW_WeaponWheel_RadialSelection_C_Next_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveItemFromCategory
	 */
	struct UW_WeaponWheel_RadialSelection_C_RemoveItemFromCategory_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddItemToCategory
	 */
	struct UW_WeaponWheel_RadialSelection_C_AddItemToCategory_Params
	{
	public:
		class ABaseItem*                                           NewItem;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AtIndex;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsEquipping
	 */
	struct UW_WeaponWheel_RadialSelection_C_IsEquipping_Params
	{
	public:
		bool                                                       IsEquipping;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DTQK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetItemName
	 */
	struct UW_WeaponWheel_RadialSelection_C_GetItemName_Params
	{
	public:
		class FName                                                Item_Name;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetCategory
	 */
	struct UW_WeaponWheel_RadialSelection_C_GetCategory_Params
	{
	public:
		class FText                                                Category;                                                // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.PreConstruct
	 */
	struct UW_WeaponWheel_RadialSelection_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.On Wheel Created
	 */
	struct UW_WeaponWheel_RadialSelection_C_On_Wheel_Created_Params
	{	};

	/**
	 * Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteUbergraph_W_WeaponWheel_RadialSelection
	 */
	struct UW_WeaponWheel_RadialSelection_C_ExecuteUbergraph_W_WeaponWheel_RadialSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
