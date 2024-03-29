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
	 * Function MainObjectivesContainer.MainObjectivesContainer_C.RefreshObjectivesTexts
	 */
	struct UMainObjectivesContainer_C_RefreshObjectivesTexts_Params
	{	};

	/**
	 * Function MainObjectivesContainer.MainObjectivesContainer_C.ShouldShow
	 */
	struct UMainObjectivesContainer_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainObjectivesContainer.MainObjectivesContainer_C.MainObjectivesContainer_AutoGenFunc
	 */
	struct UMainObjectivesContainer_C_MainObjectivesContainer_AutoGenFunc_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainObjectivesContainer.MainObjectivesContainer_C.Add Objective
	 */
	struct UMainObjectivesContainer_C_Add_Objective_Params
	{
	public:
		class ARBBaseObjectiveCoordinator*                         coordinator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainObjectivesContainer.MainObjectivesContainer_C.PreConstruct
	 */
	struct UMainObjectivesContainer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainObjectivesContainer.MainObjectivesContainer_C.Event_Show
	 */
	struct UMainObjectivesContainer_C_Event_Show_Params
	{	};

	/**
	 * Function MainObjectivesContainer.MainObjectivesContainer_C.Event_Hide
	 */
	struct UMainObjectivesContainer_C_Event_Hide_Params
	{	};

	/**
	 * Function MainObjectivesContainer.MainObjectivesContainer_C.ExecuteUbergraph_MainObjectivesContainer
	 */
	struct UMainObjectivesContainer_C_ExecuteUbergraph_MainObjectivesContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
