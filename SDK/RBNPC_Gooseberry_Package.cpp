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
	 * 		Name   -> Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.TryPlayFacialAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      lineId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool ARBNPC_Gooseberry_C::TryPlayFacialAnim(const class FString& lineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.TryPlayFacialAnim");
		
		ARBNPC_Gooseberry_C_TryPlayFacialAnim_Params params {};
		params.lineId = lineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.GetFaceFXSkeletalMeshComponent
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARBNPC_Gooseberry_C::GetFaceFXSkeletalMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.GetFaceFXSkeletalMeshComponent");
		
		ARBNPC_Gooseberry_C_GetFaceFXSkeletalMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBNPC_Gooseberry_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.UserConstructionScript");
		
		ARBNPC_Gooseberry_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARBNPC_Gooseberry_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ReceiveBeginPlay");
		
		ARBNPC_Gooseberry_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.UpdateTimeToPlayFuttermanIdleBreaker
	 * 		Flags  -> ()
	 */
	void ARBNPC_Gooseberry_C::UpdateTimeToPlayFuttermanIdleBreaker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.UpdateTimeToPlayFuttermanIdleBreaker");
		
		ARBNPC_Gooseberry_C_UpdateTimeToPlayFuttermanIdleBreaker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Gooseberry_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ReceiveTick");
		
		ARBNPC_Gooseberry_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ExecuteUbergraph_RBNPC_Gooseberry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Gooseberry_C::ExecuteUbergraph_RBNPC_Gooseberry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ExecuteUbergraph_RBNPC_Gooseberry");
		
		ARBNPC_Gooseberry_C_ExecuteUbergraph_RBNPC_Gooseberry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.PlayFuttermanIdleBreaker__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARBNPC_Gooseberry_C::PlayFuttermanIdleBreaker__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.PlayFuttermanIdleBreaker__DelegateSignature");
		
		ARBNPC_Gooseberry_C_PlayFuttermanIdleBreaker__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBNPC_Gooseberry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBNPC_Gooseberry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBNPC_Gooseberry.RBNPC_Gooseberry_C");
		return ptr;
	}

}


