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
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.Find Font Scale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UFont*                                       RenderFont                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Kerning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   BoxSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseText_PB_C::Find_Font_Scale(TArray<class FString>* string, class UFont* RenderFont, const struct FVector2D& Scale, float Kerning, const struct FVector2D& BoxSize, float* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.Find Font Scale");
		
		ABaseText_PB_C_Find_Font_Scale_Params params {};
		params.RenderFont = RenderFont;
		params.Scale = Scale;
		params.Kerning = Kerning;
		params.BoxSize = BoxSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (string != nullptr)
			*string = params.string;
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.AddItemToMimic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseText_PB_C*                              ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseText_PB_C::AddItemToMimic(class ABaseText_PB_C* ItemToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.AddItemToMimic");
		
		ABaseText_PB_C_AddItemToMimic_Params params {};
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.Mimic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseText_PB_C::Mimic(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.Mimic");
		
		ABaseText_PB_C_Mimic_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.SetArray
	 * 		Flags  -> ()
	 */
	void ABaseText_PB_C::SetArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.SetArray");
		
		ABaseText_PB_C_SetArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.SetTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    PrintTexture                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseText_PB_C::SetTexture(class UTexture* PrintTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.SetTexture");
		
		ABaseText_PB_C_SetTexture_Params params {};
		params.PrintTexture = PrintTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.AdjustingTextLines
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   BoxSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvas*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFont*                                       RenderFont                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Kerning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScaleFont                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              NewParam1                                                  (Parm, OutParm)
	 * 		float                                              _ScaleFont                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseText_PB_C::AdjustingTextLines(const class FString& Text, const struct FVector2D& BoxSize, class UCanvas* Canvas, class UFont* RenderFont, float Kerning, const struct FVector2D& ScaleFont, TArray<class FString>* NewParam1, float* _ScaleFont)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.AdjustingTextLines");
		
		ABaseText_PB_C_AdjustingTextLines_Params params {};
		params.Text = Text;
		params.BoxSize = BoxSize;
		params.Canvas = Canvas;
		params.RenderFont = RenderFont;
		params.Kerning = Kerning;
		params.ScaleFont = ScaleFont;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam1 != nullptr)
			*NewParam1 = params.NewParam1;
		if (_ScaleFont != nullptr)
			*_ScaleFont = params._ScaleFont;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.DrawPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RenderText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FVector4                                    Borders                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFont*                                       RenderFont                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScreenPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                RenderColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ShadowColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Kerning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LineSpace                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ShadowOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCentreX                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCentreY                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOutlined                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                OutlineColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   BoxSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseText_PB_C::DrawPage(const class FString& RenderText, const struct FVector4& Borders, class UFont* RenderFont, const struct FVector2D& ScreenPosition, const struct FVector2D& Scale, const struct FLinearColor& RenderColor, const struct FLinearColor& ShadowColor, float Kerning, float LineSpace, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor, const struct FVector2D& BoxSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.DrawPage");
		
		ABaseText_PB_C_DrawPage_Params params {};
		params.RenderText = RenderText;
		params.Borders = Borders;
		params.RenderFont = RenderFont;
		params.ScreenPosition = ScreenPosition;
		params.Scale = Scale;
		params.RenderColor = RenderColor;
		params.ShadowColor = ShadowColor;
		params.Kerning = Kerning;
		params.LineSpace = LineSpace;
		params.ShadowOffset = ShadowOffset;
		params.bCentreX = bCentreX;
		params.bCentreY = bCentreY;
		params.bOutlined = bOutlined;
		params.OutlineColor = OutlineColor;
		params.BoxSize = BoxSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABaseText_PB_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.UserConstructionScript");
		
		ABaseText_PB_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvas*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseText_PB_C::CustomEvent_1(class UCanvas* Canvas, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.CustomEvent_1");
		
		ABaseText_PB_C_CustomEvent_1_Params params {};
		params.Canvas = Canvas;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.CreateTextTexture
	 * 		Flags  -> ()
	 */
	void ABaseText_PB_C::CreateTextTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.CreateTextTexture");
		
		ABaseText_PB_C_CreateTextTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABaseText_PB_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.ReceiveBeginPlay");
		
		ABaseText_PB_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.UpdateMimic
	 * 		Flags  -> ()
	 */
	void ABaseText_PB_C::UpdateMimic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.UpdateMimic");
		
		ABaseText_PB_C_UpdateMimic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.RedrawText
	 * 		Flags  -> ()
	 */
	void ABaseText_PB_C::RedrawText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.RedrawText");
		
		ABaseText_PB_C_RedrawText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.CreateDynamicMaterial
	 * 		Flags  -> ()
	 */
	void ABaseText_PB_C::CreateDynamicMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.CreateDynamicMaterial");
		
		ABaseText_PB_C_CreateDynamicMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseText_PB.BaseText_PB_C.ExecuteUbergraph_BaseText_PB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseText_PB_C::ExecuteUbergraph_BaseText_PB(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseText_PB.BaseText_PB_C.ExecuteUbergraph_BaseText_PB");
		
		ABaseText_PB_C_ExecuteUbergraph_BaseText_PB_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseText_PB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseText_PB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseText_PB.BaseText_PB_C");
		return ptr;
	}

}


