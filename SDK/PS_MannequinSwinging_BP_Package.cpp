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
	 * 		Name   -> Function PS_MannequinSwinging_BP.PS_MannequinSwinging_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APS_MannequinSwinging_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_MannequinSwinging_BP.PS_MannequinSwinging_BP_C.ReceiveBeginPlay");
		
		APS_MannequinSwinging_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_MannequinSwinging_BP.PS_MannequinSwinging_BP_C.ExecuteUbergraph_PS_MannequinSwinging_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APS_MannequinSwinging_BP_C::ExecuteUbergraph_PS_MannequinSwinging_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_MannequinSwinging_BP.PS_MannequinSwinging_BP_C.ExecuteUbergraph_PS_MannequinSwinging_BP");
		
		APS_MannequinSwinging_BP_C_ExecuteUbergraph_PS_MannequinSwinging_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APS_MannequinSwinging_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_MannequinSwinging_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_MannequinSwinging_BP.PS_MannequinSwinging_BP_C");
		return ptr;
	}

}


