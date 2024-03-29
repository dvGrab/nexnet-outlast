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
	 * 		Name   -> Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ApplyEffect
	 * 		Flags  -> ()
	 */
	void UGE_PlayerNerf_IncreaseRecoil_C::ApplyEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ApplyEffect");
		
		UGE_PlayerNerf_IncreaseRecoil_C_ApplyEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ResetEffect
	 * 		Flags  -> ()
	 */
	void UGE_PlayerNerf_IncreaseRecoil_C::ResetEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ResetEffect");
		
		UGE_PlayerNerf_IncreaseRecoil_C_ResetEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGE_PlayerNerf_IncreaseRecoil_C::ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil");
		
		UGE_PlayerNerf_IncreaseRecoil_C_ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGE_PlayerNerf_IncreaseRecoil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_PlayerNerf_IncreaseRecoil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C");
		return ptr;
	}

}


