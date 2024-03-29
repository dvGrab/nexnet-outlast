#pragma once

/**
 * Name: OUTLAST
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
	 * Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.OnAnalogValueChanged
	 */
	struct UPolicyDocumentMenuWidget_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Tick
	 */
	struct UPolicyDocumentMenuWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_Setup
	 */
	struct UPolicyDocumentMenuWidget_C_Event_Setup_Params
	{
	public:
		class FString                                              Content;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.BndEvt__PolicyDocumentMenuWidget_AcceptBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UPolicyDocumentMenuWidget_C_BndEvt__PolicyDocumentMenuWidget_AcceptBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.OnFocusLost
	 */
	struct UPolicyDocumentMenuWidget_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_OnPush
	 */
	struct UPolicyDocumentMenuWidget_C_Event_OnPush_Params
	{	};

	/**
	 * Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_MenuConfirm_Released
	 */
	struct UPolicyDocumentMenuWidget_C_Event_MenuConfirm_Released_Params
	{	};

	/**
	 * Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.ExecuteUbergraph_PolicyDocumentMenuWidget
	 */
	struct UPolicyDocumentMenuWidget_C_ExecuteUbergraph_PolicyDocumentMenuWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
