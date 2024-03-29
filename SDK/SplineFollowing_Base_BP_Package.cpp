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
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.GetNetworkSyncOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RealOffset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineFollowing_Base_BP_C::GetNetworkSyncOffset(float* RealOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.GetNetworkSyncOffset");
		
		ASplineFollowing_Base_BP_C_GetNetworkSyncOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RealOffset != nullptr)
			*RealOffset = params.RealOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.GetRealOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RealOffset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineFollowing_Base_BP_C::GetRealOffset(float* RealOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.GetRealOffset");
		
		ASplineFollowing_Base_BP_C_GetRealOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RealOffset != nullptr)
			*RealOffset = params.RealOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.RefreshSplineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            SplineComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineFollowing_Base_BP_C::RefreshSplineData(class USplineComponent* SplineComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.RefreshSplineData");
		
		ASplineFollowing_Base_BP_C_RefreshSplineData_Params params {};
		params.SplineComp = SplineComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.FindDefaultSplineComponent
	 * 		Flags  -> ()
	 */
	class USplineComponent* ASplineFollowing_Base_BP_C::FindDefaultSplineComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.FindDefaultSplineComponent");
		
		ASplineFollowing_Base_BP_C_FindDefaultSplineComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.FindSplineComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            LinkedSplineComponent                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineFollowing_Base_BP_C::FindSplineComponent(class USplineComponent** LinkedSplineComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.FindSplineComponent");
		
		ASplineFollowing_Base_BP_C_FindSplineComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedSplineComponent != nullptr)
			*LinkedSplineComponent = params.LinkedSplineComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.RefreshTransform
	 * 		Flags  -> ()
	 */
	void ASplineFollowing_Base_BP_C::RefreshTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.RefreshTransform");
		
		ASplineFollowing_Base_BP_C_RefreshTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASplineFollowing_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.UserConstructionScript");
		
		ASplineFollowing_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASplineFollowing_Base_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.ReceiveBeginPlay");
		
		ASplineFollowing_Base_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ASplineFollowing_Base_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.Event_OnTriggered");
		
		ASplineFollowing_Base_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ASplineFollowing_Base_BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.Event_OnUntriggered");
		
		ASplineFollowing_Base_BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.ExecuteUbergraph_SplineFollowing_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineFollowing_Base_BP_C::ExecuteUbergraph_SplineFollowing_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.ExecuteUbergraph_SplineFollowing_Base_BP");
		
		ASplineFollowing_Base_BP_C_ExecuteUbergraph_SplineFollowing_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASplineFollowing_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineFollowing_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplineFollowing_Base_BP.SplineFollowing_Base_BP_C");
		return ptr;
	}

}


