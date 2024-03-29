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
	 * 		Name   -> PredefinedFunction UMSDFAssetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMSDFAssetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MSDFSupport.MSDFAssetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URenderMSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URenderMSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MSDFSupport.RenderMSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MSDFSupport.SVGToSDFFunctionLibrary.ConvertSVGToMSDFData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSVGConversionParams                        Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Output                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool USVGToSDFFunctionLibrary::ConvertSVGToMSDFData(const class FString& FilePath, const struct FSVGConversionParams& Params, TArray<unsigned char>* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MSDFSupport.SVGToSDFFunctionLibrary.ConvertSVGToMSDFData");
		
		USVGToSDFFunctionLibrary_ConvertSVGToMSDFData_Params params {};
		params.FilePath = FilePath;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USVGToSDFFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USVGToSDFFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MSDFSupport.SVGToSDFFunctionLibrary");
		return ptr;
	}

}


