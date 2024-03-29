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
	 * 		Name   -> Function RewardRoom_Button-Coop_BP.RewardRoom_Button-Coop_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARewardRoom_ButtonCoop_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Button-Coop_BP.RewardRoom_Button-Coop_BP_C.UserConstructionScript");
		
		ARewardRoom_ButtonCoop_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARewardRoom_ButtonCoop_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARewardRoom_ButtonCoop_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RewardRoom_Button_Coop_BP.RewardRoom_Button-Coop_BP_C");
		return ptr;
	}

}


