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
	 * Function PoliceStation_Trial2_QuestItemCoord_BP.PoliceStation_Trial2_QuestItemCoord_BP_C.GetClueObjectiveIconFromClueName
	 */
	struct APoliceStation_Trial2_QuestItemCoord_BP_C_GetClueObjectiveIconFromClueName_Params
	{
	public:
		class FName                                                clueName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         ReturnValue;                                             // 0x0008(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PoliceStation_Trial2_QuestItemCoord_BP.PoliceStation_Trial2_QuestItemCoord_BP_C.GetClueTextFromClueName
	 */
	struct APoliceStation_Trial2_QuestItemCoord_BP_C_GetClueTextFromClueName_Params
	{
	public:
		class FName                                                clueName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
