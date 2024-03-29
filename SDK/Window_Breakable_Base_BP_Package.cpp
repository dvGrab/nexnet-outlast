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
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Update Window Shutters
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::Update_Window_Shutters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Update Window Shutters");
		
		AWindow_Breakable_Base_BP_C_Update_Window_Shutters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateLedgeMarkerIgnoreActors
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::UpdateLedgeMarkerIgnoreActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateLedgeMarkerIgnoreActors");
		
		AWindow_Breakable_Base_BP_C_UpdateLedgeMarkerIgnoreActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateLedgeMarkers
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::UpdateLedgeMarkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateLedgeMarkers");
		
		AWindow_Breakable_Base_BP_C_UpdateLedgeMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.ClearSpawnedPhysicalMeshes
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::ClearSpawnedPhysicalMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.ClearSpawnedPhysicalMeshes");
		
		AWindow_Breakable_Base_BP_C_ClearSpawnedPhysicalMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.OnBreakWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceAtFinalPosition                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWindow_Breakable_Base_BP_C::OnBreakWindow(const struct FVector& Direction, bool forceAtFinalPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.OnBreakWindow");
		
		AWindow_Breakable_Base_BP_C_OnBreakWindow_Params params {};
		params.Direction = Direction;
		params.forceAtFinalPosition = forceAtFinalPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateWindowMeshes
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::UpdateWindowMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateWindowMeshes");
		
		AWindow_Breakable_Base_BP_C_UpdateWindowMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.SetupLedgeMarkers
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::SetupLedgeMarkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.SetupLedgeMarkers");
		
		AWindow_Breakable_Base_BP_C_SetupLedgeMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateSoundConnectors
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::UpdateSoundConnectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateSoundConnectors");
		
		AWindow_Breakable_Base_BP_C_UpdateSoundConnectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UserConstructionScript");
		
		AWindow_Breakable_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Timeline_0__FinishedFunc");
		
		AWindow_Breakable_Base_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Timeline_0__UpdateFunc");
		
		AWindow_Breakable_Base_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.ReceiveBeginPlay");
		
		AWindow_Breakable_Base_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnResetStage");
		
		AWindow_Breakable_Base_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWindow_Breakable_Base_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.PostToggled");
		
		AWindow_Breakable_Base_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnBreakObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWindow_Breakable_Base_BP_C::Event_OnBreakObject(class AActor* SourceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnBreakObject");
		
		AWindow_Breakable_Base_BP_C_Event_OnBreakObject_Params params {};
		params.SourceActor = SourceActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnStateChanged
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::Event_OnStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnStateChanged");
		
		AWindow_Breakable_Base_BP_C_Event_OnStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_SnapToState");
		
		AWindow_Breakable_Base_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_PostInitializeComponents
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::Event_PostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_PostInitializeComponents");
		
		AWindow_Breakable_Base_BP_C_Event_PostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.DeleteGlassPieces
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::DeleteGlassPieces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.DeleteGlassPieces");
		
		AWindow_Breakable_Base_BP_C_DeleteGlassPieces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnBlockableStateChanged
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::Event_OnBlockableStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnBlockableStateChanged");
		
		AWindow_Breakable_Base_BP_C_Event_OnBlockableStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.CloseShutters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWindow_Breakable_Base_BP_C::CloseShutters(bool bPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.CloseShutters");
		
		AWindow_Breakable_Base_BP_C_CloseShutters_Params params {};
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.OpenShutters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWindow_Breakable_Base_BP_C::OpenShutters(bool bPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.OpenShutters");
		
		AWindow_Breakable_Base_BP_C_OpenShutters_Params params {};
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnShutterStateChanged
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::Event_OnShutterStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnShutterStateChanged");
		
		AWindow_Breakable_Base_BP_C_Event_OnShutterStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.RefreshBlockedMeshState
	 * 		Flags  -> ()
	 */
	void AWindow_Breakable_Base_BP_C::RefreshBlockedMeshState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.RefreshBlockedMeshState");
		
		AWindow_Breakable_Base_BP_C_RefreshBlockedMeshState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.ExecuteUbergraph_Window_Breakable_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWindow_Breakable_Base_BP_C::ExecuteUbergraph_Window_Breakable_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.ExecuteUbergraph_Window_Breakable_Base_BP");
		
		AWindow_Breakable_Base_BP_C_ExecuteUbergraph_Window_Breakable_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWindow_Breakable_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWindow_Breakable_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Window_Breakable_Base_BP.Window_Breakable_Base_BP_C");
		return ptr;
	}

}


