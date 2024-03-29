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
	 * Function OptionsEntry.OptionsEntry_C.OnFocusReceived
	 */
	struct UOptionsEntry_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.HandleSliderOnInput
	 */
	struct UOptionsEntry_C_HandleSliderOnInput_Params
	{
	public:
		bool                                                       bLeftPressed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.GetArrowBtn
	 */
	struct UOptionsEntry_C_GetArrowBtn_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TVD7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UArrowButton_C*                                      ArrowButton;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.SetupCounter
	 */
	struct UOptionsEntry_C_SetupCounter_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.UpdateEnableStatus
	 */
	struct UOptionsEntry_C_UpdateEnableStatus_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.RefreshDisplay
	 */
	struct UOptionsEntry_C_RefreshDisplay_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.ColorChangedEntries
	 */
	struct UOptionsEntry_C_ColorChangedEntries_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.RefreshCounter
	 */
	struct UOptionsEntry_C_RefreshCounter_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.RefreshEntry
	 */
	struct UOptionsEntry_C_RefreshEntry_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.UpdateSliderBar
	 */
	struct UOptionsEntry_C_UpdateSliderBar_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.UpdateValueFont
	 */
	struct UOptionsEntry_C_UpdateValueFont_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.Event_UpdateTextValue
	 */
	struct UOptionsEntry_C_Event_UpdateTextValue_Params
	{
	public:
		class FText                                                NewValue;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.Event_UpdateSliderValue
	 */
	struct UOptionsEntry_C_Event_UpdateSliderValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JW3O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                textOverride;                                            // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.DownplayEntry
	 */
	struct UOptionsEntry_C_DownplayEntry_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.HighlightEntry
	 */
	struct UOptionsEntry_C_HighlightEntry_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.SetSliderButton
	 */
	struct UOptionsEntry_C_SetSliderButton_Params
	{
	public:
		bool                                                       IsSliderEntry;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.Set Button Type
	 */
	struct UOptionsEntry_C_Set_Button_Type_Params
	{
	public:
		bool                                                       IsSubEntry;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HTCE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Optionnal_SubEntryTitle;                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsSlider;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.SetValue
	 */
	struct UOptionsEntry_C_SetValue_Params
	{
	public:
		class FText                                                OptionValue;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.PreConstruct
	 */
	struct UOptionsEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__SubEntryBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__SubEntryBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__SliderValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__SliderElement_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__SliderElement_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_16_OnUnhovered__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_16_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_14_OnUnhovered__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_14_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature
	 */
	struct UOptionsEntry_C_BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.Construct
	 */
	struct UOptionsEntry_C_Construct_Params
	{	};

	/**
	 * Function OptionsEntry.OptionsEntry_C.ExecuteUbergraph_OptionsEntry
	 */
	struct UOptionsEntry_C_ExecuteUbergraph_OptionsEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
