/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.FillLevelDataFromTable
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::FillLevelDataFromTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.FillLevelDataFromTable");
		
		ABP_UI_PlanningMap_C_FillLevelDataFromTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.SpawnMapMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_UI_PlanningMap_Marker_C*                 OutputPin                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::SpawnMapMarker(const struct FCoreUObject_FVector& Location, class UBP_UI_PlanningMap_Marker_C** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.SpawnMapMarker");
		
		ABP_UI_PlanningMap_C_SpawnMapMarker_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.SetMapMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::SetMapMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.SetMapMaterial");
		
		ABP_UI_PlanningMap_C_SetMapMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.GetCurrentMapMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          CurrentMaterial                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::GetCurrentMapMaterial(class UMaterialInterface** CurrentMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.GetCurrentMapMaterial");
		
		ABP_UI_PlanningMap_C_GetCurrentMapMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentMaterial != nullptr)
			*CurrentMaterial = params.CurrentMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.GetMapMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceUpdate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterialInstanceDynamic*                    MapDynMat                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::GetMapMaterial(bool ForceUpdate, class UMaterialInstanceDynamic** MapDynMat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.GetMapMaterial");
		
		ABP_UI_PlanningMap_C_GetMapMaterial_Params params {};
		params.ForceUpdate = ForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapDynMat != nullptr)
			*MapDynMat = params.MapDynMat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AbsolutePan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::AbsolutePan(const struct FCoreUObject_FVector2D& Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AbsolutePan");
		
		ABP_UI_PlanningMap_C_AbsolutePan_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AdditivePan
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::AdditivePan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AdditivePan");
		
		ABP_UI_PlanningMap_C_AdditivePan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.UpdateZoom
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::UpdateZoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.UpdateZoom");
		
		ABP_UI_PlanningMap_C_UpdateZoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.UserConstructionScript");
		
		ABP_UI_PlanningMap_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2");
		
		ABP_UI_PlanningMap_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1");
		
		ABP_UI_PlanningMap_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnLoaded_6AC405FF4BFE790347C0B19681EDEBD5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::OnLoaded_6AC405FF4BFE790347C0B19681EDEBD5(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnLoaded_6AC405FF4BFE790347C0B19681EDEBD5");
		
		ABP_UI_PlanningMap_C_OnLoaded_6AC405FF4BFE790347C0B19681EDEBD5_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ChangeFloors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Floor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::ChangeFloors(int32_t Floor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ChangeFloors");
		
		ABP_UI_PlanningMap_C_ChangeFloors_Params params {};
		params.Floor = Floor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.PanCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Panning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FCoreUObject_FVector2D                      CursorPos                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::PanCamera(bool Panning, const struct FCoreUObject_FVector2D& CursorPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.PanCamera");
		
		ABP_UI_PlanningMap_C_PanCamera_Params params {};
		params.Panning = Panning;
		params.CursorPos = CursorPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.DeactivateCamera
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::DeactivateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.DeactivateCamera");
		
		ABP_UI_PlanningMap_C_DeactivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ReceiveTick");
		
		ABP_UI_PlanningMap_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ReceiveBeginPlay");
		
		ABP_UI_PlanningMap_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InitializeFloor
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::InitializeFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InitializeFloor");
		
		ABP_UI_PlanningMap_C_InitializeFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AnimateShow
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::AnimateShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AnimateShow");
		
		ABP_UI_PlanningMap_C_AnimateShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AnimateHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Silent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_UI_PlanningMap_C::AnimateHide(bool Silent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AnimateHide");
		
		ABP_UI_PlanningMap_C_AnimateHide_Params params {};
		params.Silent = Silent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ActivateMapCamera
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::ActivateMapCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ActivateMapCamera");
		
		ABP_UI_PlanningMap_C_ActivateMapCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.RollOutMap
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::RollOutMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.RollOutMap");
		
		ABP_UI_PlanningMap_C_RollOutMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ExecuteUbergraph_BP_UI_PlanningMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::ExecuteUbergraph_BP_UI_PlanningMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ExecuteUbergraph_BP_UI_PlanningMap");
		
		ABP_UI_PlanningMap_C_ExecuteUbergraph_BP_UI_PlanningMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnFloorMaterialUpdated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_UI_PlanningMap_C::OnFloorMaterialUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnFloorMaterialUpdated__DelegateSignature");
		
		ABP_UI_PlanningMap_C_OnFloorMaterialUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnChangeFloors__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Floor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::OnChangeFloors__DelegateSignature(int32_t Floor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnChangeFloors__DelegateSignature");
		
		ABP_UI_PlanningMap_C_OnChangeFloors__DelegateSignature_Params params {};
		params.Floor = Floor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnZoomUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ZoomValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_PlanningMap_C::OnZoomUpdated__DelegateSignature(float ZoomValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnZoomUpdated__DelegateSignature");
		
		ABP_UI_PlanningMap_C_OnZoomUpdated__DelegateSignature_Params params {};
		params.ZoomValue = ZoomValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_UI_PlanningMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_UI_PlanningMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_PlanningMap.BP_UI_PlanningMap_C");
		return ptr;
	}

}


