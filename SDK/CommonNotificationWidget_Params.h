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
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.EnableBlockButton
	 */
	struct UCommonNotificationWidget_C_EnableBlockButton_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.SetMessage
	 */
	struct UCommonNotificationWidget_C_SetMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.UpdateProgress
	 */
	struct UCommonNotificationWidget_C_UpdateProgress_Params
	{
	public:
		float                                                      progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.PreConstruct
	 */
	struct UCommonNotificationWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.InputSourceChanged
	 */
	struct UCommonNotificationWidget_C_InputSourceChanged_Params
	{	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UCommonNotificationWidget_C_BndEvt__CommonNotificationWidget_AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_DeclineButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UCommonNotificationWidget_C_BndEvt__CommonNotificationWidget_DeclineButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_BlockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UCommonNotificationWidget_C_BndEvt__CommonNotificationWidget_BlockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.ExecuteUbergraph_CommonNotificationWidget
	 */
	struct UCommonNotificationWidget_C_ExecuteUbergraph_CommonNotificationWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.OnBlockButtonClicked__DelegateSignature
	 */
	struct UCommonNotificationWidget_C_OnBlockButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.OnDeclinedButtonClicked__DelegateSignature
	 */
	struct UCommonNotificationWidget_C_OnDeclinedButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CommonNotificationWidget.CommonNotificationWidget_C.OnAcceptedButtonClicked__DelegateSignature
	 */
	struct UCommonNotificationWidget_C_OnAcceptedButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
