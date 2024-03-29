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
	 * 		Name   -> Function W_MagazineAmmoCheck.W_MagazineAmmoCheck_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_MagazineAmmoCheck_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MagazineAmmoCheck.W_MagazineAmmoCheck_C.Construct");
		
		UW_MagazineAmmoCheck_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MagazineAmmoCheck.W_MagazineAmmoCheck_C.ExecuteUbergraph_W_MagazineAmmoCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MagazineAmmoCheck_C::ExecuteUbergraph_W_MagazineAmmoCheck(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MagazineAmmoCheck.W_MagazineAmmoCheck_C.ExecuteUbergraph_W_MagazineAmmoCheck");
		
		UW_MagazineAmmoCheck_C_ExecuteUbergraph_W_MagazineAmmoCheck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MagazineAmmoCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MagazineAmmoCheck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MagazineAmmoCheck.W_MagazineAmmoCheck_C");
		return ptr;
	}

}


