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
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.GetInteractionPawnLocation
	 */
	struct ABASE_ElectricalSwitch__BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_458T[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9F4F[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.TestPhysicsClearance
	 */
	struct ABASE_ElectricalSwitch__BP_C_TestPhysicsClearance_Params
	{
	public:
		class ARBPawn*                                             interactorPawn;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IVXT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.HasInteractingPawn
	 */
	struct ABASE_ElectricalSwitch__BP_C_HasInteractingPawn_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GNI7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.UpdateLightMaterial
	 */
	struct ABASE_ElectricalSwitch__BP_C_UpdateLightMaterial_Params
	{
	public:
		int32_t                                                    CurrentLight;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                MaterialName;                                            // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GMYA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  Material;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.SetWaitingForResetCompleted
	 */
	struct ABASE_ElectricalSwitch__BP_C_SetWaitingForResetCompleted_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.SetCableHeight
	 */
	struct ABASE_ElectricalSwitch__BP_C_SetCableHeight_Params
	{	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.UserConstructionScript
	 */
	struct ABASE_ElectricalSwitch__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnOperationProgressChanged
	 */
	struct ABASE_ElectricalSwitch__BP_C_Event_OnOperationProgressChanged_Params
	{
	public:
		float                                                      currentProgressRatio;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.SetTriggerableActivation
	 */
	struct ABASE_ElectricalSwitch__BP_C_SetTriggerableActivation_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_34UZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBTriggerable*                                      RBTriggerable;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnCompletedOperation
	 */
	struct ABASE_ElectricalSwitch__BP_C_Event_OnCompletedOperation_Params
	{
	public:
		TArray<class ARBPawn*>                                     pawns;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_SnapToState
	 */
	struct ABASE_ElectricalSwitch__BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnTimedReset
	 */
	struct ABASE_ElectricalSwitch__BP_C_Event_OnTimedReset_Params
	{	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnResetStage
	 */
	struct ABASE_ElectricalSwitch__BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.ReceiveBeginPlay
	 */
	struct ABASE_ElectricalSwitch__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.UpdateLightDisplay
	 */
	struct ABASE_ElectricalSwitch__BP_C_UpdateLightDisplay_Params
	{	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnInteractorsChangedEvent
	 */
	struct ABASE_ElectricalSwitch__BP_C_Event_OnInteractorsChangedEvent_Params
	{	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.ExecuteUbergraph_BASE_ElectricalSwitch-01_BP
	 */
	struct ABASE_ElectricalSwitch__BP_C_ExecuteUbergraph_BASE_ElectricalSwitch__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.OnWaitingForResetCompletedChanged__DelegateSignature
	 */
	struct ABASE_ElectricalSwitch__BP_C_OnWaitingForResetCompletedChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
