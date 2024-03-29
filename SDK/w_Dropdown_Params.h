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
	 * Function w_Dropdown.w_Dropdown_C.ClearSelection
	 */
	struct Uw_Dropdown_C_ClearSelection_Params
	{	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.DisableInteraction
	 */
	struct Uw_Dropdown_C_DisableInteraction_Params
	{
	public:
		bool                                                       Disable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.CloseMenu
	 */
	struct Uw_Dropdown_C_CloseMenu_Params
	{	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.SetLabelText
	 */
	struct Uw_Dropdown_C_SetLabelText_Params
	{
	public:
		class FText                                                LabelText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.UpdateLabelText
	 */
	struct Uw_Dropdown_C_UpdateLabelText_Params
	{	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.SetSelection
	 */
	struct Uw_Dropdown_C_SetSelection_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.SetOptions
	 */
	struct Uw_Dropdown_C_SetOptions_Params
	{
	public:
		TMap<class FString, class FText>                           Options;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.AddOption
	 */
	struct Uw_Dropdown_C_AddOption_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                OptionText;                                              // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.On_DropdownMenuAnchor_GetUserMenuContent_1
	 */
	struct Uw_Dropdown_C_On_DropdownMenuAnchor_GetUserMenuContent_1_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.PreConstruct
	 */
	struct Uw_Dropdown_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct Uw_Dropdown_C_BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.OptionSelected
	 */
	struct Uw_Dropdown_C_OptionSelected_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.FooterOptionSelected
	 */
	struct Uw_Dropdown_C_FooterOptionSelected_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.Reveal
	 */
	struct Uw_Dropdown_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.Hide
	 */
	struct Uw_Dropdown_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.Collapse
	 */
	struct Uw_Dropdown_C_Collapse_Params
	{	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.OptionHovered
	 */
	struct Uw_Dropdown_C_OptionHovered_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.Clickaway
	 */
	struct Uw_Dropdown_C_Clickaway_Params
	{	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.ExecuteUbergraph_w_Dropdown
	 */
	struct Uw_Dropdown_C_ExecuteUbergraph_w_Dropdown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.OnMenuClosed__DelegateSignature
	 */
	struct Uw_Dropdown_C_OnMenuClosed__DelegateSignature_Params
	{
	public:
		class Uw_Dropdown_C*                                       TriggeringDropdown;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.OnOptionHovered__DelegateSignature
	 */
	struct Uw_Dropdown_C_OnOptionHovered__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.OnFooterOptionSelected__DelegateSignature
	 */
	struct Uw_Dropdown_C_OnFooterOptionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function w_Dropdown.w_Dropdown_C.OnOptionSelected__DelegateSignature
	 */
	struct Uw_Dropdown_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
