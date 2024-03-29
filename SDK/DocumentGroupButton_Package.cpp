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
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.IsElementEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEmpty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDocumentGroupButton_C::IsElementEmpty(bool* bIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.IsElementEmpty");
		
		UDocumentGroupButton_C_IsElementEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsEmpty != nullptr)
			*bIsEmpty = params.bIsEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UDocumentGroupButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.OnFocusReceived");
		
		UDocumentGroupButton_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.IsConsideredHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bConsideredHovered                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDocumentGroupButton_C::IsConsideredHovered(bool* bConsideredHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.IsConsideredHovered");
		
		UDocumentGroupButton_C_IsConsideredHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bConsideredHovered != nullptr)
			*bConsideredHovered = params.bConsideredHovered;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.SetFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInFocused                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDocumentGroupButton_C::SetFocused(bool bInFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.SetFocused");
		
		UDocumentGroupButton_C_SetFocused_Params params {};
		params.bInFocused = bInFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDocumentGroupButton_C::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.SetHovered");
		
		UDocumentGroupButton_C_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBCollectibleDocumentGroupRow              documentGroupRow                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDocumentGroupButton_C::Setup(const struct FRBCollectibleDocumentGroupRow& documentGroupRow, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.Setup");
		
		UDocumentGroupButton_C_Setup_Params params {};
		params.documentGroupRow = documentGroupRow;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.UpdateFocus
	 * 		Flags  -> ()
	 */
	void UDocumentGroupButton_C::UpdateFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.UpdateFocus");
		
		UDocumentGroupButton_C_UpdateFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDocumentGroupButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.PreConstruct");
		
		UDocumentGroupButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDocumentGroupButton_C::BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UDocumentGroupButton_C_BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDocumentGroupButton_C::BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UDocumentGroupButton_C_BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDocumentGroupButton_C::BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UDocumentGroupButton_C_BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UDocumentGroupButton_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.OnFocusLost");
		
		UDocumentGroupButton_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UDocumentGroupButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.Construct");
		
		UDocumentGroupButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.Destruct
	 * 		Flags  -> ()
	 */
	void UDocumentGroupButton_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.Destruct");
		
		UDocumentGroupButton_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void UDocumentGroupButton_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.OnMenuInputSourceChanged");
		
		UDocumentGroupButton_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.ExecuteUbergraph_DocumentGroupButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDocumentGroupButton_C::ExecuteUbergraph_DocumentGroupButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.ExecuteUbergraph_DocumentGroupButton");
		
		UDocumentGroupButton_C_ExecuteUbergraph_DocumentGroupButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DocumentGroupButton.DocumentGroupButton_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DocumentGroupId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDocumentGroupButton_C::OnSelected__DelegateSignature(const class FName& DocumentGroupId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DocumentGroupButton.DocumentGroupButton_C.OnSelected__DelegateSignature");
		
		UDocumentGroupButton_C_OnSelected__DelegateSignature_Params params {};
		params.DocumentGroupId = DocumentGroupId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDocumentGroupButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDocumentGroupButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DocumentGroupButton.DocumentGroupButton_C");
		return ptr;
	}

}


