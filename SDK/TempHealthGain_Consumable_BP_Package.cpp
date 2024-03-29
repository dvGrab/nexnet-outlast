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
	 * 		Name   -> Function TempHealthGain-Consumable_BP.TempHealthGain-Consumable_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ATempHealthGain_Consumable_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TempHealthGain-Consumable_BP.TempHealthGain-Consumable_BP_C.UserConstructionScript");
		
		ATempHealthGain_Consumable_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TempHealthGain-Consumable_BP.TempHealthGain-Consumable_BP_C.OnConsumeItemNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATempHealthGain_Consumable_BP_C::OnConsumeItemNotify(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TempHealthGain-Consumable_BP.TempHealthGain-Consumable_BP_C.OnConsumeItemNotify");
		
		ATempHealthGain_Consumable_BP_C_OnConsumeItemNotify_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TempHealthGain-Consumable_BP.TempHealthGain-Consumable_BP_C.ExecuteUbergraph_TempHealthGain-Consumable_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATempHealthGain_Consumable_BP_C::ExecuteUbergraph_TempHealthGain_Consumable_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TempHealthGain-Consumable_BP.TempHealthGain-Consumable_BP_C.ExecuteUbergraph_TempHealthGain-Consumable_BP");
		
		ATempHealthGain_Consumable_BP_C_ExecuteUbergraph_TempHealthGain_Consumable_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATempHealthGain_Consumable_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATempHealthGain_Consumable_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TempHealthGain_Consumable_BP.TempHealthGain-Consumable_BP_C");
		return ptr;
	}

}


