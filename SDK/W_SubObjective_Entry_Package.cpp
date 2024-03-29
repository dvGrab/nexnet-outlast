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
	 * 		Name   -> Function W_SubObjective_Entry.W_SubObjective_Entry_C.SetState
	 * 		Flags  -> ()
	 */
	void UW_SubObjective_Entry_C::SetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SubObjective_Entry.W_SubObjective_Entry_C.SetState");
		
		UW_SubObjective_Entry_C_SetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SubObjective_Entry.W_SubObjective_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_SubObjective_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SubObjective_Entry.W_SubObjective_Entry_C.Construct");
		
		UW_SubObjective_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SubObjective_Entry.W_SubObjective_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SubObjective_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SubObjective_Entry.W_SubObjective_Entry_C.PreConstruct");
		
		UW_SubObjective_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SubObjective_Entry.W_SubObjective_Entry_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Complete                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Failed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ObjectiveDescription                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_SubObjective_Entry_C::Update(bool Complete, bool Failed, const class FText& ObjectiveDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SubObjective_Entry.W_SubObjective_Entry_C.Update");
		
		UW_SubObjective_Entry_C_Update_Params params {};
		params.Complete = Complete;
		params.Failed = Failed;
		params.ObjectiveDescription = ObjectiveDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SubObjective_Entry.W_SubObjective_Entry_C.ExecuteUbergraph_W_SubObjective_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SubObjective_Entry_C::ExecuteUbergraph_W_SubObjective_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SubObjective_Entry.W_SubObjective_Entry_C.ExecuteUbergraph_W_SubObjective_Entry");
		
		UW_SubObjective_Entry_C_ExecuteUbergraph_W_SubObjective_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_SubObjective_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_SubObjective_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SubObjective_Entry.W_SubObjective_Entry_C");
		return ptr;
	}

}


