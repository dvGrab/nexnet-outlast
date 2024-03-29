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
	 * 		Name   -> Function SJ_Telephone-04_BP.SJ_Telephone-04_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASJ_Telephone04_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_Telephone-04_BP.SJ_Telephone-04_BP_C.UserConstructionScript");
		
		ASJ_Telephone04_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_Telephone-04_BP.SJ_Telephone-04_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ASJ_Telephone04_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_Telephone-04_BP.SJ_Telephone-04_BP_C.Event_OnTriggered");
		
		ASJ_Telephone04_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_Telephone-04_BP.SJ_Telephone-04_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ASJ_Telephone04_BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_Telephone-04_BP.SJ_Telephone-04_BP_C.Event_OnUntriggered");
		
		ASJ_Telephone04_BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_Telephone-04_BP.SJ_Telephone-04_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ASJ_Telephone04_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_Telephone-04_BP.SJ_Telephone-04_BP_C.Event_OnResetStage");
		
		ASJ_Telephone04_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_Telephone-04_BP.SJ_Telephone-04_BP_C.ExecuteUbergraph_SJ_Telephone-04_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASJ_Telephone04_BP_C::ExecuteUbergraph_SJ_Telephone04_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_Telephone-04_BP.SJ_Telephone-04_BP_C.ExecuteUbergraph_SJ_Telephone-04_BP");
		
		ASJ_Telephone04_BP_C_ExecuteUbergraph_SJ_Telephone04_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASJ_Telephone04_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASJ_Telephone04_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SJ_Telephone_04_BP.SJ_Telephone-04_BP_C");
		return ptr;
	}

}


