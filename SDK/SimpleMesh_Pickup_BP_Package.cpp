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
	 * 		Name   -> Function SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASimpleMesh_Pickup_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C.UserConstructionScript");
		
		ASimpleMesh_Pickup_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C.Event_OnContainerChanged
	 * 		Flags  -> ()
	 */
	void ASimpleMesh_Pickup_BP_C::Event_OnContainerChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C.Event_OnContainerChanged");
		
		ASimpleMesh_Pickup_BP_C_Event_OnContainerChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C.ExecuteUbergraph_SimpleMesh_Pickup_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASimpleMesh_Pickup_BP_C::ExecuteUbergraph_SimpleMesh_Pickup_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C.ExecuteUbergraph_SimpleMesh_Pickup_BP");
		
		ASimpleMesh_Pickup_BP_C_ExecuteUbergraph_SimpleMesh_Pickup_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASimpleMesh_Pickup_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASimpleMesh_Pickup_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C");
		return ptr;
	}

}


