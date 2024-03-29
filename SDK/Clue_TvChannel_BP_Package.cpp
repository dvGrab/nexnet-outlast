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
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetAssociatedInvestigationComponent
	 * 		Flags  -> ()
	 */
	class URBPlayerInvestigationZoneComponent* AClue_TvChannel_BP_C::GetAssociatedInvestigationComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetAssociatedInvestigationComponent");
		
		AClue_TvChannel_BP_C_GetAssociatedInvestigationComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetClue
	 * 		Flags  -> ()
	 */
	struct FClueData AClue_TvChannel_BP_C::GetClue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetClue");
		
		AClue_TvChannel_BP_C_GetClue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.OnRep_MasterInvestigationTV
	 * 		Flags  -> ()
	 */
	void AClue_TvChannel_BP_C::OnRep_MasterInvestigationTV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.OnRep_MasterInvestigationTV");
		
		AClue_TvChannel_BP_C_OnRep_MasterInvestigationTV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.UpdateClueText
	 * 		Flags  -> ()
	 */
	void AClue_TvChannel_BP_C::UpdateClueText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.UpdateClueText");
		
		AClue_TvChannel_BP_C_UpdateClueText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetInvestigationZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerInvestigationZoneComponent*         InvestigationZone                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AClue_TvChannel_BP_C::GetInvestigationZone(class URBPlayerInvestigationZoneComponent** InvestigationZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetInvestigationZone");
		
		AClue_TvChannel_BP_C_GetInvestigationZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InvestigationZone != nullptr)
			*InvestigationZone = params.InvestigationZone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.SetInvestigationZoneEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AClue_TvChannel_BP_C::SetInvestigationZoneEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.SetInvestigationZoneEnabled");
		
		AClue_TvChannel_BP_C_SetInvestigationZoneEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.HasValidClue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AClue_TvChannel_BP_C::HasValidClue(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.HasValidClue");
		
		AClue_TvChannel_BP_C_HasValidClue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.HideClue
	 * 		Flags  -> ()
	 */
	void AClue_TvChannel_BP_C::HideClue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.HideClue");
		
		AClue_TvChannel_BP_C_HideClue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.ShowClue
	 * 		Flags  -> ()
	 */
	void AClue_TvChannel_BP_C::ShowClue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.ShowClue");
		
		AClue_TvChannel_BP_C_ShowClue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.OnRep_Clue
	 * 		Flags  -> ()
	 */
	void AClue_TvChannel_BP_C::OnRep_Clue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.OnRep_Clue");
		
		AClue_TvChannel_BP_C_OnRep_Clue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.SetClue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClueData                                   ClueData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void AClue_TvChannel_BP_C::SetClue(const struct FClueData& ClueData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.SetClue");
		
		AClue_TvChannel_BP_C_SetClue_Params params {};
		params.ClueData = ClueData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AClue_TvChannel_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.Event_OnResetStage");
		
		AClue_TvChannel_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.Event_OnLinkedScreenAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBNarrativeScreen*                          linkedScreen                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AClue_TvChannel_BP_C::Event_OnLinkedScreenAdded(class ARBNarrativeScreen* linkedScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.Event_OnLinkedScreenAdded");
		
		AClue_TvChannel_BP_C_Event_OnLinkedScreenAdded_Params params {};
		params.linkedScreen = linkedScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.ExecuteUbergraph_Clue_TvChannel_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AClue_TvChannel_BP_C::ExecuteUbergraph_Clue_TvChannel_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.ExecuteUbergraph_Clue_TvChannel_BP");
		
		AClue_TvChannel_BP_C_ExecuteUbergraph_Clue_TvChannel_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AClue_TvChannel_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AClue_TvChannel_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Clue_TvChannel_BP.Clue_TvChannel_BP_C");
		return ptr;
	}

}


