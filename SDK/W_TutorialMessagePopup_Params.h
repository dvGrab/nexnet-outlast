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
	 * Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.Construct
	 */
	struct UW_TutorialMessagePopup_C_Construct_Params
	{	};

	/**
	 * Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ShowMessagePrompt
	 */
	struct UW_TutorialMessagePopup_C_ShowMessagePrompt_Params
	{
	public:
		bool                                                       IsFirstShowing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KF91[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Title;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<class FText>                                        Content;                                                 // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.HideMessagePrompt
	 */
	struct UW_TutorialMessagePopup_C_HideMessagePrompt_Params
	{	};

	/**
	 * Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.UpdateMessageContent
	 */
	struct UW_TutorialMessagePopup_C_UpdateMessageContent_Params
	{
	public:
		TArray<class FText>                                        Content;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ClearMessages
	 */
	struct UW_TutorialMessagePopup_C_ClearMessages_Params
	{	};

	/**
	 * Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ExecuteUbergraph_W_TutorialMessagePopup
	 */
	struct UW_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
