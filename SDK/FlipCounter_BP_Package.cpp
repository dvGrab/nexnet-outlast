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
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.GetCounter
	 * 		Flags  -> ()
	 */
	int32_t AFlipCounter_BP_C::GetCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.GetCounter");
		
		AFlipCounter_BP_C_GetCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.Decrement
	 * 		Flags  -> ()
	 */
	void AFlipCounter_BP_C::Decrement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.Decrement");
		
		AFlipCounter_BP_C_Decrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.Increment
	 * 		Flags  -> ()
	 */
	void AFlipCounter_BP_C::Increment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.Increment");
		
		AFlipCounter_BP_C_Increment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.OnRep_currentCountNumber
	 * 		Flags  -> ()
	 */
	void AFlipCounter_BP_C::OnRep_currentCountNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.OnRep_currentCountNumber");
		
		AFlipCounter_BP_C_OnRep_currentCountNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.OnRep_initialCountNumber
	 * 		Flags  -> ()
	 */
	void AFlipCounter_BP_C::OnRep_initialCountNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.OnRep_initialCountNumber");
		
		AFlipCounter_BP_C_OnRep_initialCountNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.ResetCount
	 * 		Flags  -> ()
	 */
	void AFlipCounter_BP_C::ResetCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.ResetCount");
		
		AFlipCounter_BP_C_ResetCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFlipCounter_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.ReceiveBeginPlay");
		
		AFlipCounter_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AFlipCounter_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.Event_OnResetStage");
		
		AFlipCounter_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.Update Visual
	 * 		Flags  -> ()
	 */
	void AFlipCounter_BP_C::Update_Visual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.Update Visual");
		
		AFlipCounter_BP_C_Update_Visual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.SetCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlipCounter_BP_C::SetCounter(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.SetCounter");
		
		AFlipCounter_BP_C_SetCounter_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipCounter-BP.FlipCounter-BP_C.ExecuteUbergraph_FlipCounter-BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlipCounter_BP_C::ExecuteUbergraph_FlipCounter_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipCounter-BP.FlipCounter-BP_C.ExecuteUbergraph_FlipCounter-BP");
		
		AFlipCounter_BP_C_ExecuteUbergraph_FlipCounter_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlipCounter_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlipCounter_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FlipCounter_BP.FlipCounter-BP_C");
		return ptr;
	}

}


