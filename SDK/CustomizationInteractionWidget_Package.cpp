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
	 * 		Name   -> Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.UpdateDevText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBCustomizationOption*                      Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationInteractionWidget_C::UpdateDevText(class URBCustomizationOption* Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.UpdateDevText");
		
		UCustomizationInteractionWidget_C_UpdateDevText_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationInteractionWidget_C::Initialize(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.Initialize");
		
		UCustomizationInteractionWidget_C_Initialize_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.UpdateInteractionType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationInteractionType                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemUnlockInfo                             unlockInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCustomizationInteractionWidget_C::UpdateInteractionType(ECustomizationInteractionType InteractionType, const struct FItemUnlockInfo& unlockInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.UpdateInteractionType");
		
		UCustomizationInteractionWidget_C_UpdateInteractionType_Params params {};
		params.InteractionType = InteractionType;
		params.unlockInfo = unlockInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.InitWithOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCustomizationOption*                Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECustomizationInteractionType                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationInteractionWidget_C::InitWithOption(class URBPlayerCustomizationOption* Option, ECustomizationInteractionType InteractionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.InitWithOption");
		
		UCustomizationInteractionWidget_C_InitWithOption_Params params {};
		params.Option = Option;
		params.InteractionType = InteractionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationInteractionWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.PreConstruct");
		
		UCustomizationInteractionWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.ExecuteUbergraph_CustomizationInteractionWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationInteractionWidget_C::ExecuteUbergraph_CustomizationInteractionWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.ExecuteUbergraph_CustomizationInteractionWidget");
		
		UCustomizationInteractionWidget_C_ExecuteUbergraph_CustomizationInteractionWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationInteractionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationInteractionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomizationInteractionWidget.CustomizationInteractionWidget_C");
		return ptr;
	}

}


