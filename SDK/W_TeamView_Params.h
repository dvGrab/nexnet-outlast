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
	 * Function W_TeamView.W_TeamView_C.Construct
	 */
	struct UW_TeamView_C_Construct_Params
	{	};

	/**
	 * Function W_TeamView.W_TeamView_C.Tick_TeamViewOn
	 */
	struct UW_TeamView_C_Tick_TeamViewOn_Params
	{	};

	/**
	 * Function W_TeamView.W_TeamView_C.ExecuteUbergraph_W_TeamView
	 */
	struct UW_TeamView_C_ExecuteUbergraph_W_TeamView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6AX7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
