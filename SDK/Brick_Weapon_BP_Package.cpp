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
	 * 		Name   -> Function Brick_Weapon_BP.Brick_Weapon_BP_C.BP_OnGroundAndPoundCounter
	 * 		Flags  -> ()
	 */
	void ABrick_Weapon_BP_C::BP_OnGroundAndPoundCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Brick_Weapon_BP.Brick_Weapon_BP_C.BP_OnGroundAndPoundCounter");
		
		ABrick_Weapon_BP_C_BP_OnGroundAndPoundCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Brick_Weapon_BP.Brick_Weapon_BP_C.ExecuteUbergraph_Brick_Weapon_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABrick_Weapon_BP_C::ExecuteUbergraph_Brick_Weapon_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Brick_Weapon_BP.Brick_Weapon_BP_C.ExecuteUbergraph_Brick_Weapon_BP");
		
		ABrick_Weapon_BP_C_ExecuteUbergraph_Brick_Weapon_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABrick_Weapon_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABrick_Weapon_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Brick_Weapon_BP.Brick_Weapon_BP_C");
		return ptr;
	}

}


