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
	 * 		Name   -> Function BulletImpactDebug.BulletImpactDebug_C.AddDebugText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	int32_t UBulletImpactDebug_C::AddDebugText(const class FString& NewText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BulletImpactDebug.BulletImpactDebug_C.AddDebugText");
		
		UBulletImpactDebug_C_AddDebugText_Params params {};
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BulletImpactDebug.BulletImpactDebug_C.SetDebugTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewTitle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBulletImpactDebug_C::SetDebugTitle(const class FString& NewTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BulletImpactDebug.BulletImpactDebug_C.SetDebugTitle");
		
		UBulletImpactDebug_C_SetDebugTitle_Params params {};
		params.NewTitle = NewTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BulletImpactDebug.BulletImpactDebug_C.SetDebugText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBulletImpactDebug_C::SetDebugText(int32_t ID, const class FString& NewText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BulletImpactDebug.BulletImpactDebug_C.SetDebugText");
		
		UBulletImpactDebug_C_SetDebugText_Params params {};
		params.ID = ID;
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BulletImpactDebug.BulletImpactDebug_C.ExecuteUbergraph_BulletImpactDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBulletImpactDebug_C::ExecuteUbergraph_BulletImpactDebug(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BulletImpactDebug.BulletImpactDebug_C.ExecuteUbergraph_BulletImpactDebug");
		
		UBulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBulletImpactDebug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBulletImpactDebug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BulletImpactDebug.BulletImpactDebug_C");
		return ptr;
	}

}


