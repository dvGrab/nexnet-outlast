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
	 * 		Name   -> Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.UpdateCountNumberInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASingleFlipNumber_BP_C::UpdateCountNumberInternal(int32_t Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.UpdateCountNumberInternal");
		
		ASingleFlipNumber_BP_C_UpdateCountNumberInternal_Params params {};
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.Increment
	 * 		Flags  -> ()
	 */
	void ASingleFlipNumber_BP_C::Increment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.Increment");
		
		ASingleFlipNumber_BP_C_Increment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.Decrement
	 * 		Flags  -> ()
	 */
	void ASingleFlipNumber_BP_C::Decrement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.Decrement");
		
		ASingleFlipNumber_BP_C_Decrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.SetCountNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASingleFlipNumber_BP_C::SetCountNumber(int32_t Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.SetCountNumber");
		
		ASingleFlipNumber_BP_C_SetCountNumber_Params params {};
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASingleFlipNumber_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.ReceiveBeginPlay");
		
		ASingleFlipNumber_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.ExecuteUbergraph_SingleFlipNumber-BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASingleFlipNumber_BP_C::ExecuteUbergraph_SingleFlipNumber_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SingleFlipNumber-BP.SingleFlipNumber-BP_C.ExecuteUbergraph_SingleFlipNumber-BP");
		
		ASingleFlipNumber_BP_C_ExecuteUbergraph_SingleFlipNumber_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASingleFlipNumber_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASingleFlipNumber_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SingleFlipNumber_BP.SingleFlipNumber-BP_C");
		return ptr;
	}

}


