﻿/**
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
	 * 		Name   -> Function RBAnimNotify_PlayAnimationOnFutterman.RBAnimNotify_PlayAnimationOnFutterman_C.GetNotifyName
	 * 		Flags  -> ()
	 */
	class FString URBAnimNotify_PlayAnimationOnFutterman_C::GetNotifyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBAnimNotify_PlayAnimationOnFutterman.RBAnimNotify_PlayAnimationOnFutterman_C.GetNotifyName");
		
		URBAnimNotify_PlayAnimationOnFutterman_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBAnimNotify_PlayAnimationOnFutterman.RBAnimNotify_PlayAnimationOnFutterman_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      meshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool URBAnimNotify_PlayAnimationOnFutterman_C::Received_Notify(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBAnimNotify_PlayAnimationOnFutterman.RBAnimNotify_PlayAnimationOnFutterman_C.Received_Notify");
		
		URBAnimNotify_PlayAnimationOnFutterman_C_Received_Notify_Params params {};
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
	 * 		Name   -> PredefinedFunction URBAnimNotify_PlayAnimationOnFutterman_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBAnimNotify_PlayAnimationOnFutterman_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBAnimNotify_PlayAnimationOnFutterman.RBAnimNotify_PlayAnimationOnFutterman_C");
		return ptr;
	}

}


