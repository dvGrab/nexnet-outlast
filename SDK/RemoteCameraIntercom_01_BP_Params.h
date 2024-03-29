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
	 * Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.GetAllCameraIntercoms
	 */
	struct ARemoteCameraIntercom__BP_C_GetAllCameraIntercoms_Params
	{	};

	/**
	 * Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.Event_OnCompletedOperation
	 */
	struct ARemoteCameraIntercom__BP_C_Event_OnCompletedOperation_Params
	{
	public:
		TArray<class ARBPawn*>                                     pawns;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.ExecuteUbergraph_RemoteCameraIntercom-01_BP
	 */
	struct ARemoteCameraIntercom__BP_C_ExecuteUbergraph_RemoteCameraIntercom__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CYRE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.OnForcePlayerExit__DelegateSignature
	 */
	struct ARemoteCameraIntercom__BP_C_OnForcePlayerExit__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
