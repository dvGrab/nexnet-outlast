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
	 * 		Name   -> Function HallucinationManager_BP.HallucinationManager_BP_C.Event_HallucinationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHallucinationData                          halluData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void AHallucinationManager_BP_C::Event_HallucinationStarted(const struct FHallucinationData& halluData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HallucinationManager_BP.HallucinationManager_BP_C.Event_HallucinationStarted");
		
		AHallucinationManager_BP_C_Event_HallucinationStarted_Params params {};
		params.halluData = halluData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HallucinationManager_BP.HallucinationManager_BP_C.Event_HallucinationStopped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHallucinationData                          halluData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void AHallucinationManager_BP_C::Event_HallucinationStopped(const struct FHallucinationData& halluData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HallucinationManager_BP.HallucinationManager_BP_C.Event_HallucinationStopped");
		
		AHallucinationManager_BP_C_Event_HallucinationStopped_Params params {};
		params.halluData = halluData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HallucinationManager_BP.HallucinationManager_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AHallucinationManager_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HallucinationManager_BP.HallucinationManager_BP_C.ReceiveBeginPlay");
		
		AHallucinationManager_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HallucinationManager_BP.HallucinationManager_BP_C.ExecuteUbergraph_HallucinationManager_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHallucinationManager_BP_C::ExecuteUbergraph_HallucinationManager_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HallucinationManager_BP.HallucinationManager_BP_C.ExecuteUbergraph_HallucinationManager_BP");
		
		AHallucinationManager_BP_C_ExecuteUbergraph_HallucinationManager_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHallucinationManager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHallucinationManager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HallucinationManager_BP.HallucinationManager_BP_C");
		return ptr;
	}

}


