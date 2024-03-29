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
	 * 		Name   -> Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.UpdateHead
	 * 		Flags  -> ()
	 */
	void ASE_T02_Torturing_BP_C::UpdateHead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.UpdateHead");
		
		ASE_T02_Torturing_BP_C_UpdateHead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.OnRep_bHeadExploded
	 * 		Flags  -> ()
	 */
	void ASE_T02_Torturing_BP_C::OnRep_bHeadExploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.OnRep_bHeadExploded");
		
		ASE_T02_Torturing_BP_C_OnRep_bHeadExploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASE_T02_Torturing_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.UserConstructionScript");
		
		ASE_T02_Torturing_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASE_T02_Torturing_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.ReceiveBeginPlay");
		
		ASE_T02_Torturing_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.Head Explode
	 * 		Flags  -> ()
	 */
	void ASE_T02_Torturing_BP_C::HeadExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.Head Explode");
		
		ASE_T02_Torturing_BP_C_HeadExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.ExecuteUbergraph_SE_T02_Torturing_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASE_T02_Torturing_BP_C::ExecuteUbergraph_SE_T02_Torturing_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SE_T02_Torturing_BP.SE_T02_Torturing_BP_C.ExecuteUbergraph_SE_T02_Torturing_BP");
		
		ASE_T02_Torturing_BP_C_ExecuteUbergraph_SE_T02_Torturing_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASE_T02_Torturing_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASE_T02_Torturing_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SE_T02_Torturing_BP.SE_T02_Torturing_BP_C");
		return ptr;
	}

}


