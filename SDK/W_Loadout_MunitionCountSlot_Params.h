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
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.Initialize
	 */
	struct UW_Loadout_MunitionCountSlot_C_Initialize_Params
	{
	public:
		int32_t                                                    CurrentSlotCount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AvailableSlots;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MinSlots;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxSlots;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.SetAvailableSlots
	 */
	struct UW_Loadout_MunitionCountSlot_C_SetAvailableSlots_Params
	{
	public:
		int32_t                                                    AvailableSlots;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.SetMaxSlots
	 */
	struct UW_Loadout_MunitionCountSlot_C_SetMaxSlots_Params
	{
	public:
		int32_t                                                    MaxSlotCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.SetSlotCount
	 */
	struct UW_Loadout_MunitionCountSlot_C_SetSlotCount_Params
	{
	public:
		int32_t                                                    NewCount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.IncrementSlotCount
	 */
	struct UW_Loadout_MunitionCountSlot_C_IncrementSlotCount_Params
	{
	public:
		int32_t                                                    Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.SetInfo
	 */
	struct UW_Loadout_MunitionCountSlot_C_SetInfo_Params
	{	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.Construct
	 */
	struct UW_Loadout_MunitionCountSlot_C_Construct_Params
	{	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.BndEvt__W_Loadout_ArmorSlot_btn_decrease_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionCountSlot_C_BndEvt__W_Loadout_ArmorSlot_btn_decrease_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.BndEvt__W_Loadout_ArmorSlot_btn_increase_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionCountSlot_C_BndEvt__W_Loadout_ArmorSlot_btn_increase_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.BndEvt__W_Loadout_ArmorSlot_SpinBox_SlotCount_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature
	 */
	struct UW_Loadout_MunitionCountSlot_C_BndEvt__W_Loadout_ArmorSlot_SpinBox_SlotCount_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.Reveal
	 */
	struct UW_Loadout_MunitionCountSlot_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.Hide
	 */
	struct UW_Loadout_MunitionCountSlot_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.UpdateActiveLoadout
	 */
	struct UW_Loadout_MunitionCountSlot_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.SetLoadoutWidget
	 */
	struct UW_Loadout_MunitionCountSlot_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.UpdateCurrentItemMap
	 */
	struct UW_Loadout_MunitionCountSlot_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.UpdateCurrentSlot
	 */
	struct UW_Loadout_MunitionCountSlot_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.PreConstruct
	 */
	struct UW_Loadout_MunitionCountSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.ExecuteUbergraph_W_Loadout_MunitionCountSlot
	 */
	struct UW_Loadout_MunitionCountSlot_C_ExecuteUbergraph_W_Loadout_MunitionCountSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C.OnSlotCountChanged__DelegateSignature
	 */
	struct UW_Loadout_MunitionCountSlot_C_OnSlotCountChanged__DelegateSignature_Params
	{
	public:
		class UW_Loadout_MunitionCountSlot_C*                      TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
