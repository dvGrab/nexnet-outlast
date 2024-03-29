/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.ClearSelection
	 * 		Flags  -> ()
	 */
	void Uw_Dropdown_C::ClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.ClearSelection");
		
		Uw_Dropdown_C_ClearSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.DisableInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uw_Dropdown_C::DisableInteraction(bool Disable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.DisableInteraction");
		
		Uw_Dropdown_C_DisableInteraction_Params params {};
		params.Disable = Disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void Uw_Dropdown_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.CloseMenu");
		
		Uw_Dropdown_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.SetLabelText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        LabelText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void Uw_Dropdown_C::SetLabelText(const class FText& LabelText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.SetLabelText");
		
		Uw_Dropdown_C_SetLabelText_Params params {};
		params.LabelText = LabelText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.UpdateLabelText
	 * 		Flags  -> ()
	 */
	void Uw_Dropdown_C::UpdateLabelText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.UpdateLabelText");
		
		Uw_Dropdown_C_UpdateLabelText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.SetSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::SetSelection(const class FString& OptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.SetSelection");
		
		Uw_Dropdown_C_SetSelection_Params params {};
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.SetOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FText>                   Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void Uw_Dropdown_C::SetOptions(TMap<class FString, class FText> Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.SetOptions");
		
		Uw_Dropdown_C_SetOptions_Params params {};
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.AddOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        OptionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void Uw_Dropdown_C::AddOption(const class FString& OptionID, const class FText& OptionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.AddOption");
		
		Uw_Dropdown_C_AddOption_Params params {};
		params.OptionID = OptionID;
		params.OptionText = OptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.On_DropdownMenuAnchor_GetUserMenuContent_1
	 * 		Flags  -> ()
	 */
	class UUserWidget* Uw_Dropdown_C::On_DropdownMenuAnchor_GetUserMenuContent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.On_DropdownMenuAnchor_GetUserMenuContent_1");
		
		Uw_Dropdown_C_On_DropdownMenuAnchor_GetUserMenuContent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uw_Dropdown_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.PreConstruct");
		
		Uw_Dropdown_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		Uw_Dropdown_C_BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OptionSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::OptionSelected(const class FString& OptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.OptionSelected");
		
		Uw_Dropdown_C_OptionSelected_Params params {};
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.FooterOptionSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::FooterOptionSelected(const class FString& OptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.FooterOptionSelected");
		
		Uw_Dropdown_C_FooterOptionSelected_Params params {};
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::Reveal(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.Reveal");
		
		Uw_Dropdown_C_Reveal_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uw_Dropdown_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.Hide");
		
		Uw_Dropdown_C_Hide_Params params {};
		params.Delay = Delay;
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.Collapse
	 * 		Flags  -> ()
	 */
	void Uw_Dropdown_C::Collapse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.Collapse");
		
		Uw_Dropdown_C_Collapse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OptionHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::OptionHovered(const class FString& OptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.OptionHovered");
		
		Uw_Dropdown_C_OptionHovered_Params params {};
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.Clickaway
	 * 		Flags  -> ()
	 */
	void Uw_Dropdown_C::Clickaway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.Clickaway");
		
		Uw_Dropdown_C_Clickaway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.ExecuteUbergraph_w_Dropdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::ExecuteUbergraph_w_Dropdown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.ExecuteUbergraph_w_Dropdown");
		
		Uw_Dropdown_C_ExecuteUbergraph_w_Dropdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OnMenuClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class Uw_Dropdown_C*                               TriggeringDropdown                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::OnMenuClosed__DelegateSignature(class Uw_Dropdown_C* TriggeringDropdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.OnMenuClosed__DelegateSignature");
		
		Uw_Dropdown_C_OnMenuClosed__DelegateSignature_Params params {};
		params.TriggeringDropdown = TriggeringDropdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OnOptionHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::OnOptionHovered__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.OnOptionHovered__DelegateSignature");
		
		Uw_Dropdown_C_OnOptionHovered__DelegateSignature_Params params {};
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OnFooterOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::OnFooterOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.OnFooterOptionSelected__DelegateSignature");
		
		Uw_Dropdown_C_OnFooterOptionSelected__DelegateSignature_Params params {};
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OnOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void Uw_Dropdown_C::OnOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_Dropdown.w_Dropdown_C.OnOptionSelected__DelegateSignature");
		
		Uw_Dropdown_C_OnOptionSelected__DelegateSignature_Params params {};
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uw_Dropdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uw_Dropdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_Dropdown.w_Dropdown_C");
		return ptr;
	}

}


