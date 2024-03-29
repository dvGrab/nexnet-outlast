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
	 * 		Name   -> Function LauncherProjectile_Base.LauncherProjectile_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ALauncherProjectile_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LauncherProjectile_Base.LauncherProjectile_Base_C.UserConstructionScript");
		
		ALauncherProjectile_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALauncherProjectile_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALauncherProjectile_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LauncherProjectile_Base.LauncherProjectile_Base_C");
		return ptr;
	}

}


