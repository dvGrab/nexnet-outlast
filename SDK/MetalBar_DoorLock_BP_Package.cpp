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
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.SnapBarToPosition
	 * 		Flags  -> ()
	 */
	void AMetalBar_DoorLock_BP_C::SnapBarToPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.SnapBarToPosition");
		
		AMetalBar_DoorLock_BP_C_SnapBarToPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetCurrentAnimSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               AnimSequence                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMetalBar_DoorLock_BP_C::GetCurrentAnimSequence(class UAnimSequence** AnimSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetCurrentAnimSequence");
		
		AMetalBar_DoorLock_BP_C_GetCurrentAnimSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimSequence != nullptr)
			*AnimSequence = params.AnimSequence;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetLockedTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  UnlockedTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void AMetalBar_DoorLock_BP_C::GetLockedTransform(struct FTransform* UnlockedTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetLockedTransform");
		
		AMetalBar_DoorLock_BP_C_GetLockedTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedTransform != nullptr)
			*UnlockedTransform = params.UnlockedTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetUnlockedTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  UnlockedTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void AMetalBar_DoorLock_BP_C::GetUnlockedTransform(struct FTransform* UnlockedTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetUnlockedTransform");
		
		AMetalBar_DoorLock_BP_C_GetUnlockedTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedTransform != nullptr)
			*UnlockedTransform = params.UnlockedTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OverrideEditorCompTranform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        compName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Transform                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FTransform AMetalBar_DoorLock_BP_C::BP_OverrideEditorCompTranform(const class FName& compName, bool bLocked, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OverrideEditorCompTranform");
		
		AMetalBar_DoorLock_BP_C_BP_OverrideEditorCompTranform_Params params {};
		params.compName = compName;
		params.bLocked = bLocked;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.OnSetup
	 * 		Flags  -> ()
	 */
	void AMetalBar_DoorLock_BP_C::OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.OnSetup");
		
		AMetalBar_DoorLock_BP_C_OnSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMetalBar_DoorLock_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.UserConstructionScript");
		
		AMetalBar_DoorLock_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OnInitialization
	 * 		Flags  -> ()
	 */
	void AMetalBar_DoorLock_BP_C::BP_OnInitialization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OnInitialization");
		
		AMetalBar_DoorLock_BP_C_BP_OnInitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void AMetalBar_DoorLock_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.Event_SnapToState");
		
		AMetalBar_DoorLock_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMetalBar_DoorLock_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.ReceiveBeginPlay");
		
		AMetalBar_DoorLock_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_ApplyAnimatedTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              curveValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactorPawn                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMetalBar_DoorLock_BP_C::BP_ApplyAnimatedTransform(float curveValue, class ARBPawn* interactorPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_ApplyAnimatedTransform");
		
		AMetalBar_DoorLock_BP_C_BP_ApplyAnimatedTransform_Params params {};
		params.curveValue = curveValue;
		params.interactorPawn = interactorPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OnDoorOwnerChanged
	 * 		Flags  -> ()
	 */
	void AMetalBar_DoorLock_BP_C::BP_OnDoorOwnerChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OnDoorOwnerChanged");
		
		AMetalBar_DoorLock_BP_C_BP_OnDoorOwnerChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AMetalBar_DoorLock_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.Event_OnResetStage");
		
		AMetalBar_DoorLock_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.ExecuteUbergraph_MetalBar-DoorLock_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMetalBar_DoorLock_BP_C::ExecuteUbergraph_MetalBar_DoorLock_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.ExecuteUbergraph_MetalBar-DoorLock_BP");
		
		AMetalBar_DoorLock_BP_C_ExecuteUbergraph_MetalBar_DoorLock_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMetalBar_DoorLock_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMetalBar_DoorLock_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MetalBar_DoorLock_BP.MetalBar-DoorLock_BP_C");
		return ptr;
	}

}


