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
	 * 		Name   -> Function Secondary_Python_V2.Secondary_Python_V2_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASecondary_Python_V2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Python_V2.Secondary_Python_V2_C.UserConstructionScript");
		
		ASecondary_Python_V2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Python_V2.Secondary_Python_V2_C.OnWeaponFire_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bServer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecondary_Python_V2_C::OnWeaponFire_Event_1(class ABaseMagazineWeapon* Weapon, bool bServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Python_V2.Secondary_Python_V2_C.OnWeaponFire_Event_1");
		
		ASecondary_Python_V2_C_OnWeaponFire_Event_1_Params params {};
		params.Weapon = Weapon;
		params.bServer = bServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Python_V2.Secondary_Python_V2_C.SetupBaseEvents
	 * 		Flags  -> ()
	 */
	void ASecondary_Python_V2_C::SetupBaseEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Python_V2.Secondary_Python_V2_C.SetupBaseEvents");
		
		ASecondary_Python_V2_C_SetupBaseEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Python_V2.Secondary_Python_V2_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASecondary_Python_V2_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Python_V2.Secondary_Python_V2_C.ReceiveBeginPlay");
		
		ASecondary_Python_V2_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Python_V2.Secondary_Python_V2_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecondary_Python_V2_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Python_V2.Secondary_Python_V2_C.ReceiveTick");
		
		ASecondary_Python_V2_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Python_V2.Secondary_Python_V2_C.ExecuteUbergraph_Secondary_Python_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecondary_Python_V2_C::ExecuteUbergraph_Secondary_Python_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Python_V2.Secondary_Python_V2_C.ExecuteUbergraph_Secondary_Python_V2");
		
		ASecondary_Python_V2_C_ExecuteUbergraph_Secondary_Python_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecondary_Python_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecondary_Python_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Secondary_Python_V2.Secondary_Python_V2_C");
		return ptr;
	}

}


