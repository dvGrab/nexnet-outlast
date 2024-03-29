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
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.IsSWATDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESquadPosition                                     InSquadPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SWATTeamStatus_C::IsSWATDead(ESquadPosition InSquadPosition, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.IsSWATDead");
		
		UW_SWATTeamStatus_C_IsSWATDead_Params params {};
		params.InSquadPosition = InSquadPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.IsSWATWaiting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               InActivity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SWATTeamStatus_C::IsSWATWaiting(class UBaseActivity** InActivity, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.IsSWATWaiting");
		
		UW_SWATTeamStatus_C_IsSWATWaiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActivity != nullptr)
			*InActivity = params.InActivity;
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.HideDuplicateCommandStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               InActivityA                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseActivity*                               InActivityB                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_SWATCommandStatus_C*                      StatusWidgetToHide                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATTeamStatus_C::HideDuplicateCommandStatus(class UBaseActivity** InActivityA, class UBaseActivity** InActivityB, class UW_SWATCommandStatus_C** StatusWidgetToHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.HideDuplicateCommandStatus");
		
		UW_SWATTeamStatus_C_HideDuplicateCommandStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActivityA != nullptr)
			*InActivityA = params.InActivityA;
		if (InActivityB != nullptr)
			*InActivityB = params.InActivityB;
		if (StatusWidgetToHide != nullptr)
			*StatusWidgetToHide = params.StatusWidgetToHide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.SetCommandStatusInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               InActivity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_SWATCommandStatus_C*                      CommandStatusWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATTeamStatus_C::SetCommandStatusInfo(class UBaseActivity** InActivity, class UW_SWATCommandStatus_C** CommandStatusWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.SetCommandStatusInfo");
		
		UW_SWATTeamStatus_C_SetCommandStatusInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActivity != nullptr)
			*InActivity = params.InActivity;
		if (CommandStatusWidget != nullptr)
			*CommandStatusWidget = params.CommandStatusWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnActivitySoftComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATTeamStatus_C::OnActivitySoftComplete(class UBaseActivity* Activity, class ACyberneticController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnActivitySoftComplete");
		
		UW_SWATTeamStatus_C_OnActivitySoftComplete_Params params {};
		params.Activity = Activity;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnQueuedActivitySoftComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATTeamStatus_C::OnQueuedActivitySoftComplete(class UBaseActivity* Activity, class ACyberneticController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnQueuedActivitySoftComplete");
		
		UW_SWATTeamStatus_C_OnQueuedActivitySoftComplete_Params params {};
		params.Activity = Activity;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusAllPlayerHealth
	 * 		Flags  -> ()
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatusAllPlayerHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusAllPlayerHealth");
		
		UW_SWATTeamStatus_C_UpdateSWATStatusAllPlayerHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatus
	 * 		Flags  -> ()
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatus");
		
		UW_SWATTeamStatus_C_UpdateSWATStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.InitializeSWATStatus
	 * 		Flags  -> ()
	 */
	void UW_SWATTeamStatus_C::InitializeSWATStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.InitializeSWATStatus");
		
		UW_SWATTeamStatus_C_InitializeSWATStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusPlayerHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SWATCommandStatus_C*                      InSWATCommandStatus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESquadPosition                                     InSquadPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatusPlayerHealth(class UW_SWATCommandStatus_C* InSWATCommandStatus, ESquadPosition InSquadPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusPlayerHealth");
		
		UW_SWATTeamStatus_C_UpdateSWATStatusPlayerHealth_Params params {};
		params.InSWATCommandStatus = InSWATCommandStatus;
		params.InSquadPosition = InSquadPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusCommands
	 * 		Flags  -> ()
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatusCommands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusCommands");
		
		UW_SWATTeamStatus_C_UpdateSWATStatusCommands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusCommandName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SWATCommandStatus_C*                      InSWATCommandWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseActivity*                               SquadActivity                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESquadPosition                                     InSquadPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatusCommandName(class UW_SWATCommandStatus_C* InSWATCommandWidget, class UBaseActivity** SquadActivity, ESquadPosition InSquadPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusCommandName");
		
		UW_SWATTeamStatus_C_UpdateSWATStatusCommandName_Params params {};
		params.InSWATCommandWidget = InSWATCommandWidget;
		params.InSquadPosition = InSquadPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SquadActivity != nullptr)
			*SquadActivity = params.SquadActivity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusPlayerNameFromSquadPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SWATCommandStatus_C*                      InSWATCommandWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESquadPosition                                     InSquadPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatusPlayerNameFromSquadPosition(class UW_SWATCommandStatus_C* InSWATCommandWidget, ESquadPosition InSquadPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusPlayerNameFromSquadPosition");
		
		UW_SWATTeamStatus_C_UpdateSWATStatusPlayerNameFromSquadPosition_Params params {};
		params.InSWATCommandWidget = InSWATCommandWidget;
		params.InSquadPosition = InSquadPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_SWATTeamStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.Construct");
		
		UW_SWATTeamStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnDefaultCommandIssued
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Issuer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESwatCommand                                       CommandIssued                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATTeamStatus_C::OnDefaultCommandIssued(class APlayerCharacter* Issuer, ESwatCommand CommandIssued)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnDefaultCommandIssued");
		
		UW_SWATTeamStatus_C_OnDefaultCommandIssued_Params params {};
		params.Issuer = Issuer;
		params.CommandIssued = CommandIssued;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateStatus
	 * 		Flags  -> ()
	 */
	void UW_SWATTeamStatus_C::UpdateStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateStatus");
		
		UW_SWATTeamStatus_C_UpdateStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.ExecuteUbergraph_W_SWATTeamStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATTeamStatus_C::ExecuteUbergraph_W_SWATTeamStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATTeamStatus.W_SWATTeamStatus_C.ExecuteUbergraph_W_SWATTeamStatus");
		
		UW_SWATTeamStatus_C_ExecuteUbergraph_W_SWATTeamStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_SWATTeamStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_SWATTeamStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SWATTeamStatus.W_SWATTeamStatus_C");
		return ptr;
	}

}


