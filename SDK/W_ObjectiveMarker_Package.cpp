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
	 * 		Name   -> Function W_ObjectiveMarker.W_ObjectiveMarker_C.OnMarkerVisibilityDisabled
	 * 		Flags  -> ()
	 */
	void UW_ObjectiveMarker_C::OnMarkerVisibilityDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ObjectiveMarker.W_ObjectiveMarker_C.OnMarkerVisibilityDisabled");
		
		UW_ObjectiveMarker_C_OnMarkerVisibilityDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ObjectiveMarker.W_ObjectiveMarker_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UW_ObjectiveMarker_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ObjectiveMarker.W_ObjectiveMarker_C.CustomEvent_1");
		
		UW_ObjectiveMarker_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ObjectiveMarker.W_ObjectiveMarker_C.OnMarkerVisibilityEnabled
	 * 		Flags  -> ()
	 */
	void UW_ObjectiveMarker_C::OnMarkerVisibilityEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ObjectiveMarker.W_ObjectiveMarker_C.OnMarkerVisibilityEnabled");
		
		UW_ObjectiveMarker_C_OnMarkerVisibilityEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ObjectiveMarker.W_ObjectiveMarker_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ObjectiveMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ObjectiveMarker.W_ObjectiveMarker_C.Tick");
		
		UW_ObjectiveMarker_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ObjectiveMarker.W_ObjectiveMarker_C.ExecuteUbergraph_W_ObjectiveMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ObjectiveMarker_C::ExecuteUbergraph_W_ObjectiveMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ObjectiveMarker.W_ObjectiveMarker_C.ExecuteUbergraph_W_ObjectiveMarker");
		
		UW_ObjectiveMarker_C_ExecuteUbergraph_W_ObjectiveMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ObjectiveMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ObjectiveMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ObjectiveMarker.W_ObjectiveMarker_C");
		return ptr;
	}

}


