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
	 * 		Name   -> Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ANPC_Weapon_CattleProd_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.Timeline_0__FinishedFunc");
		
		ANPC_Weapon_CattleProd_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ANPC_Weapon_CattleProd_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.Timeline_0__UpdateFunc");
		
		ANPC_Weapon_CattleProd_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ANPC_Weapon_CattleProd_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.ReceiveBeginPlay");
		
		ANPC_Weapon_CattleProd_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.ExecuteUbergraph_NPC_Weapon_CattleProd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_Weapon_CattleProd_C::ExecuteUbergraph_NPC_Weapon_CattleProd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.ExecuteUbergraph_NPC_Weapon_CattleProd");
		
		ANPC_Weapon_CattleProd_C_ExecuteUbergraph_NPC_Weapon_CattleProd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANPC_Weapon_CattleProd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANPC_Weapon_CattleProd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C");
		return ptr;
	}

}


