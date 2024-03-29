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
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.GetObjectiveTypeIndex
	 * 		Flags  -> ()
	 */
	int32_t ACorpseSearch_BP_C::GetObjectiveTypeIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.GetObjectiveTypeIndex");
		
		ACorpseSearch_BP_C_GetObjectiveTypeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.GetAssociatedInvestigationComponent
	 * 		Flags  -> ()
	 */
	class URBPlayerInvestigationZoneComponent* ACorpseSearch_BP_C::GetAssociatedInvestigationComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.GetAssociatedInvestigationComponent");
		
		ACorpseSearch_BP_C_GetAssociatedInvestigationComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.GetClue
	 * 		Flags  -> ()
	 */
	struct FClueData ACorpseSearch_BP_C::GetClue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.GetClue");
		
		ACorpseSearch_BP_C_GetClue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.GetSpecificObjectiveActorTarget
	 * 		Flags  -> ()
	 */
	class AActor* ACorpseSearch_BP_C::GetSpecificObjectiveActorTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.GetSpecificObjectiveActorTarget");
		
		ACorpseSearch_BP_C_GetSpecificObjectiveActorTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool ACorpseSearch_BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.GetStateName");
		
		ACorpseSearch_BP_C_GetStateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stateA != nullptr)
			*stateA = params.stateA;
		if (stateB != nullptr)
			*stateB = params.stateB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool ACorpseSearch_BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.IsStateA");
		
		ACorpseSearch_BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool ACorpseSearch_BP_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.ShouldBeIgnoredForLots");
		
		ACorpseSearch_BP_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.ApplyClue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClueSpotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        clueName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACorpseSearch_BP_C::ApplyClue(int32_t ClueSpotIndex, const class FName& clueName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.ApplyClue");
		
		ACorpseSearch_BP_C_ApplyClue_Params params {};
		params.ClueSpotIndex = ClueSpotIndex;
		params.clueName = clueName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.Set Clues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    DynMaterial                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ClueRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   CluePosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ClueScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACorpseSearch_BP_C::SetClues(class UMaterialInstanceDynamic* DynMaterial, class UTexture* Texture, float ClueRotation, const struct FVector2D& CluePosition, const struct FVector2D& ClueScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.Set Clues");
		
		ACorpseSearch_BP_C_SetClues_Params params {};
		params.DynMaterial = DynMaterial;
		params.Texture = Texture;
		params.ClueRotation = ClueRotation;
		params.CluePosition = CluePosition;
		params.ClueScale = ClueScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.CreateDynamicMat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMeshComponent*                              Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DynamicMat                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACorpseSearch_BP_C::CreateDynamicMat(class UMeshComponent* Target, class UMaterialInstanceDynamic** DynamicMat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.CreateDynamicMat");
		
		ACorpseSearch_BP_C_CreateDynamicMat_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicMat != nullptr)
			*DynamicMat = params.DynamicMat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.OnRep_Clue
	 * 		Flags  -> ()
	 */
	void ACorpseSearch_BP_C::OnRep_Clue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.OnRep_Clue");
		
		ACorpseSearch_BP_C_OnRep_Clue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.GetSpawnedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPickup*                                   Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACorpseSearch_BP_C::GetSpawnedItem(class ARBPickup** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.GetSpawnedItem");
		
		ACorpseSearch_BP_C_GetSpawnedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.SetTickEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACorpseSearch_BP_C::SetTickEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.SetTickEnabled");
		
		ACorpseSearch_BP_C_SetTickEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACorpseSearch_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.UserConstructionScript");
		
		ACorpseSearch_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACorpseSearch_BP_C::SetState(bool bStateA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.SetState");
		
		ACorpseSearch_BP_C_SetState_Params params {};
		params.bStateA = bStateA;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.SetShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACorpseSearch_BP_C::SetShouldBeIgnoredForLots(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.SetShouldBeIgnoredForLots");
		
		ACorpseSearch_BP_C_SetShouldBeIgnoredForLots_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.Set Server Interactor Ready
	 * 		Flags  -> ()
	 */
	void ACorpseSearch_BP_C::SetServerInteractorReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.Set Server Interactor Ready");
		
		ACorpseSearch_BP_C_SetServerInteractorReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.OnSpawnedItemInfosChanged
	 * 		Flags  -> ()
	 */
	void ACorpseSearch_BP_C::OnSpawnedItemInfosChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.OnSpawnedItemInfosChanged");
		
		ACorpseSearch_BP_C_OnSpawnedItemInfosChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACorpseSearch_BP_C::BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature");
		
		ACorpseSearch_BP_C_BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.OnObjectFound
	 * 		Flags  -> ()
	 */
	void ACorpseSearch_BP_C::OnObjectFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.OnObjectFound");
		
		ACorpseSearch_BP_C_OnObjectFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.SetClue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClueData                                   ClueData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ACorpseSearch_BP_C::SetClue(const struct FClueData& ClueData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.SetClue");
		
		ACorpseSearch_BP_C_SetClue_Params params {};
		params.ClueData = ClueData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACorpseSearch_BP_C::BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature");
		
		ACorpseSearch_BP_C_BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACorpseSearch_BP_C::BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature");
		
		ACorpseSearch_BP_C_BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.ExecuteUbergraph_CorpseSearch_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACorpseSearch_BP_C::ExecuteUbergraph_CorpseSearch_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.ExecuteUbergraph_CorpseSearch_BP");
		
		ACorpseSearch_BP_C_ExecuteUbergraph_CorpseSearch_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.ResetAnimation__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ACorpseSearch_BP_C::ResetAnimation__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.ResetAnimation__DelegateSignature");
		
		ACorpseSearch_BP_C_ResetAnimation__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.StartAnimation__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ACorpseSearch_BP_C::StartAnimation__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.StartAnimation__DelegateSignature");
		
		ACorpseSearch_BP_C_StartAnimation__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_BP.CorpseSearch_BP_C.StopAnimation__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACorpseSearch_BP_C::StopAnimation__DelegateSignature(bool IsSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_BP.CorpseSearch_BP_C.StopAnimation__DelegateSignature");
		
		ACorpseSearch_BP_C_StopAnimation__DelegateSignature_Params params {};
		params.IsSuccess = IsSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACorpseSearch_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACorpseSearch_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CorpseSearch_BP.CorpseSearch_BP_C");
		return ptr;
	}

}


