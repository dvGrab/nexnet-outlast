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
	 * 		Name   -> Function BasePlayer_Customization.BasePlayer_Customization_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABasePlayer_Customization_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasePlayer_Customization.BasePlayer_Customization_C.ReceiveBeginPlay");
		
		ABasePlayer_Customization_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BasePlayer_Customization.BasePlayer_Customization_C.ExecuteUbergraph_BasePlayer_Customization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABasePlayer_Customization_C::ExecuteUbergraph_BasePlayer_Customization(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasePlayer_Customization.BasePlayer_Customization_C.ExecuteUbergraph_BasePlayer_Customization");
		
		ABasePlayer_Customization_C_ExecuteUbergraph_BasePlayer_Customization_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABasePlayer_Customization_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABasePlayer_Customization_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BasePlayer_Customization.BasePlayer_Customization_C");
		return ptr;
	}

}


