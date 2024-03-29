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
	 * Function OrientedDecalActor.OrientedDecalActor_C.GetStateName
	 */
	struct AOrientedDecalActor_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OrientedDecalActor.OrientedDecalActor_C.IsStateA
	 */
	struct AOrientedDecalActor_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OrientedDecalActor.OrientedDecalActor_C.ShouldBeIgnoredForLots
	 */
	struct AOrientedDecalActor_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OrientedDecalActor.OrientedDecalActor_C.CreateDynamicOrientedMaterial
	 */
	struct AOrientedDecalActor_C_CreateDynamicOrientedMaterial_Params
	{	};

	/**
	 * Function OrientedDecalActor.OrientedDecalActor_C.UserConstructionScript
	 */
	struct AOrientedDecalActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function OrientedDecalActor.OrientedDecalActor_C.PrepareState
	 */
	struct AOrientedDecalActor_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0AJY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OrientedDecalActor.OrientedDecalActor_C.SetShouldBeIgnoredForLots
	 */
	struct AOrientedDecalActor_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OrientedDecalActor.OrientedDecalActor_C.SetState
	 */
	struct AOrientedDecalActor_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OrientedDecalActor.OrientedDecalActor_C.ReceiveBeginPlay
	 */
	struct AOrientedDecalActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function OrientedDecalActor.OrientedDecalActor_C.ExecuteUbergraph_OrientedDecalActor
	 */
	struct AOrientedDecalActor_C_ExecuteUbergraph_OrientedDecalActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
