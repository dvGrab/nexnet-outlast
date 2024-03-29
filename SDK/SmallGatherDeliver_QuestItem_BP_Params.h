#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * Function SmallGatherDeliver_QuestItem_BP.SmallGatherDeliver_QuestItem_BP_C.GetStateName
	 */
	struct ASmallGatherDeliver_QuestItem_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SmallGatherDeliver_QuestItem_BP.SmallGatherDeliver_QuestItem_BP_C.IsStateA
	 */
	struct ASmallGatherDeliver_QuestItem_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SmallGatherDeliver_QuestItem_BP.SmallGatherDeliver_QuestItem_BP_C.ShouldBeIgnoredForLots
	 */
	struct ASmallGatherDeliver_QuestItem_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SmallGatherDeliver_QuestItem_BP.SmallGatherDeliver_QuestItem_BP_C.UserConstructionScript
	 */
	struct ASmallGatherDeliver_QuestItem_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SmallGatherDeliver_QuestItem_BP.SmallGatherDeliver_QuestItem_BP_C.PrepareState
	 */
	struct ASmallGatherDeliver_QuestItem_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LBS5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SmallGatherDeliver_QuestItem_BP.SmallGatherDeliver_QuestItem_BP_C.SetShouldBeIgnoredForLots
	 */
	struct ASmallGatherDeliver_QuestItem_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SmallGatherDeliver_QuestItem_BP.SmallGatherDeliver_QuestItem_BP_C.SetState
	 */
	struct ASmallGatherDeliver_QuestItem_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SmallGatherDeliver_QuestItem_BP.SmallGatherDeliver_QuestItem_BP_C.ExecuteUbergraph_SmallGatherDeliver_QuestItem_BP
	 */
	struct ASmallGatherDeliver_QuestItem_BP_C_ExecuteUbergraph_SmallGatherDeliver_QuestItem_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
