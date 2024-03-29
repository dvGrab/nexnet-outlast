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
	 * Function ChatMessage_Entry.ChatMessage_Entry_C.Get_ChatType_Text_1
	 */
	struct UChatMessage_Entry_C_Get_ChatType_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChatMessage_Entry.ChatMessage_Entry_C.Construct
	 */
	struct UChatMessage_Entry_C_Construct_Params
	{	};

	/**
	 * Function ChatMessage_Entry.ChatMessage_Entry_C.ExecuteUbergraph_ChatMessage_Entry
	 */
	struct UChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
