/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.TurnOn
	 * 		Flags  -> ()
	 */
	void UFlipSwitchComponent_BP_C::TurnOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.TurnOn");
		
		UFlipSwitchComponent_BP_C_TurnOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.TurnOff
	 * 		Flags  -> ()
	 */
	void UFlipSwitchComponent_BP_C::TurnOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.TurnOff");
		
		UFlipSwitchComponent_BP_C_TurnOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.GetSwitchColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlipSwitchComponent_BP_C::GetSwitchColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.GetSwitchColor");
		
		UFlipSwitchComponent_BP_C_GetSwitchColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.RefreshVisualState
	 * 		Flags  -> ()
	 */
	void UFlipSwitchComponent_BP_C::RefreshVisualState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.RefreshVisualState");
		
		UFlipSwitchComponent_BP_C_RefreshVisualState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UFlipSwitchComponent_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.ReceiveBeginPlay");
		
		UFlipSwitchComponent_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.OnFlipSwitchStageChanged
	 * 		Flags  -> ()
	 */
	void UFlipSwitchComponent_BP_C::OnFlipSwitchStageChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.OnFlipSwitchStageChanged");
		
		UFlipSwitchComponent_BP_C_OnFlipSwitchStageChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.OnLocallyFocusStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlipSwitchComponent_BP_C::OnLocallyFocusStateChange(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.OnLocallyFocusStateChange");
		
		UFlipSwitchComponent_BP_C_OnLocallyFocusStateChange_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void UFlipSwitchComponent_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.Event_OnResetStage");
		
		UFlipSwitchComponent_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.ExecuteUbergraph_FlipSwitchComponent_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlipSwitchComponent_BP_C::ExecuteUbergraph_FlipSwitchComponent_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.ExecuteUbergraph_FlipSwitchComponent_BP");
		
		UFlipSwitchComponent_BP_C_ExecuteUbergraph_FlipSwitchComponent_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlipSwitchComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlipSwitchComponent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FlipSwitchComponent_BP.FlipSwitchComponent_BP_C");
		return ptr;
	}

}


