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
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.Populate
	 */
	struct UW_LoadoutInfo_EffectsList_C_Populate_Params
	{
	public:
		TArray<struct FST_ItemEffects>                             Effects;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.GetIsNullAttachment
	 */
	struct UW_LoadoutInfo_EffectsList_C_GetIsNullAttachment_Params
	{
	public:
		class UClass*                                              AttachmentData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNull;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ELPZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.Finished_001C63E74329714F2226218E06608382
	 */
	struct UW_LoadoutInfo_EffectsList_C_Finished_001C63E74329714F2226218E06608382_Params
	{	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.Hide
	 */
	struct UW_LoadoutInfo_EffectsList_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.UpdateActiveLoadout
	 */
	struct UW_LoadoutInfo_EffectsList_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.UpdateCurrentSlot
	 */
	struct UW_LoadoutInfo_EffectsList_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.UpdateCurrentItemMap
	 */
	struct UW_LoadoutInfo_EffectsList_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.SetLoadoutWidget
	 */
	struct UW_LoadoutInfo_EffectsList_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.PreConstruct
	 */
	struct UW_LoadoutInfo_EffectsList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.Construct
	 */
	struct UW_LoadoutInfo_EffectsList_C_Construct_Params
	{	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.RefreshList
	 */
	struct UW_LoadoutInfo_EffectsList_C_RefreshList_Params
	{
	public:
		TArray<struct FST_ItemEffects>                             Effects;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.Reveal
	 */
	struct UW_LoadoutInfo_EffectsList_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.ExecuteUbergraph_W_LoadoutInfo_EffectsList
	 */
	struct UW_LoadoutInfo_EffectsList_C_ExecuteUbergraph_W_LoadoutInfo_EffectsList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.OnAttachmentItemClicked__DelegateSignature
	 */
	struct UW_LoadoutInfo_EffectsList_C_OnAttachmentItemClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutInfo_AttachmentListEntry_C*                TriggeringListEntry;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C.OnModifyWeaponButtonClick__DelegateSignature
	 */
	struct UW_LoadoutInfo_EffectsList_C_OnModifyWeaponButtonClick__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
