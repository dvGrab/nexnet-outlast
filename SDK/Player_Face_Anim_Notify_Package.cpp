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
	 * 		Name   -> Function Player_Face_Anim_Notify.Player_Face_Anim_Notify_C.FacialAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh_Comp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPlayer_Face_Anim_Notify_C::FacialAnim(class USkeletalMeshComponent* Mesh_Comp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Player_Face_Anim_Notify.Player_Face_Anim_Notify_C.FacialAnim");
		
		UPlayer_Face_Anim_Notify_C_FacialAnim_Params params {};
		params.Mesh_Comp = Mesh_Comp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Player_Face_Anim_Notify.Player_Face_Anim_Notify_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      meshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPlayer_Face_Anim_Notify_C::Received_Notify(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Player_Face_Anim_Notify.Player_Face_Anim_Notify_C.Received_Notify");
		
		UPlayer_Face_Anim_Notify_C_Received_Notify_Params params {};
		params.meshComp = meshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Player_Face_Anim_Notify.Player_Face_Anim_Notify_C.GetNotifyName
	 * 		Flags  -> ()
	 */
	class FString UPlayer_Face_Anim_Notify_C::GetNotifyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Player_Face_Anim_Notify.Player_Face_Anim_Notify_C.GetNotifyName");
		
		UPlayer_Face_Anim_Notify_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayer_Face_Anim_Notify_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayer_Face_Anim_Notify_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Player_Face_Anim_Notify.Player_Face_Anim_Notify_C");
		return ptr;
	}

}


