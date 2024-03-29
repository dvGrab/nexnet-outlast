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
	 * 		Name   -> Function Base_Pressable_BP.Base_Pressable_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABase_Pressable_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pressable_BP.Base_Pressable_BP_C.UserConstructionScript");
		
		ABase_Pressable_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Pressable_BP.Base_Pressable_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABase_Pressable_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pressable_BP.Base_Pressable_BP_C.Timeline_0__FinishedFunc");
		
		ABase_Pressable_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Pressable_BP.Base_Pressable_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABase_Pressable_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pressable_BP.Base_Pressable_BP_C.Timeline_0__UpdateFunc");
		
		ABase_Pressable_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Pressable_BP.Base_Pressable_BP_C.SetButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ButtonColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_Pressable_BP_C::SetButton(const struct FLinearColor& ButtonColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pressable_BP.Base_Pressable_BP_C.SetButton");
		
		ABase_Pressable_BP_C_SetButton_Params params {};
		params.ButtonColor = ButtonColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Pressable_BP.Base_Pressable_BP_C.PushButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SetColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Pressable_BP_C::PushButton(bool Condition, bool SetColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pressable_BP.Base_Pressable_BP_C.PushButton");
		
		ABase_Pressable_BP_C_PushButton_Params params {};
		params.Condition = Condition;
		params.SetColor = SetColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Pressable_BP.Base_Pressable_BP_C.Init
	 * 		Flags  -> ()
	 */
	void ABase_Pressable_BP_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pressable_BP.Base_Pressable_BP_C.Init");
		
		ABase_Pressable_BP_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Pressable_BP.Base_Pressable_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ABase_Pressable_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pressable_BP.Base_Pressable_BP_C.Event_OnResetStage");
		
		ABase_Pressable_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Pressable_BP.Base_Pressable_BP_C.SetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pushed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Pressable_BP_C::SetColor(bool Pushed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pressable_BP.Base_Pressable_BP_C.SetColor");
		
		ABase_Pressable_BP_C_SetColor_Params params {};
		params.Pushed = Pushed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Pressable_BP.Base_Pressable_BP_C.ExecuteUbergraph_Base_Pressable_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_Pressable_BP_C::ExecuteUbergraph_Base_Pressable_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pressable_BP.Base_Pressable_BP_C.ExecuteUbergraph_Base_Pressable_BP");
		
		ABase_Pressable_BP_C_ExecuteUbergraph_Base_Pressable_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_Pressable_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Pressable_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Pressable_BP.Base_Pressable_BP_C");
		return ptr;
	}

}


