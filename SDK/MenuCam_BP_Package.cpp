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
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.InitPageMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCam_BP_C::InitPageMaterial(int32_t PageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.InitPageMaterial");
		
		AMenuCam_BP_C_InitPageMaterial_Params params {};
		params.PageIndex = PageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.StopCycleSound
	 * 		Flags  -> ()
	 */
	void AMenuCam_BP_C::StopCycleSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.StopCycleSound");
		
		AMenuCam_BP_C_StopCycleSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.PlayCycleSound
	 * 		Flags  -> ()
	 */
	void AMenuCam_BP_C::PlayCycleSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.PlayCycleSound");
		
		AMenuCam_BP_C_PlayCycleSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.SetTickEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenuCam_BP_C::SetTickEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.SetTickEnabled");
		
		AMenuCam_BP_C_SetTickEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.Clean
	 * 		Flags  -> ()
	 */
	void AMenuCam_BP_C::Clean()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.Clean");
		
		AMenuCam_BP_C_Clean_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.UpdateMaterialWithRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCam_BP_C::UpdateMaterialWithRenderTarget(int32_t PageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.UpdateMaterialWithRenderTarget");
		
		AMenuCam_BP_C_UpdateMaterialWithRenderTarget_Params params {};
		params.PageId = PageId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.UpdateScene
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FovTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FovAnimè                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FovAdd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InRot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Base2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InVec                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCam_BP_C::UpdateScene(float FovTarget, float FovAnimè, float FovAdd, const struct FRotator& InRot, const struct FVector& Base2, const struct FVector& InVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.UpdateScene");
		
		AMenuCam_BP_C_UpdateScene_Params params {};
		params.FovTarget = FovTarget;
		params.FovAnimè = FovAnimè;
		params.FovAdd = FovAdd;
		params.InRot = InRot;
		params.Base2 = Base2;
		params.InVec = InVec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.CyclePage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CycleRight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenuCam_BP_C::CyclePage(bool CycleRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.CyclePage");
		
		AMenuCam_BP_C_CyclePage_Params params {};
		params.CycleRight = CycleRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.Init
	 * 		Flags  -> ()
	 */
	void AMenuCam_BP_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.Init");
		
		AMenuCam_BP_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.ApplyMaterialToUsedPages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PagesUsed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCam_BP_C::ApplyMaterialToUsedPages(int32_t PagesUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.ApplyMaterialToUsedPages");
		
		AMenuCam_BP_C_ApplyMaterialToUsedPages_Params params {};
		params.PagesUsed = PagesUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMenuCam_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.UserConstructionScript");
		
		AMenuCam_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.BlendCameraTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMenuCam_BP_C::BlendCameraTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.BlendCameraTimeline__FinishedFunc");
		
		AMenuCam_BP_C_BlendCameraTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.BlendCameraTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMenuCam_BP_C::BlendCameraTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.BlendCameraTimeline__UpdateFunc");
		
		AMenuCam_BP_C_BlendCameraTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMenuCam_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.Timeline_0__FinishedFunc");
		
		AMenuCam_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMenuCam_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.Timeline_0__UpdateFunc");
		
		AMenuCam_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.BlendCameraPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TargetFOV                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCam_BP_C::BlendCameraPosition(const struct FRotator& TargetRotation, float TargetFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.BlendCameraPosition");
		
		AMenuCam_BP_C_BlendCameraPosition_Params params {};
		params.TargetRotation = TargetRotation;
		params.TargetFOV = TargetFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.SelectMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MenuID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCam_BP_C::SelectMenu(int32_t MenuID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.SelectMenu");
		
		AMenuCam_BP_C_SelectMenu_Params params {};
		params.MenuID = MenuID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCam_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.ReceiveTick");
		
		AMenuCam_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMenuCam_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.ReceiveBeginPlay");
		
		AMenuCam_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCam_BP.MenuCam_BP_C.ExecuteUbergraph_MenuCam_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCam_BP_C::ExecuteUbergraph_MenuCam_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCam_BP.MenuCam_BP_C.ExecuteUbergraph_MenuCam_BP");
		
		AMenuCam_BP_C_ExecuteUbergraph_MenuCam_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMenuCam_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMenuCam_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MenuCam_BP.MenuCam_BP_C");
		return ptr;
	}

}


