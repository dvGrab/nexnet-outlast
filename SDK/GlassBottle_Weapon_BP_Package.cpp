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
	 * 		Name   -> Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.OnRep_ForcedStaticMesh
	 * 		Flags  -> ()
	 */
	void AGlassBottle_Weapon_BP_C::OnRep_ForcedStaticMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.OnRep_ForcedStaticMesh");
		
		AGlassBottle_Weapon_BP_C_OnRep_ForcedStaticMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.ForceMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 StaticMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 StaticMeshB                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HoldOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGlassBottle_Weapon_BP_C::ForceMeshes(class UStaticMesh* StaticMesh, class UStaticMesh* StaticMeshB, const struct FVector& HoldOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.ForceMeshes");
		
		AGlassBottle_Weapon_BP_C_ForceMeshes_Params params {};
		params.StaticMesh = StaticMesh;
		params.StaticMeshB = StaticMeshB;
		params.HoldOffset = HoldOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.RefreshVisual
	 * 		Flags  -> ()
	 */
	void AGlassBottle_Weapon_BP_C::RefreshVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.RefreshVisual");
		
		AGlassBottle_Weapon_BP_C_RefreshVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGlassBottle_Weapon_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.ReceiveBeginPlay");
		
		AGlassBottle_Weapon_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.BP_OnGroundAndPoundCounter
	 * 		Flags  -> ()
	 */
	void AGlassBottle_Weapon_BP_C::BP_OnGroundAndPoundCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.BP_OnGroundAndPoundCounter");
		
		AGlassBottle_Weapon_BP_C_BP_OnGroundAndPoundCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.BP_OnInitializeRecycledItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPickup*                                   originalItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGlassBottle_Weapon_BP_C::BP_OnInitializeRecycledItem(class ARBPickup* originalItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.BP_OnInitializeRecycledItem");
		
		AGlassBottle_Weapon_BP_C_BP_OnInitializeRecycledItem_Params params {};
		params.originalItem = originalItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.BP_OnDropItemToFloor
	 * 		Flags  -> ()
	 */
	void AGlassBottle_Weapon_BP_C::BP_OnDropItemToFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.BP_OnDropItemToFloor");
		
		AGlassBottle_Weapon_BP_C_BP_OnDropItemToFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.ExecuteUbergraph_GlassBottle_Weapon_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGlassBottle_Weapon_BP_C::ExecuteUbergraph_GlassBottle_Weapon_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.ExecuteUbergraph_GlassBottle_Weapon_BP");
		
		AGlassBottle_Weapon_BP_C_ExecuteUbergraph_GlassBottle_Weapon_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGlassBottle_Weapon_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlassBottle_Weapon_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C");
		return ptr;
	}

}


