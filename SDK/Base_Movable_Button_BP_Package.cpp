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
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool ABase_Movable_Button_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.FixUp");
		
		ABase_Movable_Button_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.IsLocked
	 * 		Flags  -> ()
	 */
	bool ABase_Movable_Button_BP_C::IsLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.IsLocked");
		
		ABase_Movable_Button_BP_C_IsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnRep_bLocked
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::OnRep_bLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnRep_bLocked");
		
		ABase_Movable_Button_BP_C_OnRep_bLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.UpdateButtonPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_Movable_Button_BP_C::UpdateButtonPosition(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.UpdateButtonPosition");
		
		ABase_Movable_Button_BP_C_UpdateButtonPosition_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.UserConstructionScript");
		
		ABase_Movable_Button_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.ButtonLiftTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::ButtonLiftTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.ButtonLiftTimeline__FinishedFunc");
		
		ABase_Movable_Button_BP_C_ButtonLiftTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.ButtonLiftTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::ButtonLiftTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.ButtonLiftTimeline__UpdateFunc");
		
		ABase_Movable_Button_BP_C_ButtonLiftTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABase_Movable_Button_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnPostActorsPasted");
		
		ABase_Movable_Button_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostAddedToLevel");
		
		ABase_Movable_Button_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_Movable_Button_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostDuplicated");
		
		ABase_Movable_Button_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_Movable_Button_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostEditChange");
		
		ABase_Movable_Button_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Movable_Button_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostEditMove");
		
		ABase_Movable_Button_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.TickSelected");
		
		ABase_Movable_Button_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.EnableVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Movable_Button_BP_C::EnableVisual(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.EnableVisual");
		
		ABase_Movable_Button_BP_C_EnableVisual_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.Event_OnResetStage");
		
		ABase_Movable_Button_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnUnlocked
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::OnUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnUnlocked");
		
		ABase_Movable_Button_BP_C_OnUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnLocked
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::OnLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnLocked");
		
		ABase_Movable_Button_BP_C_OnLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.Lock
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::Lock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.Lock");
		
		ABase_Movable_Button_BP_C_Lock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.Unlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_Movable_Button_BP_C::Unlock(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.Unlock");
		
		ABase_Movable_Button_BP_C_Unlock_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void ABase_Movable_Button_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnEditorPostLoad");
		
		ABase_Movable_Button_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.ExecuteUbergraph_Base_Movable_Button_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_Movable_Button_BP_C::ExecuteUbergraph_Base_Movable_Button_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.ExecuteUbergraph_Base_Movable_Button_BP");
		
		ABase_Movable_Button_BP_C_ExecuteUbergraph_Base_Movable_Button_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_Movable_Button_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Movable_Button_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Movable_Button_BP.Base_Movable_Button_BP_C");
		return ptr;
	}

}


