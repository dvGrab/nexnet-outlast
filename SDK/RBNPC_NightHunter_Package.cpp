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
	 * 		Name   -> Function RBNPC_NightHunter.RBNPC_NightHunter_C.GetFacePoseAsset
	 * 		Flags  -> ()
	 */
	class UPoseAsset* ARBNPC_NightHunter_C::GetFacePoseAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_NightHunter.RBNPC_NightHunter_C.GetFacePoseAsset");
		
		ARBNPC_NightHunter_C_GetFacePoseAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_NightHunter.RBNPC_NightHunter_C.GetFaceFXSkeletalMeshComponent
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARBNPC_NightHunter_C::GetFaceFXSkeletalMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_NightHunter.RBNPC_NightHunter_C.GetFaceFXSkeletalMeshComponent");
		
		ARBNPC_NightHunter_C_GetFaceFXSkeletalMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_NightHunter.RBNPC_NightHunter_C.DetectionFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ArcWidth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ArcRate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_NightHunter_C::DetectionFeedback(float ArcWidth, float ArcRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_NightHunter.RBNPC_NightHunter_C.DetectionFeedback");
		
		ARBNPC_NightHunter_C_DetectionFeedback_Params params {};
		params.ArcWidth = ArcWidth;
		params.ArcRate = ArcRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_NightHunter.RBNPC_NightHunter_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBNPC_NightHunter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_NightHunter.RBNPC_NightHunter_C.UserConstructionScript");
		
		ARBNPC_NightHunter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_NightHunter.RBNPC_NightHunter_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ARBNPC_NightHunter_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_NightHunter.RBNPC_NightHunter_C.Timeline_0__FinishedFunc");
		
		ARBNPC_NightHunter_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_NightHunter.RBNPC_NightHunter_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ARBNPC_NightHunter_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_NightHunter.RBNPC_NightHunter_C.Timeline_0__UpdateFunc");
		
		ARBNPC_NightHunter_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_NightHunter.RBNPC_NightHunter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARBNPC_NightHunter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_NightHunter.RBNPC_NightHunter_C.ReceiveBeginPlay");
		
		ARBNPC_NightHunter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_NightHunter.RBNPC_NightHunter_C.ExecuteUbergraph_RBNPC_NightHunter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_NightHunter_C::ExecuteUbergraph_RBNPC_NightHunter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_NightHunter.RBNPC_NightHunter_C.ExecuteUbergraph_RBNPC_NightHunter");
		
		ARBNPC_NightHunter_C_ExecuteUbergraph_RBNPC_NightHunter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBNPC_NightHunter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBNPC_NightHunter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBNPC_NightHunter.RBNPC_NightHunter_C");
		return ptr;
	}

}


