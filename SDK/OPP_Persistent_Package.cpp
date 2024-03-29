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
	 * 		Name   -> Function OPP_Persistent.OPP_Persistent_C.bpiBlurEntity
	 * 		Flags  -> ()
	 */
	void AOPP_Persistent_C::bpiBlurEntity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OPP_Persistent.OPP_Persistent_C.bpiBlurEntity");
		
		AOPP_Persistent_C_bpiBlurEntity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OPP_Persistent.OPP_Persistent_C.StartDrugSpray
	 * 		Flags  -> ()
	 */
	void AOPP_Persistent_C::StartDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OPP_Persistent.OPP_Persistent_C.StartDrugSpray");
		
		AOPP_Persistent_C_StartDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OPP_Persistent.OPP_Persistent_C.StopDrugSpray
	 * 		Flags  -> ()
	 */
	void AOPP_Persistent_C::StopDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OPP_Persistent.OPP_Persistent_C.StopDrugSpray");
		
		AOPP_Persistent_C_StopDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OPP_Persistent.OPP_Persistent_C.CloseLight
	 * 		Flags  -> ()
	 */
	void AOPP_Persistent_C::CloseLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OPP_Persistent.OPP_Persistent_C.CloseLight");
		
		AOPP_Persistent_C_CloseLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OPP_Persistent.OPP_Persistent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AOPP_Persistent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OPP_Persistent.OPP_Persistent_C.ReceiveBeginPlay");
		
		AOPP_Persistent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OPP_Persistent.OPP_Persistent_C.OnRBStreamingLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBStreaming*                                RBStreaming                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOPP_Persistent_C::OnRBStreamingLoaded(class ARBStreaming* RBStreaming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OPP_Persistent.OPP_Persistent_C.OnRBStreamingLoaded");
		
		AOPP_Persistent_C_OnRBStreamingLoaded_Params params {};
		params.RBStreaming = RBStreaming;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OPP_Persistent.OPP_Persistent_C.InitDrugSequences
	 * 		Flags  -> ()
	 */
	void AOPP_Persistent_C::InitDrugSequences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OPP_Persistent.OPP_Persistent_C.InitDrugSequences");
		
		AOPP_Persistent_C_InitDrugSequences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OPP_Persistent.OPP_Persistent_C.ExecuteUbergraph_OPP_Persistent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOPP_Persistent_C::ExecuteUbergraph_OPP_Persistent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OPP_Persistent.OPP_Persistent_C.ExecuteUbergraph_OPP_Persistent");
		
		AOPP_Persistent_C_ExecuteUbergraph_OPP_Persistent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOPP_Persistent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOPP_Persistent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OPP_Persistent.OPP_Persistent_C");
		return ptr;
	}

}


