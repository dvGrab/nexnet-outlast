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
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.IsConsideredHovered
	 */
	struct UCoreUpgradeTierButton_C_IsConsideredHovered_Params
	{
	public:
		bool                                                       bConsideredHovered;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnFocusReceived
	 */
	struct UCoreUpgradeTierButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.ComputeValues
	 */
	struct UCoreUpgradeTierButton_C_ComputeValues_Params
	{	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.SetFocused
	 */
	struct UCoreUpgradeTierButton_C_SetFocused_Params
	{
	public:
		bool                                                       bInFocused;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.SetHovered
	 */
	struct UCoreUpgradeTierButton_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.Refresh
	 */
	struct UCoreUpgradeTierButton_C_Refresh_Params
	{	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.Init
	 */
	struct UCoreUpgradeTierButton_C_Init_Params
	{
	public:
		bool                                                       bIsLoadout;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsHeader;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M5EL[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    tier;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.Setup
	 */
	struct UCoreUpgradeTierButton_C_Setup_Params
	{	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.PreConstruct
	 */
	struct UCoreUpgradeTierButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCoreUpgradeTierButton_C_BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCoreUpgradeTierButton_C_BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCoreUpgradeTierButton_C_BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnFocusLost
	 */
	struct UCoreUpgradeTierButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.Construct
	 */
	struct UCoreUpgradeTierButton_C_Construct_Params
	{	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnMenuInputSourceChanged
	 */
	struct UCoreUpgradeTierButton_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.Destruct
	 */
	struct UCoreUpgradeTierButton_C_Destruct_Params
	{	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.ExecuteUbergraph_CoreUpgradeTierButton
	 */
	struct UCoreUpgradeTierButton_C_ExecuteUbergraph_CoreUpgradeTierButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnClicked__DelegateSignature
	 */
	struct UCoreUpgradeTierButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnUnhovered__DelegateSignature
	 */
	struct UCoreUpgradeTierButton_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnHovered__DelegateSignature
	 */
	struct UCoreUpgradeTierButton_C_OnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
