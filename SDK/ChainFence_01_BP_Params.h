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
	 * Function ChainFence-01_BP.ChainFence-01_BP_C.FindAlphaScale
	 */
	struct AChainFence__BP_C_FindAlphaScale_Params
	{
	public:
		TArray<struct FModuleMeshData>                             Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      AlphaScale;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChainFence-01_BP.ChainFence-01_BP_C.MakePoleArray
	 */
	struct AChainFence__BP_C_MakePoleArray_Params
	{
	public:
		TArray<struct FModuleMeshData>                             SourceDefault;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FModuleMeshData>                             Source;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FModuleMeshData>                             Target;                                                  // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ChainFence-01_BP.ChainFence-01_BP_C.SetAutomaticCollisionMeshExclusions
	 */
	struct AChainFence__BP_C_SetAutomaticCollisionMeshExclusions_Params
	{	};

	/**
	 * Function ChainFence-01_BP.ChainFence-01_BP_C.GetStateName
	 */
	struct AChainFence__BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChainFence-01_BP.ChainFence-01_BP_C.IsStateA
	 */
	struct AChainFence__BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChainFence-01_BP.ChainFence-01_BP_C.UserConstructionScript
	 */
	struct AChainFence__BP_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
