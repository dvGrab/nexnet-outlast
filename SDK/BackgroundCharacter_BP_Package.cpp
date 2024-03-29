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
	 * 		Name   -> Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.SetPrecomputedVisSettings
	 * 		Flags  -> ()
	 */
	void ABackgroundCharacter_BP_C::SetPrecomputedVisSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.SetPrecomputedVisSettings");
		
		ABackgroundCharacter_BP_C_SetPrecomputedVisSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.GetFacePoseAsset
	 * 		Flags  -> ()
	 */
	class UPoseAsset* ABackgroundCharacter_BP_C::GetFacePoseAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.GetFacePoseAsset");
		
		ABackgroundCharacter_BP_C_GetFacePoseAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.BuildAppearance
	 * 		Flags  -> ()
	 */
	void ABackgroundCharacter_BP_C::BuildAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.BuildAppearance");
		
		ABackgroundCharacter_BP_C_BuildAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABackgroundCharacter_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.UserConstructionScript");
		
		ABackgroundCharacter_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABackgroundCharacter_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.ReceiveBeginPlay");
		
		ABackgroundCharacter_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.ExecuteUbergraph_BackgroundCharacter_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackgroundCharacter_BP_C::ExecuteUbergraph_BackgroundCharacter_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.ExecuteUbergraph_BackgroundCharacter_BP");
		
		ABackgroundCharacter_BP_C_ExecuteUbergraph_BackgroundCharacter_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABackgroundCharacter_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABackgroundCharacter_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BackgroundCharacter_BP.BackgroundCharacter_BP_C");
		return ptr;
	}

}


