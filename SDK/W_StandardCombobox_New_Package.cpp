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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.Get_BackGroundImg_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UW_StandardCombobox_New_C::Get_BackGroundImg_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.Get_BackGroundImg_ColorAndOpacity_1");
		
		UW_StandardCombobox_New_C_Get_BackGroundImg_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetCurrentOptionAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionAsString                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_StandardCombobox_New_C::GetCurrentOptionAsString(class FString* OptionAsString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetCurrentOptionAsString");
		
		UW_StandardCombobox_New_C_GetCurrentOptionAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OptionAsString != nullptr)
			*OptionAsString = params.OptionAsString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.ClearOptions
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::ClearOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.ClearOptions");
		
		UW_StandardCombobox_New_C_ClearOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_StandardCombobox_New_C::DeleteOptionString(const class FString& StringValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionString");
		
		UW_StandardCombobox_New_C_DeleteOptionString_Params params {};
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StandardCombobox_New_C::DeleteOptionIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionIndex");
		
		UW_StandardCombobox_New_C_DeleteOptionIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.InsertOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OptionString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        OptionDescription                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_StandardCombobox_New_C::InsertOption(int32_t Index, const class FString& OptionString, const class FText& OptionName, const class FText& OptionDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.InsertOption");
		
		UW_StandardCombobox_New_C_InsertOption_Params params {};
		params.Index = Index;
		params.OptionString = OptionString;
		params.OptionName = OptionName;
		params.OptionDescription = OptionDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.AddOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        OptionDescription                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_StandardCombobox_New_C::AddOption(const class FString& OptionString, const class FText& OptionName, const class FText& OptionDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.AddOption");
		
		UW_StandardCombobox_New_C_AddOption_Params params {};
		params.OptionString = OptionString;
		params.OptionName = OptionName;
		params.OptionDescription = OptionDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetStringOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_StandardCombobox_New_C::SetStringOption(const class FString& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetStringOption");
		
		UW_StandardCombobox_New_C_SetStringOption_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StandardCombobox_New_C::SetOption(int32_t NewOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetOption");
		
		UW_StandardCombobox_New_C_SetOption_Params params {};
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.UpdateOptionText
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::UpdateOptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.UpdateOptionText");
		
		UW_StandardCombobox_New_C_UpdateOptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.ReceivedOptionClickedSignal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionAsString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_StandardCombobox_New_C::ReceivedOptionClickedSignal(const class FString& OptionAsString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.ReceivedOptionClickedSignal");
		
		UW_StandardCombobox_New_C_ReceivedOptionClickedSignal_Params params {};
		params.OptionAsString = OptionAsString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetAnchorMenuContent
	 * 		Flags  -> ()
	 */
	class UWidget* UW_StandardCombobox_New_C::GetAnchorMenuContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetAnchorMenuContent");
		
		UW_StandardCombobox_New_C_GetAnchorMenuContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_StandardCombobox_New_C_BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UW_StandardCombobox_New_C_BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UW_StandardCombobox_New_C_BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UW_StandardCombobox_New_C_BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UW_StandardCombobox_New_C_BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_StandardCombobox_New_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.PreConstruct");
		
		UW_StandardCombobox_New_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.Construct");
		
		UW_StandardCombobox_New_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.Reconstruct
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::Reconstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.Reconstruct");
		
		UW_StandardCombobox_New_C_Reconstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.ExecuteUbergraph_W_StandardCombobox_New
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StandardCombobox_New_C::ExecuteUbergraph_W_StandardCombobox_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.ExecuteUbergraph_W_StandardCombobox_New");
		
		UW_StandardCombobox_New_C_ExecuteUbergraph_W_StandardCombobox_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnReleased__DelegateSignature");
		
		UW_StandardCombobox_New_C_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnPressed__DelegateSignature");
		
		UW_StandardCombobox_New_C_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnUnhovered__DelegateSignature");
		
		UW_StandardCombobox_New_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnHovered__DelegateSignature");
		
		UW_StandardCombobox_New_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StandardCombobox_New_C::OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnNewOptionSelected__DelegateSignature");
		
		UW_StandardCombobox_New_C_OnNewOptionSelected__DelegateSignature_Params params {};
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnOptionMenuClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::OnOptionMenuClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnOptionMenuClosed__DelegateSignature");
		
		UW_StandardCombobox_New_C_OnOptionMenuClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnOptionMenuOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardCombobox_New_C::OnOptionMenuOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnOptionMenuOpened__DelegateSignature");
		
		UW_StandardCombobox_New_C_OnOptionMenuOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_StandardCombobox_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_StandardCombobox_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_StandardCombobox_New.W_StandardCombobox_New_C");
		return ptr;
	}

}


