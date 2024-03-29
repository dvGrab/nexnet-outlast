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
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.UpdateMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETeamType                                          Instigator_Team                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETeamType                                          Player_Team                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PVP_Extraction_HUD_C::UpdateMessage(ETeamType Instigator_Team, ETeamType Player_Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.UpdateMessage");
		
		UW_PVP_Extraction_HUD_C_UpdateMessage_Params params {};
		params.Instigator_Team = Instigator_Team;
		params.Player_Team = Player_Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.HideMessage
	 * 		Flags  -> ()
	 */
	void UW_PVP_Extraction_HUD_C::HideMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.HideMessage");
		
		UW_PVP_Extraction_HUD_C_HideMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ShowMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHasIntel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PVP_Extraction_HUD_C::ShowMessage(bool bHasIntel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ShowMessage");
		
		UW_PVP_Extraction_HUD_C_ShowMessage_Params params {};
		params.bHasIntel = bHasIntel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PVP_Extraction_HUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.Tick");
		
		UW_PVP_Extraction_HUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_PVP_Extraction_HUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.Construct");
		
		UW_PVP_Extraction_HUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ResetTimer
	 * 		Flags  -> ()
	 */
	void UW_PVP_Extraction_HUD_C::ResetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ResetTimer");
		
		UW_PVP_Extraction_HUD_C_ResetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ExecuteUbergraph_W_PVP_Extraction_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PVP_Extraction_HUD_C::ExecuteUbergraph_W_PVP_Extraction_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ExecuteUbergraph_W_PVP_Extraction_HUD");
		
		UW_PVP_Extraction_HUD_C_ExecuteUbergraph_W_PVP_Extraction_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PVP_Extraction_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PVP_Extraction_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C");
		return ptr;
	}

}


