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
	 * 		Name   -> Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_PreMission_Tablet_MapMarker_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.OnMouseButtonUp");
		
		UW_PreMission_Tablet_MapMarker_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.HasAngleChanged
	 * 		Flags  -> ()
	 */
	bool UW_PreMission_Tablet_MapMarker_C::HasAngleChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.HasAngleChanged");
		
		UW_PreMission_Tablet_MapMarker_C_HasAngleChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.HasRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Rotates                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_Tablet_MapMarker_C::HasRotation(bool* Rotates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.HasRotation");
		
		UW_PreMission_Tablet_MapMarker_C_HasRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rotates != nullptr)
			*Rotates = params.Rotates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.SetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_Tablet_MapMarker_C::SetRotation(float NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.SetRotation");
		
		UW_PreMission_Tablet_MapMarker_C_SetRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.SetStyle
	 * 		Flags  -> ()
	 */
	void UW_PreMission_Tablet_MapMarker_C::SetStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.SetStyle");
		
		UW_PreMission_Tablet_MapMarker_C_SetStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_Tablet_MapMarker_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.PreConstruct");
		
		UW_PreMission_Tablet_MapMarker_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.SetupMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_Tablet_MapMarker_C::SetupMarker(const class FName& NewParam, float NewParam2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.SetupMarker");
		
		UW_PreMission_Tablet_MapMarker_C_SetupMarker_Params params {};
		params.NewParam = NewParam;
		params.NewParam2 = NewParam2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_Tablet_MapMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.Tick");
		
		UW_PreMission_Tablet_MapMarker_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.BndEvt__W_PreMission_Tablet_MapMarker_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_Tablet_MapMarker_C::BndEvt__W_PreMission_Tablet_MapMarker_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.BndEvt__W_PreMission_Tablet_MapMarker_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_PreMission_Tablet_MapMarker_C_BndEvt__W_PreMission_Tablet_MapMarker_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.ExecuteUbergraph_W_PreMission_Tablet_MapMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_Tablet_MapMarker_C::ExecuteUbergraph_W_PreMission_Tablet_MapMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.ExecuteUbergraph_W_PreMission_Tablet_MapMarker");
		
		UW_PreMission_Tablet_MapMarker_C_ExecuteUbergraph_W_PreMission_Tablet_MapMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PreMission_Tablet_MapMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PreMission_Tablet_MapMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C");
		return ptr;
	}

}


