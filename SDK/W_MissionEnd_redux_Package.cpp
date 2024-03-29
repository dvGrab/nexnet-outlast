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
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.GetMissionNextMapTimerVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_MissionEnd_redux_C::GetMissionNextMapTimerVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.GetMissionNextMapTimerVisibility");
		
		UW_MissionEnd_redux_C_GetMissionNextMapTimerVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_MissionEnd_redux_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.OnMouseButtonDown");
		
		UW_MissionEnd_redux_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddAllPenalties
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_redux_C::AddAllPenalties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddAllPenalties");
		
		UW_MissionEnd_redux_C_AddAllPenalties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddPenalty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_redux_C::AddPenalty(const class FText& Name, int32_t Count, int32_t Total, int32_t Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddPenalty");
		
		UW_MissionEnd_redux_C_AddPenalty_Params params {};
		params.Name = Name;
		params.Count = Count;
		params.Total = Total;
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddAllBonuses
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_redux_C::AddAllBonuses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddAllBonuses");
		
		UW_MissionEnd_redux_C_AddAllBonuses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_redux_C::AddBonus(const class FText& Name, int32_t Count, int32_t Total, int32_t Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.AddBonus");
		
		UW_MissionEnd_redux_C_AddBonus_Params params {};
		params.Name = Name;
		params.Count = Count;
		params.Total = Total;
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.GetMapTimeRemaining
	 * 		Flags  -> ()
	 */
	class FText UW_MissionEnd_redux_C::GetMapTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.GetMapTimeRemaining");
		
		UW_MissionEnd_redux_C_GetMapTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.IsMultiplayerGame
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_MissionEnd_redux_C::IsMultiplayerGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.IsMultiplayerGame");
		
		UW_MissionEnd_redux_C_IsMultiplayerGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.GetRestartButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_MissionEnd_redux_C::GetRestartButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.GetRestartButtonVisibility");
		
		UW_MissionEnd_redux_C_GetRestartButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_redux_C::BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");
		
		UW_MissionEnd_redux_C_BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__btn_Restart_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_redux_C::BndEvt__btn_Restart_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__btn_Restart_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");
		
		UW_MissionEnd_redux_C_BndEvt__btn_Restart_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__Scores_K2Node_ComponentBoundEvent_0_AllScoresAdded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_redux_C::BndEvt__Scores_K2Node_ComponentBoundEvent_0_AllScoresAdded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__Scores_K2Node_ComponentBoundEvent_0_AllScoresAdded__DelegateSignature");
		
		UW_MissionEnd_redux_C_BndEvt__Scores_K2Node_ComponentBoundEvent_0_AllScoresAdded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__Penalties_K2Node_ComponentBoundEvent_1_AllPenaltiesAdded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_redux_C::BndEvt__Penalties_K2Node_ComponentBoundEvent_1_AllPenaltiesAdded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__Penalties_K2Node_ComponentBoundEvent_1_AllPenaltiesAdded__DelegateSignature");
		
		UW_MissionEnd_redux_C_BndEvt__Penalties_K2Node_ComponentBoundEvent_1_AllPenaltiesAdded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__W_MissionEnd_redux_btn_lobby_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_redux_C::BndEvt__W_MissionEnd_redux_btn_lobby_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.BndEvt__W_MissionEnd_redux_btn_lobby_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
		
		UW_MissionEnd_redux_C_BndEvt__W_MissionEnd_redux_btn_lobby_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_redux_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.Construct");
		
		UW_MissionEnd_redux_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_redux.W_MissionEnd_redux_C.ExecuteUbergraph_W_MissionEnd_redux
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_redux_C::ExecuteUbergraph_W_MissionEnd_redux(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_redux.W_MissionEnd_redux_C.ExecuteUbergraph_W_MissionEnd_redux");
		
		UW_MissionEnd_redux_C_ExecuteUbergraph_W_MissionEnd_redux_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MissionEnd_redux_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MissionEnd_redux_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MissionEnd_redux.W_MissionEnd_redux_C");
		return ptr;
	}

}


