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
	 * 		Name   -> Function W_ModCard.W_ModCard_C.SetButtonSubcribedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Subscribed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ModCard_C::SetButtonSubcribedState(bool Subscribed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.SetButtonSubcribedState");
		
		UW_ModCard_C_SetButtonSubcribedState_Params params {};
		params.Subscribed = Subscribed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.OnThumbnailLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModCard_C::OnThumbnailLoaded(class UTexture2DDynamic* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.OnThumbnailLoaded");
		
		UW_ModCard_C_OnThumbnailLoaded_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.BndEvt__W_ModCard_CheckBox_129_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ModCard_C::BndEvt__W_ModCard_CheckBox_129_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.BndEvt__W_ModCard_CheckBox_129_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UW_ModCard_C_BndEvt__W_ModCard_CheckBox_129_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.OnModSet
	 * 		Flags  -> ()
	 */
	void UW_ModCard_C::OnModSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.OnModSet");
		
		UW_ModCard_C_OnModSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.OnModStateUpdated
	 * 		Flags  -> ()
	 */
	void UW_ModCard_C::OnModStateUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.OnModStateUpdated");
		
		UW_ModCard_C_OnModStateUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.OnLoadingFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSubscribed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ModCard_C::OnLoadingFinished(bool bSubscribed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.OnLoadingFinished");
		
		UW_ModCard_C_OnLoadingFinished_Params params {};
		params.bSubscribed = bSubscribed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.BndEvt__W_ModCard_btn_Subscription_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModCard_C::BndEvt__W_ModCard_btn_Subscription_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.BndEvt__W_ModCard_btn_Subscription_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UW_ModCard_C_BndEvt__W_ModCard_btn_Subscription_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ModCard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.Construct");
		
		UW_ModCard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.OnLoadingStarted
	 * 		Flags  -> ()
	 */
	void UW_ModCard_C::OnLoadingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.OnLoadingStarted");
		
		UW_ModCard_C_OnLoadingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.BndEvt__W_ModCard_btn_Card_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ModCard_C::BndEvt__W_ModCard_btn_Card_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.BndEvt__W_ModCard_btn_Card_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UW_ModCard_C_BndEvt__W_ModCard_btn_Card_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.ExecuteUbergraph_W_ModCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModCard_C::ExecuteUbergraph_W_ModCard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.ExecuteUbergraph_W_ModCard");
		
		UW_ModCard_C_ExecuteUbergraph_W_ModCard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModCard.W_ModCard_C.OnCardClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModData*                                    ModData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModCard_C::OnCardClicked__DelegateSignature(class UModData* ModData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModCard.W_ModCard_C.OnCardClicked__DelegateSignature");
		
		UW_ModCard_C_OnCardClicked__DelegateSignature_Params params {};
		params.ModData = ModData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ModCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ModCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ModCard.W_ModCard_C");
		return ptr;
	}

}


