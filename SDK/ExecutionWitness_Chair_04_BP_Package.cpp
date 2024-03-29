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
	 * 		Name   -> Function ExecutionWitness_Chair_04_BP.ExecutionWitness_Chair_04_BP_C.GetLoopAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequence*                               Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExecutionWitness_Chair_04_BP_C::GetLoopAnim(class USkeletalMeshComponent* Mesh, class UAnimSequence** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionWitness_Chair_04_BP.ExecutionWitness_Chair_04_BP_C.GetLoopAnim");
		
		AExecutionWitness_Chair_04_BP_C_GetLoopAnim_Params params {};
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
	 * 		Name   -> Function ExecutionWitness_Chair_04_BP.ExecutionWitness_Chair_04_BP_C.GetIntroAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequence*                               Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExecutionWitness_Chair_04_BP_C::GetIntroAnim(class USkeletalMeshComponent* Mesh, class UAnimSequence** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionWitness_Chair_04_BP.ExecutionWitness_Chair_04_BP_C.GetIntroAnim");
		
		AExecutionWitness_Chair_04_BP_C_GetIntroAnim_Params params {};
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
	 * 		Name   -> Function ExecutionWitness_Chair_04_BP.ExecutionWitness_Chair_04_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AExecutionWitness_Chair_04_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionWitness_Chair_04_BP.ExecutionWitness_Chair_04_BP_C.UserConstructionScript");
		
		AExecutionWitness_Chair_04_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExecutionWitness_Chair_04_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExecutionWitness_Chair_04_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExecutionWitness_Chair_04_BP.ExecutionWitness_Chair_04_BP_C");
		return ptr;
	}

}


