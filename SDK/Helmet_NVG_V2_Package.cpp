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
	 * 		Name   -> Function Helmet_NVG_V2.Helmet_NVG_V2_C.OnNightvisionDeactivated
	 * 		Flags  -> ()
	 */
	void AHelmet_NVG_V2_C::OnNightvisionDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Helmet_NVG_V2.Helmet_NVG_V2_C.OnNightvisionDeactivated");
		
		AHelmet_NVG_V2_C_OnNightvisionDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Helmet_NVG_V2.Helmet_NVG_V2_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHelmet_NVG_V2_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Helmet_NVG_V2.Helmet_NVG_V2_C.ReceiveTick");
		
		AHelmet_NVG_V2_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Helmet_NVG_V2.Helmet_NVG_V2_C.OnNightvisionActivated
	 * 		Flags  -> ()
	 */
	void AHelmet_NVG_V2_C::OnNightvisionActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Helmet_NVG_V2.Helmet_NVG_V2_C.OnNightvisionActivated");
		
		AHelmet_NVG_V2_C_OnNightvisionActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Helmet_NVG_V2.Helmet_NVG_V2_C.ExecuteUbergraph_Helmet_NVG_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHelmet_NVG_V2_C::ExecuteUbergraph_Helmet_NVG_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Helmet_NVG_V2.Helmet_NVG_V2_C.ExecuteUbergraph_Helmet_NVG_V2");
		
		AHelmet_NVG_V2_C_ExecuteUbergraph_Helmet_NVG_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHelmet_NVG_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHelmet_NVG_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Helmet_NVG_V2.Helmet_NVG_V2_C");
		return ptr;
	}

}


