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
	 * Function QuitMenu.QuitMenu_C.OnPreviewMouseButtonDown
	 */
	struct UQuitMenu_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function QuitMenu.QuitMenu_C.Event_Exiting
	 */
	struct UQuitMenu_C_Event_Exiting_Params
	{	};

	/**
	 * Function QuitMenu.QuitMenu_C.BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UQuitMenu_C_BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuitMenu.QuitMenu_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UQuitMenu_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuitMenu.QuitMenu_C.Event_MenuConfirm_Pressed
	 */
	struct UQuitMenu_C_Event_MenuConfirm_Pressed_Params
	{	};

	/**
	 * Function QuitMenu.QuitMenu_C.Event_MenuCancel_Pressed
	 */
	struct UQuitMenu_C_Event_MenuCancel_Pressed_Params
	{	};

	/**
	 * Function QuitMenu.QuitMenu_C.Event_OnPush
	 */
	struct UQuitMenu_C_Event_OnPush_Params
	{	};

	/**
	 * Function QuitMenu.QuitMenu_C.ExecuteUbergraph_QuitMenu
	 */
	struct UQuitMenu_C_ExecuteUbergraph_QuitMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
