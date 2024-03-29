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
	 * 		Name   -> Function NumberRoll-01_BP.NumberRoll-01_BP_C.UpdateActualNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ActualNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewActualNumber                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANumberRoll__BP_C::UpdateActualNumber(float ActualNumber, float TargetNumber, float* NewActualNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberRoll-01_BP.NumberRoll-01_BP_C.UpdateActualNumber");
		
		ANumberRoll__BP_C_UpdateActualNumber_Params params {};
		params.ActualNumber = ActualNumber;
		params.TargetNumber = TargetNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewActualNumber != nullptr)
			*NewActualNumber = params.NewActualNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberRoll-01_BP.NumberRoll-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ANumberRoll__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberRoll-01_BP.NumberRoll-01_BP_C.UserConstructionScript");
		
		ANumberRoll__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberRoll-01_BP.NumberRoll-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ANumberRoll__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberRoll-01_BP.NumberRoll-01_BP_C.ReceiveBeginPlay");
		
		ANumberRoll__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberRoll-01_BP.NumberRoll-01_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANumberRoll__BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberRoll-01_BP.NumberRoll-01_BP_C.ReceiveTick");
		
		ANumberRoll__BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberRoll-01_BP.NumberRoll-01_BP_C.PushNumberRoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TargetNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANumberRoll__BP_C::PushNumberRoll(int32_t TargetNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberRoll-01_BP.NumberRoll-01_BP_C.PushNumberRoll");
		
		ANumberRoll__BP_C_PushNumberRoll_Params params {};
		params.TargetNumber = TargetNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberRoll-01_BP.NumberRoll-01_BP_C.SetLit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANumberRoll__BP_C::SetLit(bool lit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberRoll-01_BP.NumberRoll-01_BP_C.SetLit");
		
		ANumberRoll__BP_C_SetLit_Params params {};
		params.lit = lit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberRoll-01_BP.NumberRoll-01_BP_C.SetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ChangeColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANumberRoll__BP_C::SetColor(bool ChangeColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberRoll-01_BP.NumberRoll-01_BP_C.SetColor");
		
		ANumberRoll__BP_C_SetColor_Params params {};
		params.ChangeColor = ChangeColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberRoll-01_BP.NumberRoll-01_BP_C.ExecuteUbergraph_NumberRoll-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANumberRoll__BP_C::ExecuteUbergraph_NumberRoll__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberRoll-01_BP.NumberRoll-01_BP_C.ExecuteUbergraph_NumberRoll-01_BP");
		
		ANumberRoll__BP_C_ExecuteUbergraph_NumberRoll__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANumberRoll__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANumberRoll__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NumberRoll_01_BP.NumberRoll-01_BP_C");
		return ptr;
	}

}


