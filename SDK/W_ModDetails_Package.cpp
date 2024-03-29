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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.FormatUpdateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        FormattedTime                                              (Parm, OutParm)
	 */
	void UW_ModDetails_C::FormatUpdateTime(class FText* FormattedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.FormatUpdateTime");
		
		UW_ModDetails_C_FormatUpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FormattedTime != nullptr)
			*FormattedTime = params.FormattedTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.CreateGalleryThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModDetails_C::CreateGalleryThumbnail(class UTexture2DDynamic* Image, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.CreateGalleryThumbnail");
		
		UW_ModDetails_C_CreateGalleryThumbnail_Params params {};
		params.Image = Image;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.SetStats
	 * 		Flags  -> ()
	 */
	void UW_ModDetails_C::SetStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.SetStats");
		
		UW_ModDetails_C_SetStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.SetRating
	 * 		Flags  -> ()
	 */
	void UW_ModDetails_C::SetRating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.SetRating");
		
		UW_ModDetails_C_SetRating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.SetButtonSubcribedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Subscribed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ModDetails_C::SetButtonSubcribedState(bool Subscribed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.SetButtonSubcribedState");
		
		UW_ModDetails_C_SetButtonSubcribedState_Params params {};
		params.Subscribed = Subscribed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnGalleryImageLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModDetails_C::OnGalleryImageLoaded(class UTexture2DDynamic* Image, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.OnGalleryImageLoaded");
		
		UW_ModDetails_C_OnGalleryImageLoaded_Params params {};
		params.Image = Image;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.LoadImageFromThumb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ModDetailsThumbnails_C*                   TriggeringThumbnail                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModDetails_C::LoadImageFromThumb(class UW_ModDetailsThumbnails_C* TriggeringThumbnail, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.LoadImageFromThumb");
		
		UW_ModDetails_C_LoadImageFromThumb_Params params {};
		params.TriggeringThumbnail = TriggeringThumbnail;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnFullSizeGalleryImageLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModDetails_C::OnFullSizeGalleryImageLoaded(class UTexture2DDynamic* Image, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.OnFullSizeGalleryImageLoaded");
		
		UW_ModDetails_C_OnFullSizeGalleryImageLoaded_Params params {};
		params.Image = Image;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ModDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.Construct");
		
		UW_ModDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnModSet
	 * 		Flags  -> ()
	 */
	void UW_ModDetails_C::OnModSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.OnModSet");
		
		UW_ModDetails_C_OnModSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ModDetails_C::BndEvt__W_ModDetails_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_ModDetails_C_BndEvt__W_ModDetails_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_Subscribe_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModDetails_C::BndEvt__W_ModDetails_btn_Subscribe_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_Subscribe_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UW_ModDetails_C_BndEvt__W_ModDetails_btn_Subscribe_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnLoadingFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSubscribed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ModDetails_C::OnLoadingFinished(bool bSubscribed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.OnLoadingFinished");
		
		UW_ModDetails_C_OnLoadingFinished_Params params {};
		params.bSubscribed = bSubscribed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_VoteUp_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModDetails_C::BndEvt__W_ModDetails_btn_VoteUp_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_VoteUp_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
		
		UW_ModDetails_C_BndEvt__W_ModDetails_btn_VoteUp_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnRatingSubmitted
	 * 		Flags  -> ()
	 */
	void UW_ModDetails_C::OnRatingSubmitted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.OnRatingSubmitted");
		
		UW_ModDetails_C_OnRatingSubmitted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_VoteDown_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModDetails_C::BndEvt__W_ModDetails_btn_VoteDown_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_VoteDown_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");
		
		UW_ModDetails_C_BndEvt__W_ModDetails_btn_VoteDown_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_ViewInBrowser_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModDetails_C::BndEvt__W_ModDetails_btn_ViewInBrowser_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_ViewInBrowser_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");
		
		UW_ModDetails_C_BndEvt__W_ModDetails_btn_ViewInBrowser_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.CloseDetails
	 * 		Flags  -> ()
	 */
	void UW_ModDetails_C::CloseDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.CloseDetails");
		
		UW_ModDetails_C_CloseDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.ExecuteUbergraph_W_ModDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModDetails_C::ExecuteUbergraph_W_ModDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.ExecuteUbergraph_W_ModDetails");
		
		UW_ModDetails_C_ExecuteUbergraph_W_ModDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnClickaway__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ModDetails_C::OnClickaway__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModDetails.W_ModDetails_C.OnClickaway__DelegateSignature");
		
		UW_ModDetails_C_OnClickaway__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ModDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ModDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ModDetails.W_ModDetails_C");
		return ptr;
	}

}


