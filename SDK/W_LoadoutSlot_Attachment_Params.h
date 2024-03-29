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
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetIsNullAttachment
	 */
	struct UW_LoadoutSlot_Attachment_C_GetIsNullAttachment_Params
	{
	public:
		class UClass*                                              AttachmentData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNull;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetEquipped
	 */
	struct UW_LoadoutSlot_Attachment_C_SetEquipped_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.RefreshItemInfo
	 */
	struct UW_LoadoutSlot_Attachment_C_RefreshItemInfo_Params
	{	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetMinimalLayout
	 */
	struct UW_LoadoutSlot_Attachment_C_SetMinimalLayout_Params
	{
	public:
		bool                                                       MinimalLayout;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetHoverState
	 */
	struct UW_LoadoutSlot_Attachment_C_GetHoverState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetActive
	 */
	struct UW_LoadoutSlot_Attachment_C_SetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnLoaded_EBAC7585457EE912D265E9983ECE7CE6
	 */
	struct UW_LoadoutSlot_Attachment_C_OnLoaded_EBAC7585457EE912D265E9983ECE7CE6_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateCurrentItemMap
	 */
	struct UW_LoadoutSlot_Attachment_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetLoadoutWidget
	 */
	struct UW_LoadoutSlot_Attachment_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.PreConstruct
	 */
	struct UW_LoadoutSlot_Attachment_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Construct
	 */
	struct UW_LoadoutSlot_Attachment_C_Construct_Params
	{	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateCurrentSlot
	 */
	struct UW_LoadoutSlot_Attachment_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnItemExpansionChanged
	 */
	struct UW_LoadoutSlot_Attachment_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnListItemObjectSet
	 */
	struct UW_LoadoutSlot_Attachment_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAsSlot
	 */
	struct UW_LoadoutSlot_Attachment_C_InitializeAsSlot_Params
	{	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnEntryReleased
	 */
	struct UW_LoadoutSlot_Attachment_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAttachmentData
	 */
	struct UW_LoadoutSlot_Attachment_C_InitializeAttachmentData_Params
	{
	public:
		class UClass*                                              AttachmentData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAsListItem
	 */
	struct UW_LoadoutSlot_Attachment_C_InitializeAsListItem_Params
	{	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateActiveLoadout
	 */
	struct UW_LoadoutSlot_Attachment_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnItemSelectionChanged
	 */
	struct UW_LoadoutSlot_Attachment_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Hide
	 */
	struct UW_LoadoutSlot_Attachment_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Reveal
	 */
	struct UW_LoadoutSlot_Attachment_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ForceClick
	 */
	struct UW_LoadoutSlot_Attachment_C_ForceClick_Params
	{	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ExecuteUbergraph_W_LoadoutSlot_Attachment
	 */
	struct UW_LoadoutSlot_Attachment_C_ExecuteUbergraph_W_LoadoutSlot_Attachment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnDoubleClicked__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_OnDoubleClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnUnhovered__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnHovered__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnClicked__DelegateSignature
	 */
	struct UW_LoadoutSlot_Attachment_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
