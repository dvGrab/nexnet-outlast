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
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.UnhighlightAllMags
	 * 		Flags  -> ()
	 */
	void UW_MagCheckOverview_C::UnhighlightAllMags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MagCheckOverview.W_MagCheckOverview_C.UnhighlightAllMags");
		
		UW_MagCheckOverview_C_UnhighlightAllMags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.HighlightCurrentMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         MagazineWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MagCheckOverview_C::HighlightCurrentMag(class ABaseMagazineWeapon* MagazineWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MagCheckOverview.W_MagCheckOverview_C.HighlightCurrentMag");
		
		UW_MagCheckOverview_C_HighlightCurrentMag_Params params {};
		params.MagazineWeapon = MagazineWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.RefreshMags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         MagazineWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MagCheckOverview_C::RefreshMags(class ABaseMagazineWeapon* MagazineWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MagCheckOverview.W_MagCheckOverview_C.RefreshMags");
		
		UW_MagCheckOverview_C_RefreshMags_Params params {};
		params.MagazineWeapon = MagazineWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_MagCheckOverview_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MagCheckOverview.W_MagCheckOverview_C.Construct");
		
		UW_MagCheckOverview_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.OnWeaponMagCheck_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         MagazineWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MagCheckOverview_C::OnWeaponMagCheck_Event_1(class ABaseMagazineWeapon* MagazineWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MagCheckOverview.W_MagCheckOverview_C.OnWeaponMagCheck_Event_1");
		
		UW_MagCheckOverview_C_OnWeaponMagCheck_Event_1_Params params {};
		params.MagazineWeapon = MagazineWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.ExecuteUbergraph_W_MagCheckOverview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MagCheckOverview_C::ExecuteUbergraph_W_MagCheckOverview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MagCheckOverview.W_MagCheckOverview_C.ExecuteUbergraph_W_MagCheckOverview");
		
		UW_MagCheckOverview_C_ExecuteUbergraph_W_MagCheckOverview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MagCheckOverview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MagCheckOverview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MagCheckOverview.W_MagCheckOverview_C");
		return ptr;
	}

}


