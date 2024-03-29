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
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool ARewardCrate_Container_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.FixUp");
		
		ARewardCrate_Container_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.GetPickupInteractionLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBContainerSpawnLocationComponent*          spawnComponent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     out_location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     out_direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ARewardCrate_Container_BP_C::GetPickupInteractionLocation(class ARBPawn* Pawn, class URBContainerSpawnLocationComponent* spawnComponent, struct FVector* out_location, struct FVector* out_direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.GetPickupInteractionLocation");
		
		ARewardCrate_Container_BP_C_GetPickupInteractionLocation_Params params {};
		params.Pawn = Pawn;
		params.spawnComponent = spawnComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_location != nullptr)
			*out_location = params.out_location;
		if (out_direction != nullptr)
			*out_direction = params.out_direction;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARewardCrate_Container_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.UserConstructionScript");
		
		ARewardCrate_Container_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ARewardCrate_Container_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.Timeline_0__FinishedFunc");
		
		ARewardCrate_Container_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ARewardCrate_Container_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.Timeline_0__UpdateFunc");
		
		ARewardCrate_Container_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ARewardCrate_Container_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.OnPostActorsPasted");
		
		ARewardCrate_Container_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void ARewardCrate_Container_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostAddedToLevel");
		
		ARewardCrate_Container_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARewardCrate_Container_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostDuplicated");
		
		ARewardCrate_Container_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARewardCrate_Container_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostEditChange");
		
		ARewardCrate_Container_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARewardCrate_Container_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostEditMove");
		
		ARewardCrate_Container_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void ARewardCrate_Container_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.TickSelected");
		
		ARewardCrate_Container_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void ARewardCrate_Container_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.OnEditorPostLoad");
		
		ARewardCrate_Container_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.CloseLight
	 * 		Flags  -> ()
	 */
	void ARewardCrate_Container_BP_C::CloseLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.CloseLight");
		
		ARewardCrate_Container_BP_C_CloseLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.Event_ItemPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARewardCrate_Container_BP_C::Event_ItemPickedUp(class ARBPawn* Pawn, class ARBPickup* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.Event_ItemPickedUp");
		
		ARewardCrate_Container_BP_C_Event_ItemPickedUp_Params params {};
		params.Pawn = Pawn;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.ExecuteUbergraph_RewardCrate_Container_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARewardCrate_Container_BP_C::ExecuteUbergraph_RewardCrate_Container_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.ExecuteUbergraph_RewardCrate_Container_BP");
		
		ARewardCrate_Container_BP_C_ExecuteUbergraph_RewardCrate_Container_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARewardCrate_Container_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARewardCrate_Container_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RewardCrate_Container_BP.RewardCrate_Container_BP_C");
		return ptr;
	}

}


