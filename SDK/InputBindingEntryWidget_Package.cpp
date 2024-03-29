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
	 * 		Name   -> Function InputBindingEntryWidget.InputBindingEntryWidget_C.Downplay
	 * 		Flags  -> ()
	 */
	void UInputBindingEntryWidget_C::Downplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingEntryWidget.InputBindingEntryWidget_C.Downplay");
		
		UInputBindingEntryWidget_C_Downplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingEntryWidget.InputBindingEntryWidget_C.Highlight
	 * 		Flags  -> ()
	 */
	void UInputBindingEntryWidget_C::Highlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingEntryWidget.InputBindingEntryWidget_C.Highlight");
		
		UInputBindingEntryWidget_C_Highlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingEntryWidget.InputBindingEntryWidget_C.RefreshValue
	 * 		Flags  -> ()
	 */
	void UInputBindingEntryWidget_C::RefreshValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingEntryWidget.InputBindingEntryWidget_C.RefreshValue");
		
		UInputBindingEntryWidget_C_RefreshValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingEntryWidget.InputBindingEntryWidget_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputBindingsMenu_C*                        ParentMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputBindingEntryWidget_C::Init(class UInputBindingsMenu_C* ParentMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingEntryWidget.InputBindingEntryWidget_C.Init");
		
		UInputBindingEntryWidget_C_Init_Params params {};
		params.ParentMenu = ParentMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__Button_131_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInputBindingEntryWidget_C::BndEvt__Button_131_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__Button_131_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UInputBindingEntryWidget_C_BndEvt__Button_131_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInputBindingEntryWidget_C::BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UInputBindingEntryWidget_C_BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInputBindingEntryWidget_C::BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UInputBindingEntryWidget_C_BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingEntryWidget.InputBindingEntryWidget_C.UpdateRebindStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRebindInProgress                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInputBindingEntryWidget_C::UpdateRebindStatus(bool bIsRebindInProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingEntryWidget.InputBindingEntryWidget_C.UpdateRebindStatus");
		
		UInputBindingEntryWidget_C_UpdateRebindStatus_Params params {};
		params.bIsRebindInProgress = bIsRebindInProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingEntryWidget.InputBindingEntryWidget_C.ExecuteUbergraph_InputBindingEntryWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputBindingEntryWidget_C::ExecuteUbergraph_InputBindingEntryWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingEntryWidget.InputBindingEntryWidget_C.ExecuteUbergraph_InputBindingEntryWidget");
		
		UInputBindingEntryWidget_C_ExecuteUbergraph_InputBindingEntryWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputBindingEntryWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputBindingEntryWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputBindingEntryWidget.InputBindingEntryWidget_C");
		return ptr;
	}

}


