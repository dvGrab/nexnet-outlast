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
	 * Function W_ModManager.W_ModManager_C.OnKeyUp
	 */
	struct UW_ModManager_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.Construct
	 */
	struct UW_ModManager_C_Construct_Params
	{	};

	/**
	 * Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_Button_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_ModManager_C_BndEvt__W_ModManager_W_Button_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.OnLoadingStarted
	 */
	struct UW_ModManager_C_OnLoadingStarted_Params
	{	};

	/**
	 * Function W_ModManager.W_ModManager_C.OnLoadingFinished
	 */
	struct UW_ModManager_C_OnLoadingFinished_Params
	{	};

	/**
	 * Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_Button_3_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_ModManager_C_BndEvt__W_ModManager_W_Button_3_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_Button_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_ModManager_C_BndEvt__W_ModManager_W_Button_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.AddMod
	 */
	struct UW_ModManager_C_AddMod_Params
	{
	public:
		class UModData*                                            ModData;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_Button_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 */
	struct UW_ModManager_C_BndEvt__W_ModManager_W_Button_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.ClearMods
	 */
	struct UW_ModManager_C_ClearMods_Params
	{	};

	/**
	 * Function W_ModManager.W_ModManager_C.OnProfilePictureLoaded
	 */
	struct UW_ModManager_C_OnProfilePictureLoaded_Params
	{
	public:
		class UTexture2DDynamic*                                   Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.ShowUserAuthenticator
	 */
	struct UW_ModManager_C_ShowUserAuthenticator_Params
	{	};

	/**
	 * Function W_ModManager.W_ModManager_C.OnUserAuthenticated
	 */
	struct UW_ModManager_C_OnUserAuthenticated_Params
	{	};

	/**
	 * Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_EditableTextBox_95_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UW_ModManager_C_BndEvt__W_ModManager_EditableTextBox_95_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_Button_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
	 */
	struct UW_ModManager_C_BndEvt__W_ModManager_W_Button_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.ShowErrorDialog
	 */
	struct UW_ModManager_C_ShowErrorDialog_Params
	{
	public:
		class FString                                              ErrorMessage;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_ModErrorDialog_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature
	 */
	struct UW_ModManager_C_BndEvt__W_ModManager_W_ModErrorDialog_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function W_ModManager.W_ModManager_C.PreConstruct
	 */
	struct UW_ModManager_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.OpenModDetails
	 */
	struct UW_ModManager_C_OpenModDetails_Params
	{
	public:
		class UModData*                                            ModData;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.CloseModDetails
	 */
	struct UW_ModManager_C_CloseModDetails_Params
	{	};

	/**
	 * Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_btn_Login_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
	 */
	struct UW_ModManager_C_BndEvt__W_ModManager_btn_Login_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModManager.W_ModManager_C.CloseModManager
	 */
	struct UW_ModManager_C_CloseModManager_Params
	{	};

	/**
	 * Function W_ModManager.W_ModManager_C.ExecuteUbergraph_W_ModManager
	 */
	struct UW_ModManager_C_ExecuteUbergraph_W_ModManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8OE2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
