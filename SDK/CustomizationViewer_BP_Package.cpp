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
	 * 		Name   -> Function CustomizationViewer_BP.CustomizationViewer_BP_C.GetCameras
	 * 		Flags  -> ()
	 */
	void ACustomizationViewer_BP_C::GetCameras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationViewer_BP.CustomizationViewer_BP_C.GetCameras");
		
		ACustomizationViewer_BP_C_GetCameras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationViewer_BP.CustomizationViewer_BP_C.GetMenuCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMenuCharacter_C*                            MenuCharacter                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACustomizationViewer_BP_C::GetMenuCharacter(class AMenuCharacter_C** MenuCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationViewer_BP.CustomizationViewer_BP_C.GetMenuCharacter");
		
		ACustomizationViewer_BP_C_GetMenuCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuCharacter != nullptr)
			*MenuCharacter = params.MenuCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationViewer_BP.CustomizationViewer_BP_C.DeactivateViewer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkipViewTargetChange                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACustomizationViewer_BP_C::DeactivateViewer(bool SkipViewTargetChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationViewer_BP.CustomizationViewer_BP_C.DeactivateViewer");
		
		ACustomizationViewer_BP_C_DeactivateViewer_Params params {};
		params.SkipViewTargetChange = SkipViewTargetChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationViewer_BP.CustomizationViewer_BP_C.ActivateViewer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      CustomReturnViewTarget                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACustomizationViewer_BP_C::ActivateViewer(class AActor* CustomReturnViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationViewer_BP.CustomizationViewer_BP_C.ActivateViewer");
		
		ACustomizationViewer_BP_C_ActivateViewer_Params params {};
		params.CustomReturnViewTarget = CustomReturnViewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationViewer_BP.CustomizationViewer_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACustomizationViewer_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationViewer_BP.CustomizationViewer_BP_C.UserConstructionScript");
		
		ACustomizationViewer_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationViewer_BP.CustomizationViewer_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACustomizationViewer_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationViewer_BP.CustomizationViewer_BP_C.ReceiveBeginPlay");
		
		ACustomizationViewer_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationViewer_BP.CustomizationViewer_BP_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         CustomizationMenuCategory                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACustomizationViewer_BP_C::CustomEvent(ECustomizationMenuCategory CustomizationMenuCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationViewer_BP.CustomizationViewer_BP_C.CustomEvent");
		
		ACustomizationViewer_BP_C_CustomEvent_Params params {};
		params.CustomizationMenuCategory = CustomizationMenuCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationViewer_BP.CustomizationViewer_BP_C.ExecuteUbergraph_CustomizationViewer_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACustomizationViewer_BP_C::ExecuteUbergraph_CustomizationViewer_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationViewer_BP.CustomizationViewer_BP_C.ExecuteUbergraph_CustomizationViewer_BP");
		
		ACustomizationViewer_BP_C_ExecuteUbergraph_CustomizationViewer_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomizationViewer_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomizationViewer_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CustomizationViewer_BP.CustomizationViewer_BP_C");
		return ptr;
	}

}


