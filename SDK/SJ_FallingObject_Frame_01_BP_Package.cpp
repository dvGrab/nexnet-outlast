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
	 * 		Name   -> Function SJ_FallingObject_Frame-01_BP.SJ_FallingObject_Frame-01_BP_C.HitGround
	 * 		Flags  -> ()
	 */
	void ASJ_FallingObject_Frame__BP_C::HitGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_FallingObject_Frame-01_BP.SJ_FallingObject_Frame-01_BP_C.HitGround");
		
		ASJ_FallingObject_Frame__BP_C_HitGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_FallingObject_Frame-01_BP.SJ_FallingObject_Frame-01_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ASJ_FallingObject_Frame__BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_FallingObject_Frame-01_BP.SJ_FallingObject_Frame-01_BP_C.Event_OnResetStage");
		
		ASJ_FallingObject_Frame__BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_FallingObject_Frame-01_BP.SJ_FallingObject_Frame-01_BP_C.ExecuteUbergraph_SJ_FallingObject_Frame-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASJ_FallingObject_Frame__BP_C::ExecuteUbergraph_SJ_FallingObject_Frame__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_FallingObject_Frame-01_BP.SJ_FallingObject_Frame-01_BP_C.ExecuteUbergraph_SJ_FallingObject_Frame-01_BP");
		
		ASJ_FallingObject_Frame__BP_C_ExecuteUbergraph_SJ_FallingObject_Frame__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASJ_FallingObject_Frame__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASJ_FallingObject_Frame__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SJ_FallingObject_Frame_01_BP.SJ_FallingObject_Frame-01_BP_C");
		return ptr;
	}

}


