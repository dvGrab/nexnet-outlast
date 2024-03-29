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
	 * 		Name   -> Function CineSpectre_BP.CineSpectre_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ACineSpectre_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineSpectre_BP.CineSpectre_BP_C.Timeline_0__FinishedFunc");
		
		ACineSpectre_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineSpectre_BP.CineSpectre_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ACineSpectre_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineSpectre_BP.CineSpectre_BP_C.Timeline_0__UpdateFunc");
		
		ACineSpectre_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineSpectre_BP.CineSpectre_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACineSpectre_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineSpectre_BP.CineSpectre_BP_C.ReceiveBeginPlay");
		
		ACineSpectre_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineSpectre_BP.CineSpectre_BP_C.MotionBlurByBones
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                ListOfBones                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACineSpectre_BP_C::MotionBlurByBones(TArray<class FName> ListOfBones, const struct FVector& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineSpectre_BP.CineSpectre_BP_C.MotionBlurByBones");
		
		ACineSpectre_BP_C_MotionBlurByBones_Params params {};
		params.ListOfBones = ListOfBones;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineSpectre_BP.CineSpectre_BP_C.MotionBlurSwap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              blurIntensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACineSpectre_BP_C::MotionBlurSwap(float blurIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineSpectre_BP.CineSpectre_BP_C.MotionBlurSwap");
		
		ACineSpectre_BP_C_MotionBlurSwap_Params params {};
		params.blurIntensity = blurIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineSpectre_BP.CineSpectre_BP_C.DesactivateParticles
	 * 		Flags  -> ()
	 */
	void ACineSpectre_BP_C::DesactivateParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineSpectre_BP.CineSpectre_BP_C.DesactivateParticles");
		
		ACineSpectre_BP_C_DesactivateParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineSpectre_BP.CineSpectre_BP_C.ExecuteUbergraph_CineSpectre_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACineSpectre_BP_C::ExecuteUbergraph_CineSpectre_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineSpectre_BP.CineSpectre_BP_C.ExecuteUbergraph_CineSpectre_BP");
		
		ACineSpectre_BP_C_ExecuteUbergraph_CineSpectre_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACineSpectre_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineSpectre_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CineSpectre_BP.CineSpectre_BP_C");
		return ptr;
	}

}


