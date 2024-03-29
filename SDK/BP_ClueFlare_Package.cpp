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
	 * 		Name   -> Function BP_ClueFlare.BP_ClueFlare_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ClueFlare_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ClueFlare.BP_ClueFlare_C.Timeline_0__FinishedFunc");
		
		ABP_ClueFlare_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ClueFlare.BP_ClueFlare_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ClueFlare_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ClueFlare.BP_ClueFlare_C.Timeline_0__UpdateFunc");
		
		ABP_ClueFlare_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ClueFlare.BP_ClueFlare_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ClueFlare_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ClueFlare.BP_ClueFlare_C.ReceiveBeginPlay");
		
		ABP_ClueFlare_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ClueFlare.BP_ClueFlare_C.ExecuteUbergraph_BP_ClueFlare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ClueFlare_C::ExecuteUbergraph_BP_ClueFlare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ClueFlare.BP_ClueFlare_C.ExecuteUbergraph_BP_ClueFlare");
		
		ABP_ClueFlare_C_ExecuteUbergraph_BP_ClueFlare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ClueFlare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ClueFlare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ClueFlare.BP_ClueFlare_C");
		return ptr;
	}

}


