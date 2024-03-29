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
	 * Function W_ChatBox.W_ChatBox_C.SetInput
	 */
	struct UW_ChatBox_C_SetInput_Params
	{	};

	/**
	 * Function W_ChatBox.W_ChatBox_C.ShowChatBox
	 */
	struct UW_ChatBox_C_ShowChatBox_Params
	{
	public:
		bool                                                       bTeamChat;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ChatBox.W_ChatBox_C.Construct
	 */
	struct UW_ChatBox_C_Construct_Params
	{	};

	/**
	 * Function W_ChatBox.W_ChatBox_C.BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UW_ChatBox_C_BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ChatBox.W_ChatBox_C.OnChatMessageReceived_Event_1
	 */
	struct UW_ChatBox_C_OnChatMessageReceived_Event_1_Params
	{
	public:
		struct FRChatMessage                                       Message;                                                 // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_ChatBox.W_ChatBox_C.HideChat
	 */
	struct UW_ChatBox_C_HideChat_Params
	{	};

	/**
	 * Function W_ChatBox.W_ChatBox_C.HideChatBox
	 */
	struct UW_ChatBox_C_HideChatBox_Params
	{	};

	/**
	 * Function W_ChatBox.W_ChatBox_C.UpdateHudVisibility
	 */
	struct UW_ChatBox_C_UpdateHudVisibility_Params
	{	};

	/**
	 * Function W_ChatBox.W_ChatBox_C.OnFocusLost
	 */
	struct UW_ChatBox_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function W_ChatBox.W_ChatBox_C.ExecuteUbergraph_W_ChatBox
	 */
	struct UW_ChatBox_C_ExecuteUbergraph_W_ChatBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B8QM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
