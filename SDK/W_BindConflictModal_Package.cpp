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
	 * 		Name   -> Function W_BindConflictModal.W_BindConflictModal_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_BindConflictModal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BindConflictModal.W_BindConflictModal_C.Construct");
		
		UW_BindConflictModal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BindConflictModal.W_BindConflictModal_C.ExecuteUbergraph_W_BindConflictModal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BindConflictModal_C::ExecuteUbergraph_W_BindConflictModal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BindConflictModal.W_BindConflictModal_C.ExecuteUbergraph_W_BindConflictModal");
		
		UW_BindConflictModal_C_ExecuteUbergraph_W_BindConflictModal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_BindConflictModal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_BindConflictModal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_BindConflictModal.W_BindConflictModal_C");
		return ptr;
	}

}


