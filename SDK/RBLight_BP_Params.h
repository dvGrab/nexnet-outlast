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
	 * Function RBLight_BP.RBLight_BP_C.FixUp
	 */
	struct ARBLight_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.ShouldBeIgnoredForLots
	 */
	struct ARBLight_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.GetStateName
	 */
	struct ARBLight_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8NRF[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.IsStateA
	 */
	struct ARBLight_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.BP_MapCheck
	 */
	struct ARBLight_BP_C_BP_MapCheck_Params
	{
	public:
		EMapCheckType                                              checkType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9Y6I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outErrorMsg;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8SHG[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.MigrateOldValues
	 */
	struct ARBLight_BP_C_MigrateOldValues_Params
	{	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.SetUseBulb
	 */
	struct ARBLight_BP_C_SetUseBulb_Params
	{	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.GetClipPlaneDistance
	 */
	struct ARBLight_BP_C_GetClipPlaneDistance_Params
	{	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.SetDustParticle
	 */
	struct ARBLight_BP_C_SetDustParticle_Params
	{
	public:
		bool                                                       IsRuntime;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KOIA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.ConstructAudio
	 */
	struct ARBLight_BP_C_ConstructAudio_Params
	{	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.SetVisible
	 */
	struct ARBLight_BP_C_SetVisible_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.Initialize
	 */
	struct ARBLight_BP_C_Initialize_Params
	{
	public:
		bool                                                       IsRuntime;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.SetAnchorAndCablePosition
	 */
	struct ARBLight_BP_C_SetAnchorAndCablePosition_Params
	{
	public:
		bool                                                       bIsRuntime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.UserConstructionScript
	 */
	struct ARBLight_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.OnPostActorsPasted
	 */
	struct ARBLight_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.PostAddedToLevel
	 */
	struct ARBLight_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.PostDuplicated
	 */
	struct ARBLight_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.PostEditChange
	 */
	struct ARBLight_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.PostEditMove
	 */
	struct ARBLight_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.TickSelected
	 */
	struct ARBLight_BP_C_TickSelected_Params
	{	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.LightingScenarioChanged
	 */
	struct ARBLight_BP_C_LightingScenarioChanged_Params
	{	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.PrepareState
	 */
	struct ARBLight_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F4HX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.SetShouldBeIgnoredForLots
	 */
	struct ARBLight_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.SetState
	 */
	struct ARBLight_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.OnEditorPostLoad
	 */
	struct ARBLight_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.OnBPConstruction
	 */
	struct ARBLight_BP_C_OnBPConstruction_Params
	{	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.ExecuteUbergraph_RBLight_BP
	 */
	struct ARBLight_BP_C_ExecuteUbergraph_RBLight_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SIHE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBLight_BP.RBLight_BP_C.LightVisibilityChanged__DelegateSignature
	 */
	struct ARBLight_BP_C_LightVisibilityChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
