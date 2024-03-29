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
	 * Function TextChatWidget_BP.TextChatWidget_BP_C.OnEntryHidden
	 */
	struct UTextChatWidget_BP_C_OnEntryHidden_Params
	{
	public:
		class UTextChatEntry_C*                                    Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextChatWidget_BP.TextChatWidget_BP_C.AddMessage
	 */
	struct UTextChatWidget_BP_C_AddMessage_Params
	{
	public:
		struct FRBTextChatMessage                                  Message;                                                 // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TextChatWidget_BP.TextChatWidget_BP_C.PreConstruct
	 */
	struct UTextChatWidget_BP_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextChatWidget_BP.TextChatWidget_BP_C.Event_ShowMessage
	 */
	struct UTextChatWidget_BP_C_Event_ShowMessage_Params
	{
	public:
		struct FRBTextChatMessage                                  Message;                                                 // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TextChatWidget_BP.TextChatWidget_BP_C.Event_HideMessage
	 */
	struct UTextChatWidget_BP_C_Event_HideMessage_Params
	{
	public:
		int32_t                                                    MessageId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextChatWidget_BP.TextChatWidget_BP_C.ExecuteUbergraph_TextChatWidget_BP
	 */
	struct UTextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_499V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
