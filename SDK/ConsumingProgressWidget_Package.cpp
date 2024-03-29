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
	 * 		Name   -> Function ConsumingProgressWidget.ConsumingProgressWidget_C.UpdateTextures
	 * 		Flags  -> ()
	 */
	void UConsumingProgressWidget_C::UpdateTextures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsumingProgressWidget.ConsumingProgressWidget_C.UpdateTextures");
		
		UConsumingProgressWidget_C_UpdateTextures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsumingProgressWidget.ConsumingProgressWidget_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UConsumingProgressWidget_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsumingProgressWidget.ConsumingProgressWidget_C.ShouldShow");
		
		UConsumingProgressWidget_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsumingProgressWidget.ConsumingProgressWidget_C.UpdateProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsumingProgressWidget_C::UpdateProgress(float progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsumingProgressWidget.ConsumingProgressWidget_C.UpdateProgress");
		
		UConsumingProgressWidget_C_UpdateProgress_Params params {};
		params.progress = progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsumingProgressWidget.ConsumingProgressWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsumingProgressWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsumingProgressWidget.ConsumingProgressWidget_C.Construct");
		
		UConsumingProgressWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsumingProgressWidget.ConsumingProgressWidget_C.OnProgressChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsumingProgressWidget_C::OnProgressChanged(float newProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsumingProgressWidget.ConsumingProgressWidget_C.OnProgressChanged");
		
		UConsumingProgressWidget_C_OnProgressChanged_Params params {};
		params.newProgress = newProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsumingProgressWidget.ConsumingProgressWidget_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UConsumingProgressWidget_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsumingProgressWidget.ConsumingProgressWidget_C.Event_Hide");
		
		UConsumingProgressWidget_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsumingProgressWidget.ConsumingProgressWidget_C.OnStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerActionStatus                                status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsumingProgressWidget_C::OnStatusChanged(EPlayerActionStatus status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsumingProgressWidget.ConsumingProgressWidget_C.OnStatusChanged");
		
		UConsumingProgressWidget_C_OnStatusChanged_Params params {};
		params.status = status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsumingProgressWidget.ConsumingProgressWidget_C.ExecuteUbergraph_ConsumingProgressWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsumingProgressWidget_C::ExecuteUbergraph_ConsumingProgressWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsumingProgressWidget.ConsumingProgressWidget_C.ExecuteUbergraph_ConsumingProgressWidget");
		
		UConsumingProgressWidget_C_ExecuteUbergraph_ConsumingProgressWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsumingProgressWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsumingProgressWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsumingProgressWidget.ConsumingProgressWidget_C");
		return ptr;
	}

}


