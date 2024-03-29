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
	 * 		Name   -> Function NPC_Weapon_Shotgun_AnimBP.NPC_Weapon_Shotgun_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UNPC_Weapon_Shotgun_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun_AnimBP.NPC_Weapon_Shotgun_AnimBP_C.AnimGraph");
		
		UNPC_Weapon_Shotgun_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Shotgun_AnimBP.NPC_Weapon_Shotgun_AnimBP_C.ExecuteUbergraph_NPC_Weapon_Shotgun_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNPC_Weapon_Shotgun_AnimBP_C::ExecuteUbergraph_NPC_Weapon_Shotgun_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun_AnimBP.NPC_Weapon_Shotgun_AnimBP_C.ExecuteUbergraph_NPC_Weapon_Shotgun_AnimBP");
		
		UNPC_Weapon_Shotgun_AnimBP_C_ExecuteUbergraph_NPC_Weapon_Shotgun_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPC_Weapon_Shotgun_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPC_Weapon_Shotgun_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass NPC_Weapon_Shotgun_AnimBP.NPC_Weapon_Shotgun_AnimBP_C");
		return ptr;
	}

}


