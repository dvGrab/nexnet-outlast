#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_GateKeys_K2Node_ActorBoundEvent_2_OnObjectiveCoordinatorCompleted__DelegateSignature
	 */
	struct APoliceStation_T02_B05_C_BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_GateKeys_K2Node_ActorBoundEvent_2_OnObjectiveCoordinatorCompleted__DelegateSignature_Params
	{
	public:
		bool                                                       bIsJIP;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.OnLastGateOpened
	 */
	struct APoliceStation_T02_B05_C_OnLastGateOpened_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N9RM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBTriggerable*                                      triggerable;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_FirstGateKeys_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorStarted__DelegateSignature
	 */
	struct APoliceStation_T02_B05_C_BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_FirstGateKeys_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorStarted__DelegateSignature_Params
	{	};

	/**
	 * Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_AllGateKeys_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorStarted__DelegateSignature
	 */
	struct APoliceStation_T02_B05_C_BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_AllGateKeys_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorStarted__DelegateSignature_Params
	{	};

	/**
	 * Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.Cheat_OpenLockedGates
	 */
	struct APoliceStation_T02_B05_C_Cheat_OpenLockedGates_Params
	{	};

	/**
	 * Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.OnSecondGateOpened
	 */
	struct APoliceStation_T02_B05_C_OnSecondGateOpened_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OFNR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBTriggerable*                                      triggerable;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.B05_FirstGateInvestigationDone
	 */
	struct APoliceStation_T02_B05_C_B05_FirstGateInvestigationDone_Params
	{
	public:
		class URBPlayerInvestigationZoneComponent*                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.B05_ActivateFirstGateTrigger
	 */
	struct APoliceStation_T02_B05_C_B05_ActivateFirstGateTrigger_Params
	{	};

	/**
	 * Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.OnThirdGateOpened
	 */
	struct APoliceStation_T02_B05_C_OnThirdGateOpened_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4M0H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBTriggerable*                                      triggerable;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.ExecuteUbergraph_PoliceStation_T02_B05
	 */
	struct APoliceStation_T02_B05_C_ExecuteUbergraph_PoliceStation_T02_B05_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
