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
	 * 		Name   -> Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void ULockPick_Skm_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.AnimGraph");
		
		ULockPick_Skm_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.UpdatePlayerAnimInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   PlayerOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULockPick_Skm_AnimBP_C::UpdatePlayerAnimInstance(class ARBPlayer* PlayerOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.UpdatePlayerAnimInstance");
		
		ULockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance_Params params {};
		params.PlayerOwner = PlayerOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULockPick_Skm_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.BlueprintUpdateAnimation");
		
		ULockPick_Skm_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void ULockPick_Skm_AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.BlueprintBeginPlay");
		
		ULockPick_Skm_AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.OnPlayerOwnerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPickup*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULockPick_Skm_AnimBP_C::OnPlayerOwnerChanged(class ARBPickup* Item, class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.OnPlayerOwnerChanged");
		
		ULockPick_Skm_AnimBP_C_OnPlayerOwnerChanged_Params params {};
		params.Item = Item;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.ExecuteUbergraph_LockPick_Skm_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULockPick_Skm_AnimBP_C::ExecuteUbergraph_LockPick_Skm_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.ExecuteUbergraph_LockPick_Skm_AnimBP");
		
		ULockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULockPick_Skm_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULockPick_Skm_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C");
		return ptr;
	}

}


