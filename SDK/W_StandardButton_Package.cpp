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
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.SetButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewButtonText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_StandardButton_C::SetButtonText(const class FText& NewButtonText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.SetButtonText");
		
		UW_StandardButton_C_SetButtonText_Params params {};
		params.NewButtonText = NewButtonText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.GetTabControlIndex
	 * 		Flags  -> ()
	 */
	int32_t UW_StandardButton_C::GetTabControlIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.GetTabControlIndex");
		
		UW_StandardButton_C_GetTabControlIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.GetDescriptionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DescriptionText                                            (Parm, OutParm)
	 */
	void UW_StandardButton_C::GetDescriptionText(class FText* DescriptionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.GetDescriptionText");
		
		UW_StandardButton_C_GetDescriptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DescriptionText != nullptr)
			*DescriptionText = params.DescriptionText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_StandardButton_C::SetDisabled(bool Disabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.SetDisabled");
		
		UW_StandardButton_C_SetDisabled_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.UpdateSelectedVisibility
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::UpdateSelectedVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.UpdateSelectedVisibility");
		
		UW_StandardButton_C_UpdateSelectedVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.GetThinRedLineVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_StandardButton_C::GetThinRedLineVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.GetThinRedLineVisibility");
		
		UW_StandardButton_C_GetThinRedLineVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.GetSelectedVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_StandardButton_C::GetSelectedVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.GetSelectedVisibility");
		
		UW_StandardButton_C_GetSelectedVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.OnUnhovered_Derived
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::OnUnhovered_Derived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.OnUnhovered_Derived");
		
		UW_StandardButton_C_OnUnhovered_Derived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.OnHovered_Derived
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::OnHovered_Derived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.OnHovered_Derived");
		
		UW_StandardButton_C_OnHovered_Derived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.OnClicked_Derived
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::OnClicked_Derived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.OnClicked_Derived");
		
		UW_StandardButton_C_OnClicked_Derived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.OnReleased_Derived
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::OnReleased_Derived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.OnReleased_Derived");
		
		UW_StandardButton_C_OnReleased_Derived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.OnPressed_Derived
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::OnPressed_Derived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.OnPressed_Derived");
		
		UW_StandardButton_C_OnPressed_Derived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.GetDisabledVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_StandardButton_C::GetDisabledVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.GetDisabledVisibility");
		
		UW_StandardButton_C_GetDisabledVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");
		
		UW_StandardButton_C_BndEvt__TheButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature");
		
		UW_StandardButton_C_BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature");
		
		UW_StandardButton_C_BndEvt__TheButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature");
		
		UW_StandardButton_C_BndEvt__TheButton_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_StandardButton_C_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_StandardButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.PreConstruct");
		
		UW_StandardButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.Update Visibility
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::Update_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.Update Visibility");
		
		UW_StandardButton_C_Update_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.Reconstruct
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::Reconstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.Reconstruct");
		
		UW_StandardButton_C_Reconstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.SimulateHover
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::SimulateHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.SimulateHover");
		
		UW_StandardButton_C_SimulateHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.SimulateUnhover
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::SimulateUnhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.SimulateUnhover");
		
		UW_StandardButton_C_SimulateUnhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.SimulateClicked
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::SimulateClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.SimulateClicked");
		
		UW_StandardButton_C_SimulateClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.ExecuteUbergraph_W_StandardButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StandardButton_C::ExecuteUbergraph_W_StandardButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.ExecuteUbergraph_W_StandardButton");
		
		UW_StandardButton_C_ExecuteUbergraph_W_StandardButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.OnPressed__DelegateSignature");
		
		UW_StandardButton_C_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.OnReleased__DelegateSignature");
		
		UW_StandardButton_C_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.OnHovered__DelegateSignature");
		
		UW_StandardButton_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_StandardButton_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.OnUnhovered__DelegateSignature");
		
		UW_StandardButton_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardButton.W_StandardButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StandardButton_C::OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardButton.W_StandardButton_C.OnClicked__DelegateSignature");
		
		UW_StandardButton_C_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_StandardButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_StandardButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_StandardButton.W_StandardButton_C");
		return ptr;
	}

}


