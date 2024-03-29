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
	 * 		Name   -> Function BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C.InitFlare
	 * 		Flags  -> ()
	 */
	void ABP_LensFlare_FlareGun_C::InitFlare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C.InitFlare");
		
		ABP_LensFlare_FlareGun_C_InitFlare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_LensFlare_FlareGun_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C.UserConstructionScript");
		
		ABP_LensFlare_FlareGun_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_LensFlare_FlareGun_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C.ReceiveBeginPlay");
		
		ABP_LensFlare_FlareGun_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LensFlare_FlareGun_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C.ReceiveTick");
		
		ABP_LensFlare_FlareGun_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C.ExecuteUbergraph_BP_LensFlare_FlareGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LensFlare_FlareGun_C::ExecuteUbergraph_BP_LensFlare_FlareGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C.ExecuteUbergraph_BP_LensFlare_FlareGun");
		
		ABP_LensFlare_FlareGun_C_ExecuteUbergraph_BP_LensFlare_FlareGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LensFlare_FlareGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LensFlare_FlareGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LensFlare_FlareGun.BP_LensFlare_FlareGun_C");
		return ptr;
	}

}


