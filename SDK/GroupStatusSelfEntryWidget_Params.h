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
	 * Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupStatus
	 */
	struct UGroupStatusSelfEntryWidget_C_SetupStatus_Params
	{	};

	/**
	 * Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupCharacterClass
	 */
	struct UGroupStatusSelfEntryWidget_C_SetupCharacterClass_Params
	{	};

	/**
	 * Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh
	 */
	struct UGroupStatusSelfEntryWidget_C_Event_Refresh_Params
	{	};

	/**
	 * Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.PreConstruct
	 */
	struct UGroupStatusSelfEntryWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_OnPlayerSASChanged
	 */
	struct UGroupStatusSelfEntryWidget_C_Event_OnPlayerSASChanged_Params
	{
	public:
		class ARBPlayerState*                                      RBPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBSAS*                                              currentSAS;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh_Audio
	 */
	struct UGroupStatusSelfEntryWidget_C_Event_Refresh_Audio_Params
	{	};

	/**
	 * Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.ExecuteUbergraph_GroupStatusSelfEntryWidget
	 */
	struct UGroupStatusSelfEntryWidget_C_ExecuteUbergraph_GroupStatusSelfEntryWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_86W4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
