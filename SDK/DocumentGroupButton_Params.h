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
	 * Function DocumentGroupButton.DocumentGroupButton_C.IsElementEmpty
	 */
	struct UDocumentGroupButton_C_IsElementEmpty_Params
	{
	public:
		bool                                                       bIsEmpty;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.OnFocusReceived
	 */
	struct UDocumentGroupButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.IsConsideredHovered
	 */
	struct UDocumentGroupButton_C_IsConsideredHovered_Params
	{
	public:
		bool                                                       bConsideredHovered;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.SetFocused
	 */
	struct UDocumentGroupButton_C_SetFocused_Params
	{
	public:
		bool                                                       bInFocused;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.SetHovered
	 */
	struct UDocumentGroupButton_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.Setup
	 */
	struct UDocumentGroupButton_C_Setup_Params
	{
	public:
		struct FRBCollectibleDocumentGroupRow                      documentGroupRow;                                        // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0068(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.UpdateFocus
	 */
	struct UDocumentGroupButton_C_UpdateFocus_Params
	{	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.PreConstruct
	 */
	struct UDocumentGroupButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UDocumentGroupButton_C_BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UDocumentGroupButton_C_BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDocumentGroupButton_C_BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.OnFocusLost
	 */
	struct UDocumentGroupButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.Construct
	 */
	struct UDocumentGroupButton_C_Construct_Params
	{	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.Destruct
	 */
	struct UDocumentGroupButton_C_Destruct_Params
	{	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.OnMenuInputSourceChanged
	 */
	struct UDocumentGroupButton_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.ExecuteUbergraph_DocumentGroupButton
	 */
	struct UDocumentGroupButton_C_ExecuteUbergraph_DocumentGroupButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DocumentGroupButton.DocumentGroupButton_C.OnSelected__DelegateSignature
	 */
	struct UDocumentGroupButton_C_OnSelected__DelegateSignature_Params
	{
	public:
		class FName                                                DocumentGroupId;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
