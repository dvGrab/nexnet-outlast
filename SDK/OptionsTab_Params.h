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
	 * Function OptionsTab.OptionsTab_C.OnInputSourceChanged
	 */
	struct UOptionsTab_C_OnInputSourceChanged_Params
	{
	public:
		bool                                                       bIsGamepad;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsTab.OptionsTab_C.OnSubButtonClicked
	 */
	struct UOptionsTab_C_OnSubButtonClicked_Params
	{
	public:
		class URBMenuOptionsEntry*                                 Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsTab.OptionsTab_C.Get_DLSSEntry_Visibility_1
	 */
	struct UOptionsTab_C_Get_DLSSEntry_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsTab.OptionsTab_C.CreateResolutionPopup
	 */
	struct UOptionsTab_C_CreateResolutionPopup_Params
	{	};

	/**
	 * Function OptionsTab.OptionsTab_C.Event_ResolutionChanged
	 */
	struct UOptionsTab_C_Event_ResolutionChanged_Params
	{	};

	/**
	 * Function OptionsTab.OptionsTab_C.Event_OnParentPopped
	 */
	struct UOptionsTab_C_Event_OnParentPopped_Params
	{	};

	/**
	 * Function OptionsTab.OptionsTab_C.Event_OnTabUnselected
	 */
	struct UOptionsTab_C_Event_OnTabUnselected_Params
	{	};

	/**
	 * Function OptionsTab.OptionsTab_C.Event_AddRegionEntry
	 */
	struct UOptionsTab_C_Event_AddRegionEntry_Params
	{
	public:
		class URBMenuOptionsEntry*                                 Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsTab.OptionsTab_C.BndEvt__OptionsTab_ScrollUp_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsTab_C_BndEvt__OptionsTab_ScrollUp_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsTab.OptionsTab_C.BndEvt__OptionsTab_ScrollDown_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsTab_C_BndEvt__OptionsTab_ScrollDown_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsTab.OptionsTab_C.Event_InputSourceChanged
	 */
	struct UOptionsTab_C_Event_InputSourceChanged_Params
	{
	public:
		bool                                                       bIsGamepad;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsTab.OptionsTab_C.Construct
	 */
	struct UOptionsTab_C_Construct_Params
	{	};

	/**
	 * Function OptionsTab.OptionsTab_C.Event_OnTabSelected
	 */
	struct UOptionsTab_C_Event_OnTabSelected_Params
	{	};

	/**
	 * Function OptionsTab.OptionsTab_C.ExecuteUbergraph_OptionsTab
	 */
	struct UOptionsTab_C_ExecuteUbergraph_OptionsTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsTab.OptionsTab_C.OnEntrySubButtonClicked__DelegateSignature
	 */
	struct UOptionsTab_C_OnEntrySubButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuOptionsEntry*                                 Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
