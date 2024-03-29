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
	 * 		Name   -> Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_Intel_Entry_C::SetActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.SetActive");
		
		UW_Briefing_Intel_Entry_C_SetActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_Intel_Entry_C::SetHovered(bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.SetHovered");
		
		UW_Briefing_Intel_Entry_C_SetHovered_Params params {};
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Intel_Entry_C::BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UW_Briefing_Intel_Entry_C_BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Intel_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.Construct");
		
		UW_Briefing_Intel_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_Intel_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.PreConstruct");
		
		UW_Briefing_Intel_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Intel_Entry_C::BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");
		
		UW_Briefing_Intel_Entry_C_BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Intel_Entry_C::BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");
		
		UW_Briefing_Intel_Entry_C_BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.ExecuteUbergraph_W_Briefing_Intel_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Intel_Entry_C::ExecuteUbergraph_W_Briefing_Intel_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.ExecuteUbergraph_W_Briefing_Intel_Entry");
		
		UW_Briefing_Intel_Entry_C_ExecuteUbergraph_W_Briefing_Intel_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.MediaIntelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Briefing_Intel_Entry_C*                   ClickedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FST_Briefing_Evidence                       Media                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_Briefing_Intel_Entry_C::MediaIntelClicked__DelegateSignature(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.MediaIntelClicked__DelegateSignature");
		
		UW_Briefing_Intel_Entry_C_MediaIntelClicked__DelegateSignature_Params params {};
		params.ClickedEntry = ClickedEntry;
		params.Media = Media;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BioIntelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Briefing_Intel_Entry_C*                   ClickedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Briefing_Intel_Entry_C::BioIntelClicked__DelegateSignature(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BioIntelClicked__DelegateSignature");
		
		UW_Briefing_Intel_Entry_C_BioIntelClicked__DelegateSignature_Params params {};
		params.ClickedEntry = ClickedEntry;
		params.Bio = Bio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Intel_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_Intel_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C");
		return ptr;
	}

}


