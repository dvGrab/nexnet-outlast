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
	 * 		Name   -> Function W_MissionEnd_NextMap_Timer.W_MissionEnd_NextMap_Timer_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_NextMap_Timer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_NextMap_Timer.W_MissionEnd_NextMap_Timer_C.Tick");
		
		UW_MissionEnd_NextMap_Timer_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_NextMap_Timer.W_MissionEnd_NextMap_Timer_C.UpdateTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time_in_Seconds                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_NextMap_Timer_C::UpdateTimer(float Time_in_Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_NextMap_Timer.W_MissionEnd_NextMap_Timer_C.UpdateTimer");
		
		UW_MissionEnd_NextMap_Timer_C_UpdateTimer_Params params {};
		params.Time_in_Seconds = Time_in_Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_NextMap_Timer.W_MissionEnd_NextMap_Timer_C.ExecuteUbergraph_W_MissionEnd_NextMap_Timer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_NextMap_Timer_C::ExecuteUbergraph_W_MissionEnd_NextMap_Timer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_NextMap_Timer.W_MissionEnd_NextMap_Timer_C.ExecuteUbergraph_W_MissionEnd_NextMap_Timer");
		
		UW_MissionEnd_NextMap_Timer_C_ExecuteUbergraph_W_MissionEnd_NextMap_Timer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MissionEnd_NextMap_Timer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MissionEnd_NextMap_Timer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MissionEnd_NextMap_Timer.W_MissionEnd_NextMap_Timer_C");
		return ptr;
	}

}


