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
	 * Function w_DropdownMenu.w_DropdownMenu_C.Construct
	 */
	struct Uw_DropdownMenu_C_Construct_Params
	{	};

	/**
	 * Function w_DropdownMenu.w_DropdownMenu_C.PopulateOptions
	 */
	struct Uw_DropdownMenu_C_PopulateOptions_Params
	{
	public:
		TMap<class FString, class FText>                           Options;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function w_DropdownMenu.w_DropdownMenu_C.OptionClicked
	 */
	struct Uw_DropdownMenu_C_OptionClicked_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_DropdownMenu.w_DropdownMenu_C.FooterOptionClicked
	 */
	struct Uw_DropdownMenu_C_FooterOptionClicked_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_DropdownMenu.w_DropdownMenu_C.OptionHovered
	 */
	struct Uw_DropdownMenu_C_OptionHovered_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_DropdownMenu.w_DropdownMenu_C.BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct Uw_DropdownMenu_C_BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function w_DropdownMenu.w_DropdownMenu_C.ExecuteUbergraph_w_DropdownMenu
	 */
	struct Uw_DropdownMenu_C_ExecuteUbergraph_w_DropdownMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_DropdownMenu.w_DropdownMenu_C.OnClickaway__DelegateSignature
	 */
	struct Uw_DropdownMenu_C_OnClickaway__DelegateSignature_Params
	{	};

	/**
	 * Function w_DropdownMenu.w_DropdownMenu_C.OnOptionHovered__DelegateSignature
	 */
	struct Uw_DropdownMenu_C_OnOptionHovered__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_DropdownMenu.w_DropdownMenu_C.OnFooterOptionSelected__DelegateSignature
	 */
	struct Uw_DropdownMenu_C_OnFooterOptionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_DropdownMenu.w_DropdownMenu_C.OnOptionSelected__DelegateSignature
	 */
	struct Uw_DropdownMenu_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
