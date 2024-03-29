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
	 * 		Name   -> Function SkillChargeItem-01_BP.SkillChargeItem-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASkillChargeItem__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillChargeItem-01_BP.SkillChargeItem-01_BP_C.UserConstructionScript");
		
		ASkillChargeItem__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillChargeItem-01_BP.SkillChargeItem-01_BP_C.OnConsumeItemCancelledNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASkillChargeItem__BP_C::OnConsumeItemCancelledNotify(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillChargeItem-01_BP.SkillChargeItem-01_BP_C.OnConsumeItemCancelledNotify");
		
		ASkillChargeItem__BP_C_OnConsumeItemCancelledNotify_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillChargeItem-01_BP.SkillChargeItem-01_BP_C.ExecuteUbergraph_SkillChargeItem-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASkillChargeItem__BP_C::ExecuteUbergraph_SkillChargeItem__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillChargeItem-01_BP.SkillChargeItem-01_BP_C.ExecuteUbergraph_SkillChargeItem-01_BP");
		
		ASkillChargeItem__BP_C_ExecuteUbergraph_SkillChargeItem__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASkillChargeItem__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASkillChargeItem__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SkillChargeItem_01_BP.SkillChargeItem-01_BP_C");
		return ptr;
	}

}


