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
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.GetArrowBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UArrowButton_C*                              ArrowButton                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlSchemeEntry_C::GetArrowBtn(bool Left, class UArrowButton_C** ArrowButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.GetArrowBtn");
		
		UControlSchemeEntry_C_GetArrowBtn_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrowButton != nullptr)
			*ArrowButton = params.ArrowButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.SetupCounter
	 * 		Flags  -> ()
	 */
	void UControlSchemeEntry_C::SetupCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.SetupCounter");
		
		UControlSchemeEntry_C_SetupCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.RefreshCounter
	 * 		Flags  -> ()
	 */
	void UControlSchemeEntry_C::RefreshCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.RefreshCounter");
		
		UControlSchemeEntry_C_RefreshCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControlSchemeEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.PreConstruct");
		
		UControlSchemeEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.Event_UpdateTextValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UControlSchemeEntry_C::Event_UpdateTextValue(const class FText& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.Event_UpdateTextValue");
		
		UControlSchemeEntry_C_Event_UpdateTextValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UControlSchemeEntry_C::BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");
		
		UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UControlSchemeEntry_C::BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature");
		
		UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UControlSchemeEntry_C::BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature");
		
		UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UControlSchemeEntry_C::BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature");
		
		UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UControlSchemeEntry_C::BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UControlSchemeEntry_C::BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UControlSchemeEntry_C_BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControlSchemeEntry.ControlSchemeEntry_C.ExecuteUbergraph_ControlSchemeEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlSchemeEntry_C::ExecuteUbergraph_ControlSchemeEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlSchemeEntry.ControlSchemeEntry_C.ExecuteUbergraph_ControlSchemeEntry");
		
		UControlSchemeEntry_C_ExecuteUbergraph_ControlSchemeEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlSchemeEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlSchemeEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControlSchemeEntry.ControlSchemeEntry_C");
		return ptr;
	}

}


