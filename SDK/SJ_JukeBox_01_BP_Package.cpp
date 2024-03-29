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
	 * 		Name   -> Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.SetPreviewAssetsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Preview                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASJ_JukeBox01_BP_C::SetPreviewAssetsVisibility(bool Preview)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.SetPreviewAssetsVisibility");
		
		ASJ_JukeBox01_BP_C_SetPreviewAssetsVisibility_Params params {};
		params.Preview = Preview;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.JukeboxColors__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASJ_JukeBox01_BP_C::JukeboxColors__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.JukeboxColors__FinishedFunc");
		
		ASJ_JukeBox01_BP_C_JukeboxColors__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.JukeboxColors__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASJ_JukeBox01_BP_C::JukeboxColors__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.JukeboxColors__UpdateFunc");
		
		ASJ_JukeBox01_BP_C_JukeboxColors__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ASJ_JukeBox01_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.Event_OnTriggered");
		
		ASJ_JukeBox01_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ASJ_JukeBox01_BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.Event_OnUntriggered");
		
		ASJ_JukeBox01_BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ASJ_JukeBox01_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.Event_OnResetStage");
		
		ASJ_JukeBox01_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.ExecuteUbergraph_SJ_JukeBox-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASJ_JukeBox01_BP_C::ExecuteUbergraph_SJ_JukeBox01_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_JukeBox-01_BP.SJ_JukeBox-01_BP_C.ExecuteUbergraph_SJ_JukeBox-01_BP");
		
		ASJ_JukeBox01_BP_C_ExecuteUbergraph_SJ_JukeBox01_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASJ_JukeBox01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASJ_JukeBox01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SJ_JukeBox_01_BP.SJ_JukeBox-01_BP_C");
		return ptr;
	}

}


