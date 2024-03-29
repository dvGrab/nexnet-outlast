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
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.InitNavMeshBlocking
	 */
	struct ASplineAnchor_BP_C_InitNavMeshBlocking_Params
	{	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.UpdateNavMeshBlocking
	 */
	struct ASplineAnchor_BP_C_UpdateNavMeshBlocking_Params
	{
	public:
		bool                                                       bMoving;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.UpdateSplineSound
	 */
	struct ASplineAnchor_BP_C_UpdateSplineSound_Params
	{	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.OnRep_bIsMovingSound
	 */
	struct ASplineAnchor_BP_C_OnRep_bIsMovingSound_Params
	{	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.UserConstructionScript
	 */
	struct ASplineAnchor_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.ReceiveBeginPlay
	 */
	struct ASplineAnchor_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.StartMovingSound
	 */
	struct ASplineAnchor_BP_C_StartMovingSound_Params
	{	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.StopMovingSound
	 */
	struct ASplineAnchor_BP_C_StopMovingSound_Params
	{	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.BndEvt__SplineAnchor_BP_NetworkSync_K2Node_ComponentBoundEvent_0_OnNetworkSyncComponentEvent__DelegateSignature
	 */
	struct ASplineAnchor_BP_C_BndEvt__SplineAnchor_BP_NetworkSync_K2Node_ComponentBoundEvent_0_OnNetworkSyncComponentEvent__DelegateSignature_Params
	{
	public:
		class URBNetworkSyncComponent*                             networkSyncComponent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.BP_OnStartedMoving
	 */
	struct ASplineAnchor_BP_C_BP_OnStartedMoving_Params
	{	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.BP_OnStoppedMoving
	 */
	struct ASplineAnchor_BP_C_BP_OnStoppedMoving_Params
	{	};

	/**
	 * Function SplineAnchor_BP.SplineAnchor_BP_C.ExecuteUbergraph_SplineAnchor_BP
	 */
	struct ASplineAnchor_BP_C_ExecuteUbergraph_SplineAnchor_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UGER[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
