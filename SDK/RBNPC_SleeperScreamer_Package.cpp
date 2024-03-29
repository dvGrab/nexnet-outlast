/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function RBNPC_SleeperScreamer.RBNPC_SleeperScreamer_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBNPC_SleeperScreamer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_SleeperScreamer.RBNPC_SleeperScreamer_C.UserConstructionScript");
		
		ARBNPC_SleeperScreamer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_SleeperScreamer.RBNPC_SleeperScreamer_C.Event_OnScreamerSonicStun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     headLocation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_SleeperScreamer_C::Event_OnScreamerSonicStun(const struct FVector& headLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_SleeperScreamer.RBNPC_SleeperScreamer_C.Event_OnScreamerSonicStun");
		
		ARBNPC_SleeperScreamer_C_Event_OnScreamerSonicStun_Params params {};
		params.headLocation = headLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_SleeperScreamer.RBNPC_SleeperScreamer_C.ExecuteUbergraph_RBNPC_SleeperScreamer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_SleeperScreamer_C::ExecuteUbergraph_RBNPC_SleeperScreamer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_SleeperScreamer.RBNPC_SleeperScreamer_C.ExecuteUbergraph_RBNPC_SleeperScreamer");
		
		ARBNPC_SleeperScreamer_C_ExecuteUbergraph_RBNPC_SleeperScreamer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBNPC_SleeperScreamer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBNPC_SleeperScreamer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBNPC_SleeperScreamer.RBNPC_SleeperScreamer_C");
		return ptr;
	}

}


