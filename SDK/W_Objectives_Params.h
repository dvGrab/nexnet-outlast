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
	 * Function W_Objectives.W_Objectives_C.Construct
	 */
	struct UW_Objectives_C_Construct_Params
	{	};

	/**
	 * Function W_Objectives.W_Objectives_C.PreConstruct
	 */
	struct UW_Objectives_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Objectives.W_Objectives_C.Build Objective List
	 */
	struct UW_Objectives_C_Build_Objective_List_Params
	{	};

	/**
	 * Function W_Objectives.W_Objectives_C.ExecuteUbergraph_W_Objectives
	 */
	struct UW_Objectives_C_ExecuteUbergraph_W_Objectives_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_09IX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
