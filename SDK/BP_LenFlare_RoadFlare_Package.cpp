/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.InitFlare
	 * 		Flags  -> ()
	 */
	void ABP_LenFlare_RoadFlare_C::InitFlare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.InitFlare");
		
		ABP_LenFlare_RoadFlare_C_InitFlare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_LenFlare_RoadFlare_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.UserConstructionScript");
		
		ABP_LenFlare_RoadFlare_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_LenFlare_RoadFlare_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ReceiveBeginPlay");
		
		ABP_LenFlare_RoadFlare_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LenFlare_RoadFlare_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ReceiveTick");
		
		ABP_LenFlare_RoadFlare_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ExecuteUbergraph_BP_LenFlare_RoadFlare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LenFlare_RoadFlare_C::ExecuteUbergraph_BP_LenFlare_RoadFlare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ExecuteUbergraph_BP_LenFlare_RoadFlare");
		
		ABP_LenFlare_RoadFlare_C_ExecuteUbergraph_BP_LenFlare_RoadFlare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LenFlare_RoadFlare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LenFlare_RoadFlare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C");
		return ptr;
	}

}


