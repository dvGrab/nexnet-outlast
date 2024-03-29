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
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.FixUp
	 */
	struct ADeadBodyBase_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.Dress
	 */
	struct ADeadBodyBase_BP_C_Dress_Params
	{	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.DeprecateOldOverrides
	 */
	struct ADeadBodyBase_BP_C_DeprecateOldOverrides_Params
	{	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.GetAssociatedDeadBodyConfig
	 */
	struct ADeadBodyBase_BP_C_GetAssociatedDeadBodyConfig_Params
	{
	public:
		class UObject*                                             def;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewParam;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.SetupCollisions
	 */
	struct ADeadBodyBase_BP_C_SetupCollisions_Params
	{	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.SetCommonParameters
	 */
	struct ADeadBodyBase_BP_C_SetCommonParameters_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      Skelmeshes;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.UserConstructionScript
	 */
	struct ADeadBodyBase_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostAddedToLevel
	 */
	struct ADeadBodyBase_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostDuplicated
	 */
	struct ADeadBodyBase_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostEditChange
	 */
	struct ADeadBodyBase_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostEditMove
	 */
	struct ADeadBodyBase_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.TickSelected
	 */
	struct ADeadBodyBase_BP_C_TickSelected_Params
	{	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.ReceiveBeginPlay
	 */
	struct ADeadBodyBase_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnWorldFullyLoaded
	 */
	struct ADeadBodyBase_BP_C_OnWorldFullyLoaded_Params
	{	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnWorldPopulateFinished
	 */
	struct ADeadBodyBase_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnEditorPostLoad
	 */
	struct ADeadBodyBase_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnPostActorsPasted
	 */
	struct ADeadBodyBase_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DeadBodyBase_BP.DeadBodyBase_BP_C.ExecuteUbergraph_DeadBodyBase_BP
	 */
	struct ADeadBodyBase_BP_C_ExecuteUbergraph_DeadBodyBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LSRU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
