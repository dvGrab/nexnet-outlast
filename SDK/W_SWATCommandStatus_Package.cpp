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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.Grow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInstant                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SWATCommandStatus_C::Grow(bool bInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.Grow");
		
		UW_SWATCommandStatus_C_Grow_Params params {};
		params.bInstant = bInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.Shrink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInstant                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SWATCommandStatus_C::Shrink(bool bInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.Shrink");
		
		UW_SWATCommandStatus_C_Shrink_Params params {};
		params.bInstant = bInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.HideCommandInfo
	 * 		Flags  -> ()
	 */
	void UW_SWATCommandStatus_C::HideCommandInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.HideCommandInfo");
		
		UW_SWATCommandStatus_C_HideCommandInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.ShowCommandSubText
	 * 		Flags  -> ()
	 */
	void UW_SWATCommandStatus_C::ShowCommandSubText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.ShowCommandSubText");
		
		UW_SWATCommandStatus_C_ShowCommandSubText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetQueueCommandSubText_Rich
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_SWATCommandStatus_C::SetQueueCommandSubText_Rich(const class FString& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetQueueCommandSubText_Rich");
		
		UW_SWATCommandStatus_C_SetQueueCommandSubText_Rich_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetQueueCommandSubText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_SWATCommandStatus_C::SetQueueCommandSubText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetQueueCommandSubText");
		
		UW_SWATCommandStatus_C_SetQueueCommandSubText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCommandNameColorFromTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETeamType                                          InTeam                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATCommandStatus_C::SetCommandNameColorFromTeam(ETeamType InTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCommandNameColorFromTeam");
		
		UW_SWATCommandStatus_C_SetCommandNameColorFromTeam_Params params {};
		params.InTeam = InTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCommandSubText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_SWATCommandStatus_C::SetCommandSubText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCommandSubText");
		
		UW_SWATCommandStatus_C_SetCommandSubText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.Set Command Sub Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_SWATCommandStatus_C::Set_Command_Sub_Text(const class FString& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.Set Command Sub Text");
		
		UW_SWATCommandStatus_C_Set_Command_Sub_Text_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandCompleteQueuedAnim
	 * 		Flags  -> ()
	 */
	void UW_SWATCommandStatus_C::PlayCommandCompleteQueuedAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandCompleteQueuedAnim");
		
		UW_SWATCommandStatus_C_PlayCommandCompleteQueuedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandIssuedAnim
	 * 		Flags  -> ()
	 */
	void UW_SWATCommandStatus_C::PlayCommandIssuedAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandIssuedAnim");
		
		UW_SWATCommandStatus_C_PlayCommandIssuedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandCompleteAnim
	 * 		Flags  -> ()
	 */
	void UW_SWATCommandStatus_C::PlayCommandCompleteAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandCompleteAnim");
		
		UW_SWATCommandStatus_C_PlayCommandCompleteAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.HideCommandStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShrinkHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SWATCommandStatus_C::HideCommandStatus(bool bShrinkHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.HideCommandStatus");
		
		UW_SWATCommandStatus_C_HideCommandStatus_Params params {};
		params.bShrinkHeight = bShrinkHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetPlayerHealthStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerHealthStatus                                InPlayerHealthStatus                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATCommandStatus_C::SetPlayerHealthStatus(EPlayerHealthStatus InPlayerHealthStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetPlayerHealthStatus");
		
		UW_SWATCommandStatus_C_SetPlayerHealthStatus_Params params {};
		params.InPlayerHealthStatus = InPlayerHealthStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InPlayerName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_SWATCommandStatus_C::SetPlayerName(const class FText& InPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetPlayerName");
		
		UW_SWATCommandStatus_C_SetPlayerName_Params params {};
		params.InPlayerName = InPlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCurrentCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InActivityName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        InCommandText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InProgressText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bWaiting                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SWATCommandStatus_C::SetCurrentCommand(const class FString& InActivityName, const class FText& InCommandText, const class FText& InProgressText, bool bWaiting, bool bIsProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCurrentCommand");
		
		UW_SWATCommandStatus_C_SetCurrentCommand_Params params {};
		params.InActivityName = InActivityName;
		params.InCommandText = InCommandText;
		params.InProgressText = InProgressText;
		params.bWaiting = bWaiting;
		params.bIsProgress = bIsProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateSquadData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATCommandStatus_C::UpdateSquadData(const class FText& InText, const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateSquadData");
		
		UW_SWATCommandStatus_C_UpdateSquadData_Params params {};
		params.InText = InText;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESquadPosition                                     InSquadPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATCommandStatus_C::Refresh(ESquadPosition InSquadPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.Refresh");
		
		UW_SWATCommandStatus_C_Refresh_Params params {};
		params.InSquadPosition = InSquadPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SWATCommandStatus_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.PreConstruct");
		
		UW_SWATCommandStatus_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_SWATCommandStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.Construct");
		
		UW_SWATCommandStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.StartHeightChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATCommandStatus_C::StartHeightChange(float NewHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.StartHeightChange");
		
		UW_SWATCommandStatus_C_StartHeightChange_Params params {};
		params.NewHeight = NewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateDesiredHeight
	 * 		Flags  -> ()
	 */
	void UW_SWATCommandStatus_C::UpdateDesiredHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateDesiredHeight");
		
		UW_SWATCommandStatus_C_UpdateDesiredHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UW_SWATCommandStatus_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.CustomEvent_2");
		
		UW_SWATCommandStatus_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.StartHealthWidthChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewWidth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATCommandStatus_C::StartHealthWidthChange(float NewWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.StartHealthWidthChange");
		
		UW_SWATCommandStatus_C_StartHealthWidthChange_Params params {};
		params.NewWidth = NewWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateDesiredWidth
	 * 		Flags  -> ()
	 */
	void UW_SWATCommandStatus_C::UpdateDesiredWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateDesiredWidth");
		
		UW_SWATCommandStatus_C_UpdateDesiredWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.ExecuteUbergraph_W_SWATCommandStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SWATCommandStatus_C::ExecuteUbergraph_W_SWATCommandStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SWATCommandStatus.W_SWATCommandStatus_C.ExecuteUbergraph_W_SWATCommandStatus");
		
		UW_SWATCommandStatus_C_ExecuteUbergraph_W_SWATCommandStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_SWATCommandStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_SWATCommandStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SWATCommandStatus.W_SWATCommandStatus_C");
		return ptr;
	}

}


