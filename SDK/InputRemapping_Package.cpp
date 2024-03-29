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
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.RemoveAxisMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          MappingData                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputRemappingNodes::RemoveAxisMapping(const struct FAxisMappingStruct& MappingData, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.RemoveAxisMapping");
		
		UInputRemappingNodes_RemoveAxisMapping_Params params {};
		params.MappingData = MappingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.RemoveActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        MappingData                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputRemappingNodes::RemoveActionMapping(const struct FActionMappingStruct& MappingData, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.RemoveActionMapping");
		
		UInputRemappingNodes_RemoveActionMapping_Params params {};
		params.MappingData = MappingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.RebindAxisMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          AxisMapping                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAxisMappingStruct                          NewData                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputRemappingNodes::RebindAxisMapping(const struct FAxisMappingStruct& AxisMapping, const struct FAxisMappingStruct& NewData, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.RebindAxisMapping");
		
		UInputRemappingNodes_RebindAxisMapping_Params params {};
		params.AxisMapping = AxisMapping;
		params.NewData = NewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.RebindActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        ActionMapping                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FActionMappingStruct                        NewData                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputRemappingNodes::RebindActionMapping(const struct FActionMappingStruct& ActionMapping, const struct FActionMappingStruct& NewData, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.RebindActionMapping");
		
		UInputRemappingNodes_RebindActionMapping_Params params {};
		params.ActionMapping = ActionMapping;
		params.NewData = NewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.GetAllAxisMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          FilterData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<EAxisMappingFilter>                         Filters                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAxisMappingStruct>                  AxisMappings                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInputRemappingNodes::GetAllAxisMappings(const struct FAxisMappingStruct& FilterData, TArray<EAxisMappingFilter> Filters, bool* ReturnValue, TArray<struct FAxisMappingStruct>* AxisMappings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.GetAllAxisMappings");
		
		UInputRemappingNodes_GetAllAxisMappings_Params params {};
		params.FilterData = FilterData;
		params.Filters = Filters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (AxisMappings != nullptr)
			*AxisMappings = params.AxisMappings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.GetAllActionMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        FilterData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<EActionMappingFilter>                       Filters                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FActionMappingStruct>                ActionMappings                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInputRemappingNodes::GetAllActionMappings(const struct FActionMappingStruct& FilterData, TArray<EActionMappingFilter> Filters, bool* ReturnValue, TArray<struct FActionMappingStruct>* ActionMappings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.GetAllActionMappings");
		
		UInputRemappingNodes_GetAllActionMappings_Params params {};
		params.FilterData = FilterData;
		params.Filters = Filters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (ActionMappings != nullptr)
			*ActionMappings = params.ActionMappings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.CreateNewAxisMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          MappingData                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputRemappingNodes::CreateNewAxisMapping(const struct FAxisMappingStruct& MappingData, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.CreateNewAxisMapping");
		
		UInputRemappingNodes_CreateNewAxisMapping_Params params {};
		params.MappingData = MappingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.CreateNewActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        MappingData                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputRemappingNodes::CreateNewActionMapping(const struct FActionMappingStruct& MappingData, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.CreateNewActionMapping");
		
		UInputRemappingNodes_CreateNewActionMapping_Params params {};
		params.MappingData = MappingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.AxisMappingNotEqualActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAxisMappingStruct                          B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UInputRemappingNodes::AxisMappingNotEqualActionMapping(const struct FAxisMappingStruct& A, const struct FAxisMappingStruct& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.AxisMappingNotEqualActionMapping");
		
		UInputRemappingNodes_AxisMappingNotEqualActionMapping_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.AxisMappingEqualActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAxisMappingStruct                          B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UInputRemappingNodes::AxisMappingEqualActionMapping(const struct FAxisMappingStruct& A, const struct FAxisMappingStruct& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.AxisMappingEqualActionMapping");
		
		UInputRemappingNodes_AxisMappingEqualActionMapping_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.ActionMappingNotEqualActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FActionMappingStruct                        B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UInputRemappingNodes::ActionMappingNotEqualActionMapping(const struct FActionMappingStruct& A, const struct FActionMappingStruct& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.ActionMappingNotEqualActionMapping");
		
		UInputRemappingNodes_ActionMappingNotEqualActionMapping_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.ActionMappingEqualActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FActionMappingStruct                        B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UInputRemappingNodes::ActionMappingEqualActionMapping(const struct FActionMappingStruct& A, const struct FActionMappingStruct& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputRemapping.InputRemappingNodes.ActionMappingEqualActionMapping");
		
		UInputRemappingNodes_ActionMappingEqualActionMapping_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputRemappingNodes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputRemappingNodes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputRemapping.InputRemappingNodes");
		return ptr;
	}

}


