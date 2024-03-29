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
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetFocused
	 */
	struct UProgramTrialEntryContentWidget_C_SetFocused_Params
	{
	public:
		bool                                                       bInFocused;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetHovered
	 */
	struct UProgramTrialEntryContentWidget_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S1NA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetSelected
	 */
	struct UProgramTrialEntryContentWidget_C_SetSelected_Params
	{
	public:
		bool                                                       bInSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetIsMatchOwner
	 */
	struct UProgramTrialEntryContentWidget_C_SetIsMatchOwner_Params
	{
	public:
		bool                                                       bIsMatchOwner;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.Init
	 */
	struct UProgramTrialEntryContentWidget_C_Init_Params
	{
	public:
		class UProgramTrialBlockWidget_C*                          parentBlock;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRBTrialInfoRow                                     trialInfo;                                               // 0x0008(0x00E8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bLocked;                                                 // 0x00F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCompleted;                                              // 0x00F1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W4W8[0x2];                                   // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bestScore;                                               // 0x00F4(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x00F8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsMatchOwner;                                           // 0x00F9(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.Setup
	 */
	struct UProgramTrialEntryContentWidget_C_Setup_Params
	{	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.PreConstruct
	 */
	struct UProgramTrialEntryContentWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UProgramTrialEntryContentWidget_C_BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UProgramTrialEntryContentWidget_C_BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UProgramTrialEntryContentWidget_C_BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.ExecuteUbergraph_ProgramTrialEntryContentWidget
	 */
	struct UProgramTrialEntryContentWidget_C_ExecuteUbergraph_ProgramTrialEntryContentWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.OnTrialSelected__DelegateSignature
	 */
	struct UProgramTrialEntryContentWidget_C_OnTrialSelected__DelegateSignature_Params
	{
	public:
		class FName                                                TrialId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
