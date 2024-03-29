/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function PoliceStation-01_SND_SoundVolume.PoliceStation-01_SND_SoundVolume_C.PST02B01_SND_ControlRoomButtonPress
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_SoundVolume_C::PST02B01_SND_ControlRoomButtonPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND_SoundVolume.PoliceStation-01_SND_SoundVolume_C.PST02B01_SND_ControlRoomButtonPress");
		
		APoliceStation01_SND_SoundVolume_C_PST02B01_SND_ControlRoomButtonPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND_SoundVolume.PoliceStation-01_SND_SoundVolume_C.PST02B01_SND_StartingSetup
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_SoundVolume_C::PST02B01_SND_StartingSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND_SoundVolume.PoliceStation-01_SND_SoundVolume_C.PST02B01_SND_StartingSetup");
		
		APoliceStation01_SND_SoundVolume_C_PST02B01_SND_StartingSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND_SoundVolume.PoliceStation-01_SND_SoundVolume_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_SoundVolume_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND_SoundVolume.PoliceStation-01_SND_SoundVolume_C.Event_OnResetStage");
		
		APoliceStation01_SND_SoundVolume_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND_SoundVolume.PoliceStation-01_SND_SoundVolume_C.ExecuteUbergraph_PoliceStation-01_SND_SoundVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation01_SND_SoundVolume_C::ExecuteUbergraph_PoliceStation01_SND_SoundVolume(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND_SoundVolume.PoliceStation-01_SND_SoundVolume_C.ExecuteUbergraph_PoliceStation-01_SND_SoundVolume");
		
		APoliceStation01_SND_SoundVolume_C_ExecuteUbergraph_PoliceStation01_SND_SoundVolume_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoliceStation01_SND_SoundVolume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation01_SND_SoundVolume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_01_SND_SoundVolume.PoliceStation-01_SND_SoundVolume_C");
		return ptr;
	}

}


