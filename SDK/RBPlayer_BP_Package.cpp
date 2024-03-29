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
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.GetMainParentSkeletalMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARBPlayer_BP_C::GetMainParentSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.GetMainParentSkeletalMesh");
		
		ARBPlayer_BP_C_GetMainParentSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.GetWatchComponent
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* ARBPlayer_BP_C::GetWatchComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.GetWatchComponent");
		
		ARBPlayer_BP_C_GetWatchComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.GetPlayerCustomizationInfo
	 * 		Flags  -> ()
	 */
	struct FRBPlayerCustomizationInfo ARBPlayer_BP_C::GetPlayerCustomizationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.GetPlayerCustomizationInfo");
		
		ARBPlayer_BP_C_GetPlayerCustomizationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.GetSkeletalMeshComponentForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USkeletalMeshComponent* ARBPlayer_BP_C::GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.GetSkeletalMeshComponentForSlot");
		
		ARBPlayer_BP_C_GetSkeletalMeshComponentForSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.GetAllShadowMeshes
	 * 		Flags  -> ()
	 */
	TArray<class UPrimitiveComponent*> ARBPlayer_BP_C::GetAllShadowMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.GetAllShadowMeshes");
		
		ARBPlayer_BP_C_GetAllShadowMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.GetMainShadowMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARBPlayer_BP_C::GetMainShadowMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.GetMainShadowMesh");
		
		ARBPlayer_BP_C_GetMainShadowMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.DebugShadowMesh
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::DebugShadowMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.DebugShadowMesh");
		
		ARBPlayer_BP_C_DebugShadowMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateUnderwaterFX
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::UpdateUnderwaterFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateUnderwaterFX");
		
		ARBPlayer_BP_C_UpdateUnderwaterFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.CopyMaterialsToShadowMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMeshComponent*                              PlayerMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMeshComponent*                              ShadowMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::CopyMaterialsToShadowMesh(class UMeshComponent* PlayerMesh, class UMeshComponent* ShadowMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.CopyMaterialsToShadowMesh");
		
		ARBPlayer_BP_C_CopyMaterialsToShadowMesh_Params params {};
		params.PlayerMesh = PlayerMesh;
		params.ShadowMesh = ShadowMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowActiveSkill
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::UpdateShadowActiveSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowActiveSkill");
		
		ARBPlayer_BP_C_UpdateShadowActiveSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateESOPVisibility
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::UpdateESOPVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateESOPVisibility");
		
		ARBPlayer_BP_C_UpdateESOPVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateVisualDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::UpdateVisualDamage(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateVisualDamage");
		
		ARBPlayer_BP_C_UpdateVisualDamage_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodSmearInDownedState
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::UpdateBloodSmearInDownedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodSmearInDownedState");
		
		ARBPlayer_BP_C_UpdateBloodSmearInDownedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.GetNextShuffledMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceConstant*                   NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::GetNextShuffledMaterial(class UMaterialInstanceConstant** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.GetNextShuffledMaterial");
		
		ARBPlayer_BP_C_GetNextShuffledMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ApplyBloodDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceConstant*                   MatDecal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Rotate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::ApplyBloodDecal(class UMaterialInstanceConstant* MatDecal, float Scale, bool Rotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ApplyBloodDecal");
		
		ARBPlayer_BP_C_ApplyBloodDecal_Params params {};
		params.MatDecal = MatDecal;
		params.Scale = Scale;
		params.Rotate = Rotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ApplyDamageVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDamageType                                        InfoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENPCWeapon                                         NPCWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DmdAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     DmgLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     DmgDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bBloodParticles                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::ApplyDamageVFX(EDamageType InfoType, ENPCWeapon NPCWeapon, float DmdAmount, const struct FVector& DmgLocation, const struct FVector& DmgDirection, class AActor* SourceActor, bool bBloodParticles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ApplyDamageVFX");
		
		ARBPlayer_BP_C_ApplyDamageVFX_Params params {};
		params.InfoType = InfoType;
		params.NPCWeapon = NPCWeapon;
		params.DmdAmount = DmdAmount;
		params.DmgLocation = DmgLocation;
		params.DmgDirection = DmgDirection;
		params.SourceActor = SourceActor;
		params.bBloodParticles = bBloodParticles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.GetRelevantForDamageExtraMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              SkeletalMeshes_                                            (Parm, OutParm, ContainsInstancedReference)
	 */
	void ARBPlayer_BP_C::GetRelevantForDamageExtraMeshes(TArray<class USkeletalMeshComponent*>* SkeletalMeshes_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.GetRelevantForDamageExtraMeshes");
		
		ARBPlayer_BP_C_GetRelevantForDamageExtraMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkeletalMeshes_ != nullptr)
			*SkeletalMeshes_ = params.SkeletalMeshes_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.TryPlayFacialAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      lineId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool ARBPlayer_BP_C::TryPlayFacialAnim(const class FString& lineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.TryPlayFacialAnim");
		
		ARBPlayer_BP_C_TryPlayFacialAnim_Params params {};
		params.lineId = lineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ApplyBloodOnRightHand
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::ApplyBloodOnRightHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ApplyBloodOnRightHand");
		
		ARBPlayer_BP_C_ApplyBloodOnRightHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::UpdateBloodHand(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodHand");
		
		ARBPlayer_BP_C_UpdateBloodHand_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.GetFaceFXSkeletalMeshComponent
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARBPlayer_BP_C::GetFaceFXSkeletalMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.GetFaceFXSkeletalMeshComponent");
		
		ARBPlayer_BP_C_GetFaceFXSkeletalMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.GetFacePoseAsset
	 * 		Flags  -> ()
	 */
	class UPoseAsset* ARBPlayer_BP_C::GetFacePoseAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.GetFacePoseAsset");
		
		ARBPlayer_BP_C_GetFacePoseAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowPickup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPickup*                                   Old                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   New                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::UpdateShadowPickup(class ARBPickup* Old, class ARBPickup* New)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowPickup");
		
		ARBPlayer_BP_C_UpdateShadowPickup_Params params {};
		params.Old = Old;
		params.New = New;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodDrippingParticle
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::UpdateBloodDrippingParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodDrippingParticle");
		
		ARBPlayer_BP_C_UpdateBloodDrippingParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.DebugVisualDamage
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::DebugVisualDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.DebugVisualDamage");
		
		ARBPlayer_BP_C_DebugVisualDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ReduceVisualDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Increased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              newHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::ReduceVisualDamage(bool Increased, float newHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ReduceVisualDamage");
		
		ARBPlayer_BP_C_ReduceVisualDamage_Params params {};
		params.Increased = Increased;
		params.newHealth = newHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ApplyVisualDamageToSkelMeshes
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::ApplyVisualDamageToSkelMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ApplyVisualDamageToSkelMeshes");
		
		ARBPlayer_BP_C_ApplyVisualDamageToSkelMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.RefreshHeadCapVisibility
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::RefreshHeadCapVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.RefreshHeadCapVisibility");
		
		ARBPlayer_BP_C_RefreshHeadCapVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateHeadCapMesh
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::UpdateHeadCapMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateHeadCapMesh");
		
		ARBPlayer_BP_C_UpdateHeadCapMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Should Hide Customization Slot in 1P
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldHide                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::Should_Hide_Customization_Slot_in_P(EPlayerCustomizationSlot Slot, bool* ShouldHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Should Hide Customization Slot in 1P");
		
		ARBPlayer_BP_C_Should_Hide_Customization_Slot_in_P_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldHide != nullptr)
			*ShouldHide = params.ShouldHide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ClearExtraCustomizationMeshes
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::ClearExtraCustomizationMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ClearExtraCustomizationMeshes");
		
		ARBPlayer_BP_C_ClearExtraCustomizationMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.CreateShadowmeshCopyOfStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        InVisualMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        OutNewComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::CreateShadowmeshCopyOfStaticMesh(class UStaticMeshComponent** InVisualMesh, class USkeletalMeshComponent** Parent, class UStaticMeshComponent** OutNewComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.CreateShadowmeshCopyOfStaticMesh");
		
		ARBPlayer_BP_C_CreateShadowmeshCopyOfStaticMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InVisualMesh != nullptr)
			*InVisualMesh = params.InVisualMesh;
		if (Parent != nullptr)
			*Parent = params.Parent;
		if (OutNewComponent != nullptr)
			*OutNewComponent = params.OutNewComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.CreateSkeletalMeshForShadow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InVisibleMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             InParent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bKeepRelativeTransform                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      Out                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::CreateSkeletalMeshForShadow(class USkeletalMeshComponent* InVisibleMesh, class USceneComponent* InParent, bool bKeepRelativeTransform, class USkeletalMeshComponent** Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.CreateSkeletalMeshForShadow");
		
		ARBPlayer_BP_C_CreateSkeletalMeshForShadow_Params params {};
		params.InVisibleMesh = InVisibleMesh;
		params.InParent = InParent;
		params.bKeepRelativeTransform = bKeepRelativeTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Remove Shadow Meshes
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::Remove_Shadow_Meshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Remove Shadow Meshes");
		
		ARBPlayer_BP_C_Remove_Shadow_Meshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.CreateShadowmeshCopyOfSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InVisibleMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             InParent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InAnimInstance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      OutShadowMeshComponent                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::CreateShadowmeshCopyOfSkeletalMesh(class USkeletalMeshComponent** InVisibleMesh, class USceneComponent** InParent, class UClass* InAnimInstance, class USkeletalMeshComponent** OutShadowMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.CreateShadowmeshCopyOfSkeletalMesh");
		
		ARBPlayer_BP_C_CreateShadowmeshCopyOfSkeletalMesh_Params params {};
		params.InAnimInstance = InAnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InVisibleMesh != nullptr)
			*InVisibleMesh = params.InVisibleMesh;
		if (InParent != nullptr)
			*InParent = params.InParent;
		if (OutShadowMeshComponent != nullptr)
			*OutShadowMeshComponent = params.OutShadowMeshComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Update Shadow Mesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceClean                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::Update_Shadow_Mesh(bool ForceClean)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Update Shadow Mesh");
		
		ARBPlayer_BP_C_Update_Shadow_Mesh_Params params {};
		params.ForceClean = ForceClean;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateESOPBatteryType
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::UpdateESOPBatteryType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateESOPBatteryType");
		
		ARBPlayer_BP_C_UpdateESOPBatteryType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ResetDamageMaterials
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::ResetDamageMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ResetDamageMaterials");
		
		ARBPlayer_BP_C_ResetDamageMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ApplyVisualDamageToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              damageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SrcActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::ApplyVisualDamageToCharacter(const struct FVector& Location, float damageAmount, class AActor* SrcActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ApplyVisualDamageToCharacter");
		
		ARBPlayer_BP_C_ApplyVisualDamageToCharacter_Params params {};
		params.Location = Location;
		params.damageAmount = damageAmount;
		params.SrcActor = SrcActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.CustomizeCharacterModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBCustomizationOutfit*                      OutfitOverride                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::CustomizeCharacterModel(class URBCustomizationOutfit* OutfitOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.CustomizeCharacterModel");
		
		ARBPlayer_BP_C_CustomizeCharacterModel_Params params {};
		params.OutfitOverride = OutfitOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_PlayHitReactionEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerHitReactionParams                    hitReaction                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FVector                                     attackLoc                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              hitRelativeAngle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::Event_PlayHitReactionEffects(const struct FPlayerHitReactionParams& hitReaction, const struct FVector& attackLoc, float hitRelativeAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_PlayHitReactionEffects");
		
		ARBPlayer_BP_C_Event_PlayHitReactionEffects_Params params {};
		params.hitReaction = hitReaction;
		params.attackLoc = attackLoc;
		params.hitRelativeAngle = hitRelativeAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.SetInitialPlayerSettings
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::SetInitialPlayerSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.SetInitialPlayerSettings");
		
		ARBPlayer_BP_C_SetInitialPlayerSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UserConstructionScript");
		
		ARBPlayer_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.OnLoaded_E32B3EA245CB7B65286791842D20B97F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::OnLoaded_E32B3EA245CB7B65286791842D20B97F(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.OnLoaded_E32B3EA245CB7B65286791842D20B97F");
		
		ARBPlayer_BP_C_OnLoaded_E32B3EA245CB7B65286791842D20B97F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnPlayerPerspectiveChanged
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::Event_OnPlayerPerspectiveChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnPlayerPerspectiveChanged");
		
		ARBPlayer_BP_C_Event_OnPlayerPerspectiveChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnDie
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::Event_OnDie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnDie");
		
		ARBPlayer_BP_C_Event_OnDie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnTakeDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ARBPlayer_BP_C::Event_OnTakeDamage(const struct FDamageInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnTakeDamage");
		
		ARBPlayer_BP_C_Event_OnTakeDamage_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.BndEvt__NVComponent_K2Node_ComponentBoundEvent_0_OnNVStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::BndEvt__NVComponent_K2Node_ComponentBoundEvent_0_OnNVStateChanged__DelegateSignature(bool bOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.BndEvt__NVComponent_K2Node_ComponentBoundEvent_0_OnNVStateChanged__DelegateSignature");
		
		ARBPlayer_BP_C_BndEvt__NVComponent_K2Node_ComponentBoundEvent_0_OnNVStateChanged__DelegateSignature_Params params {};
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnCustomizationChanged
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::Event_OnCustomizationChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnCustomizationChanged");
		
		ARBPlayer_BP_C_Event_OnCustomizationChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_StartSpectatingLocally
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::Event_StartSpectatingLocally()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_StartSpectatingLocally");
		
		ARBPlayer_BP_C_Event_StartSpectatingLocally_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_StopSpectatingLocally
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::Event_StopSpectatingLocally()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_StopSpectatingLocally");
		
		ARBPlayer_BP_C_Event_StopSpectatingLocally_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ReceiveEndPlay");
		
		ARBPlayer_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.SetRemoteCameraIntercomInteractibilitty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARemoteCameraIntercom__BP_C*                 RemoteCameraIntercom                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInteractibleValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::SetRemoteCameraIntercomInteractibilitty(class ARemoteCameraIntercom__BP_C* RemoteCameraIntercom, bool bInteractibleValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.SetRemoteCameraIntercomInteractibilitty");
		
		ARBPlayer_BP_C_SetRemoteCameraIntercomInteractibilitty_Params params {};
		params.RemoteCameraIntercom = RemoteCameraIntercom;
		params.bInteractibleValue = bInteractibleValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Server_SetCameraIntercomActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ACameraIntercom__BP_C*                       CameraIntercom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::Server_SetCameraIntercomActive(bool Active, class ACameraIntercom__BP_C* CameraIntercom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Server_SetCameraIntercomActive");
		
		ARBPlayer_BP_C_Server_SetCameraIntercomActive_Params params {};
		params.Active = Active;
		params.CameraIntercom = CameraIntercom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Server_SetCameraIntercomPitchYaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACameraIntercom__BP_C*                       CameraIntercom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::Server_SetCameraIntercomPitchYaw(float Pitch, float Yaw, class ACameraIntercom__BP_C* CameraIntercom, bool IsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Server_SetCameraIntercomPitchYaw");
		
		ARBPlayer_BP_C_Server_SetCameraIntercomPitchYaw_Params params {};
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		params.CameraIntercom = CameraIntercom;
		params.IsTalking = IsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Multicast_SetCameraIntercomPitchYaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACameraIntercom__BP_C*                       CameraIntercom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::Multicast_SetCameraIntercomPitchYaw(float Pitch, float Yaw, class ACameraIntercom__BP_C* CameraIntercom, bool IsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Multicast_SetCameraIntercomPitchYaw");
		
		ARBPlayer_BP_C_Multicast_SetCameraIntercomPitchYaw_Params params {};
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		params.CameraIntercom = CameraIntercom;
		params.IsTalking = IsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Multicast_SetCameraIntercomActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ACameraIntercom__BP_C*                       CameraIntercom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::Multicast_SetCameraIntercomActive(bool Active, class ACameraIntercom__BP_C* CameraIntercom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Multicast_SetCameraIntercomActive");
		
		ARBPlayer_BP_C_Multicast_SetCameraIntercomActive_Params params {};
		params.Active = Active;
		params.CameraIntercom = CameraIntercom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Multicast_CameraIntercomInteractibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARemoteCameraIntercom__BP_C*                 RemoteCameraIntercom                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInteractibleValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::Multicast_CameraIntercomInteractibility(class ARemoteCameraIntercom__BP_C* RemoteCameraIntercom, bool bInteractibleValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Multicast_CameraIntercomInteractibility");
		
		ARBPlayer_BP_C_Multicast_CameraIntercomInteractibility_Params params {};
		params.RemoteCameraIntercom = RemoteCameraIntercom;
		params.bInteractibleValue = bInteractibleValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_InitReplicated
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::Event_InitReplicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_InitReplicated");
		
		ARBPlayer_BP_C_Event_InitReplicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.PlaySoundOnPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               akEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::PlaySoundOnPlayer(class UAkAudioEvent* akEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.PlaySoundOnPlayer");
		
		ARBPlayer_BP_C_PlaySoundOnPlayer_Params params {};
		params.akEvent = akEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ReceiveBeginPlay");
		
		ARBPlayer_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.BP_OnTrapRoomFailed
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::BP_OnTrapRoomFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.BP_OnTrapRoomFailed");
		
		ARBPlayer_BP_C_BP_OnTrapRoomFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnLastConsumedBatteryTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          batteryType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::Event_OnLastConsumedBatteryTypeChanged(EItemType batteryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnLastConsumedBatteryTypeChanged");
		
		ARBPlayer_BP_C_Event_OnLastConsumedBatteryTypeChanged_Params params {};
		params.batteryType = batteryType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnFootstep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFootstepData                               FootstepData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ARBPlayer_BP_C::Event_OnFootstep(const struct FFootstepData& FootstepData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnFootstep");
		
		ARBPlayer_BP_C_Event_OnFootstep_Params params {};
		params.FootstepData = FootstepData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdatePerspective
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::UpdatePerspective()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdatePerspective");
		
		ARBPlayer_BP_C_UpdatePerspective_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateCustomization
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::UpdateCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateCustomization");
		
		ARBPlayer_BP_C_UpdateCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.OnHealthUpdated_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIncreased                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::OnHealthUpdated_Event(float newHealth, bool bIncreased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.OnHealthUpdated_Event");
		
		ARBPlayer_BP_C_OnHealthUpdated_Event_Params params {};
		params.newHealth = newHealth;
		params.bIncreased = bIncreased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.OnExtraCustomizationMeshesAddedForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              addedExtraMeshes                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::OnExtraCustomizationMeshesAddedForSlot(TArray<class USkeletalMeshComponent*> addedExtraMeshes, EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.OnExtraCustomizationMeshesAddedForSlot");
		
		ARBPlayer_BP_C_OnExtraCustomizationMeshesAddedForSlot_Params params {};
		params.addedExtraMeshes = addedExtraMeshes;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.OnAffectedByPsychosisGas_BP
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::OnAffectedByPsychosisGas_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.OnAffectedByPsychosisGas_BP");
		
		ARBPlayer_BP_C_OnAffectedByPsychosisGas_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowPickupEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPickup*                                   oldItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   newItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::UpdateShadowPickupEvent(class ARBPickup* oldItem, class ARBPickup* newItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowPickupEvent");
		
		ARBPlayer_BP_C_UpdateShadowPickupEvent_Params params {};
		params.oldItem = oldItem;
		params.newItem = newItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ReceiveTick");
		
		ARBPlayer_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ShowProxyLight
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::ShowProxyLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ShowProxyLight");
		
		ARBPlayer_BP_C_ShowProxyLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Broadcast2DSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::Broadcast2DSound(class UAkAudioEvent* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Broadcast2DSound");
		
		ARBPlayer_BP_C_Broadcast2DSound_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.OnNVAnimationDone_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isNvActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::OnNVAnimationDone_Event(bool isNvActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.OnNVAnimationDone_Event");
		
		ARBPlayer_BP_C_OnNVAnimationDone_Event_Params params {};
		params.isNvActive = isNvActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.NVAnimationDone
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::NVAnimationDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.NVAnimationDone");
		
		ARBPlayer_BP_C_NVAnimationDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnNVAnimationNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWantsNvOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENightVisionAnimNotifyType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::Event_OnNVAnimationNotify(bool bWantsNvOn, ENightVisionAnimNotifyType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnNVAnimationNotify");
		
		ARBPlayer_BP_C_Event_OnNVAnimationNotify_Params params {};
		params.bWantsNvOn = bWantsNvOn;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.SetProxylightEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::SetProxylightEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.SetProxylightEnabled");
		
		ARBPlayer_BP_C_SetProxylightEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ApplyDefaultNV
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::ApplyDefaultNV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ApplyDefaultNV");
		
		ARBPlayer_BP_C_ApplyDefaultNV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.UnderwaterStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsUnderwater                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBPlayer_BP_C::UnderwaterStateChanged(bool bIsUnderwater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.UnderwaterStateChanged");
		
		ARBPlayer_BP_C_UnderwaterStateChanged_Params params {};
		params.bIsUnderwater = bIsUnderwater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnHealthRestored
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::Event_OnHealthRestored()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnHealthRestored");
		
		ARBPlayer_BP_C_Event_OnHealthRestored_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnActiveSkillActorChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      activeSkillActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::Event_OnActiveSkillActorChanged(class AActor* activeSkillActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnActiveSkillActorChanged");
		
		ARBPlayer_BP_C_Event_OnActiveSkillActorChanged_Params params {};
		params.activeSkillActor = activeSkillActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnEnterActiveSkillLimiterZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBActiveSkillLimiterZone*                   zoneEntered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::Event_OnEnterActiveSkillLimiterZone(class ARBActiveSkillLimiterZone* zoneEntered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnEnterActiveSkillLimiterZone");
		
		ARBPlayer_BP_C_Event_OnEnterActiveSkillLimiterZone_Params params {};
		params.zoneEntered = zoneEntered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnExitActiveSkillLimiterZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBActiveSkillLimiterZone*                   zoneExited                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::Event_OnExitActiveSkillLimiterZone(class ARBActiveSkillLimiterZone* zoneExited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnExitActiveSkillLimiterZone");
		
		ARBPlayer_BP_C_Event_OnExitActiveSkillLimiterZone_Params params {};
		params.zoneExited = zoneExited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Event_OnRemainingRespawnIncreased
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::Event_OnRemainingRespawnIncreased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Event_OnRemainingRespawnIncreased");
		
		ARBPlayer_BP_C_Event_OnRemainingRespawnIncreased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ExecuteUbergraph_RBPlayer_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBPlayer_BP_C::ExecuteUbergraph_RBPlayer_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ExecuteUbergraph_RBPlayer_BP");
		
		ARBPlayer_BP_C_ExecuteUbergraph_RBPlayer_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.ShadowMeshCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::ShadowMeshCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.ShadowMeshCompleted__DelegateSignature");
		
		ARBPlayer_BP_C_ShadowMeshCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBPlayer_BP.RBPlayer_BP_C.Deleteme__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARBPlayer_BP_C::Deleteme__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBPlayer_BP.RBPlayer_BP_C.Deleteme__DelegateSignature");
		
		ARBPlayer_BP_C_Deleteme__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBPlayer_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBPlayer_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBPlayer_BP.RBPlayer_BP_C");
		return ptr;
	}

}


