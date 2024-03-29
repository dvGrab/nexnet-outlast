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
	 * 		Name   -> Function ChainFenceTopCorridor-01_BP.ChainFenceTopCorridor-01_BP_C.RowVariables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     MeshesArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              SizeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalSize                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalSize2                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalSize3                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FirstMeshSize                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MiddleSizeLeft                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MiddleSizeLeft2                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LastMeshSize                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumOfMeshes                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChainFenceTopCorridor__BP_C::RowVariables(TArray<struct FModuleMeshData>* MeshesArray, float SizeLeft, float* TotalSize, float* TotalSize2, float* TotalSize3, float* FirstMeshSize, float* MiddleSizeLeft, float* MiddleSizeLeft2, float* LastMeshSize, int32_t* NumOfMeshes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChainFenceTopCorridor-01_BP.ChainFenceTopCorridor-01_BP_C.RowVariables");
		
		AChainFenceTopCorridor__BP_C_RowVariables_Params params {};
		params.SizeLeft = SizeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshesArray != nullptr)
			*MeshesArray = params.MeshesArray;
		if (TotalSize != nullptr)
			*TotalSize = params.TotalSize;
		if (TotalSize2 != nullptr)
			*TotalSize2 = params.TotalSize2;
		if (TotalSize3 != nullptr)
			*TotalSize3 = params.TotalSize3;
		if (FirstMeshSize != nullptr)
			*FirstMeshSize = params.FirstMeshSize;
		if (MiddleSizeLeft != nullptr)
			*MiddleSizeLeft = params.MiddleSizeLeft;
		if (MiddleSizeLeft2 != nullptr)
			*MiddleSizeLeft2 = params.MiddleSizeLeft2;
		if (LastMeshSize != nullptr)
			*LastMeshSize = params.LastMeshSize;
		if (NumOfMeshes != nullptr)
			*NumOfMeshes = params.NumOfMeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChainFenceTopCorridor-01_BP.ChainFenceTopCorridor-01_BP_C.SetCastShadow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CastShadows                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChainFenceTopCorridor__BP_C::SetCastShadow(bool CastShadows)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChainFenceTopCorridor-01_BP.ChainFenceTopCorridor-01_BP_C.SetCastShadow");
		
		AChainFenceTopCorridor__BP_C_SetCastShadow_Params params {};
		params.CastShadows = CastShadows;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChainFenceTopCorridor-01_BP.ChainFenceTopCorridor-01_BP_C.setVariables
	 * 		Flags  -> ()
	 */
	void AChainFenceTopCorridor__BP_C::setVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChainFenceTopCorridor-01_BP.ChainFenceTopCorridor-01_BP_C.setVariables");
		
		AChainFenceTopCorridor__BP_C_setVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChainFenceTopCorridor-01_BP.ChainFenceTopCorridor-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AChainFenceTopCorridor__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChainFenceTopCorridor-01_BP.ChainFenceTopCorridor-01_BP_C.UserConstructionScript");
		
		AChainFenceTopCorridor__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChainFenceTopCorridor__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChainFenceTopCorridor__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChainFenceTopCorridor_01_BP.ChainFenceTopCorridor-01_BP_C");
		return ptr;
	}

}


