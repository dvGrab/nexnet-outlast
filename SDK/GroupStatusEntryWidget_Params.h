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
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.ForceHealthRefresh
	 */
	struct UGroupStatusEntryWidget_C_ForceHealthRefresh_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.UpdateHealthVisibility
	 */
	struct UGroupStatusEntryWidget_C_UpdateHealthVisibility_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.UpdateStatusVisibility
	 */
	struct UGroupStatusEntryWidget_C_UpdateStatusVisibility_Params
	{
	public:
		ESlateVisibility                                           NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupMaterial
	 */
	struct UGroupStatusEntryWidget_C_SetupMaterial_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupStatus
	 */
	struct UGroupStatusEntryWidget_C_SetupStatus_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupCharacterClass
	 */
	struct UGroupStatusEntryWidget_C_SetupCharacterClass_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh
	 */
	struct UGroupStatusEntryWidget_C_Event_Refresh_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_MaxDisplayNameLengthUpdated
	 */
	struct UGroupStatusEntryWidget_C_Event_MaxDisplayNameLengthUpdated_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Construct
	 */
	struct UGroupStatusEntryWidget_C_Construct_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_PlayerStatusUpdated
	 */
	struct UGroupStatusEntryWidget_C_Event_PlayerStatusUpdated_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.PreConstruct
	 */
	struct UGroupStatusEntryWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_Audio
	 */
	struct UGroupStatusEntryWidget_C_Event_Refresh_Audio_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_Health
	 */
	struct UGroupStatusEntryWidget_C_Event_Refresh_Health_Params
	{
	public:
		float                                                      newHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       skipAnim;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_ObjectiveItemsCount
	 */
	struct UGroupStatusEntryWidget_C_Event_Refresh_ObjectiveItemsCount_Params
	{	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_MaxHealth
	 */
	struct UGroupStatusEntryWidget_C_Event_Refresh_MaxHealth_Params
	{
	public:
		float                                                      newMaxHealth;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.ExecuteUbergraph_GroupStatusEntryWidget
	 */
	struct UGroupStatusEntryWidget_C_ExecuteUbergraph_GroupStatusEntryWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
