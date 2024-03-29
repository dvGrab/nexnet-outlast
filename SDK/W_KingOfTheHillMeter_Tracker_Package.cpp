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
	 * 		Name   -> Function W_KingOfTheHillMeter_Tracker.W_KingOfTheHillMeter_Tracker_C.PlayTickSound
	 * 		Flags  -> ()
	 */
	void UW_KingOfTheHillMeter_Tracker_C::PlayTickSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KingOfTheHillMeter_Tracker.W_KingOfTheHillMeter_Tracker_C.PlayTickSound");
		
		UW_KingOfTheHillMeter_Tracker_C_PlayTickSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KingOfTheHillMeter_Tracker.W_KingOfTheHillMeter_Tracker_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_KingOfTheHillMeter_Tracker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KingOfTheHillMeter_Tracker.W_KingOfTheHillMeter_Tracker_C.Construct");
		
		UW_KingOfTheHillMeter_Tracker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KingOfTheHillMeter_Tracker.W_KingOfTheHillMeter_Tracker_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_KingOfTheHillMeter_Tracker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KingOfTheHillMeter_Tracker.W_KingOfTheHillMeter_Tracker_C.Tick");
		
		UW_KingOfTheHillMeter_Tracker_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KingOfTheHillMeter_Tracker.W_KingOfTheHillMeter_Tracker_C.ExecuteUbergraph_W_KingOfTheHillMeter_Tracker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_KingOfTheHillMeter_Tracker_C::ExecuteUbergraph_W_KingOfTheHillMeter_Tracker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KingOfTheHillMeter_Tracker.W_KingOfTheHillMeter_Tracker_C.ExecuteUbergraph_W_KingOfTheHillMeter_Tracker");
		
		UW_KingOfTheHillMeter_Tracker_C_ExecuteUbergraph_W_KingOfTheHillMeter_Tracker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_KingOfTheHillMeter_Tracker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_KingOfTheHillMeter_Tracker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_KingOfTheHillMeter_Tracker.W_KingOfTheHillMeter_Tracker_C");
		return ptr;
	}

}


