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
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.GetPingItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        outName                                                    (Parm, OutParm)
	 */
	bool AHackPanel_BP_C::GetPingItemName(class FText* outName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.GetPingItemName");
		
		AHackPanel_BP_C_GetPingItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outName != nullptr)
			*outName = params.outName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.GetPingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               outIsEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHackPanel_BP_C::GetPingEnabled(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, bool* outIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.GetPingEnabled");
		
		AHackPanel_BP_C_GetPingEnabled_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outIsEnabled != nullptr)
			*outIsEnabled = params.outIsEnabled;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.GetPlayerPingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FPlayerPingData                             outData                                                    (Parm, OutParm)
	 */
	bool AHackPanel_BP_C::GetPlayerPingData(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FPlayerPingData* outData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.GetPlayerPingData");
		
		AHackPanel_BP_C_GetPlayerPingData_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outData != nullptr)
			*outData = params.outData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.GetPlayerPingWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AHackPanel_BP_C::GetPlayerPingWorldLocation(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.GetPlayerPingWorldLocation");
		
		AHackPanel_BP_C_GetPlayerPingWorldLocation_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.GetTripLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseDefault                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AHackPanel_BP_C::GetTripLeft(bool bUseDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.GetTripLeft");
		
		AHackPanel_BP_C_GetTripLeft_Params params {};
		params.bUseDefault = bUseDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.RefreshTripLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseDefault                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHackPanel_BP_C::RefreshTripLeft(bool bUseDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.RefreshTripLeft");
		
		AHackPanel_BP_C_RefreshTripLeft_Params params {};
		params.bUseDefault = bUseDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.ResetToDefault
	 * 		Flags  -> ()
	 */
	void AHackPanel_BP_C::ResetToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.ResetToDefault");
		
		AHackPanel_BP_C_ResetToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.GetTripLeftString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseDefault                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FText AHackPanel_BP_C::GetTripLeftString(bool bUseDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.GetTripLeftString");
		
		AHackPanel_BP_C_GetTripLeftString_Params params {};
		params.bUseDefault = bUseDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.RefreshStageLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseDefault                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHackPanel_BP_C::RefreshStageLeft(bool bUseDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.RefreshStageLeft");
		
		AHackPanel_BP_C_RefreshStageLeft_Params params {};
		params.bUseDefault = bUseDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.ButtonSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPasscodeButtonComponent*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::ButtonSound(class URBPasscodeButtonComponent* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.ButtonSound");
		
		AHackPanel_BP_C_ButtonSound_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AHackPanel_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.UserConstructionScript");
		
		AHackPanel_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.Unlocking__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AHackPanel_BP_C::Unlocking__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.Unlocking__FinishedFunc");
		
		AHackPanel_BP_C_Unlocking__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.Unlocking__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AHackPanel_BP_C::Unlocking__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.Unlocking__UpdateFunc");
		
		AHackPanel_BP_C_Unlocking__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.Unlocking__Unlocked__EventFunc
	 * 		Flags  -> ()
	 */
	void AHackPanel_BP_C::Unlocking__Unlocked__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.Unlocking__Unlocked__EventFunc");
		
		AHackPanel_BP_C_Unlocking__Unlocked__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.ReceiveTick");
		
		AHackPanel_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.RefreshQuadrantMaterials
	 * 		Flags  -> ()
	 */
	void AHackPanel_BP_C::RefreshQuadrantMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.RefreshQuadrantMaterials");
		
		AHackPanel_BP_C_RefreshQuadrantMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AHackPanel_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.ReceiveBeginPlay");
		
		AHackPanel_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_12_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_12_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_12_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_12_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_14_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_14_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_14_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_14_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_18_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_18_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_18_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_18_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_20_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_20_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_20_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_20_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_22_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_22_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_22_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_22_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_24_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_24_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_24_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_24_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_26_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_26_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_26_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_26_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_28_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_28_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_28_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_28_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_30_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_30_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_30_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_30_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_32_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_32_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_32_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_32_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.Physicalize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AdditionalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::Physicalize(const struct FVector& AdditionalImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.Physicalize");
		
		AHackPanel_BP_C_Physicalize_Params params {};
		params.AdditionalImpulse = AdditionalImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AHackPanel_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.Event_OnResetStage");
		
		AHackPanel_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__RBHackPanel_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__RBHackPanel_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__RBHackPanel_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__RBHackPanel_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBActiveSkillVision_K2Node_ComponentBoundEvent_3_ActiveSkillChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanel_BP_RBActiveSkillVision_K2Node_ComponentBoundEvent_3_ActiveSkillChanged__DelegateSignature(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBActiveSkillVision_K2Node_ComponentBoundEvent_3_ActiveSkillChanged__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanel_BP_RBActiveSkillVision_K2Node_ComponentBoundEvent_3_ActiveSkillChanged__DelegateSignature_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature");
		
		AHackPanel_BP_C_BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel_BP.HackPanel_BP_C.ExecuteUbergraph_HackPanel_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHackPanel_BP_C::ExecuteUbergraph_HackPanel_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel_BP.HackPanel_BP_C.ExecuteUbergraph_HackPanel_BP");
		
		AHackPanel_BP_C_ExecuteUbergraph_HackPanel_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHackPanel_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHackPanel_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HackPanel_BP.HackPanel_BP_C");
		return ptr;
	}

}


