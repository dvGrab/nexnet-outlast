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
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.IsInsideList
	 */
	struct UW_ItemSelection_ItemList_C_IsInsideList_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2Q78[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.UpdateItemList
	 */
	struct UW_ItemSelection_ItemList_C_UpdateItemList_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.SwapItemWithGroup
	 */
	struct UW_ItemSelection_ItemList_C_SwapItemWithGroup_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RMOG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnGrenadeThrown
	 */
	struct UW_ItemSelection_ItemList_C_OnGrenadeThrown_Params
	{
	public:
		class ABaseGrenade*                                        ThrownGrenade;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.HideArrow
	 */
	struct UW_ItemSelection_ItemList_C_HideArrow_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ShowArrow
	 */
	struct UW_ItemSelection_ItemList_C_ShowArrow_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.RemoveItem (Index)
	 */
	struct UW_ItemSelection_ItemList_C_RemoveItem_Index_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UONL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.RemoveItem
	 */
	struct UW_ItemSelection_ItemList_C_RemoveItem_Params
	{
	public:
		class ABaseItem*                                           ItemToRemove;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRemoveFromItems;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FindDuplicateItems
	 */
	struct UW_ItemSelection_ItemList_C_FindDuplicateItems_Params
	{
	public:
		class ABaseItem*                                           InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ABaseItem*>                                   Return_Value;                                            // 0x0008(0x0010)  (Parm, OutParm)
		TArray<class FString>                                      Names;                                                   // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ShowList
	 */
	struct UW_ItemSelection_ItemList_C_ShowList_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.HideList
	 */
	struct UW_ItemSelection_ItemList_C_HideList_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_18GC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CreateItem
	 */
	struct UW_ItemSelection_ItemList_C_CreateItem_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSwapping;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.SwapItem
	 */
	struct UW_ItemSelection_ItemList_C_SwapItem_Params
	{
	public:
		int32_t                                                    FromIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ToIndex;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnAnimFadeOutFinished
	 */
	struct UW_ItemSelection_ItemList_C_OnAnimFadeOutFinished_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnAnimSelectFinished
	 */
	struct UW_ItemSelection_ItemList_C_OnAnimSelectFinished_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Focus
	 */
	struct UW_ItemSelection_ItemList_C_Focus_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Unfocus
	 */
	struct UW_ItemSelection_ItemList_C_Unfocus_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J9CP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.EquipItem
	 */
	struct UW_ItemSelection_ItemList_C_EquipItem_Params
	{
	public:
		bool                                                       ItemEquipped;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ExecuteSelection
	 */
	struct UW_ItemSelection_ItemList_C_ExecuteSelection_Params
	{
	public:
		bool                                                       bSoftSelection;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0VGC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.GetSelectedItem
	 */
	struct UW_ItemSelection_ItemList_C_GetSelectedItem_Params
	{
	public:
		class ABaseItem*                                           Return_Value;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FadeIn
	 */
	struct UW_ItemSelection_ItemList_C_FadeIn_Params
	{
	public:
		bool                                                       bFocusRequired;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KKL4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FadeOut
	 */
	struct UW_ItemSelection_ItemList_C_FadeOut_Params
	{
	public:
		bool                                                       bFocusRequired;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Deselect
	 */
	struct UW_ItemSelection_ItemList_C_Deselect_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Select
	 */
	struct UW_ItemSelection_ItemList_C_Select_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Previous
	 */
	struct UW_ItemSelection_ItemList_C_Previous_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Next
	 */
	struct UW_ItemSelection_ItemList_C_Next_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.PopulateList
	 */
	struct UW_ItemSelection_ItemList_C_PopulateList_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Initialize
	 */
	struct UW_ItemSelection_ItemList_C_Initialize_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Construct
	 */
	struct UW_ItemSelection_ItemList_C_Construct_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnInitialized
	 */
	struct UW_ItemSelection_ItemList_C_OnInitialized_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CustomEvent_1
	 */
	struct UW_ItemSelection_ItemList_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.PreConstruct
	 */
	struct UW_ItemSelection_ItemList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CustomEvent_2
	 */
	struct UW_ItemSelection_ItemList_C_CustomEvent_2_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ExecuteUbergraph_W_ItemSelection_ItemList
	 */
	struct UW_ItemSelection_ItemList_C_ExecuteUbergraph_W_ItemSelection_ItemList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
