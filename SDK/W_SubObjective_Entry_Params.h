#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function W_SubObjective_Entry.W_SubObjective_Entry_C.SetState
	 */
	struct UW_SubObjective_Entry_C_SetState_Params
	{	};

	/**
	 * Function W_SubObjective_Entry.W_SubObjective_Entry_C.Construct
	 */
	struct UW_SubObjective_Entry_C_Construct_Params
	{	};

	/**
	 * Function W_SubObjective_Entry.W_SubObjective_Entry_C.PreConstruct
	 */
	struct UW_SubObjective_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_SubObjective_Entry.W_SubObjective_Entry_C.Update
	 */
	struct UW_SubObjective_Entry_C_Update_Params
	{
	public:
		bool                                                       Complete;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Failed;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_14YR[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ObjectiveDescription;                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_SubObjective_Entry.W_SubObjective_Entry_C.ExecuteUbergraph_W_SubObjective_Entry
	 */
	struct UW_SubObjective_Entry_C_ExecuteUbergraph_W_SubObjective_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
