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
	 * 		Name   -> Function PS_BeaconLight-02.PS_BeaconLight-02_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APS_BeaconLight02_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_BeaconLight-02.PS_BeaconLight-02_C.Timeline_0__FinishedFunc");
		
		APS_BeaconLight02_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_BeaconLight-02.PS_BeaconLight-02_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APS_BeaconLight02_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_BeaconLight-02.PS_BeaconLight-02_C.Timeline_0__UpdateFunc");
		
		APS_BeaconLight02_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_BeaconLight-02.PS_BeaconLight-02_C.BndEvt__RBLocalPlayerProximity_K2Node_ComponentBoundEvent_1_LocalPlayerProximityComponentEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APS_BeaconLight02_C::BndEvt__RBLocalPlayerProximity_K2Node_ComponentBoundEvent_1_LocalPlayerProximityComponentEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_BeaconLight-02.PS_BeaconLight-02_C.BndEvt__RBLocalPlayerProximity_K2Node_ComponentBoundEvent_1_LocalPlayerProximityComponentEvent__DelegateSignature");
		
		APS_BeaconLight02_C_BndEvt__RBLocalPlayerProximity_K2Node_ComponentBoundEvent_1_LocalPlayerProximityComponentEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_BeaconLight-02.PS_BeaconLight-02_C.BndEvt__RBLocalPlayerProximity_K2Node_ComponentBoundEvent_2_LocalPlayerProximityComponentEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APS_BeaconLight02_C::BndEvt__RBLocalPlayerProximity_K2Node_ComponentBoundEvent_2_LocalPlayerProximityComponentEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_BeaconLight-02.PS_BeaconLight-02_C.BndEvt__RBLocalPlayerProximity_K2Node_ComponentBoundEvent_2_LocalPlayerProximityComponentEvent__DelegateSignature");
		
		APS_BeaconLight02_C_BndEvt__RBLocalPlayerProximity_K2Node_ComponentBoundEvent_2_LocalPlayerProximityComponentEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_BeaconLight-02.PS_BeaconLight-02_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APS_BeaconLight02_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_BeaconLight-02.PS_BeaconLight-02_C.ReceiveBeginPlay");
		
		APS_BeaconLight02_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_BeaconLight-02.PS_BeaconLight-02_C.ExecuteUbergraph_PS_BeaconLight-02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APS_BeaconLight02_C::ExecuteUbergraph_PS_BeaconLight02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_BeaconLight-02.PS_BeaconLight-02_C.ExecuteUbergraph_PS_BeaconLight-02");
		
		APS_BeaconLight02_C_ExecuteUbergraph_PS_BeaconLight02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APS_BeaconLight02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_BeaconLight02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_BeaconLight_02.PS_BeaconLight-02_C");
		return ptr;
	}

}


