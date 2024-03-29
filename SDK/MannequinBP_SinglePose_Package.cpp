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
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.FixUp
	 * 		Flags  -> ()
	 */
	bool AMannequinBP_SinglePose_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.FixUp");
		
		AMannequinBP_SinglePose_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.DisableTick
	 * 		Flags  -> ()
	 */
	void AMannequinBP_SinglePose_C::DisableTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.DisableTick");
		
		AMannequinBP_SinglePose_C_DisableTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.SetForceBakeShadows
	 * 		Flags  -> ()
	 */
	void AMannequinBP_SinglePose_C::SetForceBakeShadows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.SetForceBakeShadows");
		
		AMannequinBP_SinglePose_C_SetForceBakeShadows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMannequinBP_SinglePose_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.UserConstructionScript");
		
		AMannequinBP_SinglePose_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AMannequinBP_SinglePose_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.OnPostActorsPasted");
		
		AMannequinBP_SinglePose_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void AMannequinBP_SinglePose_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostAddedToLevel");
		
		AMannequinBP_SinglePose_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMannequinBP_SinglePose_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostDuplicated");
		
		AMannequinBP_SinglePose_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMannequinBP_SinglePose_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostEditChange");
		
		AMannequinBP_SinglePose_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.TickSelected
	 * 		Flags  -> ()
	 */
	void AMannequinBP_SinglePose_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.TickSelected");
		
		AMannequinBP_SinglePose_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMannequinBP_SinglePose_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.ReceiveBeginPlay");
		
		AMannequinBP_SinglePose_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void AMannequinBP_SinglePose_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.OnEditorPostLoad");
		
		AMannequinBP_SinglePose_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMannequinBP_SinglePose_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.PostEditMove");
		
		AMannequinBP_SinglePose_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.ExecuteUbergraph_MannequinBP_SinglePose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMannequinBP_SinglePose_C::ExecuteUbergraph_MannequinBP_SinglePose(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_SinglePose.MannequinBP_SinglePose_C.ExecuteUbergraph_MannequinBP_SinglePose");
		
		AMannequinBP_SinglePose_C_ExecuteUbergraph_MannequinBP_SinglePose_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMannequinBP_SinglePose_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMannequinBP_SinglePose_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MannequinBP_SinglePose.MannequinBP_SinglePose_C");
		return ptr;
	}

}


