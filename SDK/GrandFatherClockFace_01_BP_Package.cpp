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
	 * 		Name   -> Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.Set Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IgnoreServerTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGrandFatherClockFace__BP_C::Set_Time(bool IgnoreServerTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.Set Time");
		
		AGrandFatherClockFace__BP_C_Set_Time_Params params {};
		params.IgnoreServerTime = IgnoreServerTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.IncrementTime
	 * 		Flags  -> ()
	 */
	void AGrandFatherClockFace__BP_C::IncrementTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.IncrementTime");
		
		AGrandFatherClockFace__BP_C_IncrementTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.UpdateRotations
	 * 		Flags  -> ()
	 */
	void AGrandFatherClockFace__BP_C::UpdateRotations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.UpdateRotations");
		
		AGrandFatherClockFace__BP_C_UpdateRotations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AGrandFatherClockFace__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.UserConstructionScript");
		
		AGrandFatherClockFace__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGrandFatherClockFace__BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.ReceiveTick");
		
		AGrandFatherClockFace__BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGrandFatherClockFace__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.ReceiveBeginPlay");
		
		AGrandFatherClockFace__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.StartClock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IgnoreServerTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGrandFatherClockFace__BP_C::StartClock(bool IgnoreServerTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.StartClock");
		
		AGrandFatherClockFace__BP_C_StartClock_Params params {};
		params.IgnoreServerTime = IgnoreServerTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.StopClock
	 * 		Flags  -> ()
	 */
	void AGrandFatherClockFace__BP_C::StopClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.StopClock");
		
		AGrandFatherClockFace__BP_C_StopClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.ExecuteUbergraph_GrandFatherClockFace-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGrandFatherClockFace__BP_C::ExecuteUbergraph_GrandFatherClockFace__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.ExecuteUbergraph_GrandFatherClockFace-01_BP");
		
		AGrandFatherClockFace__BP_C_ExecuteUbergraph_GrandFatherClockFace__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrandFatherClockFace__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrandFatherClockFace__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GrandFatherClockFace_01_BP.GrandFatherClockFace-01_BP_C");
		return ptr;
	}

}


