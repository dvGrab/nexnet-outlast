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
	 * 		Name   -> Function W_AnimatedIcon_Imprint.W_AnimatedIcon_Imprint_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_AnimatedIcon_Imprint_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AnimatedIcon_Imprint.W_AnimatedIcon_Imprint_C.Construct");
		
		UW_AnimatedIcon_Imprint_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AnimatedIcon_Imprint.W_AnimatedIcon_Imprint_C.ExecuteUbergraph_W_AnimatedIcon_Imprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AnimatedIcon_Imprint_C::ExecuteUbergraph_W_AnimatedIcon_Imprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AnimatedIcon_Imprint.W_AnimatedIcon_Imprint_C.ExecuteUbergraph_W_AnimatedIcon_Imprint");
		
		UW_AnimatedIcon_Imprint_C_ExecuteUbergraph_W_AnimatedIcon_Imprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_AnimatedIcon_Imprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_AnimatedIcon_Imprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_AnimatedIcon_Imprint.W_AnimatedIcon_Imprint_C");
		return ptr;
	}

}


