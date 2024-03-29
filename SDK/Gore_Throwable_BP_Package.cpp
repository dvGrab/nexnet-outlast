/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function Gore_Throwable_BP.Gore_Throwable_BP_C.BP_TickItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AGore_Throwable_BP_C::BP_TickItem(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gore_Throwable_BP.Gore_Throwable_BP_C.BP_TickItem");
		
		AGore_Throwable_BP_C_BP_TickItem_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gore_Throwable_BP.Gore_Throwable_BP_C.OnRep_bSinking
	 * 		Flags  -> ()
	 */
	void AGore_Throwable_BP_C::OnRep_bSinking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gore_Throwable_BP.Gore_Throwable_BP_C.OnRep_bSinking");
		
		AGore_Throwable_BP_C_OnRep_bSinking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gore_Throwable_BP.Gore_Throwable_BP_C.OnRep_bFloating
	 * 		Flags  -> ()
	 */
	void AGore_Throwable_BP_C::OnRep_bFloating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gore_Throwable_BP.Gore_Throwable_BP_C.OnRep_bFloating");
		
		AGore_Throwable_BP_C_OnRep_bFloating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gore_Throwable_BP.Gore_Throwable_BP_C.OnRep_VisualIndex
	 * 		Flags  -> ()
	 */
	void AGore_Throwable_BP_C::OnRep_VisualIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gore_Throwable_BP.Gore_Throwable_BP_C.OnRep_VisualIndex");
		
		AGore_Throwable_BP_C_OnRep_VisualIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gore_Throwable_BP.Gore_Throwable_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGore_Throwable_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gore_Throwable_BP.Gore_Throwable_BP_C.ReceiveBeginPlay");
		
		AGore_Throwable_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gore_Throwable_BP.Gore_Throwable_BP_C.BP_OnGroundAndPoundCounter
	 * 		Flags  -> ()
	 */
	void AGore_Throwable_BP_C::BP_OnGroundAndPoundCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gore_Throwable_BP.Gore_Throwable_BP_C.BP_OnGroundAndPoundCounter");
		
		AGore_Throwable_BP_C_BP_OnGroundAndPoundCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gore_Throwable_BP.Gore_Throwable_BP_C.Event_OnContainerChanged
	 * 		Flags  -> ()
	 */
	void AGore_Throwable_BP_C::Event_OnContainerChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gore_Throwable_BP.Gore_Throwable_BP_C.Event_OnContainerChanged");
		
		AGore_Throwable_BP_C_Event_OnContainerChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gore_Throwable_BP.Gore_Throwable_BP_C.Event_OnPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGore_Throwable_BP_C::Event_OnPickedUp(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gore_Throwable_BP.Gore_Throwable_BP_C.Event_OnPickedUp");
		
		AGore_Throwable_BP_C_Event_OnPickedUp_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gore_Throwable_BP.Gore_Throwable_BP_C.ExecuteUbergraph_Gore_Throwable_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGore_Throwable_BP_C::ExecuteUbergraph_Gore_Throwable_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gore_Throwable_BP.Gore_Throwable_BP_C.ExecuteUbergraph_Gore_Throwable_BP");
		
		AGore_Throwable_BP_C_ExecuteUbergraph_Gore_Throwable_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGore_Throwable_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGore_Throwable_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Gore_Throwable_BP.Gore_Throwable_BP_C");
		return ptr;
	}

}


