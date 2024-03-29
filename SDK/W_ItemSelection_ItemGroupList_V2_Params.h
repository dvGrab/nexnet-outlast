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
	 * Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.Get List At Index
	 */
	struct UW_ItemSelection_ItemGroupList_V2_C_Get_List_At_Index_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YC0W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_ItemSelection_ItemList_V2_C*                      Return_Value;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.ResetAnimationState
	 */
	struct UW_ItemSelection_ItemGroupList_V2_C_ResetAnimationState_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.FadeOutAllExcept
	 */
	struct UW_ItemSelection_ItemGroupList_V2_C_FadeOutAllExcept_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.UpdateKeybinds
	 */
	struct UW_ItemSelection_ItemGroupList_V2_C_UpdateKeybinds_Params
	{
	public:
		TArray<struct FItemSelectionGroup>                         InItemGroups;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.SelectCategory
	 */
	struct UW_ItemSelection_ItemGroupList_V2_C_SelectCategory_Params
	{
	public:
		int32_t                                                    GroupIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CategoryIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.SelectList
	 */
	struct UW_ItemSelection_ItemGroupList_V2_C_SelectList_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.Initialize
	 */
	struct UW_ItemSelection_ItemGroupList_V2_C_Initialize_Params
	{
	public:
		TArray<struct FItemSelectionGroup>                         InItemGroupArray;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
