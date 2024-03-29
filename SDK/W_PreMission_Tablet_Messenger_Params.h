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
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OpenMessenger
	 */
	struct UW_PreMission_Tablet_Messenger_C_OpenMessenger_Params
	{
	public:
		bool                                                       FocusChatBox;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8YJY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.SendMessage
	 */
	struct UW_PreMission_Tablet_Messenger_C_SendMessage_Params
	{
	public:
		class FText                                                MessageText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.AddChatMessage
	 */
	struct UW_PreMission_Tablet_Messenger_C_AddChatMessage_Params
	{
	public:
		struct FRChatMessage                                       Message;                                                 // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnKeyUp
	 */
	struct UW_PreMission_Tablet_Messenger_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.PopulateChatHistory
	 */
	struct UW_PreMission_Tablet_Messenger_C_PopulateChatHistory_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.PreConstruct
	 */
	struct UW_PreMission_Tablet_Messenger_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.CloseMessenger
	 */
	struct UW_PreMission_Tablet_Messenger_C_CloseMessenger_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.NewMessage
	 */
	struct UW_PreMission_Tablet_Messenger_C_NewMessage_Params
	{
	public:
		struct FRChatMessage                                       Message;                                                 // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.HideToast
	 */
	struct UW_PreMission_Tablet_Messenger_C_HideToast_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.ExecuteUbergraph_W_PreMission_Tablet_Messenger
	 */
	struct UW_PreMission_Tablet_Messenger_C_ExecuteUbergraph_W_PreMission_Tablet_Messenger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KKKQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnMessengerOpen__DelegateSignature
	 */
	struct UW_PreMission_Tablet_Messenger_C_OnMessengerOpen__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnMessengerClose__DelegateSignature
	 */
	struct UW_PreMission_Tablet_Messenger_C_OnMessengerClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
