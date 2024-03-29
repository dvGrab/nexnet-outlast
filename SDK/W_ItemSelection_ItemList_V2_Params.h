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
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOut
	 */
	struct UW_ItemSelection_ItemList_V2_C_FadeOut_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOutAll
	 */
	struct UW_ItemSelection_ItemList_V2_C_FadeOutAll_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOutAllExcept
	 */
	struct UW_ItemSelection_ItemList_V2_C_FadeOutAllExcept_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Unfocus
	 */
	struct UW_ItemSelection_ItemList_V2_C_Unfocus_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Focus
	 */
	struct UW_ItemSelection_ItemList_V2_C_Focus_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.HideList
	 */
	struct UW_ItemSelection_ItemList_V2_C_HideList_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y1MF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ShowList
	 */
	struct UW_ItemSelection_ItemList_V2_C_ShowList_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OEID[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.OnAnimSelectFinished
	 */
	struct UW_ItemSelection_ItemList_V2_C_OnAnimSelectFinished_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ConfirmSelection
	 */
	struct UW_ItemSelection_ItemList_V2_C_ConfirmSelection_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Select
	 */
	struct UW_ItemSelection_ItemList_V2_C_Select_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.CreateItem
	 */
	struct UW_ItemSelection_ItemList_V2_C_CreateItem_Params
	{
	public:
		EItemCategory                                              InItemCategory;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RFIK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABaseItem*                                           InItem;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.PopulateList
	 */
	struct UW_ItemSelection_ItemList_V2_C_PopulateList_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Initialize
	 */
	struct UW_ItemSelection_ItemList_V2_C_Initialize_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.PreConstruct
	 */
	struct UW_ItemSelection_ItemList_V2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ExecuteUbergraph_W_ItemSelection_ItemList_V2
	 */
	struct UW_ItemSelection_ItemList_V2_C_ExecuteUbergraph_W_ItemSelection_ItemList_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
