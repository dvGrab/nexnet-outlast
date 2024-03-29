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
	 * 		Name   -> Function RollingDoor-SingleDoor_BP.RollingDoor-SingleDoor_BP_C.GetMeshOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_SingleDoor_BP_C::GetMeshOffset(struct FVector* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-SingleDoor_BP.RollingDoor-SingleDoor_BP_C.GetMeshOffset");
		
		ARollingDoor_SingleDoor_BP_C_GetMeshOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARollingDoor_SingleDoor_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARollingDoor_SingleDoor_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RollingDoor_SingleDoor_BP.RollingDoor-SingleDoor_BP_C");
		return ptr;
	}

}


