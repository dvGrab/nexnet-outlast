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
	 * Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.FixUp
	 */
	struct ABase_OpenSpaceContainer_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YLLD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.UserConstructionScript
	 */
	struct ABase_OpenSpaceContainer_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.OnEditorPostLoad
	 */
	struct ABase_OpenSpaceContainer_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.OnPostActorsPasted
	 */
	struct ABase_OpenSpaceContainer_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostAddedToLevel
	 */
	struct ABase_OpenSpaceContainer_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostDuplicated
	 */
	struct ABase_OpenSpaceContainer_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostEditChange
	 */
	struct ABase_OpenSpaceContainer_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostEditMove
	 */
	struct ABase_OpenSpaceContainer_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.TickSelected
	 */
	struct ABase_OpenSpaceContainer_BP_C_TickSelected_Params
	{	};

	/**
	 * Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.ExecuteUbergraph_Base_OpenSpaceContainer_BP
	 */
	struct ABase_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H2LZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
