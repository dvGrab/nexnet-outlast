/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URBCharacterSheetTabMenuButton_C::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.SetHovered");
		
		URBCharacterSheetTabMenuButton_C_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.SetHasNewItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               hasNewItems                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URBCharacterSheetTabMenuButton_C::SetHasNewItems(bool hasNewItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.SetHasNewItems");
		
		URBCharacterSheetTabMenuButton_C_SetHasNewItems_Params params {};
		params.hasNewItems = hasNewItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void URBCharacterSheetTabMenuButton_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.SetText");
		
		URBCharacterSheetTabMenuButton_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Disable
	 * 		Flags  -> ()
	 */
	void URBCharacterSheetTabMenuButton_C::Disable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Disable");
		
		URBCharacterSheetTabMenuButton_C_Disable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Refresh
	 * 		Flags  -> ()
	 */
	void URBCharacterSheetTabMenuButton_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Refresh");
		
		URBCharacterSheetTabMenuButton_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URBCharacterSheetTabMenuButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		URBCharacterSheetTabMenuButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URBCharacterSheetTabMenuButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.PreConstruct");
		
		URBCharacterSheetTabMenuButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Event_OnSelectedChanged
	 * 		Flags  -> ()
	 */
	void URBCharacterSheetTabMenuButton_C::Event_OnSelectedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Event_OnSelectedChanged");
		
		URBCharacterSheetTabMenuButton_C_Event_OnSelectedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URBCharacterSheetTabMenuButton_C::BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		URBCharacterSheetTabMenuButton_C_BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URBCharacterSheetTabMenuButton_C::BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		URBCharacterSheetTabMenuButton_C_BndEvt__RBCharacterSheetTabMenuButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Construct
	 * 		Flags  -> ()
	 */
	void URBCharacterSheetTabMenuButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.Construct");
		
		URBCharacterSheetTabMenuButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.ExecuteUbergraph_RBCharacterSheetTabMenuButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBCharacterSheetTabMenuButton_C::ExecuteUbergraph_RBCharacterSheetTabMenuButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C.ExecuteUbergraph_RBCharacterSheetTabMenuButton");
		
		URBCharacterSheetTabMenuButton_C_ExecuteUbergraph_RBCharacterSheetTabMenuButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBCharacterSheetTabMenuButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBCharacterSheetTabMenuButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RBCharacterSheetTabMenuButton.RBCharacterSheetTabMenuButton_C");
		return ptr;
	}

}


