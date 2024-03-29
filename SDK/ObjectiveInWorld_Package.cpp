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
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.Event_DrawHudUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBWorldIconUpdateContext                   updateContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void UObjectiveInWorld_C::Event_DrawHudUpdate(const struct FRBWorldIconUpdateContext& updateContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.Event_DrawHudUpdate");
		
		UObjectiveInWorld_C_Event_DrawHudUpdate_Params params {};
		params.updateContext = updateContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UObjectiveInWorld_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.ShouldShow");
		
		UObjectiveInWorld_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.ProcessOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetOpacity                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectiveInWorld_C::ProcessOpacity(float Distance, float* TargetOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.ProcessOpacity");
		
		UObjectiveInWorld_C_ProcessOpacity_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetOpacity != nullptr)
			*TargetOpacity = params.TargetOpacity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateIconImage
	 * 		Flags  -> ()
	 */
	void UObjectiveInWorld_C::UpdateIconImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateIconImage");
		
		UObjectiveInWorld_C_UpdateIconImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.SetupRipple
	 * 		Flags  -> ()
	 */
	void UObjectiveInWorld_C::SetupRipple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.SetupRipple");
		
		UObjectiveInWorld_C_SetupRipple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateRippleDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UObjectiveInWorld_C::UpdateRippleDisplay(bool A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateRippleDisplay");
		
		UObjectiveInWorld_C_UpdateRippleDisplay_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateIcon
	 * 		Flags  -> ()
	 */
	void UObjectiveInWorld_C::UpdateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateIcon");
		
		UObjectiveInWorld_C_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateDistanceEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBWorldIconUpdateContext                   updateContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void UObjectiveInWorld_C::UpdateDistanceEffects(const struct FRBWorldIconUpdateContext& updateContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateDistanceEffects");
		
		UObjectiveInWorld_C_UpdateDistanceEffects_Params params {};
		params.updateContext = updateContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UObjectiveInWorld_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.PreConstruct");
		
		UObjectiveInWorld_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.Construct
	 * 		Flags  -> ()
	 */
	void UObjectiveInWorld_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.Construct");
		
		UObjectiveInWorld_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UObjectiveInWorld_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.Event_Show");
		
		UObjectiveInWorld_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UObjectiveInWorld_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.Event_Hide");
		
		UObjectiveInWorld_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.Event_OnWatchedPlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   oldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectiveInWorld_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.Event_OnWatchedPlayerChanged");
		
		UObjectiveInWorld_C_Event_OnWatchedPlayerChanged_Params params {};
		params.oldPlayer = oldPlayer;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.OnCompletingObjectiveChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isCompletingObjective                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UObjectiveInWorld_C::OnCompletingObjectiveChanged(bool isCompletingObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.OnCompletingObjectiveChanged");
		
		UObjectiveInWorld_C_OnCompletingObjectiveChanged_Params params {};
		params.isCompletingObjective = isCompletingObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveInWorld.ObjectiveInWorld_C.ExecuteUbergraph_ObjectiveInWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectiveInWorld_C::ExecuteUbergraph_ObjectiveInWorld(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveInWorld.ObjectiveInWorld_C.ExecuteUbergraph_ObjectiveInWorld");
		
		UObjectiveInWorld_C_ExecuteUbergraph_ObjectiveInWorld_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveInWorld_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveInWorld_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObjectiveInWorld.ObjectiveInWorld_C");
		return ptr;
	}

}


