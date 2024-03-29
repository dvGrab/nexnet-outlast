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
	 * 		Name   -> Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_NetworkStatusErrors_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.PreConstruct");
		
		UW_NetworkStatusErrors_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.UpdateLagStatus
	 * 		Flags  -> ()
	 */
	void UW_NetworkStatusErrors_C::UpdateLagStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.UpdateLagStatus");
		
		UW_NetworkStatusErrors_C_UpdateLagStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_NetworkStatusErrors_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.Construct");
		
		UW_NetworkStatusErrors_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.ExecuteUbergraph_W_NetworkStatusErrors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_NetworkStatusErrors_C::ExecuteUbergraph_W_NetworkStatusErrors(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.ExecuteUbergraph_W_NetworkStatusErrors");
		
		UW_NetworkStatusErrors_C_ExecuteUbergraph_W_NetworkStatusErrors_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_NetworkStatusErrors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_NetworkStatusErrors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_NetworkStatusErrors.W_NetworkStatusErrors_C");
		return ptr;
	}

}


