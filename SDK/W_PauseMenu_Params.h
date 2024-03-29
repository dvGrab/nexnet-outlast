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
	 * Function W_PauseMenu.W_PauseMenu_C.Get_btn_Lobby_Visibility_1
	 */
	struct UW_PauseMenu_C_Get_btn_Lobby_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BOAY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.Get_btn_Invite_Visibility_1
	 */
	struct UW_PauseMenu_C_Get_btn_Invite_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SR5U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.OnKeyDown
	 */
	struct UW_PauseMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.GetCallVoteEnabled
	 */
	struct UW_PauseMenu_C_GetCallVoteEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R2C0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.GetMissionBoxVisibility
	 */
	struct UW_PauseMenu_C_GetMissionBoxVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62X0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.Get_HorizontalBox_25_Visibility_1
	 */
	struct UW_PauseMenu_C_Get_HorizontalBox_25_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GW0B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.Get_Version_Text_1
	 */
	struct UW_PauseMenu_C_Get_Version_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.Construct
	 */
	struct UW_PauseMenu_C_Construct_Params
	{	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.Tick
	 */
	struct UW_PauseMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.Destroy
	 */
	struct UW_PauseMenu_C_Destroy_Params
	{	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.Resume
	 */
	struct UW_PauseMenu_C_Resume_Params
	{	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Resume_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__btn_Resume_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Invite_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__btn_Invite_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Options_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__btn_Options_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Admin_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__btn_Admin_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Bug_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__btn_Bug_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Vote_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__btn_Vote_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.PreConstruct
	 */
	struct UW_PauseMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_ConfirmAdminPassword_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__btn_ConfirmAdminPassword_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.Destruct
	 */
	struct UW_PauseMenu_C_Destruct_Params
	{	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Lobby_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__W_PauseMenu_btn_Lobby_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Replay_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__W_PauseMenu_btn_Replay_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature
	 */
	struct UW_PauseMenu_C_BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_PauseMenu.W_PauseMenu_C.ExecuteUbergraph_W_PauseMenu
	 */
	struct UW_PauseMenu_C_ExecuteUbergraph_W_PauseMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RRLK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
