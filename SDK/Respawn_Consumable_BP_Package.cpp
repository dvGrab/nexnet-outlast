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
	 * 		Name   -> Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.ResetPill
	 * 		Flags  -> ()
	 */
	void ARespawn_Consumable_BP_C::ResetPill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.ResetPill");
		
		ARespawn_Consumable_BP_C_ResetPill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.SwapHand
	 * 		Flags  -> ()
	 */
	void ARespawn_Consumable_BP_C::SwapHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.SwapHand");
		
		ARespawn_Consumable_BP_C_SwapHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARespawn_Consumable_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.UserConstructionScript");
		
		ARespawn_Consumable_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.OnPawnSpecialMoveCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARespawn_Consumable_BP_C::OnPawnSpecialMoveCompleted(class ARBPawn* Pawn, ESpecialMove specialMove, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.OnPawnSpecialMoveCompleted");
		
		ARespawn_Consumable_BP_C_OnPawnSpecialMoveCompleted_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.OnPawnDoSpecialMoveAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARespawn_Consumable_BP_C::OnPawnDoSpecialMoveAction(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.OnPawnDoSpecialMoveAction");
		
		ARespawn_Consumable_BP_C_OnPawnDoSpecialMoveAction_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.BP_OnConsumeItemAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARespawn_Consumable_BP_C::BP_OnConsumeItemAnimNotify(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.BP_OnConsumeItemAnimNotify");
		
		ARespawn_Consumable_BP_C_BP_OnConsumeItemAnimNotify_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.ExecuteUbergraph_Respawn-Consumable_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARespawn_Consumable_BP_C::ExecuteUbergraph_Respawn_Consumable_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.ExecuteUbergraph_Respawn-Consumable_BP");
		
		ARespawn_Consumable_BP_C_ExecuteUbergraph_Respawn_Consumable_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARespawn_Consumable_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARespawn_Consumable_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Respawn_Consumable_BP.Respawn-Consumable_BP_C");
		return ptr;
	}

}


