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
	 * Function GroupStatusWidget.GroupStatusWidget_C.ShouldShow
	 */
	struct UGroupStatusWidget_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GroupStatusWidget.GroupStatusWidget_C.PreConstruct
	 */
	struct UGroupStatusWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GroupStatusWidget.GroupStatusWidget_C.Event_Refresh
	 */
	struct UGroupStatusWidget_C_Event_Refresh_Params
	{	};

	/**
	 * Function GroupStatusWidget.GroupStatusWidget_C.Construct
	 */
	struct UGroupStatusWidget_C_Construct_Params
	{	};

	/**
	 * Function GroupStatusWidget.GroupStatusWidget_C.Event_OnWatchedPlayerChanged
	 */
	struct UGroupStatusWidget_C_Event_OnWatchedPlayerChanged_Params
	{
	public:
		class ARBPlayer*                                           oldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           NewPlayer;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GroupStatusWidget.GroupStatusWidget_C.OnPlayerPartyStateUpdated
	 */
	struct UGroupStatusWidget_C_OnPlayerPartyStateUpdated_Params
	{
	public:
		class ARBPlayerState*                                      RBPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GroupStatusWidget.GroupStatusWidget_C.Event_Show
	 */
	struct UGroupStatusWidget_C_Event_Show_Params
	{	};

	/**
	 * Function GroupStatusWidget.GroupStatusWidget_C.Event_Hide
	 */
	struct UGroupStatusWidget_C_Event_Hide_Params
	{	};

	/**
	 * Function GroupStatusWidget.GroupStatusWidget_C.Destruct
	 */
	struct UGroupStatusWidget_C_Destruct_Params
	{	};

	/**
	 * Function GroupStatusWidget.GroupStatusWidget_C.OnMenuExited
	 */
	struct UGroupStatusWidget_C_OnMenuExited_Params
	{	};

	/**
	 * Function GroupStatusWidget.GroupStatusWidget_C.ExecuteUbergraph_GroupStatusWidget
	 */
	struct UGroupStatusWidget_C_ExecuteUbergraph_GroupStatusWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
