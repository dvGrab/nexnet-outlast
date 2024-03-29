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
	 * 		Name   -> Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.UpdateGas
	 * 		Flags  -> ()
	 */
	void AContainerTrap_Base_BP_C::UpdateGas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.UpdateGas");
		
		AContainerTrap_Base_BP_C_UpdateGas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.TrapTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AContainerTrap_Base_BP_C::TrapTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.TrapTimeline__FinishedFunc");
		
		AContainerTrap_Base_BP_C_TrapTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.TrapTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AContainerTrap_Base_BP_C::TrapTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.TrapTimeline__UpdateFunc");
		
		AContainerTrap_Base_BP_C_TrapTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void AContainerTrap_Base_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.Event_OnTriggered");
		
		AContainerTrap_Base_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AContainerTrap_Base_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.Event_OnResetStage");
		
		AContainerTrap_Base_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.ExecuteUbergraph_ContainerTrap_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AContainerTrap_Base_BP_C::ExecuteUbergraph_ContainerTrap_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerTrap_Base_BP.ContainerTrap_Base_BP_C.ExecuteUbergraph_ContainerTrap_Base_BP");
		
		AContainerTrap_Base_BP_C_ExecuteUbergraph_ContainerTrap_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AContainerTrap_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContainerTrap_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ContainerTrap_Base_BP.ContainerTrap_Base_BP_C");
		return ptr;
	}

}


