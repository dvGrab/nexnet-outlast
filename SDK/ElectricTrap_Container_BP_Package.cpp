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
	 * 		Name   -> Function ElectricTrap_Container_BP.ElectricTrap_Container_BP_C.IsOpen
	 * 		Flags  -> ()
	 */
	bool AElectricTrap_Container_BP_C::IsOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricTrap_Container_BP.ElectricTrap_Container_BP_C.IsOpen");
		
		AElectricTrap_Container_BP_C_IsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricTrap_Container_BP.ElectricTrap_Container_BP_C.OnSpawnedItemInfosChanged
	 * 		Flags  -> ()
	 */
	void AElectricTrap_Container_BP_C::OnSpawnedItemInfosChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricTrap_Container_BP.ElectricTrap_Container_BP_C.OnSpawnedItemInfosChanged");
		
		AElectricTrap_Container_BP_C_OnSpawnedItemInfosChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricTrap_Container_BP.ElectricTrap_Container_BP_C.RefreshOutline
	 * 		Flags  -> ()
	 */
	void AElectricTrap_Container_BP_C::RefreshOutline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricTrap_Container_BP.ElectricTrap_Container_BP_C.RefreshOutline");
		
		AElectricTrap_Container_BP_C_RefreshOutline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricTrap_Container_BP.ElectricTrap_Container_BP_C.ExecuteUbergraph_ElectricTrap_Container_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectricTrap_Container_BP_C::ExecuteUbergraph_ElectricTrap_Container_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricTrap_Container_BP.ElectricTrap_Container_BP_C.ExecuteUbergraph_ElectricTrap_Container_BP");
		
		AElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectricTrap_Container_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectricTrap_Container_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectricTrap_Container_BP.ElectricTrap_Container_BP_C");
		return ptr;
	}

}


