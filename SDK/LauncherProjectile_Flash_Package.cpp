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
	 * 		Name   -> Function LauncherProjectile_Flash.LauncherProjectile_Flash_C.OnDetonate_Blueprint
	 * 		Flags  -> ()
	 */
	void ALauncherProjectile_Flash_C::OnDetonate_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LauncherProjectile_Flash.LauncherProjectile_Flash_C.OnDetonate_Blueprint");
		
		ALauncherProjectile_Flash_C_OnDetonate_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LauncherProjectile_Flash.LauncherProjectile_Flash_C.ExecuteUbergraph_LauncherProjectile_Flash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALauncherProjectile_Flash_C::ExecuteUbergraph_LauncherProjectile_Flash(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LauncherProjectile_Flash.LauncherProjectile_Flash_C.ExecuteUbergraph_LauncherProjectile_Flash");
		
		ALauncherProjectile_Flash_C_ExecuteUbergraph_LauncherProjectile_Flash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALauncherProjectile_Flash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALauncherProjectile_Flash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LauncherProjectile_Flash.LauncherProjectile_Flash_C");
		return ptr;
	}

}


