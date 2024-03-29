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
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetMainParentSkeletalMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ABase_DeadBody_Container_BP_C::GetMainParentSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetMainParentSkeletalMesh");
		
		ABase_DeadBody_Container_BP_C_GetMainParentSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetWatchComponent
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* ABase_DeadBody_Container_BP_C::GetWatchComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetWatchComponent");
		
		ABase_DeadBody_Container_BP_C_GetWatchComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetPlayerCustomizationInfo
	 * 		Flags  -> ()
	 */
	struct FRBPlayerCustomizationInfo ABase_DeadBody_Container_BP_C::GetPlayerCustomizationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetPlayerCustomizationInfo");
		
		ABase_DeadBody_Container_BP_C_GetPlayerCustomizationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetSkeletalMeshComponentForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USkeletalMeshComponent* ABase_DeadBody_Container_BP_C::GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetSkeletalMeshComponentForSlot");
		
		ABase_DeadBody_Container_BP_C_GetSkeletalMeshComponentForSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ValidateArmWristBoneSetup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_DeadBody_Container_BP_C::ValidateArmWristBoneSetup(class USkeletalMeshComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ValidateArmWristBoneSetup");
		
		ABase_DeadBody_Container_BP_C_ValidateArmWristBoneSetup_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABase_DeadBody_Container_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.UserConstructionScript");
		
		ABase_DeadBody_Container_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.PlayDeadBodyAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequenceBase*                           Anim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_DeadBody_Container_BP_C::PlayDeadBodyAnim(class UAnimSequenceBase* Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.PlayDeadBodyAnim");
		
		ABase_DeadBody_Container_BP_C_PlayDeadBodyAnim_Params params {};
		params.Anim = Anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.OnInteractionStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          spawnLocationComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_DeadBody_Container_BP_C::OnInteractionStarted(class URBContainerSpawnLocationComponent* spawnLocationComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.OnInteractionStarted");
		
		ABase_DeadBody_Container_BP_C_OnInteractionStarted_Params params {};
		params.spawnLocationComponent = spawnLocationComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABase_DeadBody_Container_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ReceiveBeginPlay");
		
		ABase_DeadBody_Container_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ABase_DeadBody_Container_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnResetStage");
		
		ABase_DeadBody_Container_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ForceEndPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequenceBase*                           Anim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_DeadBody_Container_BP_C::ForceEndPose(class UAnimSequenceBase* Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ForceEndPose");
		
		ABase_DeadBody_Container_BP_C_ForceEndPose_Params params {};
		params.Anim = Anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnNotifyPlayRigSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationAsset*                             AnimToPlay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_DeadBody_Container_BP_C::Event_OnNotifyPlayRigSequence(class UAnimationAsset* AnimToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnNotifyPlayRigSequence");
		
		ABase_DeadBody_Container_BP_C_Event_OnNotifyPlayRigSequence_Params params {};
		params.AnimToPlay = AnimToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.BndEvt__HandSpawnLocation_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_DeadBody_Container_BP_C::BndEvt__HandSpawnLocation_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.BndEvt__HandSpawnLocation_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature");
		
		ABase_DeadBody_Container_BP_C_BndEvt__HandSpawnLocation_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature_Params params {};
		params.Component = Component;
		params.interactor = interactor;
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.BndEvt__ESOPSpawnLocation_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_DeadBody_Container_BP_C::BndEvt__ESOPSpawnLocation_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.BndEvt__ESOPSpawnLocation_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature");
		
		ABase_DeadBody_Container_BP_C_BndEvt__ESOPSpawnLocation_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature_Params params {};
		params.Component = Component;
		params.interactor = interactor;
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.BndEvt__GroundSpawnLocation_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_DeadBody_Container_BP_C::BndEvt__GroundSpawnLocation_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.BndEvt__GroundSpawnLocation_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature");
		
		ABase_DeadBody_Container_BP_C_BndEvt__GroundSpawnLocation_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature_Params params {};
		params.Component = Component;
		params.interactor = interactor;
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnCustomizationChanged
	 * 		Flags  -> ()
	 */
	void ABase_DeadBody_Container_BP_C::Event_OnCustomizationChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnCustomizationChanged");
		
		ABase_DeadBody_Container_BP_C_Event_OnCustomizationChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ActivateHeadCapsule
	 * 		Flags  -> ()
	 */
	void ABase_DeadBody_Container_BP_C::ActivateHeadCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ActivateHeadCapsule");
		
		ABase_DeadBody_Container_BP_C_ActivateHeadCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.OnExtraCustomizationMeshesAddedForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              addedExtraMeshes                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_DeadBody_Container_BP_C::OnExtraCustomizationMeshesAddedForSlot(TArray<class USkeletalMeshComponent*> addedExtraMeshes, EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.OnExtraCustomizationMeshesAddedForSlot");
		
		ABase_DeadBody_Container_BP_C_OnExtraCustomizationMeshesAddedForSlot_Params params {};
		params.addedExtraMeshes = addedExtraMeshes;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ValidateMovedAnim
	 * 		Flags  -> ()
	 */
	void ABase_DeadBody_Container_BP_C::ValidateMovedAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ValidateMovedAnim");
		
		ABase_DeadBody_Container_BP_C_ValidateMovedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnMovedDeadBodySequenceChanged
	 * 		Flags  -> ()
	 */
	void ABase_DeadBody_Container_BP_C::Event_OnMovedDeadBodySequenceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnMovedDeadBodySequenceChanged");
		
		ABase_DeadBody_Container_BP_C_Event_OnMovedDeadBodySequenceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ExecuteUbergraph_Base_DeadBody_Container_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_DeadBody_Container_BP_C::ExecuteUbergraph_Base_DeadBody_Container_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ExecuteUbergraph_Base_DeadBody_Container_BP");
		
		ABase_DeadBody_Container_BP_C_ExecuteUbergraph_Base_DeadBody_Container_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_DeadBody_Container_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_DeadBody_Container_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C");
		return ptr;
	}

}


