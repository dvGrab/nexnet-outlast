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
	 * 		Name   -> Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.ShouldPerformAction
	 * 		Flags  -> ()
	 */
	bool UAIAction_CheckEmptyWeapon_C::ShouldPerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.ShouldPerformAction");
		
		UAIAction_CheckEmptyWeapon_C_ShouldPerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 */
	void UAIAction_CheckEmptyWeapon_C::BeginAction_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.BeginAction_Blueprint");
		
		UAIAction_CheckEmptyWeapon_C_BeginAction_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.Tick_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_CheckEmptyWeapon_C::Tick_Blueprint(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.Tick_Blueprint");
		
		UAIAction_CheckEmptyWeapon_C_Tick_Blueprint_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.ExecuteUbergraph_AIAction_CheckEmptyWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_CheckEmptyWeapon_C::ExecuteUbergraph_AIAction_CheckEmptyWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.ExecuteUbergraph_AIAction_CheckEmptyWeapon");
		
		UAIAction_CheckEmptyWeapon_C_ExecuteUbergraph_AIAction_CheckEmptyWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_CheckEmptyWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_CheckEmptyWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C");
		return ptr;
	}

}


