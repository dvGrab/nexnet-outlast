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
	 * 		Name   -> Function SJ_Telephone-03_BP.SJ_Telephone-03_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASJ_Telephone__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_Telephone-03_BP.SJ_Telephone-03_BP_C.UserConstructionScript");
		
		ASJ_Telephone__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_Telephone-03_BP.SJ_Telephone-03_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ASJ_Telephone__BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_Telephone-03_BP.SJ_Telephone-03_BP_C.Event_OnTriggered");
		
		ASJ_Telephone__BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_Telephone-03_BP.SJ_Telephone-03_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ASJ_Telephone__BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_Telephone-03_BP.SJ_Telephone-03_BP_C.Event_OnUntriggered");
		
		ASJ_Telephone__BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_Telephone-03_BP.SJ_Telephone-03_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ASJ_Telephone__BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_Telephone-03_BP.SJ_Telephone-03_BP_C.Event_OnResetStage");
		
		ASJ_Telephone__BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_Telephone-03_BP.SJ_Telephone-03_BP_C.ExecuteUbergraph_SJ_Telephone-03_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASJ_Telephone__BP_C::ExecuteUbergraph_SJ_Telephone__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_Telephone-03_BP.SJ_Telephone-03_BP_C.ExecuteUbergraph_SJ_Telephone-03_BP");
		
		ASJ_Telephone__BP_C_ExecuteUbergraph_SJ_Telephone__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASJ_Telephone__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASJ_Telephone__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SJ_Telephone_03_BP.SJ_Telephone-03_BP_C");
		return ptr;
	}

}


