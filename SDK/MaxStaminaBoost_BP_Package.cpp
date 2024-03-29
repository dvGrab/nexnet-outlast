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
	 * 		Name   -> Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.ConsumeTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMaxStaminaBoost_BP_C::ConsumeTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.ConsumeTimeline__FinishedFunc");
		
		AMaxStaminaBoost_BP_C_ConsumeTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.ConsumeTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMaxStaminaBoost_BP_C::ConsumeTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.ConsumeTimeline__UpdateFunc");
		
		AMaxStaminaBoost_BP_C_ConsumeTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.OnConsumeItemNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMaxStaminaBoost_BP_C::OnConsumeItemNotify(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.OnConsumeItemNotify");
		
		AMaxStaminaBoost_BP_C_OnConsumeItemNotify_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.OnConsumeItemCancelledNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMaxStaminaBoost_BP_C::OnConsumeItemCancelledNotify(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.OnConsumeItemCancelledNotify");
		
		AMaxStaminaBoost_BP_C_OnConsumeItemCancelledNotify_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.ExecuteUbergraph_MaxStaminaBoost_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMaxStaminaBoost_BP_C::ExecuteUbergraph_MaxStaminaBoost_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.ExecuteUbergraph_MaxStaminaBoost_BP");
		
		AMaxStaminaBoost_BP_C_ExecuteUbergraph_MaxStaminaBoost_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMaxStaminaBoost_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMaxStaminaBoost_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MaxStaminaBoost_BP.MaxStaminaBoost_BP_C");
		return ptr;
	}

}


