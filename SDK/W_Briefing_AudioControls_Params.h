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
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.SetLooping
	 */
	struct UW_Briefing_AudioControls_C_SetLooping_Params
	{
	public:
		bool                                                       IsLooping;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.SetState
	 */
	struct UW_Briefing_AudioControls_C_SetState_Params
	{
	public:
		E_Briefing_Audio_PlayStates                                AudioPlayState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.PreConstruct
	 */
	struct UW_Briefing_AudioControls_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Tick
	 */
	struct UW_Briefing_AudioControls_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Play_K2Node_ComponentBoundEvent_6_AudioControlButtonClicked__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_BndEvt__btn_Play_K2Node_ComponentBoundEvent_6_AudioControlButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Stop_K2Node_ComponentBoundEvent_7_AudioControlButtonClicked__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_BndEvt__btn_Stop_K2Node_ComponentBoundEvent_7_AudioControlButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Restart_K2Node_ComponentBoundEvent_8_AudioControlButtonClicked__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_BndEvt__btn_Restart_K2Node_ComponentBoundEvent_8_AudioControlButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_9_AudioControlButtonClicked__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_9_AudioControlButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_10_AudioControlButtonClicked__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_10_AudioControlButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Loop_K2Node_ComponentBoundEvent_11_AudioControlButtonClicked__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_BndEvt__btn_Loop_K2Node_ComponentBoundEvent_11_AudioControlButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_0_AudioControlButtonPressed__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_0_AudioControlButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_1_AudioControlButtonReleased__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_1_AudioControlButtonReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_2_AudioControlButtonPressed__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_2_AudioControlButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_3_AudioControlButtonReleased__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_3_AudioControlButtonReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.ButtonHover
	 */
	struct UW_Briefing_AudioControls_C_ButtonHover_Params
	{
	public:
		class UW_Briefing_AudioControls_Button_C*                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Hovered;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.ExecuteUbergraph_W_Briefing_AudioControls
	 */
	struct UW_Briefing_AudioControls_C_ExecuteUbergraph_W_Briefing_AudioControls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.FastForward__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_FastForward__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Loop__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_Loop__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Restart__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_Restart__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Rewind__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_Rewind__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Stop__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_Stop__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Play__DelegateSignature
	 */
	struct UW_Briefing_AudioControls_C_Play__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
