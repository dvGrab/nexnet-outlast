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
	 * 		Name   -> Function Primary_B1301_Entryman.Primary_B1301_Entryman_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APrimary_B1301_Entryman_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Primary_B1301_Entryman.Primary_B1301_Entryman_C.ReceiveBeginPlay");
		
		APrimary_B1301_Entryman_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Primary_B1301_Entryman.Primary_B1301_Entryman_C.ExecuteUbergraph_Primary_B1301_Entryman
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimary_B1301_Entryman_C::ExecuteUbergraph_Primary_B1301_Entryman(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Primary_B1301_Entryman.Primary_B1301_Entryman_C.ExecuteUbergraph_Primary_B1301_Entryman");
		
		APrimary_B1301_Entryman_C_ExecuteUbergraph_Primary_B1301_Entryman_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrimary_B1301_Entryman_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrimary_B1301_Entryman_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Primary_B1301_Entryman.Primary_B1301_Entryman_C");
		return ptr;
	}

}


