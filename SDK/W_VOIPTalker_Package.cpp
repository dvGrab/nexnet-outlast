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
	 * 		Name   -> Function W_VOIPTalker.W_VOIPTalker_C.Refresh Player States If Not Exists
	 * 		Flags  -> ()
	 */
	void UW_VOIPTalker_C::Refresh_Player_States_If_Not_Exists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VOIPTalker.W_VOIPTalker_C.Refresh Player States If Not Exists");
		
		UW_VOIPTalker_C_Refresh_Player_States_If_Not_Exists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VOIPTalker.W_VOIPTalker_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_VOIPTalker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VOIPTalker.W_VOIPTalker_C.Construct");
		
		UW_VOIPTalker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VOIPTalker.W_VOIPTalker_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_VOIPTalker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VOIPTalker.W_VOIPTalker_C.Tick");
		
		UW_VOIPTalker_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VOIPTalker.W_VOIPTalker_C.OnPreClientTravel_Event_1
	 * 		Flags  -> ()
	 */
	void UW_VOIPTalker_C::OnPreClientTravel_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VOIPTalker.W_VOIPTalker_C.OnPreClientTravel_Event_1");
		
		UW_VOIPTalker_C_OnPreClientTravel_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VOIPTalker.W_VOIPTalker_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UW_VOIPTalker_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VOIPTalker.W_VOIPTalker_C.CustomEvent_1");
		
		UW_VOIPTalker_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VOIPTalker.W_VOIPTalker_C.ExecuteUbergraph_W_VOIPTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_VOIPTalker_C::ExecuteUbergraph_W_VOIPTalker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VOIPTalker.W_VOIPTalker_C.ExecuteUbergraph_W_VOIPTalker");
		
		UW_VOIPTalker_C_ExecuteUbergraph_W_VOIPTalker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_VOIPTalker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_VOIPTalker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_VOIPTalker.W_VOIPTalker_C");
		return ptr;
	}

}


