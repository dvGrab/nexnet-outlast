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
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.IsElementEmpty
	 */
	struct UPerkUpgradeButton_C_IsElementEmpty_Params
	{
	public:
		bool                                                       bIsEmpty;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.Setup
	 */
	struct UPerkUpgradeButton_C_Setup_Params
	{	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.GamepadNav_MenuConfirm_Release
	 */
	struct UPerkUpgradeButton_C_GamepadNav_MenuConfirm_Release_Params
	{	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.GamepadNav_MenuConfirm
	 */
	struct UPerkUpgradeButton_C_GamepadNav_MenuConfirm_Params
	{	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.OnFocusLost
	 */
	struct UPerkUpgradeButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.OnFocusReceived
	 */
	struct UPerkUpgradeButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.GetIsEquipped
	 */
	struct UPerkUpgradeButton_C_GetIsEquipped_Params
	{
	public:
		bool                                                       IsEquipped;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.SetIsEquipped
	 */
	struct UPerkUpgradeButton_C_SetIsEquipped_Params
	{
	public:
		bool                                                       IsEquipped;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.InitializeEmptySlot
	 */
	struct UPerkUpgradeButton_C_InitializeEmptySlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DisplayOnly;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.Initialize Locked Slot
	 */
	struct UPerkUpgradeButton_C_Initialize_Locked_Slot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8NKI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.Initialize
	 */
	struct UPerkUpgradeButton_C_Initialize_Params
	{
	public:
		struct FMenuUpgradeItemInfo                                itemUpgradeInfo;                                         // 0x0000(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       inIsLoadout;                                             // 0x0128(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H3VN[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x012C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsSlot;                                               // 0x0130(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P25T[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBPlayerState*                                      PlayerState;                                             // 0x0138(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.PreConstruct
	 */
	struct UPerkUpgradeButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature
	 */
	struct UPerkUpgradeButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature
	 */
	struct UPerkUpgradeButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature
	 */
	struct UPerkUpgradeButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature
	 */
	struct UPerkUpgradeButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature
	 */
	struct UPerkUpgradeButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.ExecuteUbergraph_PerkUpgradeButton
	 */
	struct UPerkUpgradeButton_C_ExecuteUbergraph_PerkUpgradeButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.OnReleasedEvent__DelegateSignature
	 */
	struct UPerkUpgradeButton_C_OnReleasedEvent__DelegateSignature_Params
	{
	public:
		struct FMenuUpgradeItemInfo                                itemInfo;                                                // 0x0000(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.OnPressedEvent__DelegateSignature
	 */
	struct UPerkUpgradeButton_C_OnPressedEvent__DelegateSignature_Params
	{
	public:
		struct FMenuUpgradeItemInfo                                itemInfo;                                                // 0x0000(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.OnUnhoveredEvent__DelegateSignature
	 */
	struct UPerkUpgradeButton_C_OnUnhoveredEvent__DelegateSignature_Params
	{
	public:
		class UPerkUpgradeButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.OnHoveredEvent__DelegateSignature
	 */
	struct UPerkUpgradeButton_C_OnHoveredEvent__DelegateSignature_Params
	{
	public:
		class UPerkUpgradeButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkUpgradeButton.PerkUpgradeButton_C.OnClickedEvent__DelegateSignature
	 */
	struct UPerkUpgradeButton_C_OnClickedEvent__DelegateSignature_Params
	{
	public:
		class UPerkUpgradeButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
