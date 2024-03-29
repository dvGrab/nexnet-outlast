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
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.GetCameraFocusWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::GetCameraFocusWorldLocation(struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.GetCameraFocusWorldLocation");
		
		APlayerCellItemBase_C_GetCameraFocusWorldLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCellItemDefinition*                 PlayerCellDefinition                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::ApplyMaterial(class URBPlayerCellItemDefinition* PlayerCellDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyMaterial");
		
		APlayerCellItemBase_C_ApplyMaterial_Params params {};
		params.PlayerCellDefinition = PlayerCellDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCellItemDefinition*                 CellItemDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::ApplyStaticMesh(class URBPlayerCellItemDefinition* CellItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyStaticMesh");
		
		APlayerCellItemBase_C_ApplyStaticMesh_Params params {};
		params.CellItemDefinition = CellItemDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.Reset
	 * 		Flags  -> ()
	 */
	void APlayerCellItemBase_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.Reset");
		
		APlayerCellItemBase_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewBlueprintClass_Editor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCellItemDefinition*                 CellItemDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::PreviewBlueprintClass_Editor(class URBPlayerCellItemDefinition* CellItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewBlueprintClass_Editor");
		
		APlayerCellItemBase_C_PreviewBlueprintClass_Editor_Params params {};
		params.CellItemDefinition = CellItemDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.GetSpawnTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  WorldLocation                                              (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void APlayerCellItemBase_C::GetSpawnTransform(struct FTransform* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.GetSpawnTransform");
		
		APlayerCellItemBase_C_GetSpawnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.OnPreviewDone
	 * 		Flags  -> ()
	 */
	void APlayerCellItemBase_C::OnPreviewDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.OnPreviewDone");
		
		APlayerCellItemBase_C_OnPreviewDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyTransformToConfig
	 * 		Flags  -> ()
	 */
	void APlayerCellItemBase_C::ApplyTransformToConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyTransformToConfig");
		
		APlayerCellItemBase_C_ApplyTransformToConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.TryDestroyPreviousProp
	 * 		Flags  -> ()
	 */
	void APlayerCellItemBase_C::TryDestroyPreviousProp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.TryDestroyPreviousProp");
		
		APlayerCellItemBase_C_TryDestroyPreviousProp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.ChangeMaterialOnStaticmesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Comp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::ChangeMaterialOnStaticmesh(class UPrimitiveComponent* Comp, class UObject* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.ChangeMaterialOnStaticmesh");
		
		APlayerCellItemBase_C_ChangeMaterialOnStaticmesh_Params params {};
		params.Comp = Comp;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.GetDebugTransform
	 * 		Flags  -> ()
	 */
	void APlayerCellItemBase_C::GetDebugTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.GetDebugTransform");
		
		APlayerCellItemBase_C_GetDebugTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.Refresh
	 * 		Flags  -> ()
	 */
	void APlayerCellItemBase_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.Refresh");
		
		APlayerCellItemBase_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewCellItemDefinition_Editor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCellItemDefinition*                 CellItemDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::PreviewCellItemDefinition_Editor(class URBPlayerCellItemDefinition* CellItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewCellItemDefinition_Editor");
		
		APlayerCellItemBase_C_PreviewCellItemDefinition_Editor_Params params {};
		params.CellItemDefinition = CellItemDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APlayerCellItemBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.UserConstructionScript");
		
		APlayerCellItemBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_979288504F90989FEEAAD0BBDC449001
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::OnLoaded_979288504F90989FEEAAD0BBDC449001(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_979288504F90989FEEAAD0BBDC449001");
		
		APlayerCellItemBase_C_OnLoaded_979288504F90989FEEAAD0BBDC449001_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_4E18DE394F253951F2F6CCB149B0597D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::OnLoaded_4E18DE394F253951F2F6CCB149B0597D(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_4E18DE394F253951F2F6CCB149B0597D");
		
		APlayerCellItemBase_C_OnLoaded_4E18DE394F253951F2F6CCB149B0597D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_2A9FE965428939AA3930E497B1EEF09B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::OnLoaded_2A9FE965428939AA3930E497B1EEF09B(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_2A9FE965428939AA3930E497B1EEF09B");
		
		APlayerCellItemBase_C_OnLoaded_2A9FE965428939AA3930E497B1EEF09B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_7C1E3CB34C287AB4FE7F69A712E41A69
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::OnLoaded_7C1E3CB34C287AB4FE7F69A712E41A69(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_7C1E3CB34C287AB4FE7F69A712E41A69");
		
		APlayerCellItemBase_C_OnLoaded_7C1E3CB34C287AB4FE7F69A712E41A69_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.Event_AssignItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCellItemDefinition*                 ItemDefinition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::Event_AssignItem(class URBPlayerCellItemDefinition* ItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.Event_AssignItem");
		
		APlayerCellItemBase_C_Event_AssignItem_Params params {};
		params.ItemDefinition = ItemDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCellItemDefinition*                 Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::PreviewItem(class URBPlayerCellItemDefinition* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewItem");
		
		APlayerCellItemBase_C_PreviewItem_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyNewMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCellItemDefinition*                 ItemDefinition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::ApplyNewMaterial(class URBPlayerCellItemDefinition* ItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyNewMaterial");
		
		APlayerCellItemBase_C_ApplyNewMaterial_Params params {};
		params.ItemDefinition = ItemDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyNewStaticmesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCellItemDefinition*                 ItemDefinition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::ApplyNewStaticmesh(class URBPlayerCellItemDefinition* ItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyNewStaticmesh");
		
		APlayerCellItemBase_C_ApplyNewStaticmesh_Params params {};
		params.ItemDefinition = ItemDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyBlueprintClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCellItemDefinition*                 ItemDefinition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::ApplyBlueprintClass(class URBPlayerCellItemDefinition* ItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyBlueprintClass");
		
		APlayerCellItemBase_C_ApplyBlueprintClass_Params params {};
		params.ItemDefinition = ItemDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.Event_ClearItem
	 * 		Flags  -> ()
	 */
	void APlayerCellItemBase_C::Event_ClearItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.Event_ClearItem");
		
		APlayerCellItemBase_C_Event_ClearItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCellItemBase.PlayerCellItemBase_C.ExecuteUbergraph_PlayerCellItemBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCellItemBase_C::ExecuteUbergraph_PlayerCellItemBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCellItemBase.PlayerCellItemBase_C.ExecuteUbergraph_PlayerCellItemBase");
		
		APlayerCellItemBase_C_ExecuteUbergraph_PlayerCellItemBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerCellItemBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerCellItemBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCellItemBase.PlayerCellItemBase_C");
		return ptr;
	}

}


