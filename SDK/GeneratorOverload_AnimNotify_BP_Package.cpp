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
	 * 		Name   -> Function GeneratorOverload_AnimNotify_BP.GeneratorOverload_AnimNotify_BP_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      meshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGeneratorOverload_AnimNotify_BP_C::Received_Notify(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeneratorOverload_AnimNotify_BP.GeneratorOverload_AnimNotify_BP_C.Received_Notify");
		
		UGeneratorOverload_AnimNotify_BP_C_Received_Notify_Params params {};
		params.meshComp = meshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorOverload_AnimNotify_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorOverload_AnimNotify_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GeneratorOverload_AnimNotify_BP.GeneratorOverload_AnimNotify_BP_C");
		return ptr;
	}

}


