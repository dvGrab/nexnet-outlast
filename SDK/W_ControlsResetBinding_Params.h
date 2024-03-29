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
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.Remove Key Bind
	 */
	struct UW_ControlsResetBinding_C_Remove_Key_Bind_Params
	{
	public:
		class UW_ControlsBind_C*                                   Control_Bind;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.Update Input Mappings
	 */
	struct UW_ControlsResetBinding_C_Update_Input_Mappings_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.Clear Temp Input Mappings
	 */
	struct UW_ControlsResetBinding_C_Clear_Temp_Input_Mappings_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Action
	 */
	struct UW_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action_Params
	{
	public:
		bool                                                       IsNoneKeyAssigned;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XE5I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Axis
	 */
	struct UW_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis_Params
	{
	public:
		bool                                                       IsNoneKeyAssigned;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V24P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.SetDisabled
	 */
	struct UW_ControlsResetBinding_C_SetDisabled_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ControlsResetBinding_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UW_ControlsResetBinding_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UW_ControlsResetBinding_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_ControlsResetBinding_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_ControlsResetBinding_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.ExecuteUbergraph_W_ControlsResetBinding
	 */
	struct UW_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetReleased__DelegateSignature
	 */
	struct UW_ControlsResetBinding_C_OnResetReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetPressed__DelegateSignature
	 */
	struct UW_ControlsResetBinding_C_OnResetPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetUnhovered__DelegateSignature
	 */
	struct UW_ControlsResetBinding_C_OnResetUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetHovered__DelegateSignature
	 */
	struct UW_ControlsResetBinding_C_OnResetHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetClicked__DelegateSignature
	 */
	struct UW_ControlsResetBinding_C_OnResetClicked__DelegateSignature_Params
	{
	public:
		class UW_ControlsResetBinding_C*                           CallingWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
