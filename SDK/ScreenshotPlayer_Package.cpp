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
	 * 		Name   -> Function ScreenshotPlayer.ScreenshotPlayer_C.SetBlood
	 * 		Flags  -> ()
	 */
	void AScreenshotPlayer_C::SetBlood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenshotPlayer.ScreenshotPlayer_C.SetBlood");
		
		AScreenshotPlayer_C_SetBlood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenshotPlayer.ScreenshotPlayer_C.UpdateStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScreenshotPlayer_C::UpdateStaticMesh(class UStaticMeshComponent* Component, class UStaticMesh* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenshotPlayer.ScreenshotPlayer_C.UpdateStaticMesh");
		
		AScreenshotPlayer_C_UpdateStaticMesh_Params params {};
		params.Component = Component;
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenshotPlayer.ScreenshotPlayer_C.UpdateSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScreenshotPlayer_C::UpdateSkeletalMesh(class USkeletalMeshComponent* Component, class USkeletalMesh* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenshotPlayer.ScreenshotPlayer_C.UpdateSkeletalMesh");
		
		AScreenshotPlayer_C_UpdateSkeletalMesh_Params params {};
		params.Component = Component;
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenshotPlayer.ScreenshotPlayer_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AScreenshotPlayer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenshotPlayer.ScreenshotPlayer_C.UserConstructionScript");
		
		AScreenshotPlayer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenshotPlayer.ScreenshotPlayer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AScreenshotPlayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenshotPlayer.ScreenshotPlayer_C.ReceiveBeginPlay");
		
		AScreenshotPlayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenshotPlayer.ScreenshotPlayer_C.ExecuteUbergraph_ScreenshotPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScreenshotPlayer_C::ExecuteUbergraph_ScreenshotPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenshotPlayer.ScreenshotPlayer_C.ExecuteUbergraph_ScreenshotPlayer");
		
		AScreenshotPlayer_C_ExecuteUbergraph_ScreenshotPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScreenshotPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScreenshotPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScreenshotPlayer.ScreenshotPlayer_C");
		return ptr;
	}

}


