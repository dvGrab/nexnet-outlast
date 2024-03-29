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
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.Get_ReplayBtn_Visibility_1
	 */
	struct UW_MainMenu_V2_C_Get_ReplayBtn_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WCRC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.FadeInMenu
	 */
	struct UW_MainMenu_V2_C_FadeInMenu_Params
	{	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.OnMouseButtonDown_1
	 */
	struct UW_MainMenu_V2_C_OnMouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.OnKeyDown
	 */
	struct UW_MainMenu_V2_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Options_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Options_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Quit_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Quit_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Bug_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Bug_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.Construct
	 */
	struct UW_MainMenu_V2_C_Construct_Params
	{	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_FindSession_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_FindSession_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Play_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_2_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Play_2_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_3_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Play_3_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Cancel_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Cancel_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.PreConstruct
	 */
	struct UW_MainMenu_V2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.RetryLogin
	 */
	struct UW_MainMenu_V2_C_RetryLogin_Params
	{	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Play_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.CustomEvent_1
	 */
	struct UW_MainMenu_V2_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.OnUpdateSessionSearch_Event_1
	 */
	struct UW_MainMenu_V2_C_OnUpdateSessionSearch_Event_1_Params
	{
	public:
		bool                                                       bComplete;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_29WO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutMessage;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bPVPSearch;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_W_Button_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_W_Button_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_FindPVPSessionBtn_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_FindPVPSessionBtn_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_FindPVPSessionCancelBtn_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_FindPVPSessionCancelBtn_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_ReplayBtn_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature
	 */
	struct UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_ReplayBtn_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MainMenu_V2.W_MainMenu_V2_C.ExecuteUbergraph_W_MainMenu_V2
	 */
	struct UW_MainMenu_V2_C_ExecuteUbergraph_W_MainMenu_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CAT2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
