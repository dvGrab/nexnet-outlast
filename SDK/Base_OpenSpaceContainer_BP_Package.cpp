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
	 * 		Name   -> Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool ABase_OpenSpaceContainer_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.FixUp");
		
		ABase_OpenSpaceContainer_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABase_OpenSpaceContainer_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.UserConstructionScript");
		
		ABase_OpenSpaceContainer_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void ABase_OpenSpaceContainer_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.OnEditorPostLoad");
		
		ABase_OpenSpaceContainer_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABase_OpenSpaceContainer_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.OnPostActorsPasted");
		
		ABase_OpenSpaceContainer_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void ABase_OpenSpaceContainer_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostAddedToLevel");
		
		ABase_OpenSpaceContainer_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_OpenSpaceContainer_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostDuplicated");
		
		ABase_OpenSpaceContainer_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_OpenSpaceContainer_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostEditChange");
		
		ABase_OpenSpaceContainer_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_OpenSpaceContainer_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostEditMove");
		
		ABase_OpenSpaceContainer_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void ABase_OpenSpaceContainer_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.TickSelected");
		
		ABase_OpenSpaceContainer_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.ExecuteUbergraph_Base_OpenSpaceContainer_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_OpenSpaceContainer_BP_C::ExecuteUbergraph_Base_OpenSpaceContainer_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.ExecuteUbergraph_Base_OpenSpaceContainer_BP");
		
		ABase_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_OpenSpaceContainer_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_OpenSpaceContainer_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C");
		return ptr;
	}

}


