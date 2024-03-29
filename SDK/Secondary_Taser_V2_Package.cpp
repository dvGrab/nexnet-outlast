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
	 * 		Name   -> Function Secondary_Taser_V2.Secondary_Taser_V2_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASecondary_Taser_V2_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Taser_V2.Secondary_Taser_V2_C.ReceiveBeginPlay");
		
		ASecondary_Taser_V2_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Taser_V2.Secondary_Taser_V2_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecondary_Taser_V2_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Taser_V2.Secondary_Taser_V2_C.ReceiveTick");
		
		ASecondary_Taser_V2_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Taser_V2.Secondary_Taser_V2_C.DestroyPouches_2
	 * 		Flags  -> ()
	 */
	void ASecondary_Taser_V2_C::DestroyPouches_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Taser_V2.Secondary_Taser_V2_C.DestroyPouches_2");
		
		ASecondary_Taser_V2_C_DestroyPouches_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Taser_V2.Secondary_Taser_V2_C.SpawnPouches_2
	 * 		Flags  -> ()
	 */
	void ASecondary_Taser_V2_C::SpawnPouches_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Taser_V2.Secondary_Taser_V2_C.SpawnPouches_2");
		
		ASecondary_Taser_V2_C_SpawnPouches_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Taser_V2.Secondary_Taser_V2_C.ExecuteUbergraph_Secondary_Taser_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecondary_Taser_V2_C::ExecuteUbergraph_Secondary_Taser_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Taser_V2.Secondary_Taser_V2_C.ExecuteUbergraph_Secondary_Taser_V2");
		
		ASecondary_Taser_V2_C_ExecuteUbergraph_Secondary_Taser_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecondary_Taser_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecondary_Taser_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Secondary_Taser_V2.Secondary_Taser_V2_C");
		return ptr;
	}

}


