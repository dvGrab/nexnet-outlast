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
	 * Function OverheadInfo.OverheadInfo_C.Event_InventoryUpdated
	 */
	struct UOverheadInfo_C_Event_InventoryUpdated_Params
	{
	public:
		EInventoryUpdateEventType                                  InventoryEventType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_PlayerHealthChanged
	 */
	struct UOverheadInfo_C_Event_PlayerHealthChanged_Params
	{
	public:
		float                                                      newHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_ImposterUpdated
	 */
	struct UOverheadInfo_C_Event_ImposterUpdated_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_PlayerStateUpdated
	 */
	struct UOverheadInfo_C_Event_PlayerStateUpdated_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_PlayerIndicatorTypeChanged
	 */
	struct UOverheadInfo_C_Event_PlayerIndicatorTypeChanged_Params
	{
	public:
		EPlayerIndicatorType                                       playerIndicatorType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_PlayerMaxHealthChanged
	 */
	struct UOverheadInfo_C_Event_PlayerMaxHealthChanged_Params
	{
	public:
		float                                                      newMaxHealth;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I7N1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_CurrentLoadoutChanged
	 */
	struct UOverheadInfo_C_Event_CurrentLoadoutChanged_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_PlayerPartyStateUpdated
	 */
	struct UOverheadInfo_C_Event_PlayerPartyStateUpdated_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_HUDSettingsUpdated
	 */
	struct UOverheadInfo_C_Event_HUDSettingsUpdated_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdateDisplay_old_DEPRECATED_NOT_USED
	 */
	struct UOverheadInfo_C_UpdateDisplay_old_DEPRECATED_NOT_USED_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdateDistanceEffects_DEPRECATED_NOT_USED
	 */
	struct UOverheadInfo_C_UpdateDistanceEffects_DEPRECATED_NOT_USED_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdateActiveSkillType
	 */
	struct UOverheadInfo_C_UpdateActiveSkillType_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdateElementVisibility
	 */
	struct UOverheadInfo_C_UpdateElementVisibility_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdatePartyState
	 */
	struct UOverheadInfo_C_UpdatePartyState_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.InithHealthBarVisibility
	 */
	struct UOverheadInfo_C_InithHealthBarVisibility_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.SetImposterName
	 */
	struct UOverheadInfo_C_SetImposterName_Params
	{
	public:
		class FString                                              CopiedName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdateTradeItem
	 */
	struct UOverheadInfo_C_UpdateTradeItem_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Construct
	 */
	struct UOverheadInfo_C_Construct_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_Show
	 */
	struct UOverheadInfo_C_Event_Show_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_Hide
	 */
	struct UOverheadInfo_C_Event_Hide_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.ExecuteUbergraph_OverheadInfo
	 */
	struct UOverheadInfo_C_ExecuteUbergraph_OverheadInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
