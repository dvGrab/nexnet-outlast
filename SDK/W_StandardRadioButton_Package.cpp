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
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.Equals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_StandardRadioButton_C::Equals(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardRadioButton.W_StandardRadioButton_C.Equals");
		
		UW_StandardRadioButton_C_Equals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.GetTabControlIndex
	 * 		Flags  -> ()
	 */
	int32_t UW_StandardRadioButton_C::GetTabControlIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardRadioButton.W_StandardRadioButton_C.GetTabControlIndex");
		
		UW_StandardRadioButton_C_GetTabControlIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.GetParentContainerSlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_RadioContainer_C*                         RadioContainer                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StandardRadioButton_C::GetParentContainerSlow(class UW_RadioContainer_C** RadioContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardRadioButton.W_StandardRadioButton_C.GetParentContainerSlow");
		
		UW_StandardRadioButton_C_GetParentContainerSlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadioContainer != nullptr)
			*RadioContainer = params.RadioContainer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.OnClicked_Derived
	 * 		Flags  -> ()
	 */
	void UW_StandardRadioButton_C::OnClicked_Derived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardRadioButton.W_StandardRadioButton_C.OnClicked_Derived");
		
		UW_StandardRadioButton_C_OnClicked_Derived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_StandardRadioButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardRadioButton.W_StandardRadioButton_C.Construct");
		
		UW_StandardRadioButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.OnRadioSelected
	 * 		Flags  -> ()
	 */
	void UW_StandardRadioButton_C::OnRadioSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardRadioButton.W_StandardRadioButton_C.OnRadioSelected");
		
		UW_StandardRadioButton_C_OnRadioSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.OnRadioDeselected
	 * 		Flags  -> ()
	 */
	void UW_StandardRadioButton_C::OnRadioDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardRadioButton.W_StandardRadioButton_C.OnRadioDeselected");
		
		UW_StandardRadioButton_C_OnRadioDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.EventReconstruct
	 * 		Flags  -> ()
	 */
	void UW_StandardRadioButton_C::EventReconstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardRadioButton.W_StandardRadioButton_C.EventReconstruct");
		
		UW_StandardRadioButton_C_EventReconstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.ExecuteUbergraph_W_StandardRadioButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StandardRadioButton_C::ExecuteUbergraph_W_StandardRadioButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StandardRadioButton.W_StandardRadioButton_C.ExecuteUbergraph_W_StandardRadioButton");
		
		UW_StandardRadioButton_C_ExecuteUbergraph_W_StandardRadioButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_StandardRadioButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_StandardRadioButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_StandardRadioButton.W_StandardRadioButton_C");
		return ptr;
	}

}


