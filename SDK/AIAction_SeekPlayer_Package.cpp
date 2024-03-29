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
	 * 		Name   -> Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ShouldPerformAction
	 * 		Flags  -> ()
	 */
	bool UAIAction_SeekPlayer_C::ShouldPerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ShouldPerformAction");
		
		UAIAction_SeekPlayer_C_ShouldPerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 */
	void UAIAction_SeekPlayer_C::BeginAction_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.BeginAction_Blueprint");
		
		UAIAction_SeekPlayer_C_BeginAction_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.OnCreate_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_SeekPlayer_C::OnCreate_Blueprint(class ACyberneticController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.OnCreate_Blueprint");
		
		UAIAction_SeekPlayer_C_OnCreate_Blueprint_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ExecuteUbergraph_AIAction_SeekPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_SeekPlayer_C::ExecuteUbergraph_AIAction_SeekPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ExecuteUbergraph_AIAction_SeekPlayer");
		
		UAIAction_SeekPlayer_C_ExecuteUbergraph_AIAction_SeekPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_SeekPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_SeekPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_SeekPlayer.AIAction_SeekPlayer_C");
		return ptr;
	}

}


