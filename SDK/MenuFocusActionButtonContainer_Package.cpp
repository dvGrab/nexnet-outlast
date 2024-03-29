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
	 * 		Name   -> Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.UpdateVisibility
	 * 		Flags  -> ()
	 */
	void UMenuFocusActionButtonContainer_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.UpdateVisibility");
		
		UMenuFocusActionButtonContainer_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.Construct
	 * 		Flags  -> ()
	 */
	void UMenuFocusActionButtonContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.Construct");
		
		UMenuFocusActionButtonContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMenuFocusActionButtonContainer_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.Destruct");
		
		UMenuFocusActionButtonContainer_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuFocusActionSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        action                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMenuFocusActionButtonContainer_C::OnMenuFocusActionSet(class UWidget* Source, const class FName& action, const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuFocusActionSet");
		
		UMenuFocusActionButtonContainer_C_OnMenuFocusActionSet_Params params {};
		params.Source = Source;
		params.action = action;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuFocusActionCleared
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenuFocusActionButtonContainer_C::OnMenuFocusActionCleared(class UWidget* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuFocusActionCleared");
		
		UMenuFocusActionButtonContainer_C_OnMenuFocusActionCleared_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void UMenuFocusActionButtonContainer_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuInputSourceChanged");
		
		UMenuFocusActionButtonContainer_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.ExecuteUbergraph_MenuFocusActionButtonContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenuFocusActionButtonContainer_C::ExecuteUbergraph_MenuFocusActionButtonContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.ExecuteUbergraph_MenuFocusActionButtonContainer");
		
		UMenuFocusActionButtonContainer_C_ExecuteUbergraph_MenuFocusActionButtonContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuFocusActionButtonContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuFocusActionButtonContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C");
		return ptr;
	}

}


