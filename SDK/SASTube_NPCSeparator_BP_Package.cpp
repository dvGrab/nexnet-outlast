/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.OnRep_New Intensity
	 * 		Flags  -> ()
	 */
	void ASASTubeNPCSeparator_BP_C::OnRep_NewIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.OnRep_New Intensity");
		
		ASASTubeNPCSeparator_BP_C_OnRep_NewIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Initialize
	 * 		Flags  -> ()
	 */
	void ASASTubeNPCSeparator_BP_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Initialize");
		
		ASASTubeNPCSeparator_BP_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASASTubeNPCSeparator_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.UserConstructionScript");
		
		ASASTubeNPCSeparator_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASASTubeNPCSeparator_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Timeline_0__FinishedFunc");
		
		ASASTubeNPCSeparator_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASASTubeNPCSeparator_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Timeline_0__UpdateFunc");
		
		ASASTubeNPCSeparator_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASASTubeNPCSeparator_BP_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Timeline_1__FinishedFunc");
		
		ASASTubeNPCSeparator_BP_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASASTubeNPCSeparator_BP_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Timeline_1__UpdateFunc");
		
		ASASTubeNPCSeparator_BP_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.SetInnerDoorOutside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOutside                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASASTubeNPCSeparator_BP_C::SetInnerDoorOutside(bool bOutside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.SetInnerDoorOutside");
		
		ASASTubeNPCSeparator_BP_C_SetInnerDoorOutside_Params params {};
		params.bOutside = bOutside;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.SetExtDoorOutside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOutside                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASASTubeNPCSeparator_BP_C::SetExtDoorOutside(bool bOutside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.SetExtDoorOutside");
		
		ASASTubeNPCSeparator_BP_C_SetExtDoorOutside_Params params {};
		params.bOutside = bOutside;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Event_OnTubeStateChanged
	 * 		Flags  -> ()
	 */
	void ASASTubeNPCSeparator_BP_C::Event_OnTubeStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.Event_OnTubeStateChanged");
		
		ASASTubeNPCSeparator_BP_C_Event_OnTubeStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.SetFog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewIntensity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASTubeNPCSeparator_BP_C::SetFog(float NewIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.SetFog");
		
		ASASTubeNPCSeparator_BP_C_SetFog_Params params {};
		params.NewIntensity = NewIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.ExecuteUbergraph_SASTube-NPCSeparator_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASTubeNPCSeparator_BP_C::ExecuteUbergraph_SASTubeNPCSeparator_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.ExecuteUbergraph_SASTube-NPCSeparator_BP");
		
		ASASTubeNPCSeparator_BP_C_ExecuteUbergraph_SASTubeNPCSeparator_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.AnimationCompletedBackward__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ASASTubeNPCSeparator_BP_C::AnimationCompletedBackward__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.AnimationCompletedBackward__DelegateSignature");
		
		ASASTubeNPCSeparator_BP_C_AnimationCompletedBackward__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.AnimationCompletedForward__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ASASTubeNPCSeparator_BP_C::AnimationCompletedForward__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-NPCSeparator_BP.SASTube-NPCSeparator_BP_C.AnimationCompletedForward__DelegateSignature");
		
		ASASTubeNPCSeparator_BP_C_AnimationCompletedForward__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASASTubeNPCSeparator_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASASTubeNPCSeparator_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SASTube_NPCSeparator_BP.SASTube-NPCSeparator_BP_C");
		return ptr;
	}

}


