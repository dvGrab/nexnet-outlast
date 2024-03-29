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
	 * 		Name   -> Function Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C.DisableCollisionsOnStaticmeshes
	 * 		Flags  -> ()
	 */
	void AOrph_ScriptedMannequin_CafeteriaBase_C::DisableCollisionsOnStaticmeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C.DisableCollisionsOnStaticmeshes");
		
		AOrph_ScriptedMannequin_CafeteriaBase_C_DisableCollisionsOnStaticmeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AOrph_ScriptedMannequin_CafeteriaBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C.UserConstructionScript");
		
		AOrph_ScriptedMannequin_CafeteriaBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AOrph_ScriptedMannequin_CafeteriaBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C.ReceiveBeginPlay");
		
		AOrph_ScriptedMannequin_CafeteriaBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void AOrph_ScriptedMannequin_CafeteriaBase_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C.Event_OnTriggered");
		
		AOrph_ScriptedMannequin_CafeteriaBase_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C.ExecuteUbergraph_Orph_ScriptedMannequin_CafeteriaBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOrph_ScriptedMannequin_CafeteriaBase_C::ExecuteUbergraph_Orph_ScriptedMannequin_CafeteriaBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C.ExecuteUbergraph_Orph_ScriptedMannequin_CafeteriaBase");
		
		AOrph_ScriptedMannequin_CafeteriaBase_C_ExecuteUbergraph_Orph_ScriptedMannequin_CafeteriaBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOrph_ScriptedMannequin_CafeteriaBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOrph_ScriptedMannequin_CafeteriaBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C");
		return ptr;
	}

}


