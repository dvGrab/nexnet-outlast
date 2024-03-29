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
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ClearActive
	 * 		Flags  -> ()
	 */
	void UW_Briefing_IntelList_Entry_C::ClearActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ClearActive");
		
		UW_Briefing_IntelList_Entry_C_ClearActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.AddToGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_IntelList_Entry_C::AddToGrid(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.AddToGrid");
		
		UW_Briefing_IntelList_Entry_C_AddToGrid_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitMedia
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_Briefing_Evidence>               Media                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Briefing_IntelList_Entry_C::InitMedia(TArray<struct FST_Briefing_Evidence>* Media)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitMedia");
		
		UW_Briefing_IntelList_Entry_C_InitMedia_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Media != nullptr)
			*Media = params.Media;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitBios
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCharacterBio>                       Bios                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Briefing_IntelList_Entry_C::InitBios(TArray<struct FCharacterBio>* Bios)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitBios");
		
		UW_Briefing_IntelList_Entry_C_InitBios_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bios != nullptr)
			*Bios = params.Bios;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_IntelList_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.PreConstruct");
		
		UW_Briefing_IntelList_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Briefing_IntelList_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.Construct");
		
		UW_Briefing_IntelList_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ForceClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_IntelList_Entry_C::ForceClick(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ForceClick");
		
		UW_Briefing_IntelList_Entry_C_ForceClick_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Briefing_Intel_Entry_C*                   ClickedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FST_Briefing_Evidence                       Media                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_Briefing_IntelList_Entry_C::MediaClicked(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaClicked");
		
		UW_Briefing_IntelList_Entry_C_MediaClicked_Params params {};
		params.ClickedEntry = ClickedEntry;
		params.Media = Media;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Briefing_Intel_Entry_C*                   ClickedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Briefing_IntelList_Entry_C::BioClicked(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioClicked");
		
		UW_Briefing_IntelList_Entry_C_BioClicked_Params params {};
		params.ClickedEntry = ClickedEntry;
		params.Bio = Bio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ExecuteUbergraph_W_Briefing_IntelList_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_IntelList_Entry_C::ExecuteUbergraph_W_Briefing_IntelList_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ExecuteUbergraph_W_Briefing_IntelList_Entry");
		
		UW_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaIntelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_Briefing_Evidence                       Media                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_Briefing_IntelList_Entry_C::MediaIntelClicked__DelegateSignature(const struct FST_Briefing_Evidence& Media)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaIntelClicked__DelegateSignature");
		
		UW_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature_Params params {};
		params.Media = Media;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioIntelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Briefing_IntelList_Entry_C::BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioIntelClicked__DelegateSignature");
		
		UW_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature_Params params {};
		params.Bio = Bio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_IntelList_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_IntelList_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C");
		return ptr;
	}

}


