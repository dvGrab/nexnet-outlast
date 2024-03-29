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
	 * 		Name   -> Function HealthBoost-Consumable_BP.HealthBoost-Consumable_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AHealthBoost_Consumable_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBoost-Consumable_BP.HealthBoost-Consumable_BP_C.UserConstructionScript");
		
		AHealthBoost_Consumable_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBoost-Consumable_BP.HealthBoost-Consumable_BP_C.OnConsumeItemNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHealthBoost_Consumable_BP_C::OnConsumeItemNotify(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBoost-Consumable_BP.HealthBoost-Consumable_BP_C.OnConsumeItemNotify");
		
		AHealthBoost_Consumable_BP_C_OnConsumeItemNotify_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBoost-Consumable_BP.HealthBoost-Consumable_BP_C.ExecuteUbergraph_HealthBoost-Consumable_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHealthBoost_Consumable_BP_C::ExecuteUbergraph_HealthBoost_Consumable_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBoost-Consumable_BP.HealthBoost-Consumable_BP_C.ExecuteUbergraph_HealthBoost-Consumable_BP");
		
		AHealthBoost_Consumable_BP_C_ExecuteUbergraph_HealthBoost_Consumable_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHealthBoost_Consumable_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHealthBoost_Consumable_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HealthBoost_Consumable_BP.HealthBoost-Consumable_BP_C");
		return ptr;
	}

}


