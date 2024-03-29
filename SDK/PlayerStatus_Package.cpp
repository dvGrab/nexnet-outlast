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
	 * 		Name   -> Function PlayerStatus.PlayerStatus_C.GetStatusIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerIndicatorType                               playerIndicatorType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsObjective                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UTexture2D* UPlayerStatus_C::GetStatusIconTexture(EPlayerIndicatorType playerIndicatorType, bool bIsObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatus.PlayerStatus_C.GetStatusIconTexture");
		
		UPlayerStatus_C_GetStatusIconTexture_Params params {};
		params.playerIndicatorType = playerIndicatorType;
		params.bIsObjective = bIsObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerStatus.PlayerStatus_C.UpdateStatusIcon
	 * 		Flags  -> ()
	 */
	void UPlayerStatus_C::UpdateStatusIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatus.PlayerStatus_C.UpdateStatusIcon");
		
		UPlayerStatus_C_UpdateStatusIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerStatus.PlayerStatus_C.OnCompletingObjectiveChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isCompletingObjective                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerStatus_C::OnCompletingObjectiveChanged(bool isCompletingObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatus.PlayerStatus_C.OnCompletingObjectiveChanged");
		
		UPlayerStatus_C_OnCompletingObjectiveChanged_Params params {};
		params.isCompletingObjective = isCompletingObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerStatus.PlayerStatus_C.OnPlayerStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerIndicatorType                               newPlayerStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerStatus_C::OnPlayerStatusChanged(EPlayerIndicatorType newPlayerStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatus.PlayerStatus_C.OnPlayerStatusChanged");
		
		UPlayerStatus_C_OnPlayerStatusChanged_Params params {};
		params.newPlayerStatus = newPlayerStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerStatus.PlayerStatus_C.UpdateProgress
	 * 		Flags  -> ()
	 */
	void UPlayerStatus_C::UpdateProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatus.PlayerStatus_C.UpdateProgress");
		
		UPlayerStatus_C_UpdateProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerStatus.PlayerStatus_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatus.PlayerStatus_C.Construct");
		
		UPlayerStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerStatus.PlayerStatus_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatus.PlayerStatus_C.Tick");
		
		UPlayerStatus_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerStatus.PlayerStatus_C.ExecuteUbergraph_PlayerStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerStatus_C::ExecuteUbergraph_PlayerStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatus.PlayerStatus_C.ExecuteUbergraph_PlayerStatus");
		
		UPlayerStatus_C_ExecuteUbergraph_PlayerStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerStatus.PlayerStatus_C");
		return ptr;
	}

}


