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
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.GetFocusActorFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACellCustomizationCameraActor_C::GetFocusActorFromCategory(ECustomizationMenuCategory Category, class AActor** Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.GetFocusActorFromCategory");
		
		ACellCustomizationCameraActor_C_GetFocusActorFromCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Init
	 * 		Flags  -> ()
	 */
	void ACellCustomizationCameraActor_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Init");
		
		ACellCustomizationCameraActor_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.DeactivateCamera
	 * 		Flags  -> ()
	 */
	void ACellCustomizationCameraActor_C::DeactivateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.DeactivateCamera");
		
		ACellCustomizationCameraActor_C_DeactivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Activate Camera
	 * 		Flags  -> ()
	 */
	void ACellCustomizationCameraActor_C::Activate_Camera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Activate Camera");
		
		ACellCustomizationCameraActor_C_Activate_Camera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UpdateCameraTransforms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACellCustomizationCameraActor_C::UpdateCameraTransforms(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UpdateCameraTransforms");
		
		ACellCustomizationCameraActor_C_UpdateCameraTransforms_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.FocusCameraTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         CustomizationCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACellCustomizationCameraActor_C::FocusCameraTo(ECustomizationMenuCategory CustomizationCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.FocusCameraTo");
		
		ACellCustomizationCameraActor_C_FocusCameraTo_Params params {};
		params.CustomizationCategory = CustomizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACellCustomizationCameraActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UserConstructionScript");
		
		ACellCustomizationCameraActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACellCustomizationCameraActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveBeginPlay");
		
		ACellCustomizationCameraActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACellCustomizationCameraActor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveTick");
		
		ACellCustomizationCameraActor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ExecuteUbergraph_CellCustomizationCameraActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACellCustomizationCameraActor_C::ExecuteUbergraph_CellCustomizationCameraActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ExecuteUbergraph_CellCustomizationCameraActor");
		
		ACellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACellCustomizationCameraActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACellCustomizationCameraActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CellCustomizationCameraActor.CellCustomizationCameraActor_C");
		return ptr;
	}

}


