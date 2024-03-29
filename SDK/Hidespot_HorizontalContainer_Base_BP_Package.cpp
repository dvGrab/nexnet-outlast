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
	 * 		Name   -> Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.Editor_RefreshEnabledMeshesVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowEnabledVisuals                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_HorizontalContainer_Base_BP_C::Editor_RefreshEnabledMeshesVisibility(bool* bShowEnabledVisuals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.Editor_RefreshEnabledMeshesVisibility");
		
		AHidespot_HorizontalContainer_Base_BP_C_Editor_RefreshEnabledMeshesVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShowEnabledVisuals != nullptr)
			*bShowEnabledVisuals = params.bShowEnabledVisuals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.Editor_RefreshDisabledMeshesVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowDisabledVisuals                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_HorizontalContainer_Base_BP_C::Editor_RefreshDisabledMeshesVisibility(bool* bShowDisabledVisuals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.Editor_RefreshDisabledMeshesVisibility");
		
		AHidespot_HorizontalContainer_Base_BP_C_Editor_RefreshDisabledMeshesVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShowDisabledVisuals != nullptr)
			*bShowDisabledVisuals = params.bShowDisabledVisuals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.SetDisabledMeshesState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             RandomizationRootOverride                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_HorizontalContainer_Base_BP_C::SetDisabledMeshesState(bool bDisabled, class USceneComponent* RandomizationRootOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.SetDisabledMeshesState");
		
		AHidespot_HorizontalContainer_Base_BP_C_SetDisabledMeshesState_Params params {};
		params.bDisabled = bDisabled;
		params.RandomizationRootOverride = RandomizationRootOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AHidespot_HorizontalContainer_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.UserConstructionScript");
		
		AHidespot_HorizontalContainer_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBHidespotComponent*                        hidespot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_HorizontalContainer_Base_BP_C::BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature(class URBHidespotComponent* hidespot, bool bDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature");
		
		AHidespot_HorizontalContainer_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature_Params params {};
		params.hidespot = hidespot;
		params.bDisabled = bDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.ExecuteUbergraph_Hidespot_HorizontalContainer_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_HorizontalContainer_Base_BP_C::ExecuteUbergraph_Hidespot_HorizontalContainer_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C.ExecuteUbergraph_Hidespot_HorizontalContainer_Base_BP");
		
		AHidespot_HorizontalContainer_Base_BP_C_ExecuteUbergraph_Hidespot_HorizontalContainer_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHidespot_HorizontalContainer_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHidespot_HorizontalContainer_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hidespot_HorizontalContainer_Base_BP.Hidespot_HorizontalContainer_Base_BP_C");
		return ptr;
	}

}


