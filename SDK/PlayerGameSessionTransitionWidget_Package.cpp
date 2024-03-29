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
	 * 		Name   -> Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.GetTransitionText
	 * 		Flags  -> ()
	 */
	class FText UPlayerGameSessionTransitionWidget_C::GetTransitionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.GetTransitionText");
		
		UPlayerGameSessionTransitionWidget_C_GetTransitionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.FadeOutCompleted
	 * 		Flags  -> ()
	 */
	void UPlayerGameSessionTransitionWidget_C::FadeOutCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.FadeOutCompleted");
		
		UPlayerGameSessionTransitionWidget_C_FadeOutCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UPlayerGameSessionTransitionWidget_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Event_Show");
		
		UPlayerGameSessionTransitionWidget_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UPlayerGameSessionTransitionWidget_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Event_Hide");
		
		UPlayerGameSessionTransitionWidget_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.FadeInCompleted
	 * 		Flags  -> ()
	 */
	void UPlayerGameSessionTransitionWidget_C::FadeInCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.FadeInCompleted");
		
		UPlayerGameSessionTransitionWidget_C_FadeInCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Update
	 * 		Flags  -> ()
	 */
	void UPlayerGameSessionTransitionWidget_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Update");
		
		UPlayerGameSessionTransitionWidget_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.ExecuteUbergraph_PlayerGameSessionTransitionWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerGameSessionTransitionWidget_C::ExecuteUbergraph_PlayerGameSessionTransitionWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.ExecuteUbergraph_PlayerGameSessionTransitionWidget");
		
		UPlayerGameSessionTransitionWidget_C_ExecuteUbergraph_PlayerGameSessionTransitionWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerGameSessionTransitionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerGameSessionTransitionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C");
		return ptr;
	}

}


