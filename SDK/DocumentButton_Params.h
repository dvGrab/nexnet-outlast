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
	 * Function DocumentButton.DocumentButton_C.IsElementEmpty
	 */
	struct UDocumentButton_C_IsElementEmpty_Params
	{
	public:
		bool                                                       bIsEmpty;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DocumentButton.DocumentButton_C.HideTooltip
	 */
	struct UDocumentButton_C_HideTooltip_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.TryShowTooltip
	 */
	struct UDocumentButton_C_TryShowTooltip_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.OnFocusReceived
	 */
	struct UDocumentButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DocumentButton.DocumentButton_C.SetSeen
	 */
	struct UDocumentButton_C_SetSeen_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.IsConsideredHovered
	 */
	struct UDocumentButton_C_IsConsideredHovered_Params
	{
	public:
		bool                                                       bConsideredHovered;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DocumentButton.DocumentButton_C.SetFocused
	 */
	struct UDocumentButton_C_SetFocused_Params
	{
	public:
		bool                                                       bInFocused;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DocumentButton.DocumentButton_C.SetHovered
	 */
	struct UDocumentButton_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DocumentButton.DocumentButton_C.Refresh
	 */
	struct UDocumentButton_C_Refresh_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.UpdateFocus
	 */
	struct UDocumentButton_C_UpdateFocus_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.OnLoaded_400D3A6F46134D64437AC5B163287479
	 */
	struct UDocumentButton_C_OnLoaded_400D3A6F46134D64437AC5B163287479_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DocumentButton.DocumentButton_C.PreConstruct
	 */
	struct UDocumentButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DocumentButton.DocumentButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UDocumentButton_C_BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UDocumentButton_C_BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDocumentButton_C_BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.Setup
	 */
	struct UDocumentButton_C_Setup_Params
	{
	public:
		struct FRBCollectibleDocumentDefinitionRow                 Document;                                                // 0x0000(0x00E8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DocumentButton.DocumentButton_C.OnFocusLost
	 */
	struct UDocumentButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function DocumentButton.DocumentButton_C.Construct
	 */
	struct UDocumentButton_C_Construct_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.Destruct
	 */
	struct UDocumentButton_C_Destruct_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.OnMenuInputSourceChanged
	 */
	struct UDocumentButton_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.ExecuteUbergraph_DocumentButton
	 */
	struct UDocumentButton_C_ExecuteUbergraph_DocumentButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7CMX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DocumentButton.DocumentButton_C.OnSeen__DelegateSignature
	 */
	struct UDocumentButton_C_OnSeen__DelegateSignature_Params
	{	};

	/**
	 * Function DocumentButton.DocumentButton_C.OnSelected__DelegateSignature
	 */
	struct UDocumentButton_C_OnSelected__DelegateSignature_Params
	{
	public:
		struct FRBCollectibleDocumentDefinitionRow                 Document;                                                // 0x0000(0x00E8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
