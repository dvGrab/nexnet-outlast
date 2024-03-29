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
	 * 		Name   -> Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DetectHitPosition_Object_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.ReceiveTick");
		
		ABP_DetectHitPosition_Object_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DetectHitPosition_Object_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.ReceiveBeginPlay");
		
		ABP_DetectHitPosition_Object_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.DoHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_DetectHitPosition_Object_C::DoHit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.DoHit");
		
		ABP_DetectHitPosition_Object_C_DoHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.ExecuteUbergraph_BP_DetectHitPosition_Object
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DetectHitPosition_Object_C::ExecuteUbergraph_BP_DetectHitPosition_Object(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.ExecuteUbergraph_BP_DetectHitPosition_Object");
		
		ABP_DetectHitPosition_Object_C_ExecuteUbergraph_BP_DetectHitPosition_Object_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DetectHitPosition_Object_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DetectHitPosition_Object_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C");
		return ptr;
	}

}


