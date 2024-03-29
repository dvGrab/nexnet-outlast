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
	 * 		Name   -> Function DestructibleFunctions.DestructibleFunctions_C.ShakeSurroundingPlayersCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCameraShakeData                            shakeData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDestructibleFunctions_C::ShakeSurroundingPlayersCamera(const struct FVector& Location, const struct FCameraShakeData& shakeData, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleFunctions.DestructibleFunctions_C.ShakeSurroundingPlayersCamera");
		
		UDestructibleFunctions_C_ShakeSurroundingPlayersCamera_Params params {};
		params.Location = Location;
		params.shakeData = shakeData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestructibleFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestructibleFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestructibleFunctions.DestructibleFunctions_C");
		return ptr;
	}

}


