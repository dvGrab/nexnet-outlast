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
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.StopFadeOutAnim
	 */
	struct UW_ItemSelection_Item_C_StopFadeOutAnim_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.StopConfirmAnim
	 */
	struct UW_ItemSelection_Item_C_StopConfirmAnim_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.ConfirmSelection
	 */
	struct UW_ItemSelection_Item_C_ConfirmSelection_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.Deselect
	 */
	struct UW_ItemSelection_Item_C_Deselect_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.Select
	 */
	struct UW_ItemSelection_Item_C_Select_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.FadeOut
	 */
	struct UW_ItemSelection_Item_C_FadeOut_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.ChangeIconsIfBuildIsPirated
	 */
	struct UW_ItemSelection_Item_C_ChangeIconsIfBuildIsPirated_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.OnAnimFadeOut_Finished
	 */
	struct UW_ItemSelection_Item_C_OnAnimFadeOut_Finished_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.Initialize
	 */
	struct UW_ItemSelection_Item_C_Initialize_Params
	{
	public:
		struct FSlateBrush                                         InBrush;                                                 // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bIsVisible;                                              // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.Reset Selection Indicator
	 */
	struct UW_ItemSelection_Item_C_Reset_Selection_Indicator_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.Construct
	 */
	struct UW_ItemSelection_Item_C_Construct_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.Re-Initialize
	 */
	struct UW_ItemSelection_Item_C_Re_Initialize_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.CustomEvent_1
	 */
	struct UW_ItemSelection_Item_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.PreConstruct
	 */
	struct UW_ItemSelection_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.CustomEvent_2
	 */
	struct UW_ItemSelection_Item_C_CustomEvent_2_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.ExecuteUbergraph_W_ItemSelection_Item
	 */
	struct UW_ItemSelection_Item_C_ExecuteUbergraph_W_ItemSelection_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.ED_OnAnimSelectFinished__DelegateSignature
	 */
	struct UW_ItemSelection_Item_C_ED_OnAnimSelectFinished__DelegateSignature_Params
	{	};

	/**
	 * Function W_ItemSelection_Item.W_ItemSelection_Item_C.ED_OnAnimFadeOutFinished__DelegateSignature
	 */
	struct UW_ItemSelection_Item_C_ED_OnAnimFadeOutFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
