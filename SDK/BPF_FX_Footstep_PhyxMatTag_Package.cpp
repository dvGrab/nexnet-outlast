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
	 * 		Name   -> Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayLandingFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPF_FX_Footstep_PhyxMatTag_C::tmpPlayLandingFX(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayLandingFX");
		
		UBPF_FX_Footstep_PhyxMatTag_C_tmpPlayLandingFX_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayFootstepFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLeftFoot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPF_FX_Footstep_PhyxMatTag_C::tmpPlayFootstepFX(bool* IsLeftFoot, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayFootstepFX");
		
		UBPF_FX_Footstep_PhyxMatTag_C_tmpPlayFootstepFX_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLeftFoot != nullptr)
			*IsLeftFoot = params.IsLeftFoot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TestPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class UPhysicalMaterial*, class UNiagaraSystem*> PhysicsMaterialsToSystems                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UNiagaraSystem*                              DefaultSystem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPF_FX_Footstep_PhyxMatTag_C::tmpPlayVFX(struct FVector* TestPosition, TMap<class UPhysicalMaterial*, class UNiagaraSystem*>* PhysicsMaterialsToSystems, class UNiagaraSystem* DefaultSystem, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayVFX");
		
		UBPF_FX_Footstep_PhyxMatTag_C_tmpPlayVFX_Params params {};
		params.DefaultSystem = DefaultSystem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TestPosition != nullptr)
			*TestPosition = params.TestPosition;
		if (PhysicsMaterialsToSystems != nullptr)
			*PhysicsMaterialsToSystems = params.PhysicsMaterialsToSystems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.Footstep FX Landing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPF_FX_Footstep_PhyxMatTag_C::Footstep_FX_Landing(class ARBPawn* Pawn, class UObject* __WorldContext, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.Footstep FX Landing");
		
		UBPF_FX_Footstep_PhyxMatTag_C_Footstep_FX_Landing_Params params {};
		params.Pawn = Pawn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.Footstep FX Run
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFootstepData                               FootstepData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPF_FX_Footstep_PhyxMatTag_C::Footstep_FX_Run(class ARBPawn* Pawn, const struct FFootstepData& FootstepData, class UObject* __WorldContext, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.Footstep FX Run");
		
		UBPF_FX_Footstep_PhyxMatTag_C_Footstep_FX_Run_Params params {};
		params.Pawn = Pawn;
		params.FootstepData = FootstepData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPF_FX_Footstep_PhyxMatTag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPF_FX_Footstep_PhyxMatTag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C");
		return ptr;
	}

}


