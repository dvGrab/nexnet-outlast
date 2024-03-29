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
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.InitMedia
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_Briefing_Evidence>               MediaIntel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Briefing_Intel_C::InitMedia(TArray<struct FST_Briefing_Evidence>* MediaIntel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.InitMedia");
		
		UW_Briefing_Intel_C_InitMedia_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MediaIntel != nullptr)
			*MediaIntel = params.MediaIntel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.InitCivilians
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCharacterBio>                       CivilianBios                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Briefing_Intel_C::InitCivilians(TArray<struct FCharacterBio>* CivilianBios)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.InitCivilians");
		
		UW_Briefing_Intel_C_InitCivilians_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CivilianBios != nullptr)
			*CivilianBios = params.CivilianBios;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.InitSuspects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCharacterBio>                       SuspectBios                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Briefing_Intel_C::InitSuspects(TArray<struct FCharacterBio>* SuspectBios)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.InitSuspects");
		
		UW_Briefing_Intel_C_InitSuspects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SuspectBios != nullptr)
			*SuspectBios = params.SuspectBios;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateBioIntel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Briefing_Intel_C::UpdateBioIntel(const struct FCharacterBio& Bio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateBioIntel");
		
		UW_Briefing_Intel_C_UpdateBioIntel_Params params {};
		params.Bio = Bio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateMediaIntel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_Briefing_Evidence                       Media                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_Briefing_Intel_C::UpdateMediaIntel(const struct FST_Briefing_Evidence& Media)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateMediaIntel");
		
		UW_Briefing_Intel_C_UpdateMediaIntel_Params params {};
		params.Media = Media;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.AddToList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Intel_C::AddToList(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.AddToList");
		
		UW_Briefing_Intel_C_AddToList_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.CreateLists
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Intel_C::CreateLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.CreateLists");
		
		UW_Briefing_Intel_C_CreateLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_Intel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.PreConstruct");
		
		UW_Briefing_Intel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Intel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.Construct");
		
		UW_Briefing_Intel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_Briefing_Intel                          Intel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_Briefing_Intel_C::Initialize(const struct FST_Briefing_Intel& Intel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.Initialize");
		
		UW_Briefing_Intel_C_Initialize_Params params {};
		params.Intel = Intel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Briefing_Intel_C::BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature");
		
		UW_Briefing_Intel_C_BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature_Params params {};
		params.Bio = Bio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Briefing_Intel_C::BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature");
		
		UW_Briefing_Intel_C_BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature_Params params {};
		params.Bio = Bio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.ExecuteUbergraph_W_Briefing_Intel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Intel_C::ExecuteUbergraph_W_Briefing_Intel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Intel.W_Briefing_Intel_C.ExecuteUbergraph_W_Briefing_Intel");
		
		UW_Briefing_Intel_C_ExecuteUbergraph_W_Briefing_Intel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Intel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_Intel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_Intel.W_Briefing_Intel_C");
		return ptr;
	}

}


