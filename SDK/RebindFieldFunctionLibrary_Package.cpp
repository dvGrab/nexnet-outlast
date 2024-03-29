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
	 * 		Name   -> Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Using Modifier Key?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                Key_List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<EKeyModifiers>                              Modifiers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URebindFieldFunctionLibrary_C::Using_Modifier_Key(TArray<struct FKey>* Key_List, TArray<EKeyModifiers>* Modifiers, class UObject* __WorldContext, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Using Modifier Key?");
		
		URebindFieldFunctionLibrary_C_Using_Modifier_Key_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key_List != nullptr)
			*Key_List = params.Key_List;
		if (Modifiers != nullptr)
			*Modifiers = params.Modifiers;
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Key list has Non Modifier Key
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                Key_List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URebindFieldFunctionLibrary_C::Key_list_has_Non_Modifier_Key(TArray<struct FKey>* Key_List, class UObject* __WorldContext, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Key list has Non Modifier Key");
		
		URebindFieldFunctionLibrary_C_Key_list_has_Non_Modifier_Key_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key_List != nullptr)
			*Key_List = params.Key_List;
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Abbreviate Key
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Abreviated_Name                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void URebindFieldFunctionLibrary_C::Abbreviate_Key(const struct FKey& Key, class UObject* __WorldContext, class FString* Abreviated_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Abbreviate Key");
		
		URebindFieldFunctionLibrary_C_Abbreviate_Key_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Abreviated_Name != nullptr)
			*Abreviated_Name = params.Abreviated_Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Key is Non Modifier Key?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URebindFieldFunctionLibrary_C::Key_is_Non_Modifier_Key(const struct FKey& Key, class UObject* __WorldContext, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Key is Non Modifier Key?");
		
		URebindFieldFunctionLibrary_C_Key_is_Non_Modifier_Key_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URebindFieldFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URebindFieldFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C");
		return ptr;
	}

}


