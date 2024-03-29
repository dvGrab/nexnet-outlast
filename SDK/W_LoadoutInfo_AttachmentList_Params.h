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
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.CheckCurrentAttachments
	 */
	struct UW_LoadoutInfo_AttachmentList_C_CheckCurrentAttachments_Params
	{
	public:
		TArray<class UClass*>                                      Attachments;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetIsNullAttachment
	 */
	struct UW_LoadoutInfo_AttachmentList_C_GetIsNullAttachment_Params
	{
	public:
		class UClass*                                              AttachmentData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNull;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GII3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentArraySidearm
	 */
	struct UW_LoadoutInfo_AttachmentList_C_AttachmentArraySidearm_Params
	{	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentArrayPrimary
	 */
	struct UW_LoadoutInfo_AttachmentList_C_AttachmentArrayPrimary_Params
	{	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetCurrentAttachments
	 */
	struct UW_LoadoutInfo_AttachmentList_C_GetCurrentAttachments_Params
	{
	public:
		TArray<class UClass*>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Finished_EC73150B49B091C3F6FAB48DDD93DD29
	 */
	struct UW_LoadoutInfo_AttachmentList_C_Finished_EC73150B49B091C3F6FAB48DDD93DD29_Params
	{	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Hide
	 */
	struct UW_LoadoutInfo_AttachmentList_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateCurrentSlot
	 */
	struct UW_LoadoutInfo_AttachmentList_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateCurrentItemMap
	 */
	struct UW_LoadoutInfo_AttachmentList_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.SetLoadoutWidget
	 */
	struct UW_LoadoutInfo_AttachmentList_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.PreConstruct
	 */
	struct UW_LoadoutInfo_AttachmentList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Construct
	 */
	struct UW_LoadoutInfo_AttachmentList_C_Construct_Params
	{	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_LoadoutInfo_AttachmentList_C_BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.RefreshList
	 */
	struct UW_LoadoutInfo_AttachmentList_C_RefreshList_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UClass*                                              ItemClass;                                               // 0x0178(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Restricted;                                              // 0x0180(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateActiveLoadout
	 */
	struct UW_LoadoutInfo_AttachmentList_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Reveal
	 */
	struct UW_LoadoutInfo_AttachmentList_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentItemClicked
	 */
	struct UW_LoadoutInfo_AttachmentList_C_AttachmentItemClicked_Params
	{
	public:
		class UW_LoadoutInfo_AttachmentListEntry_C*                TriggeredBy;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.RemoveAttachmentClicked
	 */
	struct UW_LoadoutInfo_AttachmentList_C_RemoveAttachmentClicked_Params
	{
	public:
		class UW_LoadoutInfo_AttachmentListEntry_C*                TriggeredBy;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.ExecuteUbergraph_W_LoadoutInfo_AttachmentList
	 */
	struct UW_LoadoutInfo_AttachmentList_C_ExecuteUbergraph_W_LoadoutInfo_AttachmentList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnRemoveAttachmentClicked__DelegateSignature
	 */
	struct UW_LoadoutInfo_AttachmentList_C_OnRemoveAttachmentClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutInfo_AttachmentListEntry_C*                TriggeringListEntry;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnAttachmentItemClicked__DelegateSignature
	 */
	struct UW_LoadoutInfo_AttachmentList_C_OnAttachmentItemClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutInfo_AttachmentListEntry_C*                TriggeringListEntry;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnModifyWeaponButtonClick__DelegateSignature
	 */
	struct UW_LoadoutInfo_AttachmentList_C_OnModifyWeaponButtonClick__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
