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
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.Initialize
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_ItemStat_Damage_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.Initialize");
		
		UW_WeaponWheel_ItemStat_Damage_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_ItemStat_Damage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.Tick");
		
		UW_WeaponWheel_ItemStat_Damage_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.OnRefresh
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_ItemStat_Damage_C::OnRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.OnRefresh");
		
		UW_WeaponWheel_ItemStat_Damage_C_OnRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.OnWheelCreated
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_ItemStat_Damage_C::OnWheelCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.OnWheelCreated");
		
		UW_WeaponWheel_ItemStat_Damage_C_OnWheelCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_ItemStat_Damage_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.PreConstruct");
		
		UW_WeaponWheel_ItemStat_Damage_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.ExecuteUbergraph_W_WeaponWheel_ItemStat_Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_ItemStat_Damage_C::ExecuteUbergraph_W_WeaponWheel_ItemStat_Damage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.ExecuteUbergraph_W_WeaponWheel_ItemStat_Damage");
		
		UW_WeaponWheel_ItemStat_Damage_C_ExecuteUbergraph_W_WeaponWheel_ItemStat_Damage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_WeaponWheel_ItemStat_Damage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_WeaponWheel_ItemStat_Damage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C");
		return ptr;
	}

}


