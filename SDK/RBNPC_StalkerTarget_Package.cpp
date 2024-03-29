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
	 * 		Name   -> Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.CustomizeCharacter
	 * 		Flags  -> ()
	 */
	void ARBNPC_StalkerTarget_C::CustomizeCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.CustomizeCharacter");
		
		ARBNPC_StalkerTarget_C_CustomizeCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBNPC_StalkerTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.UserConstructionScript");
		
		ARBNPC_StalkerTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.Event_OnHeadBoom
	 * 		Flags  -> ()
	 */
	void ARBNPC_StalkerTarget_C::Event_OnHeadBoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.Event_OnHeadBoom");
		
		ARBNPC_StalkerTarget_C_Event_OnHeadBoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.ExecuteUbergraph_RBNPC_StalkerTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_StalkerTarget_C::ExecuteUbergraph_RBNPC_StalkerTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.ExecuteUbergraph_RBNPC_StalkerTarget");
		
		ARBNPC_StalkerTarget_C_ExecuteUbergraph_RBNPC_StalkerTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBNPC_StalkerTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBNPC_StalkerTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBNPC_StalkerTarget.RBNPC_StalkerTarget_C");
		return ptr;
	}

}


