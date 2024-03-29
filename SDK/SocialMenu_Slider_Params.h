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
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.OnFocusReceived
	 */
	struct USocialMenu_Slider_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.OnValueChanged
	 */
	struct USocialMenu_Slider_C_OnValueChanged_Params
	{
	public:
		float                                                      CurrentValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.SetValueText
	 */
	struct USocialMenu_Slider_C_SetValueText_Params
	{	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.SetValue
	 */
	struct USocialMenu_Slider_C_SetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.SetEnabled
	 */
	struct USocialMenu_Slider_C_SetEnabled_Params
	{
	public:
		bool                                                       bInEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.Setup
	 */
	struct USocialMenu_Slider_C_Setup_Params
	{	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.BndEvt__SliderValue_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct USocialMenu_Slider_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.PreConstruct
	 */
	struct USocialMenu_Slider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.BndEvt__SocialMenuSlider_LowerButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct USocialMenu_Slider_C_BndEvt__SocialMenuSlider_LowerButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.Tick
	 */
	struct USocialMenu_Slider_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.BndEvt__SocialMenuSlider_LowerButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct USocialMenu_Slider_C_BndEvt__SocialMenuSlider_LowerButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.BndEvt__SocialMenuSlider_HigherButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 */
	struct USocialMenu_Slider_C_BndEvt__SocialMenuSlider_HigherButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.BndEvt__SocialMenuSlider_HigherButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	 */
	struct USocialMenu_Slider_C_BndEvt__SocialMenuSlider_HigherButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.ExecuteUbergraph_SocialMenu_Slider
	 */
	struct USocialMenu_Slider_C_ExecuteUbergraph_SocialMenu_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_Slider.SocialMenu_Slider_C.OnValueUpdated__DelegateSignature
	 */
	struct USocialMenu_Slider_C_OnValueUpdated__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
