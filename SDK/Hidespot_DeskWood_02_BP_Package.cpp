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
	 * 		Name   -> Function Hidespot_DeskWood-02_BP.Hidespot_DeskWood-02_BP_C.RandomizeDrawer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Seed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_DeskWood__BP_C::RandomizeDrawer(class USceneComponent* Component, int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_DeskWood-02_BP.Hidespot_DeskWood-02_BP_C.RandomizeDrawer");
		
		AHidespot_DeskWood__BP_C_RandomizeDrawer_Params params {};
		params.Component = Component;
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_DeskWood-02_BP.Hidespot_DeskWood-02_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AHidespot_DeskWood__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_DeskWood-02_BP.Hidespot_DeskWood-02_BP_C.UserConstructionScript");
		
		AHidespot_DeskWood__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHidespot_DeskWood__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHidespot_DeskWood__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hidespot_DeskWood_02_BP.Hidespot_DeskWood-02_BP_C");
		return ptr;
	}

}


