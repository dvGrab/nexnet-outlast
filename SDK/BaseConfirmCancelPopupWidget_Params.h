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
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.OnPreviewMouseButtonDown
	 */
	struct UBaseConfirmCancelPopupWidget_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.SetCancelSound
	 */
	struct UBaseConfirmCancelPopupWidget_C_SetCancelSound_Params
	{
	public:
		class UAkAudioEvent*                                       Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.SetConfrmSound
	 */
	struct UBaseConfirmCancelPopupWidget_C_SetConfrmSound_Params
	{
	public:
		class UAkAudioEvent*                                       Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.PreConstruct
	 */
	struct UBaseConfirmCancelPopupWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Construct
	 */
	struct UBaseConfirmCancelPopupWidget_C_Construct_Params
	{	};

	/**
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Event_InitializePopup
	 */
	struct UBaseConfirmCancelPopupWidget_C_Event_InitializePopup_Params
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                MainText;                                                // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                ConfirmText;                                             // 0x0030(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                CancelText;                                              // 0x0048(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBaseConfirmCancelPopupWidget_C_BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.BndEvt__CancelMenuButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UBaseConfirmCancelPopupWidget_C_BndEvt__CancelMenuButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Destruct
	 */
	struct UBaseConfirmCancelPopupWidget_C_Destruct_Params
	{	};

	/**
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.OninputChanged
	 */
	struct UBaseConfirmCancelPopupWidget_C_OninputChanged_Params
	{	};

	/**
	 * Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.ExecuteUbergraph_BaseConfirmCancelPopupWidget
	 */
	struct UBaseConfirmCancelPopupWidget_C_ExecuteUbergraph_BaseConfirmCancelPopupWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
