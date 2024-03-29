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
	 * Function InputBindingsMenu.InputBindingsMenu_C.UpdateNavigationButtons
	 */
	struct UInputBindingsMenu_C_UpdateNavigationButtons_Params
	{	};

	/**
	 * Function InputBindingsMenu.InputBindingsMenu_C.Init
	 */
	struct UInputBindingsMenu_C_Init_Params
	{	};

	/**
	 * Function InputBindingsMenu.InputBindingsMenu_C.RefreshDisplay
	 */
	struct UInputBindingsMenu_C_RefreshDisplay_Params
	{	};

	/**
	 * Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UInputBindingsMenu_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UInputBindingsMenu_C_BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InputBindingsMenu.InputBindingsMenu_C.Construct
	 */
	struct UInputBindingsMenu_C_Construct_Params
	{	};

	/**
	 * Function InputBindingsMenu.InputBindingsMenu_C.PreConstruct
	 */
	struct UInputBindingsMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InputBindingsMenu.InputBindingsMenu_C.OnResetOptionsPressed
	 */
	struct UInputBindingsMenu_C_OnResetOptionsPressed_Params
	{	};

	/**
	 * Function InputBindingsMenu.InputBindingsMenu_C.Event_UpdateRebindStatus
	 */
	struct UInputBindingsMenu_C_Event_UpdateRebindStatus_Params
	{
	public:
		bool                                                       isRebindInProgress;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InputBindingsMenu.InputBindingsMenu_C.ExecuteUbergraph_InputBindingsMenu
	 */
	struct UInputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
