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
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.RefreshGamepadType
	 */
	struct UControllerMappingMenu_C_RefreshGamepadType_Params
	{	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.PreConstruct
	 */
	struct UControllerMappingMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.Construct
	 */
	struct UControllerMappingMenu_C_Construct_Params
	{	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UControllerMappingMenu_C_BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__ControllerMappingMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UControllerMappingMenu_C_BndEvt__ControllerMappingMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.OnPopupConfirm
	 */
	struct UControllerMappingMenu_C_OnPopupConfirm_Params
	{	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.OnPopupPop
	 */
	struct UControllerMappingMenu_C_OnPopupPop_Params
	{	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__ControllerMappingMenu_ApplyChangeBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UControllerMappingMenu_C_BndEvt__ControllerMappingMenu_ApplyChangeBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.UpdateApplyBtnVisibility
	 */
	struct UControllerMappingMenu_C_UpdateApplyBtnVisibility_Params
	{
	public:
		bool                                                       HasValueChanged;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.OnReleasedApply
	 */
	struct UControllerMappingMenu_C_OnReleasedApply_Params
	{	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.OnReleasedReset
	 */
	struct UControllerMappingMenu_C_OnReleasedReset_Params
	{	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.Event_MenuCancel_Pressed
	 */
	struct UControllerMappingMenu_C_Event_MenuCancel_Pressed_Params
	{	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.OnGamepadTypeChanged
	 */
	struct UControllerMappingMenu_C_OnGamepadTypeChanged_Params
	{
	public:
		EGamepadType                                               newGamepadType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.ExecuteUbergraph_ControllerMappingMenu
	 */
	struct UControllerMappingMenu_C_ExecuteUbergraph_ControllerMappingMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
