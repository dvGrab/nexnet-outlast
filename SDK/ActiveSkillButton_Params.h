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
	 * Function ActiveSkillButton.ActiveSkillButton_C.GamepadNav_MenuConfirm_Release
	 */
	struct UActiveSkillButton_C_GamepadNav_MenuConfirm_Release_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.GamepadNav_MenuConfirm
	 */
	struct UActiveSkillButton_C_GamepadNav_MenuConfirm_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.OnFocusLost
	 */
	struct UActiveSkillButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.OnFocusReceived
	 */
	struct UActiveSkillButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.SetHovered
	 */
	struct UActiveSkillButton_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.UpdateNewStatus
	 */
	struct UActiveSkillButton_C_UpdateNewStatus_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.GetIsEquipped
	 */
	struct UActiveSkillButton_C_GetIsEquipped_Params
	{
	public:
		bool                                                       IsEquipped;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.SetIsEquipped
	 */
	struct UActiveSkillButton_C_SetIsEquipped_Params
	{
	public:
		bool                                                       IsEquipped;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.SetSelected
	 */
	struct UActiveSkillButton_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.Initialize Empty Slot
	 */
	struct UActiveSkillButton_C_Initialize_Empty_Slot_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.Initialize
	 */
	struct UActiveSkillButton_C_Initialize_Params
	{
	public:
		struct FMenuUpgradeItemInfo                                itemInfo;                                                // 0x0000(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bInIsSlot;                                               // 0x0128(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9I6Y[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature
	 */
	struct UActiveSkillButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature
	 */
	struct UActiveSkillButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature
	 */
	struct UActiveSkillButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature
	 */
	struct UActiveSkillButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature
	 */
	struct UActiveSkillButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.Construct
	 */
	struct UActiveSkillButton_C_Construct_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.OnUpdateNewStatus_Event_1
	 */
	struct UActiveSkillButton_C_OnUpdateNewStatus_Event_1_Params
	{	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.ExecuteUbergraph_ActiveSkillButton
	 */
	struct UActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.OnReleasedEvent__DelegateSignature
	 */
	struct UActiveSkillButton_C_OnReleasedEvent__DelegateSignature_Params
	{
	public:
		struct FMenuUpgradeItemInfo                                itemInfo;                                                // 0x0000(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.OnPressedEvent__DelegateSignature
	 */
	struct UActiveSkillButton_C_OnPressedEvent__DelegateSignature_Params
	{
	public:
		struct FMenuUpgradeItemInfo                                itemInfo;                                                // 0x0000(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.OnUnhoveredEvent__DelegateSignature
	 */
	struct UActiveSkillButton_C_OnUnhoveredEvent__DelegateSignature_Params
	{
	public:
		class UActiveSkillButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.OnHoveredEvent__DelegateSignature
	 */
	struct UActiveSkillButton_C_OnHoveredEvent__DelegateSignature_Params
	{
	public:
		class UActiveSkillButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActiveSkillButton.ActiveSkillButton_C.OnClickedEvent__DelegateSignature
	 */
	struct UActiveSkillButton_C_OnClickedEvent__DelegateSignature_Params
	{
	public:
		class UActiveSkillButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
