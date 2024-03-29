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
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.InitializeSkeletalBodySetup3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              Skelmeshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class USkeletalMeshComponent*                      MainMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      FullBodyDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      HeadOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      HairOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      UpperBodyOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      LowerBodyOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      LegsOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ArmsOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasHair                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::InitializeSkeletalBodySetup3(TArray<class USkeletalMeshComponent*>* Skelmeshes, class USkeletalMeshComponent* MainMesh, class UClass* FullBodyDefinition, class UClass* HeadOverride, class UClass* HairOverride, class UClass* UpperBodyOverride, class UClass* LowerBodyOverride, class UClass* LegsOverride, class UClass* ArmsOverride, bool bHasHair, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.InitializeSkeletalBodySetup3");
		
		URBSkeletalBodySetupFunctions_C_InitializeSkeletalBodySetup3_Params params {};
		params.MainMesh = MainMesh;
		params.FullBodyDefinition = FullBodyDefinition;
		params.HeadOverride = HeadOverride;
		params.HairOverride = HairOverride;
		params.UpperBodyOverride = UpperBodyOverride;
		params.LowerBodyOverride = LowerBodyOverride;
		params.LegsOverride = LegsOverride;
		params.ArmsOverride = ArmsOverride;
		params.bHasHair = bHasHair;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skelmeshes != nullptr)
			*Skelmeshes = params.Skelmeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyDefinitionOverrides3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _bHasHair                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class USkeletalMeshComponent*>              _SkelMeshes                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UClass*                                      Head                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Hair                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Upper                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Lower                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Legs                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Arms                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::ApplyDefinitionOverrides3(bool _bHasHair, TArray<class USkeletalMeshComponent*>* _SkelMeshes, class UClass* Head, class UClass* Hair, class UClass* Upper, class UClass* Lower, class UClass* Legs, class UClass* Arms, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyDefinitionOverrides3");
		
		URBSkeletalBodySetupFunctions_C_ApplyDefinitionOverrides3_Params params {};
		params._bHasHair = _bHasHair;
		params.Head = Head;
		params.Hair = Hair;
		params.Upper = Upper;
		params.Lower = Lower;
		params.Legs = Legs;
		params.Arms = Arms;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_SkelMeshes != nullptr)
			*_SkelMeshes = params._SkelMeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.Apply Full Body Definition 3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              Skelmeshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UClass*                                      FullBodyDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::Apply_Full_Body_Definition(TArray<class USkeletalMeshComponent*>* Skelmeshes, class UClass* FullBodyDefinition, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.Apply Full Body Definition 3");
		
		URBSkeletalBodySetupFunctions_C_Apply_Full_Body_Definition_Params params {};
		params.FullBodyDefinition = FullBodyDefinition;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skelmeshes != nullptr)
			*Skelmeshes = params.Skelmeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyDefinitionOverrides2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _bHasHair                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class USkeletalMeshComponent*>              _SkelMeshes                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class URBDeadBodyConfig*                           Head                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           Hair                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           Upper                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           Lower                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           Legs                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           Arms                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::ApplyDefinitionOverrides2(bool _bHasHair, TArray<class USkeletalMeshComponent*>* _SkelMeshes, class URBDeadBodyConfig* Head, class URBDeadBodyConfig* Hair, class URBDeadBodyConfig* Upper, class URBDeadBodyConfig* Lower, class URBDeadBodyConfig* Legs, class URBDeadBodyConfig* Arms, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyDefinitionOverrides2");
		
		URBSkeletalBodySetupFunctions_C_ApplyDefinitionOverrides2_Params params {};
		params._bHasHair = _bHasHair;
		params.Head = Head;
		params.Hair = Hair;
		params.Upper = Upper;
		params.Lower = Lower;
		params.Legs = Legs;
		params.Arms = Arms;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_SkelMeshes != nullptr)
			*_SkelMeshes = params._SkelMeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyBodyPart2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkelMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDeadBodyConfigPart                         Definition                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::ApplyBodyPart2(class USkeletalMeshComponent* SkelMesh, const struct FDeadBodyConfigPart& Definition, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyBodyPart2");
		
		URBSkeletalBodySetupFunctions_C_ApplyBodyPart2_Params params {};
		params.SkelMesh = SkelMesh;
		params.Definition = Definition;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.InitializeSkeletalBodySetup2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              Skelmeshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class USkeletalMeshComponent*                      MainMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           FullBodyDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           HeadOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           HairOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           UpperBodyOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           LowerBodyOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           LegsOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBDeadBodyConfig*                           ArmsOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasHair                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::InitializeSkeletalBodySetup2(TArray<class USkeletalMeshComponent*>* Skelmeshes, class USkeletalMeshComponent* MainMesh, class URBDeadBodyConfig* FullBodyDefinition, class URBDeadBodyConfig* HeadOverride, class URBDeadBodyConfig* HairOverride, class URBDeadBodyConfig* UpperBodyOverride, class URBDeadBodyConfig* LowerBodyOverride, class URBDeadBodyConfig* LegsOverride, class URBDeadBodyConfig* ArmsOverride, bool bHasHair, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.InitializeSkeletalBodySetup2");
		
		URBSkeletalBodySetupFunctions_C_InitializeSkeletalBodySetup2_Params params {};
		params.MainMesh = MainMesh;
		params.FullBodyDefinition = FullBodyDefinition;
		params.HeadOverride = HeadOverride;
		params.HairOverride = HairOverride;
		params.UpperBodyOverride = UpperBodyOverride;
		params.LowerBodyOverride = LowerBodyOverride;
		params.LegsOverride = LegsOverride;
		params.ArmsOverride = ArmsOverride;
		params.bHasHair = bHasHair;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skelmeshes != nullptr)
			*Skelmeshes = params.Skelmeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyFullBodyDefinition2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              Skelmeshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class URBDeadBodyConfig*                           FullBodyDefinitionBase                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::ApplyFullBodyDefinition2(TArray<class USkeletalMeshComponent*>* Skelmeshes, class URBDeadBodyConfig* FullBodyDefinitionBase, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyFullBodyDefinition2");
		
		URBSkeletalBodySetupFunctions_C_ApplyFullBodyDefinition2_Params params {};
		params.FullBodyDefinitionBase = FullBodyDefinitionBase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skelmeshes != nullptr)
			*Skelmeshes = params.Skelmeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.LobbyReagent_ApplyFullBodyDefinition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              Skelmeshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class ULobbyReagent_BodyFullDefinition_C*          FullBodyDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::LobbyReagent_ApplyFullBodyDefinition(TArray<class USkeletalMeshComponent*>* Skelmeshes, class ULobbyReagent_BodyFullDefinition_C* FullBodyDefinition, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.LobbyReagent_ApplyFullBodyDefinition");
		
		URBSkeletalBodySetupFunctions_C_LobbyReagent_ApplyFullBodyDefinition_Params params {};
		params.FullBodyDefinition = FullBodyDefinition;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skelmeshes != nullptr)
			*Skelmeshes = params.Skelmeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyAnimSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MainMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSingleAnimationPlayData                    AnimationData                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::ApplyAnimSequence(class USkeletalMeshComponent* MainMesh, const struct FSingleAnimationPlayData& AnimationData, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyAnimSequence");
		
		URBSkeletalBodySetupFunctions_C_ApplyAnimSequence_Params params {};
		params.MainMesh = MainMesh;
		params.AnimationData = AnimationData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplySkinTone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              Skelmeshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::ApplySkinTone(TArray<class USkeletalMeshComponent*>* Skelmeshes, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplySkinTone");
		
		URBSkeletalBodySetupFunctions_C_ApplySkinTone_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skelmeshes != nullptr)
			*Skelmeshes = params.Skelmeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.GetSkelMeshBodyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SearchString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class USkeletalMeshComponent*>              Skelmeshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      SkelMeshComp                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::GetSkelMeshBodyPart(const class FString& SearchString, TArray<class USkeletalMeshComponent*>* Skelmeshes, class UObject* __WorldContext, class USkeletalMeshComponent** SkelMeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.GetSkelMeshBodyPart");
		
		URBSkeletalBodySetupFunctions_C_GetSkelMeshBodyPart_Params params {};
		params.SearchString = SearchString;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skelmeshes != nullptr)
			*Skelmeshes = params.Skelmeshes;
		if (SkelMeshComp != nullptr)
			*SkelMeshComp = params.SkelMeshComp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyDefinitionOverrides
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBodyHeadDefinition_C*                       _Head_Override                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyUpperBodyDefinition_C*                  _UpperBody_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyLowerBodyDefinition_C*                  _LowerBody_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyLegsDefinition_C*                       _Legs_Override                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyArmsDefinition_C*                       _Arms_Override                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyHairDefinition_C*                       _Hair_Override                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _bHasHair                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class USkeletalMeshComponent*>              _SkelMeshes                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::ApplyDefinitionOverrides(class UBodyHeadDefinition_C* _Head_Override, class UBodyUpperBodyDefinition_C* _UpperBody_Override, class UBodyLowerBodyDefinition_C* _LowerBody_Override, class UBodyLegsDefinition_C* _Legs_Override, class UBodyArmsDefinition_C* _Arms_Override, class UBodyHairDefinition_C* _Hair_Override, bool _bHasHair, TArray<class USkeletalMeshComponent*>* _SkelMeshes, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyDefinitionOverrides");
		
		URBSkeletalBodySetupFunctions_C_ApplyDefinitionOverrides_Params params {};
		params._Head_Override = _Head_Override;
		params._UpperBody_Override = _UpperBody_Override;
		params._LowerBody_Override = _LowerBody_Override;
		params._Legs_Override = _Legs_Override;
		params._Arms_Override = _Arms_Override;
		params._Hair_Override = _Hair_Override;
		params._bHasHair = _bHasHair;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_SkelMeshes != nullptr)
			*_SkelMeshes = params._SkelMeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyBodyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkelMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBodyOutfitElement                          Definition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::ApplyBodyPart(class USkeletalMeshComponent* SkelMesh, const struct FBodyOutfitElement& Definition, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyBodyPart");
		
		URBSkeletalBodySetupFunctions_C_ApplyBodyPart_Params params {};
		params.SkelMesh = SkelMesh;
		params.Definition = Definition;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyFullBodyDefinition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              Skelmeshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UBodyFullDefinition_C*                       FullBodyDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::ApplyFullBodyDefinition(TArray<class USkeletalMeshComponent*>* Skelmeshes, class UBodyFullDefinition_C* FullBodyDefinition, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ApplyFullBodyDefinition");
		
		URBSkeletalBodySetupFunctions_C_ApplyFullBodyDefinition_Params params {};
		params.FullBodyDefinition = FullBodyDefinition;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skelmeshes != nullptr)
			*Skelmeshes = params.Skelmeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ClearMaterialOverrides
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::ClearMaterialOverrides(TArray<class USkeletalMeshComponent*>* Array, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.ClearMaterialOverrides");
		
		URBSkeletalBodySetupFunctions_C_ClearMaterialOverrides_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.InitializeSkeletalBodySetup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              Skelmeshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class USkeletalMeshComponent*                      MainMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyFullDefinition_C*                       FullBodyDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyHeadDefinition_C*                       HeadOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyHairDefinition_C*                       HairOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyUpperBodyDefinition_C*                  UpperBodyOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyLowerBodyDefinition_C*                  LowerBodyOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyLegsDefinition_C*                       LegsOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyArmsDefinition_C*                       ArmsOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasHair                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::InitializeSkeletalBodySetup(TArray<class USkeletalMeshComponent*>* Skelmeshes, class USkeletalMeshComponent* MainMesh, class UBodyFullDefinition_C* FullBodyDefinition, class UBodyHeadDefinition_C* HeadOverride, class UBodyHairDefinition_C* HairOverride, class UBodyUpperBodyDefinition_C* UpperBodyOverride, class UBodyLowerBodyDefinition_C* LowerBodyOverride, class UBodyLegsDefinition_C* LegsOverride, class UBodyArmsDefinition_C* ArmsOverride, bool bHasHair, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.InitializeSkeletalBodySetup");
		
		URBSkeletalBodySetupFunctions_C_InitializeSkeletalBodySetup_Params params {};
		params.MainMesh = MainMesh;
		params.FullBodyDefinition = FullBodyDefinition;
		params.HeadOverride = HeadOverride;
		params.HairOverride = HairOverride;
		params.UpperBodyOverride = UpperBodyOverride;
		params.LowerBodyOverride = LowerBodyOverride;
		params.LegsOverride = LegsOverride;
		params.ArmsOverride = ArmsOverride;
		params.bHasHair = bHasHair;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skelmeshes != nullptr)
			*Skelmeshes = params.Skelmeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.SetSafeMasterPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              SkelMeshComps                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class USkeletalMeshComponent*                      MasterSkelMeshComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceUpdate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::SetSafeMasterPose(TArray<class USkeletalMeshComponent*>* SkelMeshComps, class USkeletalMeshComponent* MasterSkelMeshComp, bool ForceUpdate, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.SetSafeMasterPose");
		
		URBSkeletalBodySetupFunctions_C_SetSafeMasterPose_Params params {};
		params.MasterSkelMeshComp = MasterSkelMeshComp;
		params.ForceUpdate = ForceUpdate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkelMeshComps != nullptr)
			*SkelMeshComps = params.SkelMeshComps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.SetupCollisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              SkelMeshComps                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBSkeletalBodySetupFunctions_C::SetupCollisions(TArray<class USkeletalMeshComponent*>* SkelMeshComps, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C.SetupCollisions");
		
		URBSkeletalBodySetupFunctions_C_SetupCollisions_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkelMeshComps != nullptr)
			*SkelMeshComps = params.SkelMeshComps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBSkeletalBodySetupFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBSkeletalBodySetupFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C");
		return ptr;
	}

}


