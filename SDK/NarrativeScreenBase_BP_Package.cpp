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
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateScreensMDD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              JumpRefresh                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Empty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Emissive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANarrativeScreenBase_BP_C::UpdateScreensMDD(float On, float JumpRefresh, float Empty, float Emissive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateScreensMDD");
		
		ANarrativeScreenBase_BP_C_UpdateScreensMDD_Params params {};
		params.On = On;
		params.JumpRefresh = JumpRefresh;
		params.Empty = Empty;
		params.Emissive = Emissive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.TurnOnLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANarrativeScreenBase_BP_C::TurnOnLight(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.TurnOnLight");
		
		ANarrativeScreenBase_BP_C_TurnOnLight_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.SpawnLight
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::SpawnLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.SpawnLight");
		
		ANarrativeScreenBase_BP_C_SpawnLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.LinkTextureToChannel
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::LinkTextureToChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.LinkTextureToChannel");
		
		ANarrativeScreenBase_BP_C_LinkTextureToChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateTVOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANarrativeScreenBase_BP_C::UpdateTVOn(bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateTVOn");
		
		ANarrativeScreenBase_BP_C_UpdateTVOn_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.SetScreenMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANarrativeScreenBase_BP_C::SetScreenMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.SetScreenMaterial");
		
		ANarrativeScreenBase_BP_C_SetScreenMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UserConstructionScript");
		
		ANarrativeScreenBase_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::ScreenRefreshInTL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__FinishedFunc");
		
		ANarrativeScreenBase_BP_C_ScreenRefreshInTL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::ScreenRefreshInTL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__UpdateFunc");
		
		ANarrativeScreenBase_BP_C_ScreenRefreshInTL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__NewTrack_1__EventFunc
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::ScreenRefreshInTL__NewTrack_1__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__NewTrack_1__EventFunc");
		
		ANarrativeScreenBase_BP_C_ScreenRefreshInTL__NewTrack_1__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Timeline_1__FinishedFunc");
		
		ANarrativeScreenBase_BP_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Timeline_1__UpdateFunc");
		
		ANarrativeScreenBase_BP_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateTVOnVisuals_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANarrativeScreenBase_BP_C::UpdateTVOnVisuals_Internal(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateTVOnVisuals_Internal");
		
		ANarrativeScreenBase_BP_C_UpdateTVOnVisuals_Internal_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Event_OnLinkedStatusChanged
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::Event_OnLinkedStatusChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Event_OnLinkedStatusChanged");
		
		ANarrativeScreenBase_BP_C_Event_OnLinkedStatusChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Event_OnIsOnChanged
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::Event_OnIsOnChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Event_OnIsOnChanged");
		
		ANarrativeScreenBase_BP_C_Event_OnIsOnChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ReceiveBeginPlay");
		
		ANarrativeScreenBase_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.flashRefreshJump
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::flashRefreshJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.flashRefreshJump");
		
		ANarrativeScreenBase_BP_C_flashRefreshJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ManualUnmute
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::ManualUnmute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ManualUnmute");
		
		ANarrativeScreenBase_BP_C_ManualUnmute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ManualMute
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::ManualMute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ManualMute");
		
		ANarrativeScreenBase_BP_C_ManualMute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.startDisfunctional
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::startDisfunctional()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.startDisfunctional");
		
		ANarrativeScreenBase_BP_C_startDisfunctional_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.stopDisfunctional
	 * 		Flags  -> ()
	 */
	void ANarrativeScreenBase_BP_C::stopDisfunctional()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.stopDisfunctional");
		
		ANarrativeScreenBase_BP_C_stopDisfunctional_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ExecuteUbergraph_NarrativeScreenBase_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANarrativeScreenBase_BP_C::ExecuteUbergraph_NarrativeScreenBase_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ExecuteUbergraph_NarrativeScreenBase_BP");
		
		ANarrativeScreenBase_BP_C_ExecuteUbergraph_NarrativeScreenBase_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANarrativeScreenBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANarrativeScreenBase_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NarrativeScreenBase_BP.NarrativeScreenBase_BP_C");
		return ptr;
	}

}


