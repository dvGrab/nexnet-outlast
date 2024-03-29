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
	 * 		Name   -> Function RBSwingingActor.RBSwingingActor_C.SetupCollisions
	 * 		Flags  -> ()
	 */
	void ARBSwingingActor_C::SetupCollisions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSwingingActor.RBSwingingActor_C.SetupCollisions");
		
		ARBSwingingActor_C_SetupCollisions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSwingingActor.RBSwingingActor_C.SetPlayRate
	 * 		Flags  -> ()
	 */
	void ARBSwingingActor_C::SetPlayRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSwingingActor.RBSwingingActor_C.SetPlayRate");
		
		ARBSwingingActor_C_SetPlayRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSwingingActor.RBSwingingActor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBSwingingActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSwingingActor.RBSwingingActor_C.UserConstructionScript");
		
		ARBSwingingActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSwingingActor.RBSwingingActor_C.SwingLoop__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ARBSwingingActor_C::SwingLoop__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSwingingActor.RBSwingingActor_C.SwingLoop__FinishedFunc");
		
		ARBSwingingActor_C_SwingLoop__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSwingingActor.RBSwingingActor_C.SwingLoop__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ARBSwingingActor_C::SwingLoop__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSwingingActor.RBSwingingActor_C.SwingLoop__UpdateFunc");
		
		ARBSwingingActor_C_SwingLoop__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSwingingActor.RBSwingingActor_C.StartSwinging
	 * 		Flags  -> ()
	 */
	void ARBSwingingActor_C::StartSwinging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSwingingActor.RBSwingingActor_C.StartSwinging");
		
		ARBSwingingActor_C_StartSwinging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSwingingActor.RBSwingingActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARBSwingingActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSwingingActor.RBSwingingActor_C.ReceiveBeginPlay");
		
		ARBSwingingActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSwingingActor.RBSwingingActor_C.ExecuteUbergraph_RBSwingingActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBSwingingActor_C::ExecuteUbergraph_RBSwingingActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSwingingActor.RBSwingingActor_C.ExecuteUbergraph_RBSwingingActor");
		
		ARBSwingingActor_C_ExecuteUbergraph_RBSwingingActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBSwingingActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBSwingingActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBSwingingActor.RBSwingingActor_C");
		return ptr;
	}

}


