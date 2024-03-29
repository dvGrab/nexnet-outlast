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
	 * Function W_Button.W_Button_C.TruncateText
	 */
	struct UW_Button_C_TruncateText_Params
	{
	public:
		bool                                                       Truncate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LA5F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CharacterLimit;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              TruncationCharacters;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Button.W_Button_C.DisableInteraction
	 */
	struct UW_Button_C_DisableInteraction_Params
	{
	public:
		bool                                                       Disable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Button.W_Button_C.SetButtonStyle
	 */
	struct UW_Button_C_SetButtonStyle_Params
	{
	public:
		E_Style_Buttons                                            SelectButtonStyle;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Button.W_Button_C.Enable
	 */
	struct UW_Button_C_Enable_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Button.W_Button_C.SetBackgroundTint
	 */
	struct UW_Button_C_SetBackgroundTint_Params
	{
	public:
		struct FLinearColor                                        InBackgroundColor;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Button.W_Button_C.SetActive
	 */
	struct UW_Button_C_SetActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DisableInteraction;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Button.W_Button_C.Set Text Style
	 */
	struct UW_Button_C_Set_Text_Style_Params
	{
	public:
		struct FST_Style_Text                                      FontStyle;                                               // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_Button.W_Button_C.SetButtonText
	 */
	struct UW_Button_C_SetButtonText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Button.W_Button_C.SetButtonState
	 */
	struct UW_Button_C_SetButtonState_Params
	{
	public:
		E_ButtonStates                                             ButtonState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Button.W_Button_C.InitStyle
	 */
	struct UW_Button_C_InitStyle_Params
	{
	public:
		E_Style_Buttons                                            ButtonStyle;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7GUQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Button.W_Button_C.PreConstruct
	 */
	struct UW_Button_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Button.W_Button_C.Construct
	 */
	struct UW_Button_C_Construct_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.Tick
	 */
	struct UW_Button_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Button.W_Button_C.BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_Button_C_BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UW_Button_C_BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UW_Button_C_BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.BndEvt__btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_Button_C_BndEvt__btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.BndEvt__btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_Button_C_BndEvt__btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.ForceClick
	 */
	struct UW_Button_C_ForceClick_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.ForceDoubleClick
	 */
	struct UW_Button_C_ForceDoubleClick_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.ExecuteUbergraph_W_Button
	 */
	struct UW_Button_C_ExecuteUbergraph_W_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Button.W_Button_C.DoubleClicked__DelegateSignature
	 */
	struct UW_Button_C_DoubleClicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Button.W_Button_C.Released__DelegateSignature
	 */
	struct UW_Button_C_Released__DelegateSignature_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.Pressed__DelegateSignature
	 */
	struct UW_Button_C_Pressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.Unhovered__DelegateSignature
	 */
	struct UW_Button_C_Unhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_Button.W_Button_C.Hovered__DelegateSignature
	 */
	struct UW_Button_C_Hovered__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Button.W_Button_C.Clicked__DelegateSignature
	 */
	struct UW_Button_C_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
