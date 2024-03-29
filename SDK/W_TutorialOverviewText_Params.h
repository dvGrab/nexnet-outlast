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
	 * Function W_TutorialOverviewText.W_TutorialOverviewText_C.Construct
	 */
	struct UW_TutorialOverviewText_C_Construct_Params
	{	};

	/**
	 * Function W_TutorialOverviewText.W_TutorialOverviewText_C.BndEvt__Button_104_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_TutorialOverviewText_C_BndEvt__Button_104_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_TutorialOverviewText.W_TutorialOverviewText_C.UpdateMessageContent
	 */
	struct UW_TutorialOverviewText_C_UpdateMessageContent_Params
	{
	public:
		TArray<class FText>                                        MessageContent;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_TutorialOverviewText.W_TutorialOverviewText_C.ShowOverview
	 */
	struct UW_TutorialOverviewText_C_ShowOverview_Params
	{
	public:
		class FText                                                Title_Text;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<class FText>                                        TitleContent;                                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_TutorialOverviewText.W_TutorialOverviewText_C.ExecuteUbergraph_W_TutorialOverviewText
	 */
	struct UW_TutorialOverviewText_C_ExecuteUbergraph_W_TutorialOverviewText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DSCA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
