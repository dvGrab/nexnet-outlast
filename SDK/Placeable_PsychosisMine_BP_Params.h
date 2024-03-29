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
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.FixUp
	 */
	struct APlaceable_PsychosisMine_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.GetStateName
	 */
	struct APlaceable_PsychosisMine_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.IsStateA
	 */
	struct APlaceable_PsychosisMine_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.ShouldBeIgnoredForLots
	 */
	struct APlaceable_PsychosisMine_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.Editor_CheckOverlap
	 */
	struct APlaceable_PsychosisMine_BP_C_Editor_CheckOverlap_Params
	{	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.UpdateMeshVisibility
	 */
	struct APlaceable_PsychosisMine_BP_C_UpdateMeshVisibility_Params
	{	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.UserConstructionScript
	 */
	struct APlaceable_PsychosisMine_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.OnEditorPostLoad
	 */
	struct APlaceable_PsychosisMine_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.OnPostActorsPasted
	 */
	struct APlaceable_PsychosisMine_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.PostAddedToLevel
	 */
	struct APlaceable_PsychosisMine_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.PostDuplicated
	 */
	struct APlaceable_PsychosisMine_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.PostEditChange
	 */
	struct APlaceable_PsychosisMine_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.PostEditMove
	 */
	struct APlaceable_PsychosisMine_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.PrepareState
	 */
	struct APlaceable_PsychosisMine_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IHIZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.SetState
	 */
	struct APlaceable_PsychosisMine_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.SetShouldBeIgnoredForLots
	 */
	struct APlaceable_PsychosisMine_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.BndEvt__Placeable_PsychosisMine_BP_Randomizable Helper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature
	 */
	struct APlaceable_PsychosisMine_BP_C_BndEvt__Placeable_PsychosisMine_BP_Randomizable_Helper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.TickSelected
	 */
	struct APlaceable_PsychosisMine_BP_C_TickSelected_Params
	{	};

	/**
	 * Function Placeable_PsychosisMine_BP.Placeable_PsychosisMine_BP_C.ExecuteUbergraph_Placeable_PsychosisMine_BP
	 */
	struct APlaceable_PsychosisMine_BP_C_ExecuteUbergraph_Placeable_PsychosisMine_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
