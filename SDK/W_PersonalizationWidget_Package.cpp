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
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAndDisableAllIncompatibleHeads
	 * 		Flags  -> ()
	 */
	void UW_PersonalizationWidget_C::DeselectAndDisableAllIncompatibleHeads()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAndDisableAllIncompatibleHeads");
		
		UW_PersonalizationWidget_C_DeselectAndDisableAllIncompatibleHeads_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAndDisableAllIncompatibleBodies
	 * 		Flags  -> ()
	 */
	void UW_PersonalizationWidget_C::DeselectAndDisableAllIncompatibleBodies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAndDisableAllIncompatibleBodies");
		
		UW_PersonalizationWidget_C_DeselectAndDisableAllIncompatibleBodies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAllHeads
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationItem_C*                    Except                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PersonalizationWidget_C::DeselectAllHeads(class UW_PersonalizationItem_C* Except)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAllHeads");
		
		UW_PersonalizationWidget_C_DeselectAllHeads_Params params {};
		params.Except = Except;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAllBodys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationItem_C*                    Except                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PersonalizationWidget_C::DeselectAllBodys(class UW_PersonalizationItem_C* Except)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAllBodys");
		
		UW_PersonalizationWidget_C_DeselectAllBodys_Params params {};
		params.Except = Except;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PersonalizationWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.PreConstruct");
		
		UW_PersonalizationWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.HeadEventClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationItem_C*                    PersonalizationItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PersonalizationWidget_C::HeadEventClicked(class UW_PersonalizationItem_C* PersonalizationItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.HeadEventClicked");
		
		UW_PersonalizationWidget_C_HeadEventClicked_Params params {};
		params.PersonalizationItem = PersonalizationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.BodyEventClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationItem_C*                    PersonalizationItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PersonalizationWidget_C::BodyEventClicked(class UW_PersonalizationItem_C* PersonalizationItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.BodyEventClicked");
		
		UW_PersonalizationWidget_C_BodyEventClicked_Params params {};
		params.PersonalizationItem = PersonalizationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.Apply Personalization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationCategory_C*                PersonalizationCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PersonalizationWidget_C::Apply_Personalization(class UW_PersonalizationCategory_C* PersonalizationCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.Apply Personalization");
		
		UW_PersonalizationWidget_C_Apply_Personalization_Params params {};
		params.PersonalizationCategory = PersonalizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.Cancel Personalization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationCategory_C*                PersonalizationCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PersonalizationWidget_C::Cancel_Personalization(class UW_PersonalizationCategory_C* PersonalizationCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.Cancel Personalization");
		
		UW_PersonalizationWidget_C_Cancel_Personalization_Params params {};
		params.PersonalizationCategory = PersonalizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.HeadCategoryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationCategory_C*                PersonalizationCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PersonalizationWidget_C::HeadCategoryClicked(class UW_PersonalizationCategory_C* PersonalizationCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.HeadCategoryClicked");
		
		UW_PersonalizationWidget_C_HeadCategoryClicked_Params params {};
		params.PersonalizationCategory = PersonalizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.BodyCategoryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationCategory_C*                PersonalizationCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PersonalizationWidget_C::BodyCategoryClicked(class UW_PersonalizationCategory_C* PersonalizationCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.BodyCategoryClicked");
		
		UW_PersonalizationWidget_C_BodyCategoryClicked_Params params {};
		params.PersonalizationCategory = PersonalizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PersonalizationWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.Tick");
		
		UW_PersonalizationWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.ExecuteUbergraph_W_PersonalizationWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PersonalizationWidget_C::ExecuteUbergraph_W_PersonalizationWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PersonalizationWidget.W_PersonalizationWidget_C.ExecuteUbergraph_W_PersonalizationWidget");
		
		UW_PersonalizationWidget_C_ExecuteUbergraph_W_PersonalizationWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PersonalizationWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PersonalizationWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PersonalizationWidget.W_PersonalizationWidget_C");
		return ptr;
	}

}


