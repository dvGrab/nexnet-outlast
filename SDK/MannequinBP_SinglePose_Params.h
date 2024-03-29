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
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.FixUp
	 */
	struct AMannequinBP_SinglePose_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.DisableTick
	 */
	struct AMannequinBP_SinglePose_C_DisableTick_Params
	{	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.SetForceBakeShadows
	 */
	struct AMannequinBP_SinglePose_C_SetForceBakeShadows_Params
	{	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.UserConstructionScript
	 */
	struct AMannequinBP_SinglePose_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.OnPostActorsPasted
	 */
	struct AMannequinBP_SinglePose_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostAddedToLevel
	 */
	struct AMannequinBP_SinglePose_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostDuplicated
	 */
	struct AMannequinBP_SinglePose_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostEditChange
	 */
	struct AMannequinBP_SinglePose_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.TickSelected
	 */
	struct AMannequinBP_SinglePose_C_TickSelected_Params
	{	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.ReceiveBeginPlay
	 */
	struct AMannequinBP_SinglePose_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.OnEditorPostLoad
	 */
	struct AMannequinBP_SinglePose_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostEditMove
	 */
	struct AMannequinBP_SinglePose_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.ExecuteUbergraph_MannequinBP_SinglePose
	 */
	struct AMannequinBP_SinglePose_C_ExecuteUbergraph_MannequinBP_SinglePose_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UXMM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
