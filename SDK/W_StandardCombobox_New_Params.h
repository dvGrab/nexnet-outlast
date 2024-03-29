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
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.Get_BackGroundImg_ColorAndOpacity_1
	 */
	struct UW_StandardCombobox_New_C_Get_BackGroundImg_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetCurrentOptionAsString
	 */
	struct UW_StandardCombobox_New_C_GetCurrentOptionAsString_Params
	{
	public:
		class FString                                              OptionAsString;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.ClearOptions
	 */
	struct UW_StandardCombobox_New_C_ClearOptions_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionString
	 */
	struct UW_StandardCombobox_New_C_DeleteOptionString_Params
	{
	public:
		class FString                                              StringValue;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionIndex
	 */
	struct UW_StandardCombobox_New_C_DeleteOptionIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.InsertOption
	 */
	struct UW_StandardCombobox_New_C_InsertOption_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OOPH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OptionString;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                OptionName;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                OptionDescription;                                       // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.AddOption
	 */
	struct UW_StandardCombobox_New_C_AddOption_Params
	{
	public:
		class FString                                              OptionString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                OptionName;                                              // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                OptionDescription;                                       // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetStringOption
	 */
	struct UW_StandardCombobox_New_C_SetStringOption_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetOption
	 */
	struct UW_StandardCombobox_New_C_SetOption_Params
	{
	public:
		int32_t                                                    NewOption;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.UpdateOptionText
	 */
	struct UW_StandardCombobox_New_C_UpdateOptionText_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.ReceivedOptionClickedSignal
	 */
	struct UW_StandardCombobox_New_C_ReceivedOptionClickedSignal_Params
	{
	public:
		class FString                                              OptionAsString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetAnchorMenuContent
	 */
	struct UW_StandardCombobox_New_C_GetAnchorMenuContent_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.PreConstruct
	 */
	struct UW_StandardCombobox_New_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.Construct
	 */
	struct UW_StandardCombobox_New_C_Construct_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.Reconstruct
	 */
	struct UW_StandardCombobox_New_C_Reconstruct_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.ExecuteUbergraph_W_StandardCombobox_New
	 */
	struct UW_StandardCombobox_New_C_ExecuteUbergraph_W_StandardCombobox_New_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnReleased__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnPressed__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnUnhovered__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnHovered__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnNewOptionSelected__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_OnNewOptionSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewOption;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnOptionMenuClosed__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_OnOptionMenuClosed__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnOptionMenuOpened__DelegateSignature
	 */
	struct UW_StandardCombobox_New_C_OnOptionMenuOpened__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
