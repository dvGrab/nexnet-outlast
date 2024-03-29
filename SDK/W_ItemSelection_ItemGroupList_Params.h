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
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UpdateKeybinds
	 */
	struct UW_ItemSelection_ItemGroupList_C_UpdateKeybinds_Params
	{
	public:
		TArray<struct FItemSelectionGroup>                         InItemGroups;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.IsInsideList
	 */
	struct UW_ItemSelection_ItemGroupList_C_IsInsideList_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I6MS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SplitItemList
	 */
	struct UW_ItemSelection_ItemGroupList_C_SplitItemList_Params
	{
	public:
		bool                                                       bSplit;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_UnfocusAll
	 */
	struct UW_ItemSelection_ItemGroupList_C_Event_UnfocusAll_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_FocusAll
	 */
	struct UW_ItemSelection_ItemGroupList_C_Event_FocusAll_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutOverview
	 */
	struct UW_ItemSelection_ItemGroupList_C_FadeOutOverview_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInOverview
	 */
	struct UW_ItemSelection_ItemGroupList_C_FadeInOverview_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutMagCount
	 */
	struct UW_ItemSelection_ItemGroupList_C_FadeOutMagCount_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInMagCount
	 */
	struct UW_ItemSelection_ItemGroupList_C_FadeInMagCount_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UnfocusAll
	 */
	struct UW_ItemSelection_ItemGroupList_C_UnfocusAll_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_STTT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutAllItemLists
	 */
	struct UW_ItemSelection_ItemGroupList_C_FadeOutAllItemLists_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInAllItemLists
	 */
	struct UW_ItemSelection_ItemGroupList_C_FadeInAllItemLists_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInputReleased
	 */
	struct UW_ItemSelection_ItemGroupList_C_OnInputReleased_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FocusAll
	 */
	struct UW_ItemSelection_ItemGroupList_C_FocusAll_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F7XW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.GetListAtColumnIndex
	 */
	struct UW_ItemSelection_ItemGroupList_C_GetListAtColumnIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1Z4M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_ItemSelection_ItemList_C*                         Return_Value;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Initialize
	 */
	struct UW_ItemSelection_ItemGroupList_C_Initialize_Params
	{
	public:
		TArray<struct FItemSelectionGroup>                         InItemGroupArray;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Previous
	 */
	struct UW_ItemSelection_ItemGroupList_C_Previous_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Next
	 */
	struct UW_ItemSelection_ItemGroupList_C_Next_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.CreateNewItemList
	 */
	struct UW_ItemSelection_ItemGroupList_C_CreateNewItemList_Params
	{
	public:
		TArray<class ABaseItem*>                                   Items;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JJUU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_ItemSelection_ItemList_C*                         Return_Value;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SelectColumn
	 */
	struct UW_ItemSelection_ItemGroupList_C_SelectColumn_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Construct
	 */
	struct UW_ItemSelection_ItemGroupList_C_Construct_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnNightVisionGogglesToggled_Event_1
	 */
	struct UW_ItemSelection_ItemGroupList_C_OnNightVisionGogglesToggled_Event_1_Params
	{
	public:
		bool                                                       bNVGOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInitialized
	 */
	struct UW_ItemSelection_ItemGroupList_C_OnInitialized_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.ExecuteUbergraph_W_ItemSelection_ItemGroupList
	 */
	struct UW_ItemSelection_ItemGroupList_C_ExecuteUbergraph_W_ItemSelection_ItemGroupList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
