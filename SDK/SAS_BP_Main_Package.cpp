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
	 * 		Name   -> Function SAS_BP_Main.SAS_BP_Main_C.BP_OnStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESASState                                          State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAS_BP_Main_C::BP_OnStateChanged(ESASState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS_BP_Main.SAS_BP_Main_C.BP_OnStateChanged");
		
		ASAS_BP_Main_C_BP_OnStateChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS_BP_Main.SAS_BP_Main_C.ExecuteUbergraph_SAS_BP_Main
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAS_BP_Main_C::ExecuteUbergraph_SAS_BP_Main(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS_BP_Main.SAS_BP_Main_C.ExecuteUbergraph_SAS_BP_Main");
		
		ASAS_BP_Main_C_ExecuteUbergraph_SAS_BP_Main_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS_BP_Main.SAS_BP_Main_C.StateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESASState                                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAS_BP_Main_C::StateChanged__DelegateSignature(ESASState NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS_BP_Main.SAS_BP_Main_C.StateChanged__DelegateSignature");
		
		ASAS_BP_Main_C_StateChanged__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASAS_BP_Main_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASAS_BP_Main_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SAS_BP_Main.SAS_BP_Main_C");
		return ptr;
	}

}


