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
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.GetPastilleFromColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBHairColorOption                          HairColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UColorPastille_C*                            ColorPastille                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationColorPalette_C::GetPastilleFromColor(const struct FRBHairColorOption& HairColor, class UColorPastille_C** ColorPastille)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.GetPastilleFromColor");
		
		UCustomizationColorPalette_C_GetPastilleFromColor_Params params {};
		params.HairColor = HairColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorPastille != nullptr)
			*ColorPastille = params.ColorPastille;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InitialHairColorId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationColorPalette_C::Init(const class FName& InitialHairColorId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.Init");
		
		UCustomizationColorPalette_C_Init_Params params {};
		params.InitialHairColorId = InitialHairColorId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.UpdateSelectedPastille
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UColorPastille_C*                            NewSelectedPastille                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationColorPalette_C::UpdateSelectedPastille(class UColorPastille_C* NewSelectedPastille)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.UpdateSelectedPastille");
		
		UCustomizationColorPalette_C_UpdateSelectedPastille_Params params {};
		params.NewSelectedPastille = NewSelectedPastille;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.RefreshColorList
	 * 		Flags  -> ()
	 */
	void UCustomizationColorPalette_C::RefreshColorList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.RefreshColorList");
		
		UCustomizationColorPalette_C_RefreshColorList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationColorPalette_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.PreConstruct");
		
		UCustomizationColorPalette_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UColorPastille_C*                            ClickedPastille                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationColorPalette_C::OnPastilleClicked(class UColorPastille_C* ClickedPastille)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleClicked");
		
		UCustomizationColorPalette_C_OnPastilleClicked_Params params {};
		params.ClickedPastille = ClickedPastille;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleUnHovered
	 * 		Flags  -> ()
	 */
	void UCustomizationColorPalette_C::OnPastilleUnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleUnHovered");
		
		UCustomizationColorPalette_C_OnPastilleUnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBHairColorOption                          HoveredColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationColorPalette_C::OnPastilleHovered(const struct FRBHairColorOption& HoveredColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleHovered");
		
		UCustomizationColorPalette_C_OnPastilleHovered_Params params {};
		params.HoveredColor = HoveredColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.ExecuteUbergraph_CustomizationColorPalette
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationColorPalette_C::ExecuteUbergraph_CustomizationColorPalette(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.ExecuteUbergraph_CustomizationColorPalette");
		
		UCustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.OnHairColorHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBHairColorOption                          HoveredHairColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationColorPalette_C::OnHairColorHovered__DelegateSignature(const struct FRBHairColorOption& HoveredHairColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.OnHairColorHovered__DelegateSignature");
		
		UCustomizationColorPalette_C_OnHairColorHovered__DelegateSignature_Params params {};
		params.HoveredHairColor = HoveredHairColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationColorPalette.CustomizationColorPalette_C.OnHairColorClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBHairColorOption                          newHairColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationColorPalette_C::OnHairColorClicked__DelegateSignature(const struct FRBHairColorOption& newHairColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationColorPalette.CustomizationColorPalette_C.OnHairColorClicked__DelegateSignature");
		
		UCustomizationColorPalette_C_OnHairColorClicked__DelegateSignature_Params params {};
		params.newHairColor = newHairColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationColorPalette_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationColorPalette_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomizationColorPalette.CustomizationColorPalette_C");
		return ptr;
	}

}


