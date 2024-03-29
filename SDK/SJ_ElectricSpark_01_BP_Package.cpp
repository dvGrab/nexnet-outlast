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
	 * 		Name   -> Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASJ_ElectricSpark__BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.Timeline_0__FinishedFunc");
		
		ASJ_ElectricSpark__BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASJ_ElectricSpark__BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.Timeline_0__UpdateFunc");
		
		ASJ_ElectricSpark__BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ASJ_ElectricSpark__BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.Event_OnTriggered");
		
		ASJ_ElectricSpark__BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ASJ_ElectricSpark__BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.Event_OnUntriggered");
		
		ASJ_ElectricSpark__BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASJ_ElectricSpark__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.ReceiveBeginPlay");
		
		ASJ_ElectricSpark__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.ExecuteUbergraph_SJ_ElectricSpark-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASJ_ElectricSpark__BP_C::ExecuteUbergraph_SJ_ElectricSpark__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_ElectricSpark-01_BP.SJ_ElectricSpark-01_BP_C.ExecuteUbergraph_SJ_ElectricSpark-01_BP");
		
		ASJ_ElectricSpark__BP_C_ExecuteUbergraph_SJ_ElectricSpark__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASJ_ElectricSpark__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASJ_ElectricSpark__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SJ_ElectricSpark_01_BP.SJ_ElectricSpark-01_BP_C");
		return ptr;
	}

}


