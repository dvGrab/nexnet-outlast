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
	 * 		Name   -> Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.GetPropAnimationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UViolentKids_MannequinData_BP_C*             New_Param                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Base_Slave_BP_C::GetPropAnimationData(class UViolentKids_MannequinData_BP_C** New_Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.GetPropAnimationData");
		
		AViolentKids_Base_Slave_BP_C_GetPropAnimationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (New_Param != nullptr)
			*New_Param = params.New_Param;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.GetAnimationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UViolentKids_MannequinData_BP_C*             Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Base_Slave_BP_C::GetAnimationData(class UViolentKids_MannequinData_BP_C** Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.GetAnimationData");
		
		AViolentKids_Base_Slave_BP_C_GetAnimationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.OnLoopDoneChanged
	 * 		Flags  -> ()
	 */
	void AViolentKids_Base_Slave_BP_C::OnLoopDoneChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.OnLoopDoneChanged");
		
		AViolentKids_Base_Slave_BP_C_OnLoopDoneChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AnimDriver                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Base_Slave_BP_C::Initialize(class AActor* AnimDriver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.Initialize");
		
		AViolentKids_Base_Slave_BP_C_Initialize_Params params {};
		params.AnimDriver = AnimDriver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.OnRep_IsLoopDone
	 * 		Flags  -> ()
	 */
	void AViolentKids_Base_Slave_BP_C::OnRep_IsLoopDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.OnRep_IsLoopDone");
		
		AViolentKids_Base_Slave_BP_C_OnRep_IsLoopDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.SetLoopDone (Server)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LoopDone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Base_Slave_BP_C::SetLoopDone_Server(bool LoopDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.SetLoopDone (Server)");
		
		AViolentKids_Base_Slave_BP_C_SetLoopDone_Server_Params params {};
		params.LoopDone = LoopDone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.Reset Anims
	 * 		Flags  -> ()
	 */
	void AViolentKids_Base_Slave_BP_C::Reset_Anims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.Reset Anims");
		
		AViolentKids_Base_Slave_BP_C_Reset_Anims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AViolentKids_Base_Slave_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.Event_OnResetStage");
		
		AViolentKids_Base_Slave_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.ExecuteUbergraph_ViolentKids_Base_Slave_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Base_Slave_BP_C::ExecuteUbergraph_ViolentKids_Base_Slave_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.ExecuteUbergraph_ViolentKids_Base_Slave_BP");
		
		AViolentKids_Base_Slave_BP_C_ExecuteUbergraph_ViolentKids_Base_Slave_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AViolentKids_Base_Slave_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AViolentKids_Base_Slave_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C");
		return ptr;
	}

}


