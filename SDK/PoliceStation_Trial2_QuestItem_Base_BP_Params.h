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
	 * Function PoliceStation_Trial2_QuestItem_Base_BP.PoliceStation_Trial2_QuestItem_Base_BP_C.GetAssociatedInvestigationComponent
	 */
	struct APoliceStation_Trial2_QuestItem_Base_BP_C_GetAssociatedInvestigationComponent_Params
	{
	public:
		class URBPlayerInvestigationZoneComponent*                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_Trial2_QuestItem_Base_BP.PoliceStation_Trial2_QuestItem_Base_BP_C.GetClue
	 */
	struct APoliceStation_Trial2_QuestItem_Base_BP_C_GetClue_Params
	{
	public:
		struct FClueData                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function PoliceStation_Trial2_QuestItem_Base_BP.PoliceStation_Trial2_QuestItem_Base_BP_C.SetClue
	 */
	struct APoliceStation_Trial2_QuestItem_Base_BP_C_SetClue_Params
	{
	public:
		struct FClueData                                           ClueData;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PoliceStation_Trial2_QuestItem_Base_BP.PoliceStation_Trial2_QuestItem_Base_BP_C.ExecuteUbergraph_PoliceStation_Trial2_QuestItem_Base_BP
	 */
	struct APoliceStation_Trial2_QuestItem_Base_BP_C_ExecuteUbergraph_PoliceStation_Trial2_QuestItem_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
