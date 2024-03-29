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
	 * 		Name   -> Function W_DebugOverlay.W_DebugOverlay_C.HideDebugElements
	 * 		Flags  -> ()
	 */
	void UW_DebugOverlay_C::HideDebugElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugOverlay.W_DebugOverlay_C.HideDebugElements");
		
		UW_DebugOverlay_C_HideDebugElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugOverlay.W_DebugOverlay_C.UpdateDebugPanel
	 * 		Flags  -> ()
	 */
	void UW_DebugOverlay_C::UpdateDebugPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugOverlay.W_DebugOverlay_C.UpdateDebugPanel");
		
		UW_DebugOverlay_C_UpdateDebugPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugOverlay.W_DebugOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_DebugOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugOverlay.W_DebugOverlay_C.Construct");
		
		UW_DebugOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugOverlay.W_DebugOverlay_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UW_DebugOverlay_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugOverlay.W_DebugOverlay_C.CustomEvent_1");
		
		UW_DebugOverlay_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugOverlay.W_DebugOverlay_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_DebugOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugOverlay.W_DebugOverlay_C.Tick");
		
		UW_DebugOverlay_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugOverlay.W_DebugOverlay_C.ShowBounceVertical
	 * 		Flags  -> ()
	 */
	void UW_DebugOverlay_C::ShowBounceVertical()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugOverlay.W_DebugOverlay_C.ShowBounceVertical");
		
		UW_DebugOverlay_C_ShowBounceVertical_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugOverlay.W_DebugOverlay_C.HideBounceVertical
	 * 		Flags  -> ()
	 */
	void UW_DebugOverlay_C::HideBounceVertical()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugOverlay.W_DebugOverlay_C.HideBounceVertical");
		
		UW_DebugOverlay_C_HideBounceVertical_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugOverlay.W_DebugOverlay_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UW_DebugOverlay_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugOverlay.W_DebugOverlay_C.CustomEvent_2");
		
		UW_DebugOverlay_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugOverlay.W_DebugOverlay_C.ExecuteUbergraph_W_DebugOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_DebugOverlay_C::ExecuteUbergraph_W_DebugOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugOverlay.W_DebugOverlay_C.ExecuteUbergraph_W_DebugOverlay");
		
		UW_DebugOverlay_C_ExecuteUbergraph_W_DebugOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_DebugOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_DebugOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_DebugOverlay.W_DebugOverlay_C");
		return ptr;
	}

}


