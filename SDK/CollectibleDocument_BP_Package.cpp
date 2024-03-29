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
	 * 		Name   -> Function CollectibleDocument_BP.CollectibleDocument_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACollectibleDocument_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleDocument_BP.CollectibleDocument_BP_C.UserConstructionScript");
		
		ACollectibleDocument_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectibleDocument_BP.CollectibleDocument_BP_C.OnPawnSpecialMoveStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACollectibleDocument_BP_C::OnPawnSpecialMoveStarted(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleDocument_BP.CollectibleDocument_BP_C.OnPawnSpecialMoveStarted");
		
		ACollectibleDocument_BP_C_OnPawnSpecialMoveStarted_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectibleDocument_BP.CollectibleDocument_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACollectibleDocument_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleDocument_BP.CollectibleDocument_BP_C.ReceiveEndPlay");
		
		ACollectibleDocument_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectibleDocument_BP.CollectibleDocument_BP_C.Event_OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void ACollectibleDocument_BP_C::Event_OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleDocument_BP.CollectibleDocument_BP_C.Event_OnWorldPopulateFinished");
		
		ACollectibleDocument_BP_C_Event_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectibleDocument_BP.CollectibleDocument_BP_C.ExecuteUbergraph_CollectibleDocument_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACollectibleDocument_BP_C::ExecuteUbergraph_CollectibleDocument_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectibleDocument_BP.CollectibleDocument_BP_C.ExecuteUbergraph_CollectibleDocument_BP");
		
		ACollectibleDocument_BP_C_ExecuteUbergraph_CollectibleDocument_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACollectibleDocument_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACollectibleDocument_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CollectibleDocument_BP.CollectibleDocument_BP_C");
		return ptr;
	}

}


