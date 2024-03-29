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
	 * 		Name   -> Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AStamina_Consumable_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.Timeline_0__FinishedFunc");
		
		AStamina_Consumable_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AStamina_Consumable_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.Timeline_0__UpdateFunc");
		
		AStamina_Consumable_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.OnConsumeItemNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStamina_Consumable_BP_C::OnConsumeItemNotify(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.OnConsumeItemNotify");
		
		AStamina_Consumable_BP_C_OnConsumeItemNotify_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.OnConsumeItemCancelledNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStamina_Consumable_BP_C::OnConsumeItemCancelledNotify(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.OnConsumeItemCancelledNotify");
		
		AStamina_Consumable_BP_C_OnConsumeItemCancelledNotify_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.ExecuteUbergraph_Stamina-Consumable_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStamina_Consumable_BP_C::ExecuteUbergraph_Stamina_Consumable_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.ExecuteUbergraph_Stamina-Consumable_BP");
		
		AStamina_Consumable_BP_C_ExecuteUbergraph_Stamina_Consumable_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStamina_Consumable_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStamina_Consumable_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Stamina_Consumable_BP.Stamina-Consumable_BP_C");
		return ptr;
	}

}


