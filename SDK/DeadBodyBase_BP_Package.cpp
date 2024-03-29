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
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool ADeadBodyBase_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.FixUp");
		
		ADeadBodyBase_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.Dress
	 * 		Flags  -> ()
	 */
	void ADeadBodyBase_BP_C::Dress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.Dress");
		
		ADeadBodyBase_BP_C_Dress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.DeprecateOldOverrides
	 * 		Flags  -> ()
	 */
	void ADeadBodyBase_BP_C::DeprecateOldOverrides()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.DeprecateOldOverrides");
		
		ADeadBodyBase_BP_C_DeprecateOldOverrides_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.GetAssociatedDeadBodyConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     def                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADeadBodyBase_BP_C::GetAssociatedDeadBodyConfig(class UObject* def, class UClass** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.GetAssociatedDeadBodyConfig");
		
		ADeadBodyBase_BP_C_GetAssociatedDeadBodyConfig_Params params {};
		params.def = def;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.SetupCollisions
	 * 		Flags  -> ()
	 */
	void ADeadBodyBase_BP_C::SetupCollisions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.SetupCollisions");
		
		ADeadBodyBase_BP_C_SetupCollisions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.SetCommonParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              Skelmeshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ADeadBodyBase_BP_C::SetCommonParameters(TArray<class USkeletalMeshComponent*>* Skelmeshes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.SetCommonParameters");
		
		ADeadBodyBase_BP_C_SetCommonParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skelmeshes != nullptr)
			*Skelmeshes = params.Skelmeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ADeadBodyBase_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.UserConstructionScript");
		
		ADeadBodyBase_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void ADeadBodyBase_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostAddedToLevel");
		
		ADeadBodyBase_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADeadBodyBase_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostDuplicated");
		
		ADeadBodyBase_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADeadBodyBase_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostEditChange");
		
		ADeadBodyBase_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeadBodyBase_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.PostEditMove");
		
		ADeadBodyBase_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void ADeadBodyBase_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.TickSelected");
		
		ADeadBodyBase_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ADeadBodyBase_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.ReceiveBeginPlay");
		
		ADeadBodyBase_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnWorldFullyLoaded
	 * 		Flags  -> ()
	 */
	void ADeadBodyBase_BP_C::OnWorldFullyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnWorldFullyLoaded");
		
		ADeadBodyBase_BP_C_OnWorldFullyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void ADeadBodyBase_BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnWorldPopulateFinished");
		
		ADeadBodyBase_BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void ADeadBodyBase_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnEditorPostLoad");
		
		ADeadBodyBase_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ADeadBodyBase_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.OnPostActorsPasted");
		
		ADeadBodyBase_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBodyBase_BP.DeadBodyBase_BP_C.ExecuteUbergraph_DeadBodyBase_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADeadBodyBase_BP_C::ExecuteUbergraph_DeadBodyBase_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBodyBase_BP.DeadBodyBase_BP_C.ExecuteUbergraph_DeadBodyBase_BP");
		
		ADeadBodyBase_BP_C_ExecuteUbergraph_DeadBodyBase_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADeadBodyBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeadBodyBase_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBodyBase_BP.DeadBodyBase_BP_C");
		return ptr;
	}

}


