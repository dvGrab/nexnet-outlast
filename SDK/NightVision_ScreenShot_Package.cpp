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
	 * 		Name   -> Function NightVision_ScreenShot.NightVision_ScreenShot_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNightVision_ScreenShot_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightVision_ScreenShot.NightVision_ScreenShot_C.BlueprintUpdateAnimation");
		
		UNightVision_ScreenShot_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NightVision_ScreenShot.NightVision_ScreenShot_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UNightVision_ScreenShot_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightVision_ScreenShot.NightVision_ScreenShot_C.BlueprintInitializeAnimation");
		
		UNightVision_ScreenShot_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NightVision_ScreenShot.NightVision_ScreenShot_C.ExecuteUbergraph_NightVision_ScreenShot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNightVision_ScreenShot_C::ExecuteUbergraph_NightVision_ScreenShot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightVision_ScreenShot.NightVision_ScreenShot_C.ExecuteUbergraph_NightVision_ScreenShot");
		
		UNightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNightVision_ScreenShot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNightVision_ScreenShot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass NightVision_ScreenShot.NightVision_ScreenShot_C");
		return ptr;
	}

}


