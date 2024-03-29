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
	 * 		Name   -> Function XPProgressBar.XPProgressBar_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartXp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentXp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UXPProgressBar_C::Update(int32_t PlayerLevel, int32_t StartXp, int32_t CurrentXp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XPProgressBar.XPProgressBar_C.Update");
		
		UXPProgressBar_C_Update_Params params {};
		params.PlayerLevel = PlayerLevel;
		params.StartXp = StartXp;
		params.CurrentXp = CurrentXp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function XPProgressBar.XPProgressBar_C.InitProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgressBar*                                ProgressBar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Xp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UXPProgressBar_C::InitProgressBar(class UProgressBar* ProgressBar, int32_t Xp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XPProgressBar.XPProgressBar_C.InitProgressBar");
		
		UXPProgressBar_C_InitProgressBar_Params params {};
		params.ProgressBar = ProgressBar;
		params.Xp = Xp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function XPProgressBar.XPProgressBar_C.Refresh
	 * 		Flags  -> ()
	 */
	void UXPProgressBar_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XPProgressBar.XPProgressBar_C.Refresh");
		
		UXPProgressBar_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function XPProgressBar.XPProgressBar_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartXp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentXp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UXPProgressBar_C::Init(int32_t PlayerLevel, int32_t StartXp, int32_t CurrentXp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XPProgressBar.XPProgressBar_C.Init");
		
		UXPProgressBar_C_Init_Params params {};
		params.PlayerLevel = PlayerLevel;
		params.StartXp = StartXp;
		params.CurrentXp = CurrentXp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function XPProgressBar.XPProgressBar_C.Finished_9C6F7CD84E0F470B1412B4BAA721AA7E
	 * 		Flags  -> ()
	 */
	void UXPProgressBar_C::Finished_9C6F7CD84E0F470B1412B4BAA721AA7E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XPProgressBar.XPProgressBar_C.Finished_9C6F7CD84E0F470B1412B4BAA721AA7E");
		
		UXPProgressBar_C_Finished_9C6F7CD84E0F470B1412B4BAA721AA7E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function XPProgressBar.XPProgressBar_C.RefreshWithAnimation
	 * 		Flags  -> ()
	 */
	void UXPProgressBar_C::RefreshWithAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XPProgressBar.XPProgressBar_C.RefreshWithAnimation");
		
		UXPProgressBar_C_RefreshWithAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function XPProgressBar.XPProgressBar_C.ExecuteUbergraph_XPProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UXPProgressBar_C::ExecuteUbergraph_XPProgressBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XPProgressBar.XPProgressBar_C.ExecuteUbergraph_XPProgressBar");
		
		UXPProgressBar_C_ExecuteUbergraph_XPProgressBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UXPProgressBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UXPProgressBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass XPProgressBar.XPProgressBar_C");
		return ptr;
	}

}


