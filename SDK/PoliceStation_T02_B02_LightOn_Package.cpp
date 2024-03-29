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
	 * 		Name   -> Function PoliceStation_T02_B02_LightOn.PoliceStation_T02_B02_LightOn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B02_LightOn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B02_LightOn.PoliceStation_T02_B02_LightOn_C.ReceiveBeginPlay");
		
		APoliceStation_T02_B02_LightOn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B02_LightOn.PoliceStation_T02_B02_LightOn_C.ExecuteUbergraph_PoliceStation_T02_B02_LightOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B02_LightOn_C::ExecuteUbergraph_PoliceStation_T02_B02_LightOn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B02_LightOn.PoliceStation_T02_B02_LightOn_C.ExecuteUbergraph_PoliceStation_T02_B02_LightOn");
		
		APoliceStation_T02_B02_LightOn_C_ExecuteUbergraph_PoliceStation_T02_B02_LightOn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoliceStation_T02_B02_LightOn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation_T02_B02_LightOn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_T02_B02_LightOn.PoliceStation_T02_B02_LightOn_C");
		return ptr;
	}

}


