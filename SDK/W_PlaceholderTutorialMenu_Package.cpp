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
	 * 		Name   -> Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.MoveToLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlaceholderTutorialMenu_C::MoveToLoadout(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.MoveToLoadout");
		
		UW_PlaceholderTutorialMenu_C_MoveToLoadout_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_PlaceholderTutorialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.Construct");
		
		UW_PlaceholderTutorialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.ExecuteUbergraph_W_PlaceholderTutorialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlaceholderTutorialMenu_C::ExecuteUbergraph_W_PlaceholderTutorialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.ExecuteUbergraph_W_PlaceholderTutorialMenu");
		
		UW_PlaceholderTutorialMenu_C_ExecuteUbergraph_W_PlaceholderTutorialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PlaceholderTutorialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PlaceholderTutorialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C");
		return ptr;
	}

}


