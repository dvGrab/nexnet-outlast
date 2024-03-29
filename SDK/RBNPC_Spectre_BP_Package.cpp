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
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateSpectreMeshes
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::UpdateSpectreMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateSpectreMeshes");
		
		ARBNPC_Spectre_BP_C_UpdateSpectreMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Update Spectre Meshes Visibiliy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OldMeshVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllMeshesVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBNPC_Spectre_BP_C::Update_Spectre_Meshes_Visibiliy(bool OldMeshVisible, bool AllMeshesVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Update Spectre Meshes Visibiliy");
		
		ARBNPC_Spectre_BP_C_Update_Spectre_Meshes_Visibiliy_Params params {};
		params.OldMeshVisible = OldMeshVisible;
		params.AllMeshesVisible = AllMeshesVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateSpectreVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SpectreMesh                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBNPC_Spectre_BP_C::UpdateSpectreVisibility(class USkeletalMeshComponent* SpectreMesh, bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateSpectreVisibility");
		
		ARBNPC_Spectre_BP_C_UpdateSpectreVisibility_Params params {};
		params.SpectreMesh = SpectreMesh;
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateRandomOffset
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::UpdateRandomOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateRandomOffset");
		
		ARBNPC_Spectre_BP_C_UpdateRandomOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateSpectre
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::UpdateSpectre()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateSpectre");
		
		ARBNPC_Spectre_BP_C_UpdateSpectre_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UserConstructionScript");
		
		ARBNPC_Spectre_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_0__FinishedFunc");
		
		ARBNPC_Spectre_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_0__UpdateFunc");
		
		ARBNPC_Spectre_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_2__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_2__FinishedFunc");
		
		ARBNPC_Spectre_BP_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_2__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_2__UpdateFunc");
		
		ARBNPC_Spectre_BP_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_3__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::Timeline_3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_3__FinishedFunc");
		
		ARBNPC_Spectre_BP_C_Timeline_3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_3__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::Timeline_3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_3__UpdateFunc");
		
		ARBNPC_Spectre_BP_C_Timeline_3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ReceiveBeginPlay");
		
		ARBNPC_Spectre_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Spectre_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ReceiveTick");
		
		ARBNPC_Spectre_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.SetNormalMeshVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBNPC_Spectre_BP_C::SetNormalMeshVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.SetNormalMeshVisibility");
		
		ARBNPC_Spectre_BP_C_SetNormalMeshVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ReceiveDestroyed");
		
		ARBNPC_Spectre_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.MotionBlurByBones
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                ListOfBones                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class USkeletalMeshComponent*>              Target                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FVector                                     Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Spectre_BP_C::MotionBlurByBones(TArray<class FName> ListOfBones, TArray<class USkeletalMeshComponent*> Target, const struct FVector& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.MotionBlurByBones");
		
		ARBNPC_Spectre_BP_C_MotionBlurByBones_Params params {};
		params.ListOfBones = ListOfBones;
		params.Target = Target;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.MotionBlurSwap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              blurIntensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Spectre_BP_C::MotionBlurSwap(float blurIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.MotionBlurSwap");
		
		ARBNPC_Spectre_BP_C_MotionBlurSwap_Params params {};
		params.blurIntensity = blurIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreVisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldBeVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBNPC_Spectre_BP_C::Event_OnSpectreVisibilityChanged(bool bShouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreVisibilityChanged");
		
		ARBNPC_Spectre_BP_C_Event_OnSpectreVisibilityChanged_Params params {};
		params.bShouldBeVisible = bShouldBeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.startGlitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBNPC_Spectre_BP_C::startGlitch(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.startGlitch");
		
		ARBNPC_Spectre_BP_C_startGlitch_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreVisualTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAISpectreVisualType                               oldType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAISpectreVisualType                               NewType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Spectre_BP_C::Event_OnSpectreVisualTypeChanged(EAISpectreVisualType oldType, EAISpectreVisualType NewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreVisualTypeChanged");
		
		ARBNPC_Spectre_BP_C_Event_OnSpectreVisualTypeChanged_Params params {};
		params.oldType = oldType;
		params.NewType = NewType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.StartBlackHole
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::StartBlackHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.StartBlackHole");
		
		ARBNPC_Spectre_BP_C_StartBlackHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.setScaleMesh
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::setScaleMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.setScaleMesh");
		
		ARBNPC_Spectre_BP_C_setScaleMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreIntroSpecialMoveStarted
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::Event_OnSpectreIntroSpecialMoveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreIntroSpecialMoveStarted");
		
		ARBNPC_Spectre_BP_C_Event_OnSpectreIntroSpecialMoveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreOutroSpecialMoveStarted
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::Event_OnSpectreOutroSpecialMoveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreOutroSpecialMoveStarted");
		
		ARBNPC_Spectre_BP_C_Event_OnSpectreOutroSpecialMoveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnFootstep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFootstepData                               FootstepData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ARBNPC_Spectre_BP_C::Event_OnFootstep(const struct FFootstepData& FootstepData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnFootstep");
		
		ARBNPC_Spectre_BP_C_Event_OnFootstep_Params params {};
		params.FootstepData = FootstepData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.BlurHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              blurIntensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Spectre_BP_C::BlurHead(float blurIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.BlurHead");
		
		ARBNPC_Spectre_BP_C_BlurHead_Params params {};
		params.blurIntensity = blurIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.EntityAnimControl
	 * 		Flags  -> ()
	 */
	void ARBNPC_Spectre_BP_C::EntityAnimControl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.EntityAnimControl");
		
		ARBNPC_Spectre_BP_C_EntityAnimControl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ExecuteUbergraph_RBNPC_Spectre_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Spectre_BP_C::ExecuteUbergraph_RBNPC_Spectre_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ExecuteUbergraph_RBNPC_Spectre_BP");
		
		ARBNPC_Spectre_BP_C_ExecuteUbergraph_RBNPC_Spectre_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBNPC_Spectre_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBNPC_Spectre_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBNPC_Spectre_BP.RBNPC_Spectre_BP_C");
		return ptr;
	}

}


