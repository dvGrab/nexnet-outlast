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
	 * 		Name   -> Function W_BriefingBio_ProfileRight.W_BriefingBio_ProfileRight_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_BriefingBio_ProfileRight_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BriefingBio_ProfileRight.W_BriefingBio_ProfileRight_C.PreConstruct");
		
		UW_BriefingBio_ProfileRight_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BriefingBio_ProfileRight.W_BriefingBio_ProfileRight_C.ExecuteUbergraph_W_BriefingBio_ProfileRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BriefingBio_ProfileRight_C::ExecuteUbergraph_W_BriefingBio_ProfileRight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BriefingBio_ProfileRight.W_BriefingBio_ProfileRight_C.ExecuteUbergraph_W_BriefingBio_ProfileRight");
		
		UW_BriefingBio_ProfileRight_C_ExecuteUbergraph_W_BriefingBio_ProfileRight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_BriefingBio_ProfileRight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_BriefingBio_ProfileRight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_BriefingBio_ProfileRight.W_BriefingBio_ProfileRight_C");
		return ptr;
	}

}


