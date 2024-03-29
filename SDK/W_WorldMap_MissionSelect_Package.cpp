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
	 * 		Name   -> Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.UpdateMissionScore
	 * 		Flags  -> ()
	 */
	void UW_WorldMap_MissionSelect_C::UpdateMissionScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.UpdateMissionScore");
		
		UW_WorldMap_MissionSelect_C_UpdateMissionScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WorldMap_MissionSelect_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.PreConstruct");
		
		UW_WorldMap_MissionSelect_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WorldMap_MissionSelect_C::BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
		
		UW_WorldMap_MissionSelect_C_BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WorldMap_MissionSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.Tick");
		
		UW_WorldMap_MissionSelect_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.ExecuteUbergraph_W_WorldMap_MissionSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WorldMap_MissionSelect_C::ExecuteUbergraph_W_WorldMap_MissionSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.ExecuteUbergraph_W_WorldMap_MissionSelect");
		
		UW_WorldMap_MissionSelect_C_ExecuteUbergraph_W_WorldMap_MissionSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.OnSetMissionButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_WorldMap_MissionSelect_C*                 BtnClicked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WorldMap_MissionSelect_C::OnSetMissionButtonClicked__DelegateSignature(class UW_WorldMap_MissionSelect_C* BtnClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.OnSetMissionButtonClicked__DelegateSignature");
		
		UW_WorldMap_MissionSelect_C_OnSetMissionButtonClicked__DelegateSignature_Params params {};
		params.BtnClicked = BtnClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_WorldMap_MissionSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_WorldMap_MissionSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C");
		return ptr;
	}

}


