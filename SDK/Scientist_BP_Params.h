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
	 * Function Scientist_BP.Scientist_BP_C.RandomizeMeshes
	 */
	struct AScientist_BP_C_RandomizeMeshes_Params
	{	};

	/**
	 * Function Scientist_BP.Scientist_BP_C.CanBeFemale
	 */
	struct AScientist_BP_C_CanBeFemale_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scientist_BP.Scientist_BP_C.UserConstructionScript
	 */
	struct AScientist_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Scientist_BP.Scientist_BP_C.OnLoaded_5B190DD74C9C1BA5309F1B83ACAC3AEA
	 */
	struct AScientist_BP_C_OnLoaded_5B190DD74C9C1BA5309F1B83ACAC3AEA_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Scientist_BP.Scientist_BP_C.ApplyMesh
	 */
	struct AScientist_BP_C_ApplyMesh_Params
	{
	public:
		unsigned char                                              UnknownData_LG6H[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              Component;                                               // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MeshIndex;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Scientist_BP.Scientist_BP_C.ReceiveBeginPlay
	 */
	struct AScientist_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Scientist_BP.Scientist_BP_C.ApplyAllMeshes
	 */
	struct AScientist_BP_C_ApplyAllMeshes_Params
	{	};

	/**
	 * Function Scientist_BP.Scientist_BP_C.ExecuteUbergraph_Scientist_BP
	 */
	struct AScientist_BP_C_ExecuteUbergraph_Scientist_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_71HG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
