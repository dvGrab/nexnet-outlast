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
	 * Function W_StandardSlider.W_StandardSlider_C.SetDLSSQualityValue
	 */
	struct UW_StandardSlider_C_SetDLSSQualityValue_Params
	{
	public:
		int32_t                                                    NewQuality;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.AddIntegralValue
	 */
	struct UW_StandardSlider_C_AddIntegralValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewValue;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.AddFloatValue
	 */
	struct UW_StandardSlider_C_AddFloatValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewValue;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.SetResolutionValue
	 */
	struct UW_StandardSlider_C_SetResolutionValue_Params
	{
	public:
		class FString                                              Resolution;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.SetQualityValue
	 */
	struct UW_StandardSlider_C_SetQualityValue_Params
	{
	public:
		int32_t                                                    NewQuality;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.SetIntegralValue
	 */
	struct UW_StandardSlider_C_SetIntegralValue_Params
	{
	public:
		int32_t                                                    NewInteger;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewValue;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.SetFloatValue
	 */
	struct UW_StandardSlider_C_SetFloatValue_Params
	{
	public:
		float                                                      NewFloat;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewValue;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.UpdateSliderText
	 */
	struct UW_StandardSlider_C_UpdateSliderText_Params
	{	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.PreConstruct
	 */
	struct UW_StandardSlider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.Construct
	 */
	struct UW_StandardSlider_C_Construct_Params
	{	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.BndEvt__TheSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UW_StandardSlider_C_BndEvt__TheSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.BndEvt__TheSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UW_StandardSlider_C_BndEvt__TheSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.BndEvt__TheSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UW_StandardSlider_C_BndEvt__TheSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.ExecuteUbergraph_W_StandardSlider
	 */
	struct UW_StandardSlider_C_ExecuteUbergraph_W_StandardSlider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.OnDlssValueChanged__DelegateSignature
	 */
	struct UW_StandardSlider_C_OnDlssValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewIntegerValue;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewSliderValue;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.OnResolutionValueChanged__DelegateSignature
	 */
	struct UW_StandardSlider_C_OnResolutionValueChanged__DelegateSignature_Params
	{
	public:
		class FString                                              NewResolutionValue;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      NewSliderValue;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.OnQualityValueChanged__DelegateSignature
	 */
	struct UW_StandardSlider_C_OnQualityValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewQualityValue;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewSliderValue;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.OnIntegralValueChanged__DelegateSignature
	 */
	struct UW_StandardSlider_C_OnIntegralValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewIntegerValue;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewSliderValue;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardSlider.W_StandardSlider_C.OnFloatValueChanged__DelegateSignature
	 */
	struct UW_StandardSlider_C_OnFloatValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      NewFloatValue;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewSliderValue;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
