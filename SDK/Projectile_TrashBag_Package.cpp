/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function Projectile_TrashBag.Projectile_TrashBag_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AProjectile_TrashBag_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_TrashBag.Projectile_TrashBag_C.UserConstructionScript");
		
		AProjectile_TrashBag_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Projectile_TrashBag.Projectile_TrashBag_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AProjectile_TrashBag_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_TrashBag.Projectile_TrashBag_C.ReceiveBeginPlay");
		
		AProjectile_TrashBag_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Projectile_TrashBag.Projectile_TrashBag_C.OnDeflect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  DeflectionHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_TrashBag_C::OnDeflect(const struct FHitResult& DeflectionHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_TrashBag.Projectile_TrashBag_C.OnDeflect");
		
		AProjectile_TrashBag_C_OnDeflect_Params params {};
		params.DeflectionHit = DeflectionHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Projectile_TrashBag.Projectile_TrashBag_C.ExecuteUbergraph_Projectile_TrashBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_TrashBag_C::ExecuteUbergraph_Projectile_TrashBag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_TrashBag.Projectile_TrashBag_C.ExecuteUbergraph_Projectile_TrashBag");
		
		AProjectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_TrashBag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_TrashBag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_TrashBag.Projectile_TrashBag_C");
		return ptr;
	}

}


