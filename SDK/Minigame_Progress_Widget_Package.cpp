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
	 * 		Name   -> Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UMinigame_Progress_Widget_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.ShouldShow");
		
		UMinigame_Progress_Widget_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UMinigame_Progress_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Construct");
		
		UMinigame_Progress_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinigame_Progress_Widget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Tick");
		
		UMinigame_Progress_Widget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.OnMinigameOwnerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      progressOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinigame_Progress_Widget_C::OnMinigameOwnerChanged(class AActor* progressOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.OnMinigameOwnerChanged");
		
		UMinigame_Progress_Widget_C_OnMinigameOwnerChanged_Params params {};
		params.progressOwner = progressOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UMinigame_Progress_Widget_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Event_Hide");
		
		UMinigame_Progress_Widget_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UMinigame_Progress_Widget_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Event_Show");
		
		UMinigame_Progress_Widget_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.ExecuteUbergraph_Minigame_Progress_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinigame_Progress_Widget_C::ExecuteUbergraph_Minigame_Progress_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.ExecuteUbergraph_Minigame_Progress_Widget");
		
		UMinigame_Progress_Widget_C_ExecuteUbergraph_Minigame_Progress_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMinigame_Progress_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMinigame_Progress_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Minigame_Progress_Widget.Minigame_Progress_Widget_C");
		return ptr;
	}

}


