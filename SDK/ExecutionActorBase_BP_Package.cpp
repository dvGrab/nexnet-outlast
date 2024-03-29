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
	 * 		Name   -> Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.GetLoopAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequence*                               Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExecutionActorBase_BP_C::GetLoopAnim(class USkeletalMeshComponent* Mesh, class UAnimSequence** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.GetLoopAnim");
		
		AExecutionActorBase_BP_C_GetLoopAnim_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.GetIntroAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequence*                               Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExecutionActorBase_BP_C::GetIntroAnim(class USkeletalMeshComponent* Mesh, class UAnimSequence** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.GetIntroAnim");
		
		AExecutionActorBase_BP_C_GetIntroAnim_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.OnRep_WitnessStarted
	 * 		Flags  -> ()
	 */
	void AExecutionActorBase_BP_C::OnRep_WitnessStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.OnRep_WitnessStarted");
		
		AExecutionActorBase_BP_C_OnRep_WitnessStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.StartWitness (Server)
	 * 		Flags  -> ()
	 */
	void AExecutionActorBase_BP_C::StartWitnessServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.StartWitness (Server)");
		
		AExecutionActorBase_BP_C_StartWitnessServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AExecutionActorBase_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.Event_OnResetStage");
		
		AExecutionActorBase_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.ExecuteUbergraph_ExecutionActorBase_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExecutionActorBase_BP_C::ExecuteUbergraph_ExecutionActorBase_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.ExecuteUbergraph_ExecutionActorBase_BP");
		
		AExecutionActorBase_BP_C_ExecuteUbergraph_ExecutionActorBase_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.OnWitnessStartedChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStarted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExecutionActorBase_BP_C::OnWitnessStartedChanged__DelegateSignature(bool bStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.OnWitnessStartedChanged__DelegateSignature");
		
		AExecutionActorBase_BP_C_OnWitnessStartedChanged__DelegateSignature_Params params {};
		params.bStarted = bStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExecutionActorBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExecutionActorBase_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExecutionActorBase_BP.ExecutionActorBase_BP_C");
		return ptr;
	}

}


