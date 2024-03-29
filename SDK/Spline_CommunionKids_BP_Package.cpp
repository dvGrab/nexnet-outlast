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
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.RefreshCollisionState
	 * 		Flags  -> ()
	 */
	void ASpline_CommunionKids_BP_C::RefreshCollisionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.RefreshCollisionState");
		
		ASpline_CommunionKids_BP_C_RefreshCollisionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.IsSplineAnchorParentPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpline_CommunionKids_BP_C::IsSplineAnchorParentPlaying(bool* bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.IsSplineAnchorParentPlaying");
		
		ASpline_CommunionKids_BP_C_IsSplineAnchorParentPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bActive != nullptr)
			*bActive = params.bActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.GetSplineAnchorParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASplineAnchor_BP_C*                          SplineAnchorParent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASpline_CommunionKids_BP_C::GetSplineAnchorParent(class ASplineAnchor_BP_C** SplineAnchorParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.GetSplineAnchorParent");
		
		ASpline_CommunionKids_BP_C_GetSplineAnchorParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SplineAnchorParent != nullptr)
			*SplineAnchorParent = params.SplineAnchorParent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASpline_CommunionKids_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.UserConstructionScript");
		
		ASpline_CommunionKids_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.StartStaring
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      StaringActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASpline_CommunionKids_BP_C::StartStaring(class AActor* StaringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.StartStaring");
		
		ASpline_CommunionKids_BP_C_StartStaring_Params params {};
		params.StaringActor = StaringActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.StartPraying
	 * 		Flags  -> ()
	 */
	void ASpline_CommunionKids_BP_C::StartPraying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.StartPraying");
		
		ASpline_CommunionKids_BP_C_StartPraying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.StartEating
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASpline_CommunionKids_BP_C::StartEating(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.StartEating");
		
		ASpline_CommunionKids_BP_C_StartEating_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.DoneEating
	 * 		Flags  -> ()
	 */
	void ASpline_CommunionKids_BP_C::DoneEating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.DoneEating");
		
		ASpline_CommunionKids_BP_C_DoneEating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASpline_CommunionKids_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.ReceiveBeginPlay");
		
		ASpline_CommunionKids_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.SplineAnchorMovingStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMoving                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpline_CommunionKids_BP_C::SplineAnchorMovingStateChanged(bool bMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.SplineAnchorMovingStateChanged");
		
		ASpline_CommunionKids_BP_C_SplineAnchorMovingStateChanged_Params params {};
		params.bMoving = bMoving;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.ExecuteUbergraph_Spline_CommunionKids_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASpline_CommunionKids_BP_C::ExecuteUbergraph_Spline_CommunionKids_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.ExecuteUbergraph_Spline_CommunionKids_BP");
		
		ASpline_CommunionKids_BP_C_ExecuteUbergraph_Spline_CommunionKids_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpline_CommunionKids_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpline_CommunionKids_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Spline_CommunionKids_BP.Spline_CommunionKids_BP_C");
		return ptr;
	}

}


