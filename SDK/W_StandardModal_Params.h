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
	 * Function W_StandardModal.W_StandardModal_C.SetDescriptionText
	 */
	struct UW_StandardModal_C_SetDescriptionText_Params
	{
	public:
		class FText                                                ModalDescription;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.DisplayWarningText
	 */
	struct UW_StandardModal_C_DisplayWarningText_Params
	{
	public:
		class FText                                                WarningText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.CancelConfirmTextEntry
	 */
	struct UW_StandardModal_C_CancelConfirmTextEntry_Params
	{	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.ConfirmTextEntry
	 */
	struct UW_StandardModal_C_ConfirmTextEntry_Params
	{
	public:
		class FText                                                ConfirmTitleText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ConfirmDescriptionText;                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.Get_OkButton_bIsEnabled_1
	 */
	struct UW_StandardModal_C_Get_OkButton_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.OnUserScrolled_Event_1
	 */
	struct UW_StandardModal_C_OnUserScrolled_Event_1_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.Construct
	 */
	struct UW_StandardModal_C_Construct_Params
	{	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.PreConstruct
	 */
	struct UW_StandardModal_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.Destruct
	 */
	struct UW_StandardModal_C_Destruct_Params
	{	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_CancelButton2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 */
	struct UW_StandardModal_C_BndEvt__W_StandardModal_CancelButton2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_OkButton2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 */
	struct UW_StandardModal_C_BndEvt__W_StandardModal_OkButton2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_ApplyButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 */
	struct UW_StandardModal_C_BndEvt__W_StandardModal_ApplyButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UW_StandardModal_C_BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.ExecuteUbergraph_W_StandardModal
	 */
	struct UW_StandardModal_C_ExecuteUbergraph_W_StandardModal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.OnTextCommitted__DelegateSignature
	 */
	struct UW_StandardModal_C_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class UW_StandardModal_C*                                  CallingModal;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TextEntry;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.OnApplyClicked__DelegateSignature
	 */
	struct UW_StandardModal_C_OnApplyClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardModal_C*                                  CallingModal;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TextEntry;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.OnCancelClicked__DelegateSignature
	 */
	struct UW_StandardModal_C_OnCancelClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardModal_C*                                  CallingModal;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardModal.W_StandardModal_C.OnOkClicked__DelegateSignature
	 */
	struct UW_StandardModal_C_OnOkClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardModal_C*                                  CallingModal;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TextEntry;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
