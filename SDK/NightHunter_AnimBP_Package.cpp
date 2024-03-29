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
	 * 		Name   -> Function NightHunter_AnimBP.NightHunter_AnimBP_C.OnInDarknessChange
	 * 		Flags  -> ()
	 */
	void UNightHunter_AnimBP_C::OnInDarknessChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightHunter_AnimBP.NightHunter_AnimBP_C.OnInDarknessChange");
		
		UNightHunter_AnimBP_C_OnInDarknessChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NightHunter_AnimBP.NightHunter_AnimBP_C.Event_OnInDarknessChanged
	 * 		Flags  -> ()
	 */
	void UNightHunter_AnimBP_C::Event_OnInDarknessChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightHunter_AnimBP.NightHunter_AnimBP_C.Event_OnInDarknessChanged");
		
		UNightHunter_AnimBP_C_Event_OnInDarknessChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NightHunter_AnimBP.NightHunter_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNightHunter_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightHunter_AnimBP.NightHunter_AnimBP_C.BlueprintUpdateAnimation");
		
		UNightHunter_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NightHunter_AnimBP.NightHunter_AnimBP_C.ExecuteUbergraph_NightHunter_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNightHunter_AnimBP_C::ExecuteUbergraph_NightHunter_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightHunter_AnimBP.NightHunter_AnimBP_C.ExecuteUbergraph_NightHunter_AnimBP");
		
		UNightHunter_AnimBP_C_ExecuteUbergraph_NightHunter_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNightHunter_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNightHunter_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass NightHunter_AnimBP.NightHunter_AnimBP_C");
		return ptr;
	}

}


