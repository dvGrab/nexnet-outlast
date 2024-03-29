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
	 * 		Name   -> Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APreviewCharacterTemplate_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.UserConstructionScript");
		
		APreviewCharacterTemplate_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewCharacterTemplate_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.ReceiveTick");
		
		APreviewCharacterTemplate_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.ExecuteUbergraph_PreviewCharacterTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewCharacterTemplate_C::ExecuteUbergraph_PreviewCharacterTemplate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.ExecuteUbergraph_PreviewCharacterTemplate");
		
		APreviewCharacterTemplate_C_ExecuteUbergraph_PreviewCharacterTemplate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APreviewCharacterTemplate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewCharacterTemplate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PreviewCharacterTemplate.PreviewCharacterTemplate_C");
		return ptr;
	}

}


