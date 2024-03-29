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
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.InitNavMeshBlocking
	 * 		Flags  -> ()
	 */
	void ASplineAnchor_BP_C::InitNavMeshBlocking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.InitNavMeshBlocking");
		
		ASplineAnchor_BP_C_InitNavMeshBlocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.UpdateNavMeshBlocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMoving                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASplineAnchor_BP_C::UpdateNavMeshBlocking(bool bMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.UpdateNavMeshBlocking");
		
		ASplineAnchor_BP_C_UpdateNavMeshBlocking_Params params {};
		params.bMoving = bMoving;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.UpdateSplineSound
	 * 		Flags  -> ()
	 */
	void ASplineAnchor_BP_C::UpdateSplineSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.UpdateSplineSound");
		
		ASplineAnchor_BP_C_UpdateSplineSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.OnRep_bIsMovingSound
	 * 		Flags  -> ()
	 */
	void ASplineAnchor_BP_C::OnRep_bIsMovingSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.OnRep_bIsMovingSound");
		
		ASplineAnchor_BP_C_OnRep_bIsMovingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASplineAnchor_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.UserConstructionScript");
		
		ASplineAnchor_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASplineAnchor_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.ReceiveBeginPlay");
		
		ASplineAnchor_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.StartMovingSound
	 * 		Flags  -> ()
	 */
	void ASplineAnchor_BP_C::StartMovingSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.StartMovingSound");
		
		ASplineAnchor_BP_C_StartMovingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.StopMovingSound
	 * 		Flags  -> ()
	 */
	void ASplineAnchor_BP_C::StopMovingSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.StopMovingSound");
		
		ASplineAnchor_BP_C_StopMovingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.BndEvt__SplineAnchor_BP_NetworkSync_K2Node_ComponentBoundEvent_0_OnNetworkSyncComponentEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBNetworkSyncComponent*                     networkSyncComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineAnchor_BP_C::BndEvt__SplineAnchor_BP_NetworkSync_K2Node_ComponentBoundEvent_0_OnNetworkSyncComponentEvent__DelegateSignature(class URBNetworkSyncComponent* networkSyncComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.BndEvt__SplineAnchor_BP_NetworkSync_K2Node_ComponentBoundEvent_0_OnNetworkSyncComponentEvent__DelegateSignature");
		
		ASplineAnchor_BP_C_BndEvt__SplineAnchor_BP_NetworkSync_K2Node_ComponentBoundEvent_0_OnNetworkSyncComponentEvent__DelegateSignature_Params params {};
		params.networkSyncComponent = networkSyncComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.BP_OnStartedMoving
	 * 		Flags  -> ()
	 */
	void ASplineAnchor_BP_C::BP_OnStartedMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.BP_OnStartedMoving");
		
		ASplineAnchor_BP_C_BP_OnStartedMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.BP_OnStoppedMoving
	 * 		Flags  -> ()
	 */
	void ASplineAnchor_BP_C::BP_OnStoppedMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.BP_OnStoppedMoving");
		
		ASplineAnchor_BP_C_BP_OnStoppedMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineAnchor_BP.SplineAnchor_BP_C.ExecuteUbergraph_SplineAnchor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineAnchor_BP_C::ExecuteUbergraph_SplineAnchor_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineAnchor_BP.SplineAnchor_BP_C.ExecuteUbergraph_SplineAnchor_BP");
		
		ASplineAnchor_BP_C_ExecuteUbergraph_SplineAnchor_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASplineAnchor_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineAnchor_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplineAnchor_BP.SplineAnchor_BP_C");
		return ptr;
	}

}


