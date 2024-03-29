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
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.GetMissionNextMapTimerVisibility
	 */
	struct UW_MissionEnd_redux_C_GetMissionNextMapTimerVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4BMD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.OnMouseButtonDown
	 */
	struct UW_MissionEnd_redux_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddAllPenalties
	 */
	struct UW_MissionEnd_redux_C_AddAllPenalties_Params
	{	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddPenalty
	 */
	struct UW_MissionEnd_redux_C_AddPenalty_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Count;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Total;                                                   // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Score;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BS1L[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddAllBonuses
	 */
	struct UW_MissionEnd_redux_C_AddAllBonuses_Params
	{	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddBonus
	 */
	struct UW_MissionEnd_redux_C_AddBonus_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Count;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Total;                                                   // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Score;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N337[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.GetMapTimeRemaining
	 */
	struct UW_MissionEnd_redux_C_GetMapTimeRemaining_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.IsMultiplayerGame
	 */
	struct UW_MissionEnd_redux_C_IsMultiplayerGame_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R1JS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.GetRestartButtonVisibility
	 */
	struct UW_MissionEnd_redux_C_GetRestartButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q1GK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 */
	struct UW_MissionEnd_redux_C_BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__btn_Restart_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 */
	struct UW_MissionEnd_redux_C_BndEvt__btn_Restart_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__Scores_K2Node_ComponentBoundEvent_0_AllScoresAdded__DelegateSignature
	 */
	struct UW_MissionEnd_redux_C_BndEvt__Scores_K2Node_ComponentBoundEvent_0_AllScoresAdded__DelegateSignature_Params
	{	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__Penalties_K2Node_ComponentBoundEvent_1_AllPenaltiesAdded__DelegateSignature
	 */
	struct UW_MissionEnd_redux_C_BndEvt__Penalties_K2Node_ComponentBoundEvent_1_AllPenaltiesAdded__DelegateSignature_Params
	{	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__W_MissionEnd_redux_btn_lobby_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_MissionEnd_redux_C_BndEvt__W_MissionEnd_redux_btn_lobby_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.Construct
	 */
	struct UW_MissionEnd_redux_C_Construct_Params
	{	};

	/**
	 * Function W_MissionEnd_redux.W_MissionEnd_redux_C.ExecuteUbergraph_W_MissionEnd_redux
	 */
	struct UW_MissionEnd_redux_C_ExecuteUbergraph_W_MissionEnd_redux_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UEP4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
