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
	 * 		Name   -> Function MolotovProjectile.MolotovProjectile_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMolotovProjectile_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MolotovProjectile.MolotovProjectile_C.Timeline_0__FinishedFunc");
		
		AMolotovProjectile_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MolotovProjectile.MolotovProjectile_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMolotovProjectile_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MolotovProjectile.MolotovProjectile_C.Timeline_0__UpdateFunc");
		
		AMolotovProjectile_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MolotovProjectile.MolotovProjectile_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMolotovProjectile_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MolotovProjectile.MolotovProjectile_C.Timeline_1__FinishedFunc");
		
		AMolotovProjectile_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MolotovProjectile.MolotovProjectile_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMolotovProjectile_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MolotovProjectile.MolotovProjectile_C.Timeline_1__UpdateFunc");
		
		AMolotovProjectile_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MolotovProjectile.MolotovProjectile_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMolotovProjectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MolotovProjectile.MolotovProjectile_C.ReceiveBeginPlay");
		
		AMolotovProjectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MolotovProjectile.MolotovProjectile_C.Event_OnFireStarted
	 * 		Flags  -> ()
	 */
	void AMolotovProjectile_C::Event_OnFireStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MolotovProjectile.MolotovProjectile_C.Event_OnFireStarted");
		
		AMolotovProjectile_C_Event_OnFireStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MolotovProjectile.MolotovProjectile_C.Event_OnFireFinished
	 * 		Flags  -> ()
	 */
	void AMolotovProjectile_C::Event_OnFireFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MolotovProjectile.MolotovProjectile_C.Event_OnFireFinished");
		
		AMolotovProjectile_C_Event_OnFireFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MolotovProjectile.MolotovProjectile_C.ExecuteUbergraph_MolotovProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMolotovProjectile_C::ExecuteUbergraph_MolotovProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MolotovProjectile.MolotovProjectile_C.ExecuteUbergraph_MolotovProjectile");
		
		AMolotovProjectile_C_ExecuteUbergraph_MolotovProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMolotovProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMolotovProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MolotovProjectile.MolotovProjectile_C");
		return ptr;
	}

}


