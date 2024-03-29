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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SetCenterCoordinates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      CenterCoordinates                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::SetCenterCoordinates(const struct FCoreUObject_FVector2D& CenterCoordinates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.SetCenterCoordinates");
		
		UUMG_RadialMenu_C_SetCenterCoordinates_Params params {};
		params.CenterCoordinates = CenterCoordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterialColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                CursorColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                TintColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::UpdateMaterialColors(const struct FLinearColor& CursorColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& TintColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterialColors");
		
		UUMG_RadialMenu_C_UpdateMaterialColors_Params params {};
		params.CursorColor = CursorColor;
		params.HighlightColor = HighlightColor;
		params.TintColor = TintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterialVisuals
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::UpdateMaterialVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterialVisuals");
		
		UUMG_RadialMenu_C_UpdateMaterialVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetCustomInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      Input                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_RadialMenu_C::GetCustomInput(struct FCoreUObject_FVector2D* Input, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.GetCustomInput");
		
		UUMG_RadialMenu_C_GetCustomInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Input != nullptr)
			*Input = params.Input;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SetCustomInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      CustomInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::SetCustomInput(const struct FCoreUObject_FVector2D& CustomInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.SetCustomInput");
		
		UUMG_RadialMenu_C_SetCustomInput_Params params {};
		params.CustomInput = CustomInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithCustomInput
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::UpdateDirectionWithCustomInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithCustomInput");
		
		UUMG_RadialMenu_C_UpdateDirectionWithCustomInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildIndexFromRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::RemoveChildIndexFromRadialMenu(int32_t IndexToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildIndexFromRadialMenu");
		
		UUMG_RadialMenu_C_RemoveChildIndexFromRadialMenu_Params params {};
		params.IndexToRemove = IndexToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildWidgetFromRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::RemoveChildWidgetFromRadialMenu(class UUserWidget* ItemToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildWidgetFromRadialMenu");
		
		UUMG_RadialMenu_C_RemoveChildWidgetFromRadialMenu_Params params {};
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.DebugIndex
	 * 		Flags  -> ()
	 */
	class FText UUMG_RadialMenu_C::DebugIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.DebugIndex");
		
		UUMG_RadialMenu_C_DebugIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.FixInputRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FCoreUObject_FVector2D UUMG_RadialMenu_C::FixInputRotation(const struct FCoreUObject_FVector2D& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.FixInputRotation");
		
		UUMG_RadialMenu_C_FixInputRotation_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.FixMainRotation
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::FixMainRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.FixMainRotation");
		
		UUMG_RadialMenu_C_FixMainRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.AutoRegisterToInput
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::AutoRegisterToInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.AutoRegisterToInput");
		
		UUMG_RadialMenu_C_AutoRegisterToInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateInput
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::UpdateInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateInput");
		
		UUMG_RadialMenu_C_UpdateInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.RegisterPlayerInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_RadialMenu_C::RegisterPlayerInput(class APlayerController* Controller, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.RegisterPlayerInput");
		
		UUMG_RadialMenu_C_RegisterPlayerInput_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithJoystick
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::UpdateDirectionWithJoystick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithJoystick");
		
		UUMG_RadialMenu_C_UpdateDirectionWithJoystick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetCurrentIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_RadialMenu_C::GetCurrentIndex(int32_t* Index, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.GetCurrentIndex");
		
		UUMG_RadialMenu_C_GetCurrentIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_RadialMenu_C::GetChild(int32_t Index, class UUserWidget** Output, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.GetChild");
		
		UUMG_RadialMenu_C_GetChild_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetRadialMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    RadialMaterial                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::GetRadialMaterial(class UMaterialInstanceDynamic** RadialMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.GetRadialMaterial");
		
		UUMG_RadialMenu_C_GetRadialMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadialMaterial != nullptr)
			*RadialMaterial = params.RadialMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_RadialMenu_C::SetIndex(int32_t Index, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.SetIndex");
		
		UUMG_RadialMenu_C_SetIndex_Params params {};
		params.Index = Index;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateAllChildrenPositions
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::UpdateAllChildrenPositions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateAllChildrenPositions");
		
		UUMG_RadialMenu_C_UpdateAllChildrenPositions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateChildPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::UpdateChildPosition(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateChildPosition");
		
		UUMG_RadialMenu_C_UpdateChildPosition_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.ClearChildren
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::ClearChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.ClearChildren");
		
		UUMG_RadialMenu_C_ClearChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetSelectedWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::GetSelectedWidget(class UUserWidget** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.GetSelectedWidget");
		
		UUMG_RadialMenu_C_GetSelectedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.AddChildToRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_RadialMenu_C::AddChildToRadialMenu(class UUserWidget* Content, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.AddChildToRadialMenu");
		
		UUMG_RadialMenu_C_AddChildToRadialMenu_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithMouseCursor
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::UpdateDirectionWithMouseCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithMouseCursor");
		
		UUMG_RadialMenu_C_UpdateDirectionWithMouseCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetSectionDegreeSize
	 * 		Flags  -> ()
	 */
	float UUMG_RadialMenu_C::GetSectionDegreeSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.GetSectionDegreeSize");
		
		UUMG_RadialMenu_C_GetSectionDegreeSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SetInputDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::SetInputDirection(const struct FCoreUObject_FVector2D& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.SetInputDirection");
		
		UUMG_RadialMenu_C_SetInputDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.Construct");
		
		UUMG_RadialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateSegments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Segments                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::UpdateSegments(int32_t Segments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateSegments");
		
		UUMG_RadialMenu_C_UpdateSegments_Params params {};
		params.Segments = Segments;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.InDeadZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDeadZone                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_RadialMenu_C::InDeadZone(bool InDeadZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.InDeadZone");
		
		UUMG_RadialMenu_C_InDeadZone_Params params {};
		params.InDeadZone = InDeadZone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterials
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::UpdateMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterials");
		
		UUMG_RadialMenu_C_UpdateMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_RadialMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.PreConstruct");
		
		UUMG_RadialMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.ExecuteUbergraph_UMG_RadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::ExecuteUbergraph_UMG_RadialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.ExecuteUbergraph_UMG_RadialMenu");
		
		UUMG_RadialMenu_C_ExecuteUbergraph_UMG_RadialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionSubmitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectionIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::SelectionSubmitted__DelegateSignature(int32_t SelectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionSubmitted__DelegateSignature");
		
		UUMG_RadialMenu_C_SelectionSubmitted__DelegateSignature_Params params {};
		params.SelectionIndex = SelectionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.ExitedDeadzone__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::ExitedDeadzone__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.ExitedDeadzone__DelegateSignature");
		
		UUMG_RadialMenu_C_ExitedDeadzone__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.EnteredDeadzone__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_RadialMenu_C::EnteredDeadzone__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.EnteredDeadzone__DelegateSignature");
		
		UUMG_RadialMenu_C_EnteredDeadzone__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_RadialMenu_C::SelectionChanged__DelegateSignature(int32_t NewSelection, int32_t OldSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionChanged__DelegateSignature");
		
		UUMG_RadialMenu_C_SelectionChanged__DelegateSignature_Params params {};
		params.NewSelection = NewSelection;
		params.OldSelection = OldSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_RadialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_RadialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RadialMenu.UMG_RadialMenu_C");
		return ptr;
	}

}


