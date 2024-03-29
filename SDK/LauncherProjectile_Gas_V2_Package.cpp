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
	 * 		Name   -> Function LauncherProjectile_Gas_V2.LauncherProjectile_Gas_V2_C.OnDetonate_Blueprint
	 * 		Flags  -> ()
	 */
	void ALauncherProjectile_Gas_V2_C::OnDetonate_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LauncherProjectile_Gas_V2.LauncherProjectile_Gas_V2_C.OnDetonate_Blueprint");
		
		ALauncherProjectile_Gas_V2_C_OnDetonate_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LauncherProjectile_Gas_V2.LauncherProjectile_Gas_V2_C.ExecuteUbergraph_LauncherProjectile_Gas_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALauncherProjectile_Gas_V2_C::ExecuteUbergraph_LauncherProjectile_Gas_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LauncherProjectile_Gas_V2.LauncherProjectile_Gas_V2_C.ExecuteUbergraph_LauncherProjectile_Gas_V2");
		
		ALauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALauncherProjectile_Gas_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALauncherProjectile_Gas_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LauncherProjectile_Gas_V2.LauncherProjectile_Gas_V2_C");
		return ptr;
	}

}


