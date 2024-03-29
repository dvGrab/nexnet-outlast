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
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.BP_MapCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapCheckType                                      checkType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outErrorMsg                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AMannequinBP_Base_C::BP_MapCheck(EMapCheckType checkType, class FString* outErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.BP_MapCheck");
		
		AMannequinBP_Base_C_BP_MapCheck_Params params {};
		params.checkType = checkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outErrorMsg != nullptr)
			*outErrorMsg = params.outErrorMsg;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.GameStartInit
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::GameStartInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.GameStartInit");
		
		AMannequinBP_Base_C_GameStartInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.SetCommonMeshData
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::SetCommonMeshData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.SetCommonMeshData");
		
		AMannequinBP_Base_C_SetCommonMeshData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.SetAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationAsset*                             Animation_Data_Anim_To_Play                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMannequinBP_Base_C::SetAnimation(class UAnimationAsset* Animation_Data_Anim_To_Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.SetAnimation");
		
		AMannequinBP_Base_C_SetAnimation_Params params {};
		params.Animation_Data_Anim_To_Play = Animation_Data_Anim_To_Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.SetMasterPose
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::SetMasterPose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.SetMasterPose");
		
		AMannequinBP_Base_C_SetMasterPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.SetPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationAsset*                             Animation_Data_Anim_To_Play                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMannequinBP_Base_C::SetPose(class UAnimationAsset* Animation_Data_Anim_To_Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.SetPose");
		
		AMannequinBP_Base_C_SetPose_Params params {};
		params.Animation_Data_Anim_To_Play = Animation_Data_Anim_To_Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.DressStaticMeshPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FName, class UMaterialInstance*>        TargetMap                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AMannequinBP_Base_C::DressStaticMeshPart(int32_t Index, class UStaticMesh* NewMesh, const class FName& SocketName, TMap<class FName, class UMaterialInstance*> TargetMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.DressStaticMeshPart");
		
		AMannequinBP_Base_C_DressStaticMeshPart_Params params {};
		params.Index = Index;
		params.NewMesh = NewMesh;
		params.SocketName = SocketName;
		params.TargetMap = TargetMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.Init
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.Init");
		
		AMannequinBP_Base_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.RemoveEmptyComponents
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::RemoveEmptyComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.RemoveEmptyComponents");
		
		AMannequinBP_Base_C_RemoveEmptyComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.DressSkelMeshPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               SkelMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FName, class UMaterialInstance*>        Materials                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class USkeletalMeshComponent*                      SkelMeshPart                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMannequinBP_Base_C::DressSkelMeshPart(class USkeletalMesh* SkelMesh, TMap<class FName, class UMaterialInstance*> Materials, class USkeletalMeshComponent* SkelMeshPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.DressSkelMeshPart");
		
		AMannequinBP_Base_C_DressSkelMeshPart_Params params {};
		params.SkelMesh = SkelMesh;
		params.Materials = Materials;
		params.SkelMeshPart = SkelMeshPart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.DressMannequin
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::DressMannequin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.DressMannequin");
		
		AMannequinBP_Base_C_DressMannequin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.UserConstructionScript");
		
		AMannequinBP_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.BP_PrepareMapCheck
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::BP_PrepareMapCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.BP_PrepareMapCheck");
		
		AMannequinBP_Base_C_BP_PrepareMapCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.ReceiveBeginPlay");
		
		AMannequinBP_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.LoopingSFXManualStart
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::LoopingSFXManualStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.LoopingSFXManualStart");
		
		AMannequinBP_Base_C_LoopingSFXManualStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.LoopingSFXManualStop
	 * 		Flags  -> ()
	 */
	void AMannequinBP_Base_C::LoopingSFXManualStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.LoopingSFXManualStop");
		
		AMannequinBP_Base_C_LoopingSFXManualStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MannequinBP_Base.MannequinBP_Base_C.ExecuteUbergraph_MannequinBP_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMannequinBP_Base_C::ExecuteUbergraph_MannequinBP_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MannequinBP_Base.MannequinBP_Base_C.ExecuteUbergraph_MannequinBP_Base");
		
		AMannequinBP_Base_C_ExecuteUbergraph_MannequinBP_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMannequinBP_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMannequinBP_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MannequinBP_Base.MannequinBP_Base_C");
		return ptr;
	}

}


