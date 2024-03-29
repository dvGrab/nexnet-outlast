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
	 * 		Name   -> Function LOBBY_START_Blueprint.LOBBY_START_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ALOBBY_START_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LOBBY_START_Blueprint.LOBBY_START_Blueprint_C.ReceiveBeginPlay");
		
		ALOBBY_START_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LOBBY_START_Blueprint.LOBBY_START_Blueprint_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void ALOBBY_START_Blueprint_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LOBBY_START_Blueprint.LOBBY_START_Blueprint_C.CustomEvent_1");
		
		ALOBBY_START_Blueprint_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LOBBY_START_Blueprint.LOBBY_START_Blueprint_C.ExecuteUbergraph_LOBBY_START_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALOBBY_START_Blueprint_C::ExecuteUbergraph_LOBBY_START_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LOBBY_START_Blueprint.LOBBY_START_Blueprint_C.ExecuteUbergraph_LOBBY_START_Blueprint");
		
		ALOBBY_START_Blueprint_C_ExecuteUbergraph_LOBBY_START_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALOBBY_START_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALOBBY_START_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LOBBY_START_Blueprint.LOBBY_START_Blueprint_C");
		return ptr;
	}

}


