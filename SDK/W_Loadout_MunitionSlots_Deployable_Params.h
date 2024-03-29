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
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetCount
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_SetCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JH36[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetSlotVisibility
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_SetSlotVisibility_Params
	{
	public:
		bool                                                       IsGrenade;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.GetSlot
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_GetSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.DisplayCountControls
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_DisplayCountControls_Params
	{
	public:
		bool                                                       ShowCountControls;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Reveal
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Hide
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.PreConstruct
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Construct
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_Construct_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotClicked
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetItemClass
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_SetItemClass_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotHovered
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotHovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotUnhovered
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotUnhovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ToggleAddButton
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_ToggleAddButton_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ForceClick
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_ForceClick_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LBGT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotUnhovered__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    LoadoutSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringDeployableSlot;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotHovered__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    LoadoutSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringDeployableSlot;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotClicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotClicked__DelegateSignature_Params
	{
	public:
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringDeployableSlot;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_LoadoutSlot_C*                                    LoadoutSlot;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnMinusClicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_OnMinusClicked__DelegateSignature_Params
	{
	public:
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringDeployableSlot;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnAddClicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_Deployable_C_OnAddClicked__DelegateSignature_Params
	{
	public:
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringDeployableSlot;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
