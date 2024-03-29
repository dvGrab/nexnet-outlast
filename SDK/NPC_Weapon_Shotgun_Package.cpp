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
	 * 		Name   -> Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void ANPC_Weapon_Shotgun_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.NewFunction_1");
		
		ANPC_Weapon_Shotgun_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ANPC_Weapon_Shotgun_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Timeline_0__FinishedFunc");
		
		ANPC_Weapon_Shotgun_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ANPC_Weapon_Shotgun_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Timeline_0__UpdateFunc");
		
		ANPC_Weapon_Shotgun_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Special Move Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESpecialMoveNotifyType                             Notify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_Weapon_Shotgun_C::Special_Move_Notify(ESpecialMoveNotifyType Notify, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Special Move Notify");
		
		ANPC_Weapon_Shotgun_C_Special_Move_Notify_Params params {};
		params.Notify = Notify;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ANPC_Weapon_Shotgun_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.ReceiveBeginPlay");
		
		ANPC_Weapon_Shotgun_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.EquippedBy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBNPC*                                      NPC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_Weapon_Shotgun_C::EquippedBy(class ARBNPC* NPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.EquippedBy");
		
		ANPC_Weapon_Shotgun_C_EquippedBy_Params params {};
		params.NPC = NPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.PlayWeaponAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               AnimSequence                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_Weapon_Shotgun_C::PlayWeaponAnimation(class UAnimSequence* AnimSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.PlayWeaponAnimation");
		
		ANPC_Weapon_Shotgun_C_PlayWeaponAnimation_Params params {};
		params.AnimSequence = AnimSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.OnSpecialMoveNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      meshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBAnimNotify_SpecialMove*                   AnimNotify                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_Weapon_Shotgun_C::OnSpecialMoveNotify(class USkeletalMeshComponent* meshComp, class URBAnimNotify_SpecialMove* AnimNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.OnSpecialMoveNotify");
		
		ANPC_Weapon_Shotgun_C_OnSpecialMoveNotify_Params params {};
		params.meshComp = meshComp;
		params.AnimNotify = AnimNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.ExecuteUbergraph_NPC_Weapon_Shotgun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_Weapon_Shotgun_C::ExecuteUbergraph_NPC_Weapon_Shotgun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.ExecuteUbergraph_NPC_Weapon_Shotgun");
		
		ANPC_Weapon_Shotgun_C_ExecuteUbergraph_NPC_Weapon_Shotgun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANPC_Weapon_Shotgun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANPC_Weapon_Shotgun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C");
		return ptr;
	}

}


