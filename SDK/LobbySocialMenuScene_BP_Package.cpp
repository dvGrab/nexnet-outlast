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
	 * 		Name   -> Function LobbySocialMenuScene_BP.LobbySocialMenuScene_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ALobbySocialMenuScene_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbySocialMenuScene_BP.LobbySocialMenuScene_BP_C.ReceiveBeginPlay");
		
		ALobbySocialMenuScene_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbySocialMenuScene_BP.LobbySocialMenuScene_BP_C.Event_Activate
	 * 		Flags  -> ()
	 */
	void ALobbySocialMenuScene_BP_C::Event_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbySocialMenuScene_BP.LobbySocialMenuScene_BP_C.Event_Activate");
		
		ALobbySocialMenuScene_BP_C_Event_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbySocialMenuScene_BP.LobbySocialMenuScene_BP_C.Event_Deactivate
	 * 		Flags  -> ()
	 */
	void ALobbySocialMenuScene_BP_C::Event_Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbySocialMenuScene_BP.LobbySocialMenuScene_BP_C.Event_Deactivate");
		
		ALobbySocialMenuScene_BP_C_Event_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbySocialMenuScene_BP.LobbySocialMenuScene_BP_C.ExecuteUbergraph_LobbySocialMenuScene_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALobbySocialMenuScene_BP_C::ExecuteUbergraph_LobbySocialMenuScene_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbySocialMenuScene_BP.LobbySocialMenuScene_BP_C.ExecuteUbergraph_LobbySocialMenuScene_BP");
		
		ALobbySocialMenuScene_BP_C_ExecuteUbergraph_LobbySocialMenuScene_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALobbySocialMenuScene_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALobbySocialMenuScene_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LobbySocialMenuScene_BP.LobbySocialMenuScene_BP_C");
		return ptr;
	}

}


