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
	 * 		Name   -> Function BPF_FX_Footstep_Spectre_PhyxMatTag.BPF_FX_Footstep_Spectre_PhyxMatTag_C.Footstep FX Spectre
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFootstepData                               footstep_data                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ARBPawn*                                     rb_pawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     forwardVector                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPF_FX_Footstep_Spectre_PhyxMatTag_C::Footstep_FX_Spectre(const struct FFootstepData& footstep_data, class ARBPawn* rb_pawn, const struct FVector& forwardVector, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_FX_Footstep_Spectre_PhyxMatTag.BPF_FX_Footstep_Spectre_PhyxMatTag_C.Footstep FX Spectre");
		
		UBPF_FX_Footstep_Spectre_PhyxMatTag_C_Footstep_FX_Spectre_Params params {};
		params.footstep_data = footstep_data;
		params.rb_pawn = rb_pawn;
		params.forwardVector = forwardVector;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPF_FX_Footstep_Spectre_PhyxMatTag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPF_FX_Footstep_Spectre_PhyxMatTag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPF_FX_Footstep_Spectre_PhyxMatTag.BPF_FX_Footstep_Spectre_PhyxMatTag_C");
		return ptr;
	}

}


