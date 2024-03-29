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
	 * 		Name   -> Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Close
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARollingShutter300cm01_BP_C::Close(bool bPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Close");
		
		ARollingShutter300cm01_BP_C_Close_Params params {};
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARollingShutter300cm01_BP_C::Open(bool bPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Open");
		
		ARollingShutter300cm01_BP_C_Open_Params params {};
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARollingShutter300cm01_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.ReceiveBeginPlay");
		
		ARollingShutter300cm01_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ARollingShutter300cm01_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Event_OnTriggered");
		
		ARollingShutter300cm01_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ARollingShutter300cm01_BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Event_OnUntriggered");
		
		ARollingShutter300cm01_BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void ARollingShutter300cm01_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Event_SnapToState");
		
		ARollingShutter300cm01_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Shutter SnapToState
	 * 		Flags  -> ()
	 */
	void ARollingShutter300cm01_BP_C::ShutterSnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.Shutter SnapToState");
		
		ARollingShutter300cm01_BP_C_ShutterSnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.ExecuteUbergraph_RollingShutter-300cm-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingShutter300cm01_BP_C::ExecuteUbergraph_RollingShutter300cm01_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingShutter-300cm-01_BP.RollingShutter-300cm-01_BP_C.ExecuteUbergraph_RollingShutter-300cm-01_BP");
		
		ARollingShutter300cm01_BP_C_ExecuteUbergraph_RollingShutter300cm01_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARollingShutter300cm01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARollingShutter300cm01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RollingShutter_300cm_01_BP.RollingShutter-300cm-01_BP_C");
		return ptr;
	}

}


