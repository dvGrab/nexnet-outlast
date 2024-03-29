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
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.GetFaceFXSkeletalMeshComponent
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARBNPC_Coyle_C::GetFaceFXSkeletalMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.GetFaceFXSkeletalMeshComponent");
		
		ARBNPC_Coyle_C_GetFaceFXSkeletalMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.GetFacePoseAsset
	 * 		Flags  -> ()
	 */
	class UPoseAsset* ARBNPC_Coyle_C::GetFacePoseAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.GetFacePoseAsset");
		
		ARBNPC_Coyle_C_GetFacePoseAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBNPC_Coyle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.UserConstructionScript");
		
		ARBNPC_Coyle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.CigarBlend__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ARBNPC_Coyle_C::CigarBlend__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.CigarBlend__FinishedFunc");
		
		ARBNPC_Coyle_C_CigarBlend__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.CigarBlend__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ARBNPC_Coyle_C::CigarBlend__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.CigarBlend__UpdateFunc");
		
		ARBNPC_Coyle_C_CigarBlend__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Coyle_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.ReceiveTick");
		
		ARBNPC_Coyle_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.Cigar_SetFollowFace
	 * 		Flags  -> ()
	 */
	void ARBNPC_Coyle_C::Cigar_SetFollowFace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.Cigar_SetFollowFace");
		
		ARBNPC_Coyle_C_Cigar_SetFollowFace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.Cigar_SetFollowHand
	 * 		Flags  -> ()
	 */
	void ARBNPC_Coyle_C::Cigar_SetFollowHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.Cigar_SetFollowHand");
		
		ARBNPC_Coyle_C_Cigar_SetFollowHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.Event_OnWeaponVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENPCWeapon                                         weaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBNPCWeapon*                                weaponActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Coyle_C::Event_OnWeaponVisible(ENPCWeapon weaponType, class ARBNPCWeapon* weaponActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.Event_OnWeaponVisible");
		
		ARBNPC_Coyle_C_Event_OnWeaponVisible_Params params {};
		params.weaponType = weaponType;
		params.weaponActor = weaponActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.Event_OnWeaponHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENPCWeapon                                         weaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBNPCWeapon*                                weaponActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Coyle_C::Event_OnWeaponHidden(ENPCWeapon weaponType, class ARBNPCWeapon* weaponActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.Event_OnWeaponHidden");
		
		ARBNPC_Coyle_C_Event_OnWeaponHidden_Params params {};
		params.weaponType = weaponType;
		params.weaponActor = weaponActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Coyle.RBNPC_Coyle_C.ExecuteUbergraph_RBNPC_Coyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Coyle_C::ExecuteUbergraph_RBNPC_Coyle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Coyle.RBNPC_Coyle_C.ExecuteUbergraph_RBNPC_Coyle");
		
		ARBNPC_Coyle_C_ExecuteUbergraph_RBNPC_Coyle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBNPC_Coyle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBNPC_Coyle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBNPC_Coyle.RBNPC_Coyle_C");
		return ptr;
	}

}


