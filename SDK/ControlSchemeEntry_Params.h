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
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.GetArrowBtn
	 */
	struct UControlSchemeEntry_C_GetArrowBtn_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JTN4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UArrowButton_C*                                      ArrowButton;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.SetupCounter
	 */
	struct UControlSchemeEntry_C_SetupCounter_Params
	{	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.RefreshCounter
	 */
	struct UControlSchemeEntry_C_RefreshCounter_Params
	{	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.PreConstruct
	 */
	struct UControlSchemeEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.Event_UpdateTextValue
	 */
	struct UControlSchemeEntry_C_Event_UpdateTextValue_Params
	{
	public:
		class FText                                                NewValue;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 */
	struct UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 */
	struct UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature
	 */
	struct UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
	 */
	struct UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ControlSchemeEntry.ControlSchemeEntry_C.ExecuteUbergraph_ControlSchemeEntry
	 */
	struct UControlSchemeEntry_C_ExecuteUbergraph_ControlSchemeEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
