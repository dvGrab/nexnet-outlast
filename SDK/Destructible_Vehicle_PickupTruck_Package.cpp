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
	 * 		Name   -> Function Destructible_Vehicle_PickupTruck.Destructible_Vehicle_PickupTruck_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ADestructible_Vehicle_PickupTruck_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Destructible_Vehicle_PickupTruck.Destructible_Vehicle_PickupTruck_C.ReceiveBeginPlay");
		
		ADestructible_Vehicle_PickupTruck_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Destructible_Vehicle_PickupTruck.Destructible_Vehicle_PickupTruck_C.ExecuteUbergraph_Destructible_Vehicle_PickupTruck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructible_Vehicle_PickupTruck_C::ExecuteUbergraph_Destructible_Vehicle_PickupTruck(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Destructible_Vehicle_PickupTruck.Destructible_Vehicle_PickupTruck_C.ExecuteUbergraph_Destructible_Vehicle_PickupTruck");
		
		ADestructible_Vehicle_PickupTruck_C_ExecuteUbergraph_Destructible_Vehicle_PickupTruck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADestructible_Vehicle_PickupTruck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructible_Vehicle_PickupTruck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Destructible_Vehicle_PickupTruck.Destructible_Vehicle_PickupTruck_C");
		return ptr;
	}

}


