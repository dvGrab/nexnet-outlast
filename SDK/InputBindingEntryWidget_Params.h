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
	 * Function InputBindingEntryWidget.InputBindingEntryWidget_C.Downplay
	 */
	struct UInputBindingEntryWidget_C_Downplay_Params
	{	};

	/**
	 * Function InputBindingEntryWidget.InputBindingEntryWidget_C.Highlight
	 */
	struct UInputBindingEntryWidget_C_Highlight_Params
	{	};

	/**
	 * Function InputBindingEntryWidget.InputBindingEntryWidget_C.RefreshValue
	 */
	struct UInputBindingEntryWidget_C_RefreshValue_Params
	{	};

	/**
	 * Function InputBindingEntryWidget.InputBindingEntryWidget_C.Init
	 */
	struct UInputBindingEntryWidget_C_Init_Params
	{
	public:
		class UInputBindingsMenu_C*                                ParentMenu;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__Button_131_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UInputBindingEntryWidget_C_BndEvt__Button_131_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UInputBindingEntryWidget_C_BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UInputBindingEntryWidget_C_BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InputBindingEntryWidget.InputBindingEntryWidget_C.UpdateRebindStatus
	 */
	struct UInputBindingEntryWidget_C_UpdateRebindStatus_Params
	{
	public:
		bool                                                       bIsRebindInProgress;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InputBindingEntryWidget.InputBindingEntryWidget_C.ExecuteUbergraph_InputBindingEntryWidget
	 */
	struct UInputBindingEntryWidget_C_ExecuteUbergraph_InputBindingEntryWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
