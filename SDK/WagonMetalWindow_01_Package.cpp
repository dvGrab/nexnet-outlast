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
	 * 		Name   -> Function WagonMetalWindow-01.WagonMetalWindow-01_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AWagonMetalWindow01_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WagonMetalWindow-01.WagonMetalWindow-01_C.Timeline_0__FinishedFunc");
		
		AWagonMetalWindow01_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WagonMetalWindow-01.WagonMetalWindow-01_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AWagonMetalWindow01_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WagonMetalWindow-01.WagonMetalWindow-01_C.Timeline_0__UpdateFunc");
		
		AWagonMetalWindow01_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WagonMetalWindow-01.WagonMetalWindow-01_C.Close
	 * 		Flags  -> ()
	 */
	void AWagonMetalWindow01_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WagonMetalWindow-01.WagonMetalWindow-01_C.Close");
		
		AWagonMetalWindow01_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WagonMetalWindow-01.WagonMetalWindow-01_C.Open
	 * 		Flags  -> ()
	 */
	void AWagonMetalWindow01_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WagonMetalWindow-01.WagonMetalWindow-01_C.Open");
		
		AWagonMetalWindow01_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WagonMetalWindow-01.WagonMetalWindow-01_C.ExecuteUbergraph_WagonMetalWindow-01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWagonMetalWindow01_C::ExecuteUbergraph_WagonMetalWindow01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WagonMetalWindow-01.WagonMetalWindow-01_C.ExecuteUbergraph_WagonMetalWindow-01");
		
		AWagonMetalWindow01_C_ExecuteUbergraph_WagonMetalWindow01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWagonMetalWindow01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWagonMetalWindow01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WagonMetalWindow_01.WagonMetalWindow-01_C");
		return ptr;
	}

}


