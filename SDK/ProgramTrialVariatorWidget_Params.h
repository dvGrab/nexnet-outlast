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
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.TriggerHoverEvent
	 */
	struct UProgramTrialVariatorWidget_C_TriggerHoverEvent_Params
	{	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetDetailsDisplayed
	 */
	struct UProgramTrialVariatorWidget_C_SetDetailsDisplayed_Params
	{
	public:
		bool                                                       bDetailsDisplayed;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetFocused
	 */
	struct UProgramTrialVariatorWidget_C_SetFocused_Params
	{
	public:
		bool                                                       bFocused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetHovered
	 */
	struct UProgramTrialVariatorWidget_C_SetHovered_Params
	{
	public:
		bool                                                       bHovered;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.InitFromVariatorInfo
	 */
	struct UProgramTrialVariatorWidget_C_InitFromVariatorInfo_Params
	{
	public:
		class URBVariatorInfo*                                     variatorInfo;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.InitFromDifficulty
	 */
	struct UProgramTrialVariatorWidget_C_InitFromDifficulty_Params
	{
	public:
		EGameDifficulty                                            Difficulty;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F6S0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.Refresh
	 */
	struct UProgramTrialVariatorWidget_C_Refresh_Params
	{	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.PreConstruct
	 */
	struct UProgramTrialVariatorWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UProgramTrialVariatorWidget_C_BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UProgramTrialVariatorWidget_C_BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.ExecuteUbergraph_ProgramTrialVariatorWidget
	 */
	struct UProgramTrialVariatorWidget_C_ExecuteUbergraph_ProgramTrialVariatorWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.OnUnhovered__DelegateSignature
	 */
	struct UProgramTrialVariatorWidget_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UProgramTrialVariatorWidget_C*                       Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.OnHovered__DelegateSignature
	 */
	struct UProgramTrialVariatorWidget_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UProgramTrialVariatorWidget_C*                       Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
