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
	 * 		Name   -> Function RBScareJumpBase.RBScareJumpBase_C.SetPreviewAssetsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Preview                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBScareJumpBase_C::SetPreviewAssetsVisibility(bool Preview)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBScareJumpBase.RBScareJumpBase_C.SetPreviewAssetsVisibility");
		
		ARBScareJumpBase_C_SetPreviewAssetsVisibility_Params params {};
		params.Preview = Preview;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBScareJumpBase.RBScareJumpBase_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBScareJumpBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBScareJumpBase.RBScareJumpBase_C.UserConstructionScript");
		
		ARBScareJumpBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBScareJumpBase.RBScareJumpBase_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ARBScareJumpBase_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBScareJumpBase.RBScareJumpBase_C.Event_OnTriggered");
		
		ARBScareJumpBase_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBScareJumpBase.RBScareJumpBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARBScareJumpBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBScareJumpBase.RBScareJumpBase_C.ReceiveBeginPlay");
		
		ARBScareJumpBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBScareJumpBase.RBScareJumpBase_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ARBScareJumpBase_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBScareJumpBase.RBScareJumpBase_C.Event_OnUntriggered");
		
		ARBScareJumpBase_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBScareJumpBase.RBScareJumpBase_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ARBScareJumpBase_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBScareJumpBase.RBScareJumpBase_C.Event_OnResetStage");
		
		ARBScareJumpBase_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBScareJumpBase.RBScareJumpBase_C.ExecuteUbergraph_RBScareJumpBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBScareJumpBase_C::ExecuteUbergraph_RBScareJumpBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBScareJumpBase.RBScareJumpBase_C.ExecuteUbergraph_RBScareJumpBase");
		
		ARBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBScareJumpBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBScareJumpBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBScareJumpBase.RBScareJumpBase_C");
		return ptr;
	}

}


