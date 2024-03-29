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
	 * 		Name   -> Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.OverrideFocalPoint_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        FocalPoint                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USeekPlayerCombatMove_C::OverrideFocalPoint_Blueprint(struct FCoreUObject_FVector* FocalPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.OverrideFocalPoint_Blueprint");
		
		USeekPlayerCombatMove_C_OverrideFocalPoint_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FocalPoint != nullptr)
			*FocalPoint = params.FocalPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.RequestCombatMove_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USeekPlayerCombatMove_C::RequestCombatMove_Blueprint(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.RequestCombatMove_Blueprint");
		
		USeekPlayerCombatMove_C_RequestCombatMove_Blueprint_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.StartActivity_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USeekPlayerCombatMove_C::StartActivity_Blueprint(class AAIController* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.StartActivity_Blueprint");
		
		USeekPlayerCombatMove_C_StartActivity_Blueprint_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.FinishedActivity_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USeekPlayerCombatMove_C::FinishedActivity_Blueprint(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.FinishedActivity_Blueprint");
		
		USeekPlayerCombatMove_C_FinishedActivity_Blueprint_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.ExecuteUbergraph_SeekPlayerCombatMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USeekPlayerCombatMove_C::ExecuteUbergraph_SeekPlayerCombatMove(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.ExecuteUbergraph_SeekPlayerCombatMove");
		
		USeekPlayerCombatMove_C_ExecuteUbergraph_SeekPlayerCombatMove_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeekPlayerCombatMove_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeekPlayerCombatMove_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SeekPlayerCombatMove.SeekPlayerCombatMove_C");
		return ptr;
	}

}


