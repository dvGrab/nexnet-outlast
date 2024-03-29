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
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetFocused
	 */
	struct UProgramTrialBlockWidget_C_SetFocused_Params
	{
	public:
		bool                                                       bFocused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetHovered
	 */
	struct UProgramTrialBlockWidget_C_SetHovered_Params
	{
	public:
		bool                                                       bHovered;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.UpdateSelectedTrialArrow
	 */
	struct UProgramTrialBlockWidget_C_UpdateSelectedTrialArrow_Params
	{	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetSelectedTrial
	 */
	struct UProgramTrialBlockWidget_C_SetSelectedTrial_Params
	{
	public:
		class FName                                                TrialId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.OnTrialSelectedInternal
	 */
	struct UProgramTrialBlockWidget_C_OnTrialSelectedInternal_Params
	{
	public:
		class FName                                                TrialId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.AddTrial
	 */
	struct UProgramTrialBlockWidget_C_AddTrial_Params
	{
	public:
		struct FRBTrialInfoRow                                     trialInfo;                                               // 0x0000(0x00E8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    blockNumber;                                             // 0x00E8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLocked;                                                 // 0x00EC(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCompleted;                                              // 0x00ED(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZFBX[0x2];                                   // 0x00EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bestScore;                                               // 0x00F0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x00F4(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetIsMatchOwner
	 */
	struct UProgramTrialBlockWidget_C_SetIsMatchOwner_Params
	{
	public:
		bool                                                       bIsMatchOwner;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WFM7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Setup
	 */
	struct UProgramTrialBlockWidget_C_Setup_Params
	{	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Init
	 */
	struct UProgramTrialBlockWidget_C_Init_Params
	{
	public:
		bool                                                       bIsMatchOwner;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.PreConstruct
	 */
	struct UProgramTrialBlockWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Construct
	 */
	struct UProgramTrialBlockWidget_C_Construct_Params
	{	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Tick
	 */
	struct UProgramTrialBlockWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UProgramTrialBlockWidget_C_BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UProgramTrialBlockWidget_C_BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.ExecuteUbergraph_ProgramTrialBlockWidget
	 */
	struct UProgramTrialBlockWidget_C_ExecuteUbergraph_ProgramTrialBlockWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.OnTrialSelected__DelegateSignature
	 */
	struct UProgramTrialBlockWidget_C_OnTrialSelected__DelegateSignature_Params
	{
	public:
		class FName                                                TrialId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
