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
	 * 		Name   -> Function GasCanister_BP.GasCanister_BP_C.IsUsable
	 * 		Flags  -> ()
	 */
	bool AGasCanister_BP_C::IsUsable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasCanister_BP.GasCanister_BP_C.IsUsable");
		
		AGasCanister_BP_C_IsUsable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasCanister_BP.GasCanister_BP_C.GetCustomDropInteractionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        out_CustomInteractionText                                  (Parm, OutParm)
	 */
	bool AGasCanister_BP_C::GetCustomDropInteractionText(class ARBPlayer* Player, class FText* out_CustomInteractionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasCanister_BP.GasCanister_BP_C.GetCustomDropInteractionText");
		
		AGasCanister_BP_C_GetCustomDropInteractionText_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_CustomInteractionText != nullptr)
			*out_CustomInteractionText = params.out_CustomInteractionText;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasCanister_BP.GasCanister_BP_C.GetCustomPickupInteractionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        out_CustomInteractionText                                  (Parm, OutParm)
	 */
	bool AGasCanister_BP_C::GetCustomPickupInteractionText(class ARBPlayer* Player, class FText* out_CustomInteractionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasCanister_BP.GasCanister_BP_C.GetCustomPickupInteractionText");
		
		AGasCanister_BP_C_GetCustomPickupInteractionText_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_CustomInteractionText != nullptr)
			*out_CustomInteractionText = params.out_CustomInteractionText;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasCanister_BP.GasCanister_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AGasCanister_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasCanister_BP.GasCanister_BP_C.Event_OnResetStage");
		
		AGasCanister_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasCanister_BP.GasCanister_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGasCanister_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasCanister_BP.GasCanister_BP_C.ReceiveBeginPlay");
		
		AGasCanister_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasCanister_BP.GasCanister_BP_C.Event_OnUsedOnInteractible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBLargeObjectInteractionPanelComponent*     interactible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGasCanister_BP_C::Event_OnUsedOnInteractible(class ARBPawn* interactor, class URBLargeObjectInteractionPanelComponent* interactible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasCanister_BP.GasCanister_BP_C.Event_OnUsedOnInteractible");
		
		AGasCanister_BP_C_Event_OnUsedOnInteractible_Params params {};
		params.interactor = interactor;
		params.interactible = interactible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasCanister_BP.GasCanister_BP_C.ExecuteUbergraph_GasCanister_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGasCanister_BP_C::ExecuteUbergraph_GasCanister_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasCanister_BP.GasCanister_BP_C.ExecuteUbergraph_GasCanister_BP");
		
		AGasCanister_BP_C_ExecuteUbergraph_GasCanister_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGasCanister_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGasCanister_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GasCanister_BP.GasCanister_BP_C");
		return ptr;
	}

}


