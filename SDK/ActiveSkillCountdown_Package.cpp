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
	 * 		Name   -> Function ActiveSkillCountdown.ActiveSkillCountdown_C.UpdateCounter
	 * 		Flags  -> ()
	 */
	void UActiveSkillCountdown_C::UpdateCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillCountdown.ActiveSkillCountdown_C.UpdateCounter");
		
		UActiveSkillCountdown_C_UpdateCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillCountdown.ActiveSkillCountdown_C.On AS Cooldown State Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isInCooldown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ARBActiveSkill*                              NewActiveSkill                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActiveSkillCountdown_C::On_AS_Cooldown_State_Changed(bool isInCooldown, class ARBActiveSkill* NewActiveSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillCountdown.ActiveSkillCountdown_C.On AS Cooldown State Changed");
		
		UActiveSkillCountdown_C_On_AS_Cooldown_State_Changed_Params params {};
		params.isInCooldown = isInCooldown;
		params.NewActiveSkill = NewActiveSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillCountdown.ActiveSkillCountdown_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActiveSkillCountdown_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillCountdown.ActiveSkillCountdown_C.Tick");
		
		UActiveSkillCountdown_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillCountdown.ActiveSkillCountdown_C.ExecuteUbergraph_ActiveSkillCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActiveSkillCountdown_C::ExecuteUbergraph_ActiveSkillCountdown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillCountdown.ActiveSkillCountdown_C.ExecuteUbergraph_ActiveSkillCountdown");
		
		UActiveSkillCountdown_C_ExecuteUbergraph_ActiveSkillCountdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveSkillCountdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveSkillCountdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ActiveSkillCountdown.ActiveSkillCountdown_C");
		return ptr;
	}

}


