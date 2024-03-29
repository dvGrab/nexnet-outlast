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
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetPage
	 */
	struct UCharacterSheetDocumentsTab_C_SetPage_Params
	{
	public:
		int32_t                                                    NewPageIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.UpdateGamepadPageNav
	 */
	struct UCharacterSheetDocumentsTab_C_UpdateGamepadPageNav_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.NextPage
	 */
	struct UCharacterSheetDocumentsTab_C_NextPage_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.PreviousPage
	 */
	struct UCharacterSheetDocumentsTab_C_PreviousPage_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GetGroupIndexFromId
	 */
	struct UCharacterSheetDocumentsTab_C_GetGroupIndexFromId_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GamepadNav_HandleGridNavigation
	 */
	struct UCharacterSheetDocumentsTab_C_GamepadNav_HandleGridNavigation_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FRBJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.HandleFocusTransmission
	 */
	struct UCharacterSheetDocumentsTab_C_HandleFocusTransmission_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnFocusReceived
	 */
	struct UCharacterSheetDocumentsTab_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GetPageTitle
	 */
	struct UCharacterSheetDocumentsTab_C_GetPageTitle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.IsReadyToClose
	 */
	struct UCharacterSheetDocumentsTab_C_IsReadyToClose_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSeen
	 */
	struct UCharacterSheetDocumentsTab_C_OnDocumentSeen_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentUnselected
	 */
	struct UCharacterSheetDocumentsTab_C_OnDocumentUnselected_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSelected
	 */
	struct UCharacterSheetDocumentsTab_C_OnDocumentSelected_Params
	{
	public:
		struct FRBCollectibleDocumentDefinitionRow                 Document;                                                // 0x0000(0x00E8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentGroupSelected
	 */
	struct UCharacterSheetDocumentsTab_C_OnDocumentGroupSelected_Params
	{
	public:
		class FName                                                DocumentGroupId;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocumentGroupDetails
	 */
	struct UCharacterSheetDocumentsTab_C_SetupDocumentGroupDetails_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocuments
	 */
	struct UCharacterSheetDocumentsTab_C_SetupDocuments_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocumentGroups
	 */
	struct UCharacterSheetDocumentsTab_C_SetupDocumentGroups_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Refresh
	 */
	struct UCharacterSheetDocumentsTab_C_Refresh_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnBackRequested
	 */
	struct UCharacterSheetDocumentsTab_C_OnBackRequested_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Construct
	 */
	struct UCharacterSheetDocumentsTab_C_Construct_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_NextPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCharacterSheetDocumentsTab_C_BndEvt__CharacterSheetDocumentsTab_NextPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_PreviousPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCharacterSheetDocumentsTab_C_BndEvt__CharacterSheetDocumentsTab_PreviousPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_ExitDocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCharacterSheetDocumentsTab_C_BndEvt__CharacterSheetDocumentsTab_ExitDocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Event_OnTabUnselected
	 */
	struct UCharacterSheetDocumentsTab_C_Event_OnTabUnselected_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_PreviousDocumentGroupPageButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCharacterSheetDocumentsTab_C_BndEvt__CharacterSheetDocumentsTab_PreviousDocumentGroupPageButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_NextDocumentGroupPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCharacterSheetDocumentsTab_C_BndEvt__CharacterSheetDocumentsTab_NextDocumentGroupPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnMenuInputSourceChanged
	 */
	struct UCharacterSheetDocumentsTab_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnGamepadPageLeft
	 */
	struct UCharacterSheetDocumentsTab_C_OnGamepadPageLeft_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnGamepadPageRight
	 */
	struct UCharacterSheetDocumentsTab_C_OnGamepadPageRight_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Destruct
	 */
	struct UCharacterSheetDocumentsTab_C_Destruct_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Event_OnTabSelected
	 */
	struct UCharacterSheetDocumentsTab_C_Event_OnTabSelected_Params
	{	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.ExecuteUbergraph_CharacterSheetDocumentsTab
	 */
	struct UCharacterSheetDocumentsTab_C_ExecuteUbergraph_CharacterSheetDocumentsTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSeenEvent__DelegateSignature
	 */
	struct UCharacterSheetDocumentsTab_C_OnDocumentSeenEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
