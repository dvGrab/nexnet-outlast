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
	 * 		Name   -> Function ChainFence-01_BP.ChainFence-01_BP_C.FindAlphaScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              AlphaScale                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChainFence__BP_C::FindAlphaScale(TArray<struct FModuleMeshData>* Array, float* AlphaScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChainFence-01_BP.ChainFence-01_BP_C.FindAlphaScale");
		
		AChainFence__BP_C_FindAlphaScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (AlphaScale != nullptr)
			*AlphaScale = params.AlphaScale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChainFence-01_BP.ChainFence-01_BP_C.MakePoleArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     SourceDefault                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FModuleMeshData>                     Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FModuleMeshData>                     Target                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AChainFence__BP_C::MakePoleArray(TArray<struct FModuleMeshData>* SourceDefault, TArray<struct FModuleMeshData>* Source, TArray<struct FModuleMeshData> Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChainFence-01_BP.ChainFence-01_BP_C.MakePoleArray");
		
		AChainFence__BP_C_MakePoleArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceDefault != nullptr)
			*SourceDefault = params.SourceDefault;
		if (Source != nullptr)
			*Source = params.Source;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChainFence-01_BP.ChainFence-01_BP_C.SetAutomaticCollisionMeshExclusions
	 * 		Flags  -> ()
	 */
	void AChainFence__BP_C::SetAutomaticCollisionMeshExclusions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChainFence-01_BP.ChainFence-01_BP_C.SetAutomaticCollisionMeshExclusions");
		
		AChainFence__BP_C_SetAutomaticCollisionMeshExclusions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChainFence-01_BP.ChainFence-01_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AChainFence__BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChainFence-01_BP.ChainFence-01_BP_C.GetStateName");
		
		AChainFence__BP_C_GetStateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stateA != nullptr)
			*stateA = params.stateA;
		if (stateB != nullptr)
			*stateB = params.stateB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChainFence-01_BP.ChainFence-01_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool AChainFence__BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChainFence-01_BP.ChainFence-01_BP_C.IsStateA");
		
		AChainFence__BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChainFence-01_BP.ChainFence-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AChainFence__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChainFence-01_BP.ChainFence-01_BP_C.UserConstructionScript");
		
		AChainFence__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChainFence__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChainFence__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChainFence_01_BP.ChainFence-01_BP_C");
		return ptr;
	}

}


