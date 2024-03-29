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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void Uw_DropdownMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.Construct");
		
		Uw_DropdownMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.PopulateOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FText>                   Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void Uw_DropdownMenu_C::PopulateOptions(TMap<class FString, class FText> Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.PopulateOptions");
		
		Uw_DropdownMenu_C_PopulateOptions_Params params {};
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OptionClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uw_DropdownMenu_C::OptionClicked(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.OptionClicked");
		
		Uw_DropdownMenu_C_OptionClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.FooterOptionClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uw_DropdownMenu_C::FooterOptionClicked(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.FooterOptionClicked");
		
		Uw_DropdownMenu_C_FooterOptionClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OptionHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uw_DropdownMenu_C::OptionHovered(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.OptionHovered");
		
		Uw_DropdownMenu_C_OptionHovered_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void Uw_DropdownMenu_C::BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		Uw_DropdownMenu_C_BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.ExecuteUbergraph_w_DropdownMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uw_DropdownMenu_C::ExecuteUbergraph_w_DropdownMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.ExecuteUbergraph_w_DropdownMenu");
		
		Uw_DropdownMenu_C_ExecuteUbergraph_w_DropdownMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OnClickaway__DelegateSignature
	 * 		Flags  -> ()
	 */
	void Uw_DropdownMenu_C::OnClickaway__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.OnClickaway__DelegateSignature");
		
		Uw_DropdownMenu_C_OnClickaway__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OnOptionHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void Uw_DropdownMenu_C::OnOptionHovered__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.OnOptionHovered__DelegateSignature");
		
		Uw_DropdownMenu_C_OnOptionHovered__DelegateSignature_Params params {};
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OnFooterOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void Uw_DropdownMenu_C::OnFooterOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.OnFooterOptionSelected__DelegateSignature");
		
		Uw_DropdownMenu_C_OnFooterOptionSelected__DelegateSignature_Params params {};
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OnOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void Uw_DropdownMenu_C::OnOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function w_DropdownMenu.w_DropdownMenu_C.OnOptionSelected__DelegateSignature");
		
		Uw_DropdownMenu_C_OnOptionSelected__DelegateSignature_Params params {};
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uw_DropdownMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uw_DropdownMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_DropdownMenu.w_DropdownMenu_C");
		return ptr;
	}

}


